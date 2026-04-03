#include <iostream>
#include <vector>
#include "Book.h"



int main(){
    //    vector<Book> library;
    //
    //    library[0].setBookDetails("The Great Gatsby", "F. Scott Fitzgerald", 101, true);
    //    library[1].setBookDetails("1984", "George Orwell", 102, true);
    //    library[2].setBookDetails("To Kill a Mockingbird", "Harper Lee", 103, true);
    //    library[3].setBookDetails("Moby Dick", "Herman Melville", 104, true);
    //    library[4].setBookDetails("Pride and Prejudice", "Jane Austen", 105, true);
    //
    //
    //    cout << library[3].ISBN << endl;
    
    vector<Book> library(5);
    library[0].setBookDetails("The Great Gatsby", "F. Scott Fitzgerald", 101, true);
    library[1].setBookDetails("1984", "George Orwell", 102, true);
    library[2].setBookDetails("To Kill a Mockingbird", "Harper Lee", 103, true);
    library[3].setBookDetails("Moby Dick", "Herman Melville", 104, true);
    library[4].setBookDetails("Pride and Prejudice", "Jane Austen", 105, true);
    
    
    
    
    
    
    
    cout << ((library[4].availability == true) ? "Yes,you can take it" : "No You can not") << endl;
    cout << "Test" << endl;
    cout << library[2].title<<endl;
    

 
    
    int inputISBN;
    while (true){
        cout << "====== Library Books ======"<<endl;
        
        for (int i=0 ; i < library.size();i++){
            library[i].displayBookDetails();
            cout << "==========================="<<endl;
        }
        cout << endl;
        
        
        
        cout << "Enter ISBN to borrow a book (or 0 to exit): "; cin >> inputISBN;
        if(inputISBN==0){
            cout << "Exiting system..."<<endl;
            break;
        }
        
        
//        // Searching the book by ISBN
//        for (int i=0 ; i< library.size() ;i++){
//            if (inputISBN == library[i].ISBN){
//                cout << "You are about to get a book"<< endl;
//                library[i].availability=false;
//                library[i].displayBookDetails();
//                break;
//            }
//        }

        bool isISBNcorrect;
        for (int i=0; i< library.size();i++){
            
            if (inputISBN==library[i].ISBN){
                isISBNcorrect=true;
                library[i].borrowBook();
                }
            else if (inputISBN !=library[i].ISBN){
                cout <<endl;
                cout << "***************************"<<endl;
                cout << "You typed unavailable ISBN"<<endl;
                cout << "***************************"<<endl;
                cout << endl;
                break;
                }
            }
            
        }
        
        
        

    
    
    
    
    
    
    
    //**************************
    // If the admin wants to add new book ;
    
//    Book new_book;
//    new_book.setBookDetails("The Great Gatsby", "F. Scott Fitzgerald", 106, true);
//    library.push_back(new_book);
//    cout << library[5].title<<" 5. BOOK"<<endl;
//
    //**************************
    
    //**********************
//    Book book1;
//    book1.set_BookDetails("The Great Gatsby", "F. Scott Fitzgerald", 101, true);
//    //    Book book1 {"The Great Gatsby", "F. Scott Fitzgerald", 101, true};
//
//
//    Book book2 {"1984", "George Orwell", 102, true};
//
//   // cout << "Test "<< ((book1.availability = true) ? "true":"false" )  << endl;
//    cout << "Test " << book1.title << endl;
    //*********************
}


