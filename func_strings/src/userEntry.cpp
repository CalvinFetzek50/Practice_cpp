#include "userEntry.h"

std::string getname(int personNum){
    std::string userName;
    std::cout << "Enter the name of person #" << personNum << ": ";
    std::getline(std::cin >> std::ws, userName);
    return userName;
}

int getAge(std::string_view name){
    int userAge;
    std::cout << "Enter the age of " << name  << ": ";
    std::cin >> userAge;
    return userAge;
}

void compareAge(){

    // get first person's name and age
    std::string name1 = getname(1);
    int age1 = getAge(name1);

    // get the second person's name and age
    std::string name2 = getname(2);
    int age2 = getAge(name2);

    if (age1 >= age2){
        std::cout << name1 << " (age " << age1 << ") is older than " << name2 << " (age " << age2 << ")";
    }else{
        std::cout << name2 << " (age " << age2 << ") is older than " << name1 << " (age " << age1 << ")";
    }
}
    
