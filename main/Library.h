#include <iostream>
#include <string> 
using namespace std;


class Library {

	// display all books in library
	friend ostream& operator<<(ostream& Out, const Library& Lib);

public:
	// constructor with default name
	explicit Library(const string& Name);

	// add a new book
	// return true if successful, false if
	// book already in library
	bool addBook(const string& BookName);

	// remove a book
	// return true if successfully removed
	// false if book not in library
	bool removeBook(const string& BookName);


	// list all books
	void listAllBooks() const;

	bool isInLibrary(const string& BookName) const;

	friend ostream& operator<<(ostream& Out, const Library& Lib);

};