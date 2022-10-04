#include "Library.h"
#include <iostream>
using namespace std;



int bookNum = 0;
string arr2[99];

Library::Library(const string& Name)
{
}

// true if book found in library
bool Library::isInLibrary(const string& BookName) const {
	for (int i = 0; i < 99; i++) {
		if (BookName == arr2[i]) {
			return true;
		}
	}
	return false;
}


// add a new book
// return true if successful, false if
// book already in library
bool Library::addBook(const string& BookName) {
	if (bookNum == 100) {
		return false;
	}
	for (int i = 0; i < bookNum; i++) {
		if (arr2[i] == BookName) {
			return false;
		}
	}
	arr2[bookNum] = BookName;
	bookNum++;
	return true;
}

// remove a book
// return true if successfully removed
// false if book not in library
bool Library::removeBook(const string& BookName) {
	for (int i = 0; i < 99; i++) {
		if (BookName == arr2[i]) {
			arr2[i] = arr2[bookNum];
			arr2[bookNum] = "";
			bookNum--;
			return true;
		}
	}
	return false;
}


// list all books
void Library::listAllBooks() const {
	cout << "Books in library: \n";
	for (int i = 0; i < bookNum; i++) {
		cout << arr2[i] << "\n";
	}
	cout << "\n";
}

ostream& operator<<(ostream& Out, const Library& Lib) {
	return Out;
}