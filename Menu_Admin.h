#ifndef Menu_Admin_h
#define Menu_Admin_h
#include <fstream>
#include "Classes/Users.h"

void ArtAdmin() {
    const std::string R       = "\033[0m";

    // Основной цвет — тёмно-красный (власть/опасность)
    const std::string COV     = "\033[38;2;110;25;25m";
    const std::string COV_H   = "\033[38;2;170;50;45m";   // блик
    const std::string COV_D   = "\033[38;2;65;12;12m";    // тень
    const std::string COV_M   = "\033[38;2;140;35;35m";   // средний

    // Корешок
    const std::string SPINE   = "\033[38;2;80;18;18m";
    const std::string SPINE_H = "\033[38;2;125;40;35m";

    // Страницы
    const std::string PAGE    = "\033[38;2;235;228;205m";
    const std::string PAGE_SD = "\033[38;2;185;175;150m";
    const std::string PAGE_LN = "\033[38;2;155;145;118m";

    // Золотое тиснение
    const std::string GOLD    = "\033[1;38;2;210;165;50m";
    const std::string GOLD_D  = "\033[38;2;150;110;20m";

    // Красная печать / акцент
    const std::string SEAL    = "\033[1;38;2;200;50;50m";
    const std::string SEAL_D  = "\033[38;2;130;25;25m";

    // Тень
    const std::string SHA1    = "\033[38;2;55;40;40m";
    const std::string SHA2    = "\033[38;2;75;58;58m";
    const std::string SHA3    = "\033[38;2;95;78;78m";

    std::cout << "\n\n";

    // ── Верхний скос
    std::cout
        << SPINE_H << "▄"
        << SPINE   << "▄▄▄"
        << COV_H   << "▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄"
        << COV_D   << "▄▄▄"
        << PAGE    << "▄▄▄▄▄▄▄▄"
        << R << "\n";

    auto covLine = [&](const std::string& inner) {
        std::cout
            << SPINE   << "█"
            << SPINE_H << "▓"
            << SPINE   << "█"
            << SPINE_H << "▒"
            << COV_H   << "▌"
            << inner
            << COV_D   << "▐"
            << PAGE    << "▐"
            << PAGE_SD << "██"
            << PAGE    << "▌"
            << PAGE_LN << "░░░░░"
            << R << "\n";
    };

    auto innerLine = [&](const std::string& content) {
        std::cout
            << SPINE   << "█"
            << SPINE_H << "▓"
            << SPINE   << "█"
            << SPINE_H << "▒"
            << COV_H   << "▌"
            << COV     << "█"
            << GOLD    << " ║"
            << content
            << GOLD    << "║ "
            << COV_D   << "▐"
            << PAGE    << "▐"
            << PAGE_SD << "██"
            << PAGE    << "▌"
            << PAGE_LN << "░░░░░"
            << R << "\n";
    };

    // Верхний блик
    covLine(COV_H + "▓" + COV_M + "█████████████████████████████" + COV_D + "▓");

    // Золотая рамка
    std::cout
        << SPINE   << "█"
        << SPINE_H << "▓"
        << SPINE   << "█"
        << SPINE_H << "▒"
        << COV_H   << "▌"
        << COV     << "█"
        << GOLD    << " ╔═══════════════════════════╗ "
        << COV_D   << "▐"
        << PAGE    << "▐"
        << PAGE_SD << "██"
        << PAGE    << "▌"
        << PAGE_LN << "░░░░░"
        << R << "\n";

    innerLine(COV     + "                             ");

    // Символ глаза / надзора
    innerLine(COV_H   + "       ╔═══════════════╗       ");
    innerLine(COV_H   + "       ║  " + SEAL + "◄  " + GOLD + "◉" + SEAL + "  ►" + COV_H + "  ║       ");
    innerLine(COV_H   + "       ║    " + GOLD + "A D M I N" + COV_H + "    ║       ");
    innerLine(COV_H   + "       ║  " + SEAL + "▼       ▼" + COV_H + "  ║       ");
    innerLine(COV_H   + "       ╚═══════════════╝       ");

    innerLine(COV     + "                             ");

    // Название
    innerLine(COV     + "   " + GOLD    + "  C O N T R O L   P A N E L  " + "   ");
    innerLine(COV     + "   " + GOLD_D  + " ─────────────────────────── "      );
    innerLine(COV     + "   " + SEAL    + "   U S E R   R E G I S T R Y  "     );
    innerLine(COV     + "                             ");
    innerLine(COV     + "   " + GOLD_D  + "  [ view ] ── [ delete ]      "      );
    innerLine(COV     + "   " + SEAL_D  + "      A C C E S S : R O O T   "      );
    innerLine(COV     + "                             ");

    // Нижняя рамка
    std::cout
        << SPINE   << "█"
        << SPINE_H << "▓"
        << SPINE   << "█"
        << SPINE_H << "▒"
        << COV_H   << "▌"
        << COV     << "█"
        << GOLD    << " ╚═══════════════════════════╝ "
        << COV_D   << "▐"
        << PAGE    << "▐"
        << PAGE_SD << "██"
        << PAGE    << "▌"
        << PAGE_LN << "░░░░░"
        << R << "\n";

    covLine(COV_M + "█████████████████████████████" + COV_D + "▓");

    // Нижний скос
    std::cout
        << SPINE   << "▀▀▀▀"
        << COV_M   << "▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀"
        << COV_D   << "▀▀▀"
        << PAGE_SD << "▀▀▀▀▀▀▀▀"
        << R << "\n";

    // Тень
    std::cout
        << "    " << SHA1 << "▄███████████████████████████████████████▄" << R << "\n"
        << "     " << SHA2 << "▀███████████████████████████████████▀"    << R << "\n"
        << "       " << SHA3 << "▀▀███████████████████████████▀▀"        << R << "\n"
        << "\n";
}


