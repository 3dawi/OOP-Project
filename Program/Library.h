#pragma once
#include <iostream>
#include <string>
#include "Book.h"
using namespace std;

class Library {
  //Friend functions
  friend void printLibrary(const Library& library);

private:
  int maxSize;
  int current;
  Book* bookList;
  void resizeLibrary(int n);

public:
  Library(int);
  Library(const Library&);
  ~Library();
  //Getters
  int getMaxSize();
  int getCurrent();
  //Other functions
  bool isEmpty();
  bool isFull();
  int findBookByTitle(const string&);
  int findBookByISBN(string);
  void addBook(const Book&);
  void addBook();
  float capacityUsage();
  bool removeBookCopy(string);
};