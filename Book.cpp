#include "Book.h"


void Book::setBookDetails(string title_b, string author_b, int ISBN_b, bool availability_b) {
    title = title_b;
    author = author_b;
    ISBN= ISBN_b;
    availability = availability_b;
}



void Book::displayBookDetails(){
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "ISBN: " << ISBN << endl;
    cout << "Availability: " << (availability ? "Available" : "Not available") << endl;
}


void Book::borrowBook(){
    if (availability!= true){
        cout << "Book already taken."<<endl;
    }
    char decision;
    cout << "Are you sure borrow the book? (y/n)" <<endl; cin >> decision;
    
    if (decision=='y' or decision=='Y'){
        availability=false;
        cout << "Borrowed successfully"<<endl;
    }
    
    else if (decision=='n' or decision=='N'){
        cout << "Borrow cancelled"<< endl;
    }
    
    else {
        cout << "You typed wrong character"<<endl;
    }
}


void Book::returnBook(){
    
}