void Menu_Admin(){
    // Opening DataBase
    std::fstream fs;
    fs.open("/Users/mrunknown/Documents/C++/Project_1/Project_1/DataBase/DataBase.bin", std::ios::in | std::ios::binary);
    
    // Array of users to work with them
    std::vector<User> users;
    
    User user;
    
    // filling the array
    while(fs.read((char*) &user, sizeof(User))){ users.push_back(user); }

    // closing the file
    fs.close();
    
    for(size_t i = 0; i<50; ++i) std::cout<<std::endl;
    ArtAdmin();
    
    
    while(true){
        std::cout<<std::endl<<std::endl<<"Name\t|\tPassword"<<std::endl
        <<"---------------------------"<<std::endl
        <<"        |"
        <<std::endl;
        for(size_t i = 1; i<users.size(); ++i){
            users[i].showDetails();
        }
        std::string data;
        
            std::cout << std::endl << "[*] Enter the account name to delete (or to exit '0'): ";
            std::cin >> data;
            
            if(data == "0") return;
            
            bool found = false;
            
            // 1. Сначала просто ищем и удаляем пользователя ИЗ ВЕКТОРА (из памяти)
            for(size_t i = 0; i < users.size(); ++i){
                if(users[i].getName() == data){
                    // Защита: не позволяем админу случайно удалить самого себя из списка
                    if(users[i].isAdmin_()) {
                        std::cout << "[!] You cannot delete the Admin account!" << std::endl;
                        found = true;
                        break;
                    }
                    
                    // Удаляем элемент из вектора
                    users.erase(users.begin() + i);
                    std::cout << "[+] Account '" << data << "' successfully removed from session memory." << std::endl;
                    found = true;
                    break; // Выходим из цикла поиска, так как имя уникальное
                }
            }
            
            if(!found) {
                std::cout << "[!] Account '" << data << "' not found." << std::endl;
                continue; // Если не нашли, файл не трогаем, просим ввод заново
            }
            
            // 2. Только если пользователь реально найден и удален из вектора,
            // ОДИН РАЗ перезаписываем файл базы данных чистым вектором
            try {
                fs.open("/Users/mrunknown/Documents/C++/Project_1/Project_1/DataBase/DataBase.bin", std::ios::out | std::ios::binary);
                
                for(size_t i = 0; i < users.size(); ++i) {
                    fs.write((char*) &users[i], sizeof(User));
                }
                
                fs.close();
                std::cout << "[───] Database file updated successfully." << std::endl;
                
            } catch(const std::fstream::failure &ex) {
                std::cout << "[!] File system error while saving updated data!" << std::endl;
                std::cout << ex.what() << std::endl << ex.code() << std::endl << std::endl;
                if(fs.is_open()) fs.close();
            }
        }
    
}

#endif /* Menu_Admin_h */
