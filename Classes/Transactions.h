#ifndef Transactions_h
#define Transactions_h

#include <iostream>
#include <string>
#include <ctime>

// Interface for transactions, but I don't used it because I had problems with recording datas to the file
class Transactions {
public:
    // Methods of class
    virtual std::string getType() const = 0;
    virtual void display() const = 0;
    
    // Destructer
    virtual ~Transactions() {}
};

// Class for Income to User
class Income{
    char job[20]; size_t size;
    char time[20];
    double income;
public:
    // Constructers
    Income(): job{'\0'}, size(0), time{'\0'}, income(0) {}
    Income(std::string job): size(job.size()), income(0) {
        for(size_t i = 0; i<size; ++i) this->job[i] = job[i];
        for(size_t i = size; i<20; ++i) this->job[i] = '\0';
    }
    
    // Copy constructer
    Income(const Income &obj): size(obj.size), income(obj.income) {
        // Copy the job
        for(size_t i = 0; i<size; ++i) job[i] = obj.job[i];
        for(size_t i = size; i<20; ++i) job[i] = '\0';
        
        // Copy the time
        for(size_t i = 0; i<20; ++i) time[i] = obj.time[i];
    }
    
    void getAmount(double income) {
        this->income = income;
        
        // Recording the time
        std::time_t t = std::time(nullptr);
        std::strftime(time, sizeof(time), "%Y-%m-%d %H:%M:%S", std::localtime(&t));
    }
    
    // Method to get the type
    std::string getType() const  { return job; }
    
    // Method for display
    void display() const  {
        std::cout<<"[$$$] Income: "<<income<<" - "<<job<<" - "<<time<<std::endl;
    }
    
    // Overloaded operator =
    Income &operator = (const Income &obj){
        if(this != &obj){
            size = obj.size; income = obj.income;
            
            for(size_t i = 0; i<size; ++i) job[i] = obj.job[i]; for(size_t i = size; i<20; ++i) job[i] = '\0';
            for(size_t i = 0; i<19; ++i) time[i] = obj.time[i]; time[19] = '\0';
        }
        return *this;
    }
    
};

// Class for Expense for User
class Expense{
    char category[20]; size_t size;
    char time[20];
    double moneys;
public:
    
    // Constructers default & parametrised
    Expense(): category{'\0'}, size(0), time{'\0'}, moneys(0) {}
    Expense(std::string category): size(category.size()), time{'\0'}, moneys(0) {
        for(size_t i = 0; i<size; ++i) this->category[i] = category[i];
        for(size_t i = size; i<20; ++i) this->category[i] = '\0';
    }
    // Copy Constructer
    Expense(const Expense &obj): size(obj.size), moneys(obj.moneys) {
        for(size_t i = 0; i<size; ++i) category[i] = obj.category[i];
        for(size_t i = size; i<20; ++i) category[i] = '\0';
        for(size_t i = 0; i<20; ++i) time[i] = obj.time[i];
    }
    
    // Of course, we covered the 'ctime' library before, but we used it to write a randomizer for number arrays at the beginning of the school year. Here, I'm also using 'ctime', but this time with the 'strftime' method to write the date.
    void spend(double money) {
        moneys = money;
        
        // Recording the time
        std::time_t t = std::time(nullptr);
        std::strftime(time, sizeof(time), "%Y-%m-%d %H:%M:%S", std::localtime(&t));
    }
    
    // Method to get the type
    std::string getType() const  { return category; }
    
    // Method for display
    void display() const  {
        std::cout<<"[$] Spend: "<<moneys<<" - "<<category<<" - "<<time<<std::endl;
    }
    
    // Overloaded operator =
    Expense &operator = (const Expense &obj){
        if(this != &obj){
            size = obj.size; moneys = obj.moneys;
            
            for(size_t i = 0; i<size; ++i) category[i] = obj.category[i]; for(size_t i = size; i<20; ++i) category[i] = '\0';
            for(size_t i = 0; i<19; ++i) time[i] = obj.time[i]; time[19] = '\0';
        }
        return *this;
    }
    
};

#endif /* Transactions_h */
