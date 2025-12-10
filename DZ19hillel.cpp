#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Product
{
    string name;
    double price;
};

void showMainMenu();
void addProduct(vector<Product>& aProducts);
void showListProduct(const vector<Product>& aProducts);
void addYourProduct(vector<Product>& aProducts);
void buyProduct(vector<Product>& aProducts);

int main()
{
    int Active_AddProduct = 1;
    int Active_ListProduct = 2;
    int Active_AddYourProduct = 3;
    int Active_BuyProduct = 4;
    int Active_Exit = 5;

    vector<Product> products;
    int choice;

    do
    {
        showMainMenu();
        
        cout << "Choose an option: ";
        cin >> choice;

        if (choice == Active_AddProduct)
        {
            addProduct(products);
        }
        else if (choice == Active_ListProduct)
        {
            showListProduct(products);
        }
        else if (choice == Active_AddYourProduct)
        {
            addYourProduct(products);
        }
        else if (choice == Active_BuyProduct)
        {
            buyProduct(products);
        }
        else
        { 
             cout << "Invalid active.\n";
        }

    } while (choice != Active_Exit);

    return 0;
}

void showMainMenu()
{
    cout << "1. Add product\n"
         << "2. List products\n"
         << "3. Add your product\n"
         << "4. Buy product\n"
         << "5. Exit\n";
}

void showListProduct(const vector<Product>& aProducts)
{
    cout << "Products:\n";
    for (size_t i = 0; i < aProducts.size(); ++i)
    {
        cout << i + 1 << ". " << aProducts[i].name << " - $" << aProducts[i].price << "\n";
    }
}

void addProduct(vector<Product>& aProducts)
{
    Product newProduct;
    
    cout << "Enter product name: ";
    cin >> newProduct.name;
    cout << "Enter product price: ";
    cin >> newProduct.price;

    aProducts.push_back(newProduct);
}

void addYourProduct(vector<Product>& aProducts)
{
    cout << "Your choice feature is under development.\n";
    
    Product newProduct;

    cout << "Enter your product name: ";
    cin >> newProduct.name;
    cout << "Enter your product price: ";
    cin >> newProduct.price;

    aProducts.push_back(newProduct);
}

void buyProduct(vector<Product>& aProducts)
{
    if (aProducts.empty())
    {
        cout << "No products to buy.\n";
        return;
    }

    cout << "Enter product number to buy: ";
    int num;
    cin >> num;

    if (num < 1 || num > static_cast<int>(aProducts.size()))
    {
        cout << "Invalid product number.\n";
        return;
    }

    cout << "Choose payment method:\n";
    cout << "1. Money\n2. Credit card\nChoose: ";
    int pay;
    cin >> pay;

    if (pay == 1)
    {
        cout << "You paid with MONEY.\n";
    }
    else if (pay == 2)
    {
        cout << "You paid with CREDIT CARD.\n";
    }
    else
    {
        cout << "Invalid payment method.\n";
        return;
    }

    cout << "You bought: " << aProducts[num - 1].name << " for $" << aProducts[num - 1].price << "\n";

    aProducts.erase(aProducts.begin() + num - 1);
}