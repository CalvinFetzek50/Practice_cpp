#ifndef BOOKSHELF
#define BOOKSHELF

#include <iostream>
#include <list>

// prompt user to enter a book and add to list of books
void addBook(std::list<std::string>& bookshelf);

// check if the user wants to add another book
void checkAddBook(bool& bookAddComplete);

// display the book shelf
void displayBookShelf(std::list<std::string>& bookshelf, bool sorted);


#endif