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
        cin.ignore();
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
    int n;
    cout << "Enter number of books: ";
    cin >> n;

    Book* books = new Book[n];

    for (int i = 0; i < n; ++i) {
        cout << "\nEntering details for book " << i + 1 << ":\n";
        books[i].input();
    }

    cout << "\nDisplaying library book details:\n";
    for (int i = 0; i < n; ++i) {
        cout << "\nBook " << i + 1 << ":\n";
        books[i].display();
    }

    delete[] books;
    return 0;
}
