/*#Create class product. Data members are product_id, product_name, unit_price. Member functions are getData(). [Getting input from user and assigning values to data members. ] and putData() [Display the product information.]. Call both member function for two objects.*/
#include <iostream>
using namespace std;

class Product {
    int product_id;
    string product_name;
    float unit_price;
public:
    void getData() 
    {
        cout << "Enter product id: ";
        cin >> product_id;
        cout << "Enter product name: ";
        cin >> product_name;
        cout << "Enter unit price: ";
        cin >> unit_price;
    }
    void putData() {
        cout << "Product id: " << product_id << endl;
        cout << "Product name: " << product_name << endl;
        cout << "Unit price: " << unit_price << endl;
    }
};

int main() {
    Product p1, p2;
    cout<<"Koradiya Khush"<< endl;
    cout<<"ER NO. 220130318018"<< endl;
    cout << "Enter details for product 1:\n";
    p1.getData();
    cout << "Enter details for product 2:\n";
    p2.getData();
    cout << "Details of product 1:\n";
    p1.putData();
    cout << "Details of product 2:\n";
    p2.putData();
    return 0;
}