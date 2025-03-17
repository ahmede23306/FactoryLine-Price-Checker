# Product Management System

## Description
This C++ program allows users to manage a list of products by storing and processing information about their pricing, quantities, and sales. It includes functionalities such as:

- Inputting product details (serial number, quantity, sales, prices, etc.).
- Calculating the net price based on base price and taxes.
- Checking if the net price exceeds the maximum allowed price.
- Finding products with lower quantities than a given threshold.
- Identifying the product with the highest sales.
- Applying a 50% discount to products with low stock.
- Displaying all product details.
- Listing products with prices below a specified value.

## Features
- **Dynamic Memory Allocation**: The program dynamically allocates memory for an array of products based on user input.
- **Menu-Driven Interface**: Users can interactively choose from different operations.
- **Error Handling**: Ensures proper input validation and control flow.

## How to Run
1. Compile the program using a C++ compiler (e.g., g++):
   ```sh
   g++ -o product_manager main.cpp
   ```
2. Run the executable:
   ```sh
   ./product_manager
   ```
3. Follow the on-screen instructions to input product details and select operations.

## Example Usage
```
Enter the number of products: 2
Data of product number #1
Enter the product serial number: 101
Enter the quantity of the product: 10
Enter the total sales of the product: 500
Enter the base price of the product: 50
Enter the taxes of the product: 10
Enter the maximum price of the product: 70
The net price of the product is: 55
The product net price is accepted.
...
```

## Requirements
- C++ compiler (GCC, Clang, MSVC, etc.)
- Standard C++ Libraries

## Future Improvements
- Implement file handling to save and load product data.
- Add a graphical user interface (GUI) for better interaction.
- Optimize the structure using object-oriented programming (OOP) principles.

## License
This project is open-source and available under the MIT License.
