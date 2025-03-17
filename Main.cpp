#include<iostream>
using namespace std;
int main()
{
	float baseprice, taxes, maxprice, netprice;
	for (int i = 1; i <=3; i++)
	{
		cout << "Data of product number #" << i << endl;
		cout << "Enter the base price of the product: ";
		cin >> baseprice;
		cout << "Enter the taxes of the product: ";
		cin >> taxes;
		cout << "Enter the maximum price of the product: ";
		cin >> maxprice;
		netprice = baseprice + baseprice * (taxes / 100);
		cout << "The net price of the product is: " << netprice << endl;
		if (netprice > maxprice)
		{
			cout << "The product net price is accepted." << endl;
		}
		else {
			cout << "The product net price is not accepted." << endl;
		}
	}
	return 0;
}