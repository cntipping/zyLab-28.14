#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

/* Type your code here */

ItemToPurchase::ItemToPurchase(string name, int price, int qty){
  itemName = name;
  ItemPrice = price;
  itemQuantity = qty;
}

// setters
void ItemToPurchase::SetName(string name){
  itemName = name;
}
void ItemToPurchase::SetPrice(int price){
  ItemPrice = price;
}
void ItemToPurchase::SetQuantity(int qty){
  itemQuantity = qty;
}

// getters
string ItemToPurchase::GetName(){
  return itemName;
}
int ItemToPurchase::GetPrice(){
  return ItemPrice;
}
int ItemToPurchase::GetQuantity(){
  return itemQuantity;
}
