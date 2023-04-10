#include <iostream>
#include "Library.h"
#include <string>
using namespace std;

//The private function.
void Library::resizeLibrary(int n) {
  if (n > 0) {
    Book* temp;
    temp = new Book[n + maxSize];
    for (int i = 0; i < current; i++) {
      temp[i] = bookList[i];
    }
    delete[] bookList;
    bookList = temp;
    maxSize += n;
    //delete []temp;
  }
}
//Constructor
Library::Library(int n) {
  this->maxSize = n;
  Book* b;
  b = new Book[maxSize];
  //bookList = new Book[maxSize];
  this->bookList = b;
  this->current = 0;
}
//Copy Constructor
Library::Library(const Library& library) {
  maxSize = library.maxSize;
  current = library.current;
  for (int i = 0; i < current; i++) {
    bookList[i] = library.bookList[i];
  }
}

Library::~Library() {
  delete[]bookList;
  current--;
}
//Other function
bool Library::isEmpty() {
  if (current == 0) {
    return true;
  }
  else
    return false;
}

bool Library::isFull() {
  if (current == maxSize) {
    return true;
  }
  else
    return false;
}

int Library::findBookByTitle(const string& title) {
  for (int i = 0; i < maxSize; i++) {
    if (bookList[i].getBook_Title() == title) {
      return i;
    }
  }
  return -1;
}

int Library::findBookByISBN(string isbn) {
  for (int i = 0; i < maxSize; i++) {
    if (bookList[i].getBook_ISBN() == isbn) {
      return i;
    }
  }
  return -1;
}

void Library::addBook(const Book& book) {
  if (!isFull() && findBookByISBN(book.getBook_ISBN()) == -1) {
    bookList[current++] = book;
  }
  else if (findBookByISBN(book.getBook_ISBN()) != -1) {
    //book.setBook_num_of_copies((book.getBook_num_of_copies())+1);
    bookList[findBookByISBN(book.getBook_ISBN())].updateBookNumCopies(1);
  }
  else if (isFull() && findBookByISBN(book.getBook_ISBN()) == -1) {
    resizeLibrary(10);
    bookList[current++] = book;
  }
}

void Library::addBook() {
  Book b;
  string s;
  int n;
  cout << "Enter book title: ";
  cin >> s;
  cout << "\n";
  b.setBook_Title(s);

  cout << "Enter book ISBN: ";
  cin >> s;
  cout << "\n";
  b.setBook_ISBN(s);

  cout << "Enter book author: ";
  cin >> s;
  cout << "\n";
  b.setBook_first_author(s);

  cout << "Enter book number of copies: ";
  cin >> n;
  cout << "\n";
  b.setBook_num_of_copies(n);

  addBook(b);
  // current++;
}

int Library::getMaxSize() {
  return maxSize;
}

int Library::getCurrent() {
  return current;
}

float Library::capacityUsage() {
  float curr = current;
  float max = maxSize;
  float usage = curr / max;
  return usage * 100;
}

bool Library::removeBookCopy(string isbn) {

  int index = findBookByISBN(isbn);

  if (index != -1) {
    bookList[index].setBook_num_of_copies((bookList[index].getBook_num_of_copies()) - 1);
    if (bookList[index].getBook_num_of_copies() == 0) {
      for (int i = index; i < current - 1; i++) {
        bookList[i].setBook_Title(bookList[i + 1].getBook_Title());
        bookList[i].setBook_ISBN(bookList[i + 1].getBook_ISBN());
        bookList[i].setBook_first_author(bookList[i + 1].getBook_first_author());
        bookList[i].setBook_num_of_copies(bookList[i + 1].getBook_num_of_copies());
        //bookList[i] = bookList[i+1];
      }
    }
    return true;
  }
  cout << "The book not found!" << endl;
  return false;
}

//Friend function