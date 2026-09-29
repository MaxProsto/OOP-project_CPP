#ifndef Menu_User_h
#define Menu_User_h
#include "Arts.h"


// Functions for Menu Options

// Record Income
void firstOption(User &user){
    for(size_t i = 0; i<50; ++i) std::cout<<std::endl;
    Art4option1();
    std::string job;
    std::cout<<"[*] Enter here: "; std::cin.ignore(1000000000000, '\n'); std::getline(std::cin, job);
    Income income(job);
    
    double sum;
    std::cout<<"[*] Enter the sum: "; std::cin>>sum;
    
    income.getAmount(sum);
    
    // Add the new data
    user.newIncome(income);
}

// Income History
void secondOption(User &user){
    for(size_t i = 0; i<50; ++i) std::cout<<std::endl;
    
    Art4option2();
    user.DisplayIncome();
    char enter;
    std::cout<<std::endl<<"[*] Press Enter: "; std::cin>>enter;
}


void thirdOption(User &user){
    for(size_t i = 0; i<50; ++i) std::cout<<std::endl;
    Art4option3();
    std::string category;
    std::cout<<"[*] Enter here: "; std::cin.ignore(1000000000000, '\n'); std::getline(std::cin, category);
    Expense expense(category);
    
    double sum;
    std::cout<<"[*] Enter the sum: "; std::cin>>sum;
    
    expense.spend(sum);
    
    // Add the new data
    user.newEx(expense);
    
}

// Expense History
void fourthOption(User &user){
    for(size_t i = 0; i<50; ++i) std::cout<<std::endl;
    
    Art4option4();
    user.DisplayExpense();
    char enter;
    std::cout<<std::endl<<"[*] Press Enter: "; std::cin>>enter;
}


void fivesOption(User &user){
    for(size_t i = 0; i<50; ++i) std::cout<<std::endl;

    Art4option5();
    int option;
    std::cout<<std::endl<<std::endl<<"[*] Enter here (to quit enter '0'): "; std::cin>>option;
    std::string name, password;

    switch(option){
        case 0:
            std::cout<<"[<-] Back."<<std::endl;
            break;
        case 1:
            // Validating password
            while(true){
                std::cout<<"[*] Password: "; std::cin>>password; /* Validate password */
                if(User::isPasswordCorrect(password)) break;
                std::cout<<std::endl<<"[!] The password must not exceed 18 characters and must not be less than 8 characters."<<std::endl;
            }
            user.setPassword(password);
            
            std::cout<<"[+] Password changed successfuly!"<<std::endl;
            break;
        default:
            std::cout<<"[!] Invalid option."<<std::endl;
            break;
    }
}


void Menu_User(User &user){
    // Variable for Option to Menu
    int option;

    do{
        // Printing the art
        for(int i = 0; i<50; ++i) std::cout<<std::endl;
        printMoney();
        printMenu();
        
        std::cout<<std::endl<<"[*] Enter the choice: ";
        std::cin>>option;

        switch(option){
            case 0:
                std::cout<<"[~] Programm Finished."<<std::endl<<std::endl;
                break;
            case 1:
                firstOption(user);
                break;
            case 2:
                secondOption(user);
                break;
            case 3:
                thirdOption(user);
                break;
            case 4:
                fourthOption(user);
                break;
            case 5:
                fivesOption(user);
                break;
            default:
                std::cout<<"[!] Invalid Option, Try Again."<<std::endl;
                break;
        }
    } while(option!=0);
}

#endif /* Menu_User_h */
