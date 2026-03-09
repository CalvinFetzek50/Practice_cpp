#include "bookshelf.h"


void addBook(std::list<std::string>& bookshelf){

    // prompt user
    std::string bookTitle {""};
    std::cout << "Enter the title of the book: ";
    std::getline(std::cin >> std::ws, bookTitle);

    // add to list
    bookshelf.push_back(bookTitle);

    return;
};

void checkAddBook(bool& bookAddComplete){
    
    char userResponse {' '}; 

    // prompt user if book they want to add another book
    std::cout << "Do you want to add another book? (Y/N):";
    std::cin >>  userResponse;

    // update boolean with error checking
    if (userResponse == 'Y' || userResponse == 'y'){
        bookAddComplete = false;
        return;
    } else if (userResponse == 'N' || userResponse == 'n'){
        bookAddComplete = true;
        return;
    }else{
        std::cout << "Invalid entry. Please enter 'Y' or 'N'." << std::endl;
        checkAddBook(bookAddComplete);
    }
    
};

void displayBookShelf(std::list<std::string>& bookshelf, bool sorted){
    
    if (!sorted){
        std::cout << "Unsorted book shelf:\n";
    } else{
        std::cout << "Sorted book shelf:\n";
    }

    for (const auto &book : bookshelf){
        std::cout << book << std::endl;
    }
    
    return;
}