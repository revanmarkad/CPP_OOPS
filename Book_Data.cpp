#include<iostream>
#include<string>
using namespace std;



class Book {
private:
    string name;
    double price;

public:
    // Default constructor
    Book() {
        name = "No Title";
        price = 0.0;
    }

    // Parameterized constructor
    Book(string bookName, double bookPrice) {
        name = bookName;
        price = bookPrice;
    }

    // Member function to display book information
    void display() {
        cout << "Book Name: " << name << endl;
        cout << "Price: $" << price << endl;
    }
};


int main() {
    // Create a default Book object
    Book defaultBook;

    cout << "Default Book Information:" << endl;
    defaultBook.display();

    // Create a parameterized Book object
    Book parameterizedBook("The Great Gatsby", 77.99);

    cout << "\nParameterized Book Information:" << endl;
    parameterizedBook.display();

    // Create a copied Book object using copy constructor
    Book copiedBook = parameterizedBook;

    cout << "\nCopied Book Information (Copy Constructor):" << endl;
    copiedBook.display();

    return 0;
}
