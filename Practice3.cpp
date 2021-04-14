#include <iostream>
#include <string>
using namespace std;

void inputNumProductsOredered(int orders)
{
    if (orders < 1)
    {
        cout << "Invalid Entry" << endl;
    }
}

void inputNumProductsInStock(int products)
{
    if (products < 0)
    {
        cout << "Invalid Entry" << endl;
    }
}

void inputProductPrice(float productPrice)
{
    if (productPrice < 0)
    {
        cout << "Invalid Entry" << endl;
    }
}

void inputSpecialServiceCharge(float serviceCharge)
{
    if (serviceCharge < 0)
    {
        cout << "Invalid Entry" << endl;
    }
}
void showProduct(float productPrice2, float serviceCharge2, int orders2, int productNumber2)
{
    float total;
    float subTotal;
    // if (orders2 > productNumber2) {
    //     cout << "Product number is greater than order number" << endl;
    //     orders2 = productNumber2;
    //     cout << "New order number is: " << orders2 << endl;
    // }
    subTotal = productPrice2 * orders2;
    int backOrder = orders2 - productNumber2;
    float finalserviceCharge = serviceCharge2 * 10;
    if (finalserviceCharge == 0)
    {
        total = subTotal;
    }
    else
    {
        total = subTotal + finalserviceCharge;
    }

    if (orders2 > productNumber2)
    {
        cout << "Order Summarry" << endl;
        cout << "==================" << endl;
        cout << "Products Ordered: " << orders2 << endl;
        cout << "Ready To Ship: " << productNumber2 << endl;
        cout << "On backorder: " << backOrder << endl;
        cout << " " << endl;
        cout << " " << endl;
        cout << "Subtotal: $" << subTotal << endl;
        cout << "Service Charges: $" << finalserviceCharge << endl;
        cout << "Totaldue: $" << total << endl;
    }
    else
    {
        cout << "Order Summarry" << endl;
        cout << "==================" << endl;
        cout << "Products Ordered: " << orders2 << endl;
        cout << "Ready To Ship: " << productNumber2 << endl;
        cout << " " << endl;
        cout << " " << endl;
        cout << "Subtotal: $" << subTotal << endl;
        cout << "Service Charges: $" << finalserviceCharge << endl;
        cout << "Totaldue: $" << total << endl;
    }
}

void getProductInfo()
{
    string answer2;
    do
    {
        int orders1, productNumber;
        float productPrice1;
        float serviceCharge1 = 0;
        string answer;
        cout << "Hello Welcome To Super Super Market" << endl;
        cout << "How Many Products Were Ordered" << endl;
        cin >> orders1;
        inputNumProductsOredered(orders1);
        cout << "How Many Products Are In Stock?" << endl;
        cin >> productNumber;
        inputNumProductsInStock(productNumber);
        cout << "What Is The Product Price?" << endl;
        cin >> productPrice1;
        inputProductPrice(productPrice1);
        cout << "Are Special Service Charges Required (Y or N)?" << endl;
        cin >> answer;
        if (answer == "y")
        {
            cout << "Enter The Amount Of Special Charges" << endl;
            cin >> serviceCharge1;
            inputSpecialServiceCharge(serviceCharge1);
        }
        showProduct(productPrice1, serviceCharge1, orders1, productNumber);
        cout << "Do You Wish To Do Another Order(y or n)" << endl;
        cin >> answer2;
    } while (answer2 == "y");
}

int main()
{
    getProductInfo();
    return 0;
}