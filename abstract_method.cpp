/*
 * Given a Book class and a Solution class, write a MyBook class that does the following:
 * 1) Inherits from Book
 * 2) Has a parameterized constructor taking these 3 parameters:
 *       string title
 *       string author
 *       int price
 * 3) Implements the Book class's abstract display() method so it prints 3 lines: title, author, price
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class Book{
    protected:
        string title;
        string author;
    public:
        Book(string t,string a){
            title=t;
            author=a;
        }
        virtual void display()=0;

};

// Write your MyBook class here
class MyBook :  public Book{
       
    //   Parameters:
    //   title - The book's title.
    //   author - The book's author.
    //   price - The book's price.
    //
    // Write your constructor here
    private:
		int price;  
	public:
        //   Class Constructor
        //    
        MyBook(string title,string author,int cost): Book(title, author)
        {
            price = cost;        
        }
    
    
    //   Function Name: display
    //   Print the title, author, and price in the specified format.
    //
    // Write your method here
    void display(){
        cout << "Title: " << this->title << endl ;
        cout << "Author: " << this->author << endl ;
        cout << "Price: " << this->price << endl ;

    }
    
};// End class

int main() {
    string title,author;
    int price;
    getline(cin,title);
    getline(cin,author);
    cin>>price;
    MyBook novel(title,author,price);
    novel.display();
    return 0;
}
