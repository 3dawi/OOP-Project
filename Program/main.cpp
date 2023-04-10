#include <iostream>
#include "Library.h"
using namespace std;

//Friend functions
void printLibrary(const Library& library) {
  for (int i = 0; i < library.current; i++) {
    cout << "Book " << i + 1 << ":" << endl;
    cout << "Title: " << library.bookList[i].getBook_Title() << endl;
    cout << "ISBN: " << library.bookList[i].getBook_ISBN() << endl;
    cout << "First author: " << library.bookList[i].getBook_first_author() << endl;
    cout << "Number of copies: " << library.bookList[i].getBook_num_of_copies() << endl;

    cout << "-------------------------------------------------------------------------------";
    cout << "\n";
  }
}

int main() {

  //1
  Book* myBooks_items;
  myBooks_items = new Book[5];

  //2
  string str;
  int number;
  for (int i = 0; i < 5; i++) {
    cout << "Enter Book title: ";
    cin >> str;
    cout << "\n";
    myBooks_items[i].setBook_Title(str);

    cout << "Enter Book ISBN: ";
    cin >> str;
    cout << "\n";
    myBooks_items[i].setBook_ISBN(str);

    cout << "Enter Book first author: ";
    cin >> str;
    cout << "\n";
    myBooks_items[i].setBook_first_author(str);

    cout << "Enter Book Number of copies: ";
    cin >> number;
    cout << "\n";
    myBooks_items[i].setBook_num_of_copies(number);

    cout << "\n\n";
  }

  //3
  Library lib(6);

  //4
  for (int i = 0; i < 5; i++) {
    lib.addBook(myBooks_items[i]);
  }

  //5
  Book* book = new Book(myBooks_items[1]);

  //6
  delete[]myBooks_items;

  //7
/*
    lib.addBook(myBooks_items[1]);
    lib.addBook(myBooks_items[1]);
    lib.addBook(myBooks_items[1]);
*/
  for (int i = 0; i < 3; i++) {
    lib.addBook(myBooks_items[1]);
  }

  //8
/*
    lib.addBook();
    lib.addBook();
*/
  for (int i = 0; i < 2; i++) {
    lib.addBook();
  }
  //9
  cout << "\n\n";
  printLibrary(lib);

  //10
  cout << "\nThe current of the library is: " << lib.getCurrent() << endl;

  //11
  cout << "\nThe usage percentage is: " << lib.capacityUsage() << "%" << endl;

  //12
  lib.removeBookCopy(myBooks_items[1].getBook_ISBN());

  //13
  cout << "\n\n";
  printLibrary(lib);


  return 0;
}