# Product Management System

This is a simple C++ console-based product management system that allows users to store, manage, and analyze product data, including pricing, sales, and stock information.

## Features
- Add product details (serial number, quantity, total sales, pricing, and tax calculations).
- Calculate net price based on base price and tax percentage.
- Compare net price with maximum allowed price.
- Display products with low stock.
- Identify the product with the highest sales.
- Apply a 50% discount to products with low stock.
- Display all product details.
- Find products priced below a specific value.

## Usage Example
1. **Compile and Run the Program:**
   ```sh
   g++ product_management.cpp -o product_management
   ./product_management
   ```

2. **Enter the number of products:**
   ```
   Enter the number of products: 3
   ```

3. **Input product details for each product:**
   ```
   Data of product number #1
   Enter the product serial number: 101
   Enter the quantity of the product: 5
   Enter the total sales of the product: 1500
   Enter the base price of the product: 200
   Enter the taxes of the product: 10
   Enter the maximum price of the product: 250
   The net price of the product is: 220
   The product net price is accepted.
   ```

4. **Choose an operation from the menu:**
   ```
   Please enter a number:
   1 - Get products with quantity less than a specific value
   2 - Get the product with the highest sales
   3 - Apply 50% discount to products with quantity less than 6
   4 - Display all products
   5 - Get products under a specific price
   ```

5. **Example Actions:**
   - Find products with quantity less than a certain value:
     ```
     Enter the value of the quantity: 10
     Product: 101
     ```
   - Get the product with the highest sales:
     ```
     The product with the highest sales has the serial number: 103
     ```
   - Apply 50% discount to low-stock products:
     ```
     The new price of product 101 is: 110
     ```
   - Display all products:
     ```
     Product number #1
     Serial number: 101
     Quantity: 5
     Total sales: 1500
     Base price: 200
     Taxes: 10
     Maximum price: 250
     Net price: 220
     ```

6. **Exit or Continue:**
   ```
   Do you want to enter the data of another product? (y/n): n
   ```

## Future Improvements
- Implement file storage to save and retrieve product data.
- Add a graphical user interface (GUI) for better usability.
- Enhance error handling and input validation.

## Author
Developed by Ahmed Eid
