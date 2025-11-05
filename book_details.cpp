#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;
    float price;

public:
    void input() {
        cout << "Enter book title: ";
        getline(cin, title);
        cout << "Enter author name: ";
        getline(cin, author);
        cout << "Enter price: ";
        cin >> price;
    }

    void display() {
        cout << "\nBook Details:\n";
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Book b;
    cout << "Enter details for the book:\n";
    b.input();
    b.display();
    return 0;
}