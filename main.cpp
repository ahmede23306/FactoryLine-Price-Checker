#include <iostream>
using namespace std;

int qty, prices;
const int prod = 4;

struct product {
    int productserial, quantity;
    double price;
    int dailysales[30] = { 0 };
};

product* products = new product[prod];

void products_data(product* products) {
    for (int x = 0; x < prod; x++) {
        cout << "Data of product number #" << x + 1 << endl;
        cout << "Enter the product serial number: ";
        cin >> products[x].productserial;
        cout << "Enter the quantity of the product: ";
        cin >> products[x].quantity;
        cout << "Enter the price of the product: ";
        cin >> products[x].price;
        cout << "Enter the daily sales of the last month of the product: ";
        for (int n = 0; n < 30; n++) {
            cout << "Day #" << n + 1 << " sales: ";
            cin >> products[x].dailysales[n];
        }
    }
}

void lessthanqty(product* products, int& qty) {
    for (int i = 0; i < prod; i++) {
        if (products[i].quantity < qty) {
            cout << "Product: " << products[i].productserial << endl;
        }
    }
}

void lessthanprice(product* products, int& price) {
    for (int i = 0; i < prod; i++) {
        if (products[i].price < prices) {
            cout << "Product: " << products[i].productserial << endl;
        }
    }
}

void highersales(product* products, int& highestSalesSerial) {
    int highestSales = 0;
    for (int i = 0; i < prod; i++) {
        int totalSales = 0;
        for (int j = 0; j < 30; j++) {
            totalSales += products[i].dailysales[j];
        }
        if (totalSales > highestSales) {
            highestSales = totalSales;
            highestSalesSerial = products[i].productserial;
        }
    }
    cout << "The product with the highest sales is: " << highestSalesSerial << endl;
}

void totalsalesofeachproduct(product* products, int& i) {
    int totalSales = 0;
    for (int j = 0; j < 30; j++) {
        totalSales += products[i].dailysales[j];
    }
    cout << "The total sales of product " << i + 1 << " is: " << totalSales << endl;
}

void dailysalespreview(product* products, int& i) {
    for (int j = 0; j < 30; j++) {
        cout << "Day #" << j + 1 << ": " << products[i].dailysales[j] << endl;
    }
}

void avaragemonthlysales(product* products) {
    for (int i = 0; i < prod; i++) {
        int totalSales = 0;
        for (int j = 0; j < 30; j++) {
            totalSales += products[i].dailysales[j];
        }
        cout << "The average monthly sales for product " << i + 1 << " is: " << static_cast<double>(totalSales) / 30 << endl;
    }
}

void selectingoperation(product* products, int& qty) {
    char continueChoice;
    int highestSalesSerial;
    do {
        cout << "Please enter a number:" << endl;
        cout << "Press 1 to get products that have less quantity than a certain value" << endl;
        cout << "Press 2 to Get Product with the highest sales" << endl;
        cout << "Press 3 to Apply 50 % discount for products that have quantity less than 6" << endl;
        cout << "Press 4 to Display all the products" << endl;
        cout << "Press 5 to know products under specific price" << endl;
        cout << "Press 6 to get the average monthly sales for the products" << endl;
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;
        switch (choice) {
        case 1:
            cout << "Serial Numbers of the Products that has less quantity than a value entered by the user: " << endl;
            cout << "Enter the value of the quantity: ";
            cin >> qty;
            lessthanqty(products, qty);
            break;
        case 2:
            highersales(products, highestSalesSerial);
            break;
        case 3:
            for (int i = 0; i < prod; i++) {
                if (products[i].quantity < 6) {
                    products[i].price = products[i].price - products[i].price * 0.5;
                    cout << "The new price of the product " << i + 1 << " with serial number " << products[i].productserial << " is: " << products[i].price << endl;
                }
            }
            break;
        case 4:
            for (int i = 0; i < prod; i++) {
                cout << "Product number #" << i + 1 << endl;
                cout << "Product serial number: " << products[i].productserial << endl;
                cout << "Product quantity: " << products[i].quantity << endl;
                cout << "Product daily sales: " << endl;
                dailysalespreview(products, i);
                cout << "The total sales: " << endl;
                totalsalesofeachproduct(products, i);
                cout << "Product price: " << products[i].price << endl;
            }
            break;
        case 5:
            cout << "Serial Numbers of the Products that has less price than a value entered by the user: " << endl;
            cout << "Enter the value of the price: ";
            cin >> prices;
            lessthanprice(products, prices);
            break;
        case 6:
            avaragemonthlysales(products);
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }
        cout << "Do you want to enter the data of another product? (y/n): ";
        cin >> continueChoice;
    } while (continueChoice == 'y' || continueChoice == 'Y');
}

int main() {
    products_data(products);
    selectingoperation(products, qty);
    delete[] products;
    return 0;
}