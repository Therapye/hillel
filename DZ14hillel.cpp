#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;
    int pages = 0;

public:
    Book() = default;

    void setPages(int p)
    {
        if (p > 0)
        {
            pages = p;
        }
    }

    void getPages()
    {
        cout << "Pages: " << pages << endl;
    }

    void setTitle(string t)
    {
        title = t;
    }

    void getTitle()
    {
        cout << "Title: " << title << endl;
    }

    void setAuthor(string a)
    {
        author = a;
    }

    void getAuthor()
    {
        cout << "Author: " << author << endl;
    }

};


int main() {

    Book book;
    
	book.setTitle("1925");
	book.setAuthor("Agata Kristi");
	book.setPages(328);

	book.getTitle();
	book.getAuthor();
	book.getPages();

    return 0;
}