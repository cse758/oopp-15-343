#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

class Item
{
public:
    string name;
    int quantity;
    double price;
};

// 1. Display all cart items
void displayCart(const vector<Item>& cart)
{
    cout << "\nName\tQuantity\tPrice\n";

    for (auto item : cart)
        cout << item.name << "\t" << item.quantity
             << "\t\t" << item.price << endl;
}



int main()
{
    
}