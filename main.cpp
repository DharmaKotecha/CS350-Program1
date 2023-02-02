// Name: Dharma Kotecha
// Date: 02/02/2023
// Program that implements a class for items and to
// control basic operations of a vending machine

#include <iostream>
#include <string>
#include "Item.h"
#include "VendingMachine.h"

using namespace std;

int main()
{
    VendingMachine myMachine("Soda Machine");

    Item item1("coke", 32 , 1.50);
    myMachine.stockItem(item1);

    Item item2("pepsi", 1, 1.40);
    myMachine.stockItem(item2);

    string itemName;
    float money;
    do
    {
        cout << endl;
        myMachine.showItems();
        cout << "Enter the name of your selection: ";
        cin >> itemName;

        if (myMachine.selectItem(itemName)) {
            cout << "Enter your money: ";
            cin >> money;
            myMachine.getItem(itemName,money);
        }
    }
    while (true);
}
