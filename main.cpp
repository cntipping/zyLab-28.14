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
   << "q - Quit" << endl;
}

void ExecuteMenu(char option, ShoppingCart& theCart) {
   /* Type your code here */
   if (option == 'a')
   {
   }
   else if (option == 'd')
   {
   }
   else if (option == 'i')
   {
   }
   else if (option == 'o')
   {
   }
   else if (option == 'q')
   {
   }
   
}

int main() {
   /* Type your code here */
   cout << "Enter customer's name: " << endl;

   cout << "Enter today's date:" << endl;
   
   return 0;
}
