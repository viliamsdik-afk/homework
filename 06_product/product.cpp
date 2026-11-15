
#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    string name_;
    double price_;
    int count_;

public:
    Product(string name, double price, int count) {
        name_ = name;
        price_ = price;
        count_ = count;
    }

    double total() {
        return price_ * count_;
    }

    bool sell(int n) {
        if (n <= 0 || n > count_) {
            cout << "Sale failed! Not enough products.\n";
            return false;
        }

        count_ -= n;
        cout << "Sale successful!\n";
        return true;
    }

    void restock(int n) {
        if (n > 0) {
            count_ += n;
            cout << "Products restocked!\n";
        }
    }

    void print() {
        cout << "Product: " << name_ << endl;
        cout << "Price: " << price_ << endl;
        cout << "Count: " << count_ << endl;
        cout << "Total value: " << total() << endl;
    }
};

int main() {
    Product product("Laptop", 50000, 5);

    product.print();

    cout << "\nSelling 3 products:\n";
    product.sell(3);
    product.print();

    cout << "\nSelling 5 products:\n";
    product.sell(5);

    cout << "\nRestocking 4 products:\n";
    product.restock(4);
    product.print();

    return 0;
}

