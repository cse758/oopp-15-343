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

// 4. Apply 10% discount on items above Rs. 1000
void applyDiscount(vector<Item>& cart)
{
    for (auto &item : cart)
    {
        if (item.price > 1000)
            item.price = item.price * 0.90;
    }
}

// 5. Display final bill
void displayBill(const vector<Item>& cart)
{
    cout << "\n--- Final Bill ---\n";

    displayCart(cart);

    cout << fixed << setprecision(2);
    cout << "Updated Total: Rs. "
         << calculateTotal(cart) << endl;
}

int main()
{
    
}