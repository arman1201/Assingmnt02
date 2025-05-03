#include <iostream>
#include <string> 
using namespace std;
class Library {
private: string libraryName;
int totalBooks;
int sittingCapacity; 
string libraryID;
public: Library(string name, int books, int capacity, string id) { libraryName = name;totalBooks = books; sittingCapacity = capacity; libraryID = id;
}
Library(const Library &lib) { libraryName = lib.libraryName; totalBooks = lib.totalBooks; sittingCapacity = lib.sittingCapacity; libraryID = lib.libraryID;
}
void display() { cout << "Library Name: " << libraryName << endl; cout << "Total Books: " << totalBooks << endl; cout << "Sitting Capacity: " << sittingCapacity << endl; cout << "Library ID: " << libraryID << endl; cout << "---" << endl;
} };
int main() { Library lib1("Central Library", 10000, 200, "LIB001");
Library lib2("Science Library", 5000, 120, "LIB002"); cout << "Library 1 Details:\n"; lib1.display(); cout << "Library 2 Details:\n"; lib2.display();
return 0;
}
