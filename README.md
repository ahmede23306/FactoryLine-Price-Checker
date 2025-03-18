# Product Management System

This is a C++ program for managing product inventory, tracking daily sales, and analyzing sales performance over a month. The system allows users to enter product details, analyze sales data, and apply discounts.

## Features

- Add product details (serial number, quantity, price, daily sales for the last month).
- Display products with a quantity less than a specified value.
- Display products under a specific price.
- Identify the product with the highest sales.
- Apply a 50% discount for products with a quantity less than 6.
- Display all product details.
- Calculate the average monthly sales for each product.

## Requirements

- C++ compiler (GCC, MSVC, Clang, etc.)

## How to Compile and Run

1. Clone this repository:
   ```sh
   git clone https://github.com/your-username/product-management.git
   cd product-management
   ```
2. Compile the program:
   ```sh
   g++ -o product_management main.cpp
   ```
3. Run the executable:
   ```sh
   ./product_management
   ```

## Usage

1. Enter product details when prompted.
2. Choose an operation from the menu:
   - `1` → Display products with a quantity less than a specified value.
   - `2` → Identify the product with the highest sales.
   - `3` → Apply a 50% discount to low-stock products.
   - `4` → Display all product details.
   - `5` → Display products under a specified price.
   - `6` → Calculate the average monthly sales for each product.
3. Follow the prompts to interact with the system.

## Example Interaction
```
Data of product number #1
Enter the product serial number: 101
Enter the quantity of the product: 5
Enter the price of the product: 50.5
...
Enter your choice: 2
The product with the highest sales is: 101
```

## License
This project is licensed under the MIT License.

## Author
Ahmed Eid
