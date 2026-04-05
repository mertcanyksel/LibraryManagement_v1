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
        
        
        int decisions;
        cout << "==========================="<<endl;
        cout << "Borrow       :1"<<endl;
        cout << "Return       :2"<<endl;
        cout << "Add new book :3"<<endl;
        cout << "Exit         :0"<<endl;
        cout << "Decision     :"; cin >> decisions;
        if(decisions==0){
            cout << "Exiting system..."<<endl;
            break;
        }
        
        
        bool bookFound= false;
        
        if(decisions==1 or decisions==2){
            cout << "Enter ISBN , 0 to exit: "; cin >> inputISBN;
            if(inputISBN==0){
                cout << "Wrong ISBN"<<endl;
                //break;
            }
            for (int i=0; i< library.size();i++){
                if (inputISBN==library[i].ISBN){
                    bookFound=true;
                    
                    if (decisions==1){
                        library[i].borrowBook();
                    }
                    else{
                        library[i].returnBook();
                    }
                    break;
                    
                }
                
            }
        }
        
        else if (decisions == 3) {
            Book newBook;               // create ONE book
            newBook.new_book();         // ask user for details
            
            library.push_back(newBook); // add to library
            cout << library.size()<< endl;
            
            library[library.size()-1].ISBN=library[library.size()-2].ISBN+1;
            cout << "Book added successfully!" << endl;
        }
        
        
        
        if (!bookFound) {
            cout << endl;
            cout << "***************************" << endl;
            cout << "You typed unavailable ISBN" << endl;
            cout << "***************************" << endl;
            cout << endl;
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
    
    
        
        
//        // Searching the book by ISBN
//        for (int i=0 ; i< library.size() ;i++){
//            if (inputISBN == library[i].ISBN){
//                cout << "You are about to get a book"<< endl;
//                library[i].availability=false;
//                library[i].displayBookDetails();
//                break;
//            }
//        }

        
            

        
        

    
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



