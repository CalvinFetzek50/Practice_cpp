#include <list>
#include <string>
#include <iostream>
#include "bookshelf.h"
#include "booksort.h"


int main () {
    // define the list to store the books
    std::list<std::string> bookshelf;

    // boolean to stop adding books
    bool bookAddComplete {false};
    
    // prompt users to enter names of books
    while (!bookAddComplete){
        addBook(bookshelf);
        checkAddBook(bookAddComplete);
    }

    // Display the books to the terminal 
    displayBookShelf(bookshelf,false);

    // sort the list alphabetically
    bookshelf.sort(caseInsensitiveCompare);
    
    displayBookShelf(bookshelf,true);

    return 0;
}