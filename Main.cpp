#include<iostream>
using namespace std;
#define prod 4

struct product
{
	float baseprice, taxes, maxprice, netprice, totalsales;
	int productserial, quantity;
} products[prod];

void price(product products[prod], int i)
{
	cout << "Enter the base price of the product: ";
	cin >> products[i].baseprice;
	cout << "Enter the taxes of the product: ";
	cin >> products[i].taxes;
	cout << "Enter the maximum price of the product: ";
	cin >> products[i].maxprice;
	products[i].netprice = products[i].baseprice + products[i].baseprice * (products[i].taxes / 100);
	cout << "The net price of the product is: " << products[i].netprice << endl;
	if (products[i].netprice > products[i].maxprice)
	{
		cout << "The product net price is accepted." << endl;
	}
	else {
		cout << "The product net price is not accepted." << endl;
	}
}

void products_data(product products[prod], int i)
{
	cout << "Data of product number #" << i + 1 << endl;
	cout << "Enter the product serial number: ";
	cin >> products[i].productserial;
	cout << "Enter the quantity of the product: ";
	cin >> products[i].quantity;
	cout << "Enter the total sales of the product: ";
	cin >> products[i].totalsales;
}

void lessthanqty(product products[prod], int qty)
{
	for (int i = 0; i < prod; i++)
	{
		if (products[i].quantity < qty)
		{
			cout << "Product: " << products[i].productserial << endl;
		}
	}
}

int highersalesproduct(product products[prod])
{
	int maxIndex = 0;
	for (int i = 1; i < prod; i++)
	{
		if (products[i].totalsales > products[maxIndex].totalsales)
		{
			maxIndex = i;
		}
	}
	return products[maxIndex].productserial;
}

int main()
{
	for (int i = 0; i < prod; i++)
	{
		products_data(products, i);
		price(products, i);
	}
	cout << "Serial Numbers of the Products that has less quantity than a value entered by the user: " << endl;
	cout << "Enter the value of the quantity: ";
	int qty;
	cin >> qty;
	lessthanqty(products, qty);
	int highestSalesSerial = highersalesproduct(products);
	cout << "The product with the highest sales has the serial number: " << highestSalesSerial << endl;
}
