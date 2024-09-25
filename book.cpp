
#include <iostream>
using namespace std;
int main() {
// Variable declaration and initialization
string bookTitle = "bhagvaty Gita"; // String variable forthe book title 

string author = "Maharishi Veda Vyasa; // String variable forthe author's name
int yearOfPublication = 1997; 
// Integer variable for the year of publication
double price = 999.99;
 // Double variable for the price in Rupees
bool isAvailable = true; 
// Booleanvariable for availability
// Display the book information
cout << "Book Title: " << bookTitle << endl;
cout << "Author: " << author << endl;
cout << "Year of Publication: " << yearOfPublication << endl;
cout << "Price: " << price << " Rs." << endl;
cout << "Availability: " << (isAvailable ? "Yes" : "No") << endl;
return 0;
}
