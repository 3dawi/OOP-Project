#include"Book.h"
#include<string>
#include<iostream>
using namespace std;

Book::Book(string _Title ,string _ISBN, string _first_author, int _numofcopies){
	this-> Book_Title = _Title;
	this-> Book_ISBN = _ISBN;
	this-> Book_first_author = _first_author;
	this-> Book_num_of_copies = _numofcopies;
}
//Setters
void Book::setBook_Title(string BookT){
	if (BookT != " ")
		Book_Title = BookT;
}

void Book::setBook_ISBN(string BookISBN){
	if (BookISBN != " ")
		Book_ISBN = BookISBN;
}

void Book::setBook_first_author(string BFA){
	if (BFA != " ")
		Book_first_author = BFA;
}

void Book::setBook_num_of_copies(int N){
	if (N >= 0)
		Book_num_of_copies = N;
}
//Getters
string Book::getBook_Title()const{
	return Book_Title;
}

string Book::getBook_ISBN()const{
	return Book_ISBN;
}

string Book::getBook_first_author()const{
	return Book_first_author;
}

int Book::getBook_num_of_copies()const{
	return Book_num_of_copies;
}

void Book::updateBookNumCopies(int n){
	if (n + Book_num_of_copies >= 0){
		Book_num_of_copies += n;
	}
	else{
		cout << "ERROR MESSAGE!!" << endl;
	}
}