#pragma once
#include<iostream>
#include<string>
using namespace std;

class Book {
private:
	string Book_Title;
	string Book_ISBN;
	string Book_first_author;
	int Book_num_of_copies;
public:
	Book(string = "_", string = "_", string = "_", int = 0);
	//Setters
	void setBook_Title(string);
	void setBook_ISBN(string);
	void setBook_first_author(string);
	void setBook_num_of_copies(int);
	//Getters
	string getBook_Title()const;
	string getBook_ISBN()const;
	string getBook_first_author()const;
	int getBook_num_of_copies()const;
	//Other functions
	void updateBookNumCopies(int);
};