#ifndef Users_h
#define Users_h

#include <stdexcept>
#include <vector>

#include "Transactions.h"

// Here is User class to Identify
class User {
    
    // here only datas for name and password
    char name[19], password[19];
    size_t sizeName, sizePassword;
    
    // Boolean member to define the user is Admin
    bool isAdmin;
    
    // Datas for income and spending
    Income incomes[100]; size_t sizeIncome;
    Expense expenses[100]; size_t sizeEx;
public:
    // Constructers
    User(): name{'\0'}, password{'\0'}, sizeName(0), sizePassword(0), isAdmin(false), sizeIncome(0), sizeEx(0) {}
    User(std::string name, std::string password, bool isAdmin)
    : sizeName(name.size()), sizePassword(password.size()), isAdmin(isAdmin), sizeIncome(0), sizeEx(0){
        for(size_t i = 0; i<sizeName; ++i) this->name[i] = name[i];
        for(size_t i = sizeName; i<18; ++i) this->name[i] = '\0';
        
        for(size_t i = 0; i<sizePassword; ++i) this->password[i] = password[i];
        for(size_t i = sizePassword; i<18; ++i) this->password[i] = '\0';
    }
    
    // Copy constructer
    User(const User &obj)
    : sizeName(obj.sizeName), sizePassword(obj.sizePassword), isAdmin(obj.isAdmin), sizeIncome(obj.sizeIncome), sizeEx(obj.sizeEx) {
        
        // fill the name
        for(size_t i = 0; i<sizeName; ++i) name[i] = obj.name[i];
        for(size_t i = sizeName; i<18; ++i) name[i] = '\0';
        
        // fill the password
        for(size_t i = 0; i<sizePassword; ++i) password[i] = obj.password[i];
        for(size_t i = sizePassword; i<18; ++i) password[i] = '\0';
        
        // copy the histories
        for(size_t i = 0; i<sizeIncome; ++i) incomes[i] = obj.incomes[i];
        for(size_t i = 0; i<sizeEx; ++i) expenses[i] = obj.expenses[i];
    }
    
    // print info
    void showDetails(){
        std::cout<<name<<"\t|\t"<<password<<std::endl;
    } // ----------------0000000000-----------------
    
    // To define is Admin the User
    bool isAdmin_(){ return isAdmin; }
    
    // Method for check same the name
    bool isSameName(std::string data){
        if(sizeName == data.size()){ for(int i = 0; i<sizeName; ++i){ if(data[i] != name[i]) return false; } return true; }
        return false;
    }
    
    // Getters for check the Login
    std::string getName() const { return name; }
    std::string getPassword() const { return password; }
     
    // Overloading '=' operator
    User &operator = (const User &obj){
        if(this != &obj){
            sizeName = obj.sizeName; sizePassword = obj.sizePassword;
            
            // fill the name
            for(int i = 0; i<sizeName; ++i) name[i] = obj.name[i]; name[sizeName] = '\0';
            
            // fill the password
            for(int i = 0; i<sizePassword; ++i) password[i] = obj.password[i]; password[sizePassword] = '\0';
            
            isAdmin = obj.isAdmin;
            
            // fill the history
            sizeIncome = obj.sizeIncome; sizeEx = obj.sizeEx;
            
            for(size_t i = 0; i<sizeIncome; ++i) incomes[i] = obj.incomes[i];
            for(size_t i = 0; i<sizeEx; ++i) expenses[i] = obj.expenses[i];
        }
        return *this;
    }
    
    // Method for Record the Income and Expense
    void newIncome(Income &obj){
        if(sizeIncome == 100){ std::cout<<"[!] The database is overloaded."<<std::endl; return; }
        incomes[sizeIncome++] = obj;
    }
    void newEx(Expense &obj){
        if(sizeEx == 100){ std::cout<<"[!] The database is overloaded."<<std::endl; return; }
        expenses[sizeEx++] = obj;
    }
    // Display the Records
    void DisplayIncome(){ for(size_t i = 0; i<sizeIncome; ++i) incomes[i].display(); }
    void DisplayExpense(){ for(size_t i = 0; i<sizeEx; ++i) expenses[i].display(); }
    
    
    // setters
    void setName(std::string name){
        sizeName = name.size();
        for(size_t i = 0; i<sizeName; ++i) this->name[i] = name[i];
        for(size_t i = sizeName; i<19; ++i) this->name[i] = '\0';
    }
    
    void setPassword(std::string password){
        sizePassword = password.size();
        for(size_t i = 0; i<sizePassword; ++i) this->password[i] = password[i];
        for(size_t i = sizePassword; i<19; ++i) this->password[i] = '\0';
    }
    
    
    // Here is static Methods for ------
    static bool isNameCoorect(std::string name){
        if(name.size() > 18 || name.size() < 4) return false; return true;
    }
    static bool isPasswordCorrect(std::string password){
        if(password.size() > 18 || password.size() < 8) return false; return true;
    }
    

};




#endif /* Users_h */
