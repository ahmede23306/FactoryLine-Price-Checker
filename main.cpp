#include<iostream>  
using namespace std;  
int prod, prices;

struct product  
{  
   double baseprice, taxes, maxprice, netprice, totalsales;  
   int productserial, quantity;  
};  

void price(product* products, int &i)  
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

void products_data(product* products, int &i)  
{  
   cout << "Data of product number #" << i + 1 << endl;  
   cout << "Enter the product serial number: ";  
   cin >> products[i].productserial;  
   cout << "Enter the quantity of the product: ";  
   cin >> products[i].quantity;  
   cout << "Enter the total sales of the product: ";  
   cin >> products[i].totalsales;  
}  

void lessthanqty(product* products, int &qty)  
{  
   for (int i = 0; i < prod; i++)  
   {  
       if (products[i].quantity < qty)  
       {  
           cout << "Product: " << products[i].productserial << endl;  
       }  
   }  
}  

void lessthanprice(product* products, int &price)
{
	for (int i = 0; i < prod; i++)
	{
		if (products[i].netprice < prices)
		{
			cout << "Product: " << products[i].productserial << endl;
		}
	}
}

int highersalesproduct(product* products)  
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
   cout << "Enter the number of products: ";  
   cin >> prod;  
   product* products = new product[prod];  

   for (int i = 0; i < prod; i++)  
   {  
       products_data(products, i);  
       price(products, i);  
   }  
   char continueChoice;  
   int highestSalesSerial; // Declare outside the switch-case  
   do {  
       cout << "Please enter a number:\nPress 1 to get products that have less quantity than a certain value\nPress 2 to Get Product with the highest sales\nPress 3 to Apply 50 % discount for products that have quantity less than 6\nPress 4 to Display all the products\nPress 5 to know products under specific price" << endl;  
       int choice;  
       cin >> choice;  
       int qty; // Declare qty outside the switch-case  
       switch (choice)  
       {  
       case 1:  
           cout << "Serial Numbers of the Products that has less quantity than a value entered by the user: " << endl;  
           cout << "Enter the value of the quantity: ";  
           cin >> qty;  
           lessthanqty(products, qty);  
           break;  
       case 2:  
           highestSalesSerial = highersalesproduct(products);  
           cout << "The product with the highest sales has the serial number: " << highestSalesSerial << endl;  
           break;  
       case 3:  
           for (int i = 0; i < prod; i++)  
           {  
               if (products[i].quantity < 6)  
               {  
                   products[i].netprice = products[i].netprice - products[i].netprice * 0.5;  
                   cout << "The new price of the product " << i + 1 << " with serial number " << products[i].productserial << " is: " << products[i].netprice << endl;  
               }  
           }  
           break;  
       case 4:  
           for (int i = 0; i < prod; i++)  
           {  
               cout << "Product number #" << i + 1 << endl;  
               cout << "Product serial number: " << products[i].productserial << endl;  
               cout << "Product quantity: " << products[i].quantity << endl;  
               cout << "Product total sales: " << products[i].totalsales << endl;  
               cout << "Product base price: " << products[i].baseprice << endl;  
               cout << "Product taxes: " << products[i].taxes << endl;  
               cout << "Product maximum price: " << products[i].maxprice << endl;  
               cout << "Product net price: " << products[i].netprice << endl;  
           }
       case 5:
           cout << "Serial Numbers of the Products that has less price than a value entered by the user: " << endl;
		   cout << "Enter the value of the price: ";
		   cin >> prices;
		   lessthanprice(products, prices);
           break;  
       default:  
           cout << "Invalid choice" << endl;  
           break;
       }
       cout << "Do you want to enter the data of another product? (y/n): ";  
       cin >> continueChoice;
   } while (continueChoice == 'y' || continueChoice == 'Y');
   delete[] products;
}