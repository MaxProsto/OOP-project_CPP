#ifndef Login_Functions_h
#define Login_Functions_h
#include <iostream>
#include <fstream>
#include <unistd.h>
#include "Classes/Users.h"


// Beutiful Print
void Print_Start(){
    // Очистка экрана
    for(int i = 0; i < 50; ++i) std::cout << "\n";

    // Частицы / декоративная рамка верхняя
    std::cout << "\033[2;90m"
              << "  ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n"
              << "\033[0m";

    // Лого OOPoor — каждая буква своим цветом
    std::cout
        << "\033[1;36m"  // Cyan
        << "  ██████╗  ██████╗  ██████╗ "
        << "\033[1;32m"  // Green
        << "██████╗  ██████╗  "
        << "\033[1;33m"  // Yellow
        << "██████╗ \n"

        << "\033[1;36m"
        << "  ██╔═══██╗██╔═══██╗██╔══██╗"
        << "\033[1;32m"
        << "██╔═══██╗██╔═══██╗"
        << "\033[1;33m"
        << "██╔══██╗\n"

        << "\033[1;35m"  // Purple
        << "  ██║   ██║██║   ██║██████╔╝"
        << "\033[1;36m"
        << "██║   ██║██║   ██║"
        << "\033[1;31m"  // Red
        << "██████╔╝\n"

        << "\033[1;35m"
        << "  ██║   ██║██║   ██║██╔═══╝ "
        << "\033[1;36m"
        << "██║   ██║██║   ██║"
        << "\033[1;31m"
        << "██╔══██╗\n"

        << "\033[0;35m"
        << "  ╚██████╔╝╚██████╔╝██║     "
        << "\033[0;36m"
        << "╚██████╔╝╚██████╔╝"
        << "\033[0;31m"
        << "██║  ██║\n"

        << "\033[0;35m"
        << "   ╚═════╝  ╚═════╝ ╚═╝     "
        << "\033[0;36m"
        << " ╚═════╝  ╚═════╝ "
        << "\033[0;31m"
        << "╚═╝  ╚═╝\n";

    // Разделитель
    std::cout << "\033[2;90m"
              << "  ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n"
              << "\033[0m";

    // Инфо-блок
    std::cout << "\033[1;36m"
              << "  ╔═══════════════════════════════════════════════════════╗\n"
              << "  ║  \033[1;33m⚡ Object-Oriented Programming\033[1;36m"
              << "  |  \033[0;35mv2.0.0-alpha\033[1;36m"
              << "  |  \033[1;31mUNSTABLE\033[1;36m  ║\n"
              << "  ║  \033[2;37mBuild: \033[0;32m0xDEADBEEF"
              << "\033[2;37m  │  Arch: \033[0;33mx86_64-oop-chaos"
              << "\033[2;37m  │  gcc 13.2\033[1;36m    ║\n"
              << "  ╚═══════════════════════════════════════════════════════╝\n"
              << "\033[0m";

    // Диагностика
    std::cout << "\033[2;37m"
              << "  ┌─ SYSTEM DIAGNOSTICS ──────────────────────────────────┐\n"
              << "  │\033[0m"
              << " \033[1;32m[✔]\033[0;37m Memory allocator........\033[1;32mOK"
              << "\033[0;37m    \033[1;32m[✔]\033[0;37m Vtable cache............\033[1;32mOK\033[0m\n"
              << "  \033[2;37m│\033[0m"
              << " \033[1;32m[✔]\033[0;37m Exception handler.........\033[1;32mOK"
              << "\033[0;37m    \033[1;31m[✘]\033[0;37m Smart pointers..........\033[1;31mPOOR\033[0m\n"
              << "  \033[2;37m│\033[0m"
              << " \033[1;33m[⚠]\033[0;37m Template metaprog.........\033[1;33mWARN"
              << "\033[0;37m  \033[1;32m[✔]\033[0;37m Destructor chain........\033[1;32mOK\033[0m\n"
              << "\033[2;37m  └──────────────────────────────────────────────────────┘\033[0m\n";

    // Приглашение
    std::cout << "\n"
              << "\033[2;37m  $ \033[0;32m./oopoor --auth --mode=secure --verbose\033[0m\n"
              << "\033[1;36m  >> \033[0;37mInitializing Secure Login System...\033[0m\n\n"
    << "\033[1;33m           [ Press ENTER to authenticate ]  \033[1;36m.\033[0m"; std::cin.get(); std::cout<<std::endl<<std::endl;

    
}


// Login
User Login(){

    // Printing Beatiful Menu
    Print_Start();
    
    // Buffer datas
    std::string name, password;
    std::cout<<"Log in"<<std::endl;
    
    // Validating name
    while(true){
        std::cout<<"[@] User: "; std::cin>>name; /* Validating name */
        if(User::isNameCoorect(name)) break;
        std::cout<<std::endl<<"[!] The name must not exceed 18 letters and must not be less than 4 letters."<<std::endl;
    }
    
    // Checking datas from file
    std::fstream fs;
    
    // Buffer object to check
    User user; bool newUser = true;
    
    try{
        fs.open("/Users/mrunknown/Documents/C++/Project_1/Project_1/DataBase/DataBase.bin", std::ios::in | std::ios::binary);
        
        // Searching name from data base
        while(fs.read((char*) &user, sizeof(User))){ if(user.isSameName(name)){ newUser = false; break; }}
        
        // Closing the file
        fs.close();
        
    }catch(const std::fstream::failure &ex){
        
        /* !!! Надо подробнее описать текст !!!! */
        std::cout<<ex.what()<<std::endl<<ex.code()<<std::endl<<std::endl;
        
        // Closing the file
        if(fs.is_open()) fs.close();
        
    }
    
    // If user is new
    if(newUser){
        
        // Second buffer password
        std::string second_password;
        
        std::cout<<std::endl<<"[#] New user, please come up with a password."<<std::endl;
        
        
        // Validating password
        while(true){
            std::cout<<"[*] Password: "; std::cin>>password; /* Validate password */
            if(User::isPasswordCorrect(password)) break;
            std::cout<<std::endl<<"[!] The password must not exceed 18 characters and must not be less than 8 characters."<<std::endl;
        }
        while(true){
            std::cout<<"[*] Repeat your password: "; std::cin>>second_password;
            
            // Checking the similarity of passwords
            if(second_password==password) break;
            std::cout<<"[!] Second password is not same with first."<<std::endl;
        }
        
        // Writing user datas to object and save to the data base
        try{
            fs.open("/Users/mrunknown/Documents/C++/Project_1/Project_1/DataBase/DataBase.bin", std::ios::app | std::ios::binary);
            
            // Rewriting new User with new datas
            user = User(name, password, false);
            
            // Adding new user to the Data Base
            fs.write((char*) &user, sizeof(User));
            
            // Closing the file
            fs.close();
            std::cout<<"[+] New user "<<user.getName()<<" registered."<<std::endl;

        }catch(const std::fstream::failure &ex){
            
            /* !!! Надо подробнее описать текст !!!! */
            std::cout<<ex.what()<<std::endl<<ex.code()<<std::endl<<std::endl;
            
            // Closing the file
            if(fs.is_open()) fs.close();
        }
        
    } else{
        
        // If user already registred
        if(user.isAdmin_()) std::cout<<std::endl<<"[!] Admin Pannel"<<std::endl;
        while(true){
            std::cout<<"Password: "; std::cin>>password; /* Validate password */
            
            // Checking password
            if(password == user.getPassword()) break;
            std::cout<<std::endl<<"[!] Password is incorrect. Please try Again."<<std::endl;
        }
        
        std::cout<<"[^_^] Wellcome "<<user.getName()<<"!"<<std::endl;
    }
    
    return user;
}


#endif /* Login_Functions_h */
