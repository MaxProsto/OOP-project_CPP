#include "Login_Functions.h"
#include "Menu_Admin.h"
#include "Menu_User.h"
#include <vector>


int main(){
    /*
    *** Here I used buffer code to define Admin in DataBase ***
    
    User *user = new User("Admin", "qwert", true);
    std::fstream fs;
    
    fs.open("/Users/mrunknown/Documents/C++/Project_1/Project_1/DataBase/DataBase.bin", std::ios::app | std::ios::binary);
    
    fs.write((char*) user, sizeof(User));

    fs.close();
    delete user;
    */
    
    
    
    // Start the programm
    User user = Login();
    
    if(user.isAdmin_()){
        Menu_Admin();
    } else {
            // Запускаем меню пользователя
            Menu_User(user);
                            
            std::vector<User> users;
            User bufferUser;
            std::fstream fs;

            try {
                // Читаем текущую базу данных
                fs.open("/Users/mrunknown/Documents/C++/Project_1/Project_1/DataBase/DataBase.bin", std::ios::in | std::ios::binary);
                
                while(fs.read((char*) &bufferUser, sizeof(User))) {
                    // Если имя совпадает, значит это наш текущий юзер — пушим его обновленную версию
                    if(user.getName() == bufferUser.getName()) {
                        users.push_back(user);
                    } else {
                        // Всех остальных (включая админа, который уже лежит в файле) пушим без изменений
                        users.push_back(bufferUser);
                    }
                }
                fs.close();
                
                // Перезаписываем базу данных БЕЗ принудительного добавления лишних админов
                fs.open("/Users/mrunknown/Documents/C++/Project_1/Project_1/DataBase/DataBase.bin", std::ios::out | std::ios::binary);
                
                for(size_t i = 0; i < users.size(); ++i) {
                    fs.write((char*) &users[i], sizeof(User));
                }
                
                fs.close();
            } catch(const std::fstream::failure &ex) {
                std::cout << ex.what() << std::endl << ex.code() << std::endl << std::endl;
                if(fs.is_open()) fs.close();
            }
        }
    return 0;
}
