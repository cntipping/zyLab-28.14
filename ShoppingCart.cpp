/* Type your code here */
#include <iostream>
using namespace std;

#include "ShoppingCart.h"

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
    for(i = 0; i < cartItems.size(); i++){
        if(cartItems[i].GetName() == name){
            cartItems.push_back(cartItems.at(i));
        }
    }
}
      
void ShoppingCart::ModifyItem(ItemToPurchase item){
    if(cartItems[item]){
        if(cartItems[item].GetDescription() != "none" &&
        cartItems[item].GetPrice() != 0 &&
        cartItems[item].GetQuantity() != 0){
            cin >> itemDescription;
            cartItems[item].SetDescription(itemDescription);
            cin >> itemPrice;
            cartItems[item].SetPrice(itemPrice);
            cin >> itemQuantity;
            cartItems[item].SetQuantity(itemQuantity);
        }
    }
    else{
        cout << "Item not found in cart. Nothing modified."
    }
}
      
int ShoppingCart::GetNumItemsInCart(){
    return cartItems.size();
}
double ShoppingCart::GetCostOfCart(){
    
}
      
void ShoppingCart::PrintTotal(){

}
void ShoppingCart::PrintDescriptions(){

}
