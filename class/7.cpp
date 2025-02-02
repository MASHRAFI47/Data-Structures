#include <bits/stdc++.h>
using namespace std;

class Book
{
public:
    string name;
    string author;
    int pages;
    int price;
};

int main()
{
    Book harryPotter;

    cin >> harryPotter.name;
    cin >> harryPotter.author;
    cin >> harryPotter.pages;
    cin >> harryPotter.price;

    cout << harryPotter.name << endl;
    cout << harryPotter.author << endl;
    cout << harryPotter.pages << endl;
    cout << harryPotter.price << endl;
    return 0;
}