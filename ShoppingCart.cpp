/* Type your code here */
#include <iostream>
using namespace std;

#include "ShoppingCart.h"
#include "ItemToPurchase.h"

ShoppingCart::ShoppingCart(){
    customerName = "none";
    currentDate = "January 1, 2016";
}
ShoppingCart::ShoppingCart(string name, string date){
    customerName = name;
    currentDate = date;
}
      
string ShoppingCart::GetCustomerName() const{
    return customerName;
}
string ShoppingCart::GetDate() const{
    return currentDate;
}

void ShoppingCart::AddItem(ItemToPurchase item){
    cartItems.push_back(item);
}
void ShoppingCart::RemoveItem(string name){
  bool itemFound = false;
  for (auto it = cartItems.begin(); it != cartItems.end(); ++it) {
    if (it->GetName() == name) {
      cartItems.erase(it);
      itemFound = true;
      cout << endl;
      break;
    }
  }
  if (!itemFound) {
    cout << "Item not found in cart. Nothing removed." << endl << endl;
  }
}
      
void ShoppingCart::ModifyItem(ItemToPurchase item){
    for(i = 0; i < cartItems.size(); i++){
        ItemToPurchase& currItem = cartItems.at(i);

        if(cartItems.at(i).GetName() == item.GetName() ){
            if(item.GetDescription() != "none"){
                currItem.SetDescription(item.GetDescription());
            }
            else if(item.GetPrice() != 0){
                currItem.SetPrice(item.GetPrice());
            }
            else if(item.GetQuantity() != 0){
                currItem.SetQuantity(item.GetQuantity());
            }
            else{
                cout << "Item not found in cart. Nothing modified." << endl;
            }
        }
    }
        
}
      
int ShoppingCart::GetNumItemsInCart(){
    int totalQuantity = 0;
    for (i = 0; i < cartItems.size(); i++)
    {
        totalQuantity += cartItems[i].GetQuantity();
    }
    return totalQuantity;
}
double ShoppingCart::GetCostOfCart(){
    double total = 0;
    for(i = 0; i < cartItems.size(); i++){
        total += cartItems[i].GetQuantity() * cartItems[i].GetPrice();
    }
    return total;
}
      
void ShoppingCart::PrintTotal(){

    cout << GetCustomerName() << "'s Shopping Cart - " << GetDate() << endl;
    cout << "Number of Items: " << GetNumItemsInCart() << endl;
    cout << endl;
    if(!cartItems.empty()){
        for(i = 0; i < cartItems.size(); i++){
            cartItems[i].PrintItemCost();
        }

    }
    else{
        cout << "SHOPPING CART IS EMPTY" << endl;
        
    }
    cout << endl << "Total: $" << GetCostOfCart() << endl << endl;
}

void ShoppingCart::PrintDescriptions(){
    if(!cartItems.empty()){
        cout << GetCustomerName() << "'s Shopping Cart - " << GetDate() << endl;
        cout << endl;
        cout << "Item Descriptions" << endl;
        for(i =0; i < cartItems.size(); i++){
            cartItems[i].PrintItemDescription();
        }
    }
    else{
        cout << "SHOPPING CART IS EMPTY" <<  endl;
    }
}
