# FactoryLine Price Checker

## Description
This C++ program calculates the net price of products in a factory's production lines. It reads data for three products, computes their net prices, and determines if each product's net price is accepted based on the maximum allowed price for its production line.

## Features
- Reads base price, taxes, and maximum price for three products.
- Computes the net price using the formula:
  ```
  net price = base price + (base price * (taxes / 100))
  ```
- Compares the computed net price with the maximum allowed price.
- Outputs whether the product's net price is accepted or not.

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
Enter the base price of the product: 100
Enter the taxes of the product: 10
Enter the maximum price of the product: 120
The net price of the product is: 110
The product net price is accepted.
```

## Requirements
- C++ compiler (GCC, Clang, MSVC, etc.)
- Basic knowledge of C++ to modify the code if needed

## License
This project is open-source and available under the [MIT License](LICENSE).
