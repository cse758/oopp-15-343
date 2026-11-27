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

// 2. Calculate total amount
double calculateTotal(const vector<Item>& cart)
{
    double total = 0;

    for (auto item : cart)
        total += item.quantity * item.price;

    return total;
}

// 3. Find item with highest unit price
Item findMostExpensiveItem(const vector<Item>& cart)
{
    auto expensive = cart[0];

    for (auto item : cart)
    {
        if (item.price > expensive.price)
            expensive = item;
    }

    return expensive;
}


int main()
{
    
}