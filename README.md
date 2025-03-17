# Production Line Manager

## Description
This C++ program manages product data in a factory's production lines. It reads data for four products, computes their net prices, and determines if each product's net price is accepted based on the maximum allowed price for its production line. Additionally, the program identifies products with low stock and determines the highest-selling product.

## Features
- Reads base price, taxes, and maximum price for four products.
- Computes the net price using the formula:
  ```
  net price = base price + (base price * (taxes / 100))
  ```
- Compares the computed net price with the maximum allowed price.
- Stores product serial numbers, quantities, and total sales.
- Identifies products with a quantity lower than a user-specified value.
- Determines the product with the highest total sales.

## Usage
1. Clone the repository:
   ```bash
   git clone https://github.com/your-username/repository-name.git
   ```
2. Navigate to the project directory:
   ```bash
   cd repository-name
   ```
3. Compile the program using a C++ compiler:
   ```bash
   g++ -o factory_checker factory_checker.cpp
   ```
4. Run the executable:
   ```bash
   ./factory_checker
   ```

## Example Output
```
Data of product number #1
Enter the product serial number: 101
Enter the quantity of the product: 50
Enter the total sales of the product: 1000
Enter the base price of the product: 100
Enter the taxes of the product: 10
Enter the maximum price of the product: 120
The net price of the product is: 110
The product net price is accepted.
...
Enter the value of the quantity: 40
Serial Numbers of the Products that have less quantity than 40:
Product: 103
The product with the highest sales has the serial number: 102
```

## Requirements
- C++ compiler (GCC, Clang, MSVC, etc.)
- Basic knowledge of C++ to modify the code if needed

## License
This project is open-source and available under the [MIT License](LICENSE).
