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
    
}
void ShoppingCart::RemoveItem(string name){

}
      
void ShoppingCart::ModifyItem(ItemToPurchase item){

}
      
int ShoppingCart::GetNumItemsInCart(){

}
double ShoppingCart::GetCostOfCart(){

}
      
void ShoppingCart::PrintTotal(){

}
void ShoppingCart::PrintDescriptions(){

}
