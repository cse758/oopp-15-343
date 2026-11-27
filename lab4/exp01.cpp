#include <iostream>
#include <vector>
using namespace std;

class Item {
public:
    string name;
    int quantity;
    double price;
};

int main() {
    vector<Item> cart = {
        {"Laptop", 1, 55000},
        {"Mouse", 2, 500},
        {"Keyboard", 1, 1500}
    };

    cout << "Items added to cart successfully!";
    return 0;
}