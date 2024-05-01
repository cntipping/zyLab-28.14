#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

/* Type your code here */
ItemToPurchase::ItemToPurchase()
{
    itemName = "none";
    itemDescription = "none";
    itemPrice = 0;
    itemQuantity = 0;
}

ItemToPurchase::ItemToPurchase(string name, string description, int price, int quantity)
{
    itemName = name;
    itemDescription = description;
    itemPrice = price;
    itemQuantity = quantity;
}

// setters
void ItemToPurchase::SetName(string name)
{
    itemName = name;
}
void ItemToPurchase::SetDescription(string description)
{
    itemDescription = description;
}
void ItemToPurchase::SetPrice(int price)
{
    itemPrice = price;
}
void ItemToPurchase::SetQuantity(int quantity)
{
    itemQuantity = quantity;
}

// getters
string ItemToPurchase::GetName() const
{
    return itemName;
}
string ItemToPurchase::GetDescription() const
{
    return itemDescription;
}
int ItemToPurchase::GetPrice() const
{
    return itemPrice;
}
int ItemToPurchase::GetQuantity() const
{
    return itemQuantity;
}

// Print funcitons

void ItemToPurchase::PrintItemCost()
{
    int itemTotal = itemQuantity * itemPrice;
    cout << itemName << " "
         << itemQuantity << " @ $"
         << itemPrice << " = $"
         << itemTotal << endl;
}
void ItemToPurchase::PrintItemDescription()
{
    cout << itemName << ": " << itemDescription << endl;
}
