// Git hub link: https://github.com/cntipping/zyLab-28.14
// Teammates: Cecilia Tipping and Mollie Hamman

#include <iostream>
#include <iomanip>
using namespace std;

#include "ShoppingCart.h"

void PrintMenu() {
   /* Type your code here */
   cout << "MENU" << endl
   << "a - Add item to cart" << endl
   << "d - Remove item from cart" << endl
   << "c - Change item quantity" << endl
   << "i - Output items' descriptions" << endl
   << "o - Output shopping cart" << endl
   << "q - Quit" << endl << endl;
}

void ExecuteMenu(char option, ShoppingCart& theCart) {
   /* Type your code here */
   if (option == 'a')
   {
      string itemName, itemDescription;
      int itemPrice, itemQuantity;
      cin.ignore();
      cout << "Enter the item name:" << endl;
      getline(cin, itemName);
      cout << "Enter the item description:" << endl;
      getline(cin, itemDescription);
      cout << "Enter the item price:" << endl;
      cin >> itemPrice;
      cout << "Enter the item quantity:" << endl;
      cin >> itemQuantity;

      ItemToPurchase item(itemName, itemDescription, itemPrice, itemQuantity);
      theCart.AddItem(item);

   }
   else if (option == 'd')
   {
      string itemName;
      cout  << "REMOVE ITEM FROM CART" << endl
            << "Enter name of item to remove: " << endl;
      cin >> itemName;
      theCart.RemoveItem(itemName);
   }
   else if (option == 'c')
   {
      string itemName;
      int newQuantity;

      cout << "CHANGE ITEM QUANTITY" << endl
      << "Enter the item name: " << endl;
      cin >> itemName;
      cout << "Enter the new quantity:" << endl;
      cin >> newQuantity;
      ItemToPurchase item;
      item.SetName(itemName);
      item.SetQuantity(newQuantity);
      theCart.ModifyItem(item);
   }
   else if (option == 'i')
   {
      theCart.PrintDescriptions();
   }
   else if (option == 'o')
   {
      cout << "OUTPUT SHOPPING CART" << endl;
      theCart.PrintTotal();
   }
   else if (option == 'q')
   {
      return;
   }
   
}

int main() {
   /* Type your code here */
   string custName;
   string date;
   char choice;

   cout << "Enter customer's name:" << endl;
   getline(cin, custName);
   cout << "Enter today's date:" << endl << endl;
   getline(cin, date);
   cout << "Customer name: " << custName << endl;
   cout << "Today's date: " << date << endl << endl;

   ShoppingCart cart(custName, date);

   while (choice != 'q')
   {
      PrintMenu();

      bool validChoice = false;
      while (!validChoice)
      {
         cout << "Choose an option:" << endl;
         cin >> choice;
         if(choice == 'a' || choice == 'd' 
            || choice == 'c' || choice == 'i' 
            || choice == 'o' || choice == 'q')
         {
            validChoice = true;
         }
      }

      ExecuteMenu(choice, cart);
   }

   return 0;
}
