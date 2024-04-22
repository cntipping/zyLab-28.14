# zyLab-28.14

Step 1: Extend the ItemToPurchase class per the following specifications:
Parameterized constructor to assign item name, item description, item price, and item quantity (default values of 0). (1 pt)
Public member functions
SetDescription() mutator & GetDescription() accessor (2 pts)
PrintItemCost() - Outputs the item name followed by the quantity, price, and subtotal
PrintItemDescription() - Outputs the item name and description
Private data members
string itemDescription - Initialized in default constructor to "none"

Step 2: Build three new files:
ShoppingCart.h - Class declaration
ShoppingCart.cpp - Class definition
main.cpp - main() function (Note: main()'s functionality differs from the previous program.)
Build the ShoppingCart class with the following specifications.

Default constructor
Parameterized constructor which takes the customer name and date as parameters (1 pt)
Private data members
string customerName - Initialized in default constructor to "none"
string currentDate - Initialized in default constructor to "January 1, 2016"
vector < ItemToPurchase > cartItems
Public member functions
GetCustomerName() accessor (1 pt)
GetDate() accessor (1 pt)
AddItem()
Adds an item to cartItems vector. Has parameter ItemToPurchase. Does not return anything.
RemoveItem()
Removes item from cartItems vector. Has a string (an item's name) parameter. Does not return anything.
If item name cannot be found, output a message: Item not found in cart. Nothing removed.
ModifyItem()
Modifies an item's description, price, and/or quantity. Has parameter ItemToPurchase. Does not return anything.
If item can be found (by name) in cart, check if parameter has default values for description, price, and quantity. If not, modify item in cart.
If item cannot be found (by name) in cart, output a message: Item not found in cart. Nothing modified.
GetNumItemsInCart() (2 pts)
Returns quantity of all items in cart. Has no parameters.
GetCostOfCart() (2 pts)
Determines and returns the total cost of items in cart. Has no parameters.
PrintTotal()
Outputs total of objects in cart.
If cart is empty, output a message: SHOPPING CART IS EMPTY
PrintDescriptions()
Outputs each item's description.
If cart is empty, output a message: SHOPPING CART IS EMPTY

Step 3: In main(), prompt the user for a customer's name and today's date. Output the name and date. Create an object of type ShoppingCart. (1 pt)

Step 4: Implement the PrintMenu() function
PrintMenu()
Prints the following menu of options to manipulate the shopping cart. (1 pt)

Step 5: Implement the menu options
Step 5a: In main(), call PrintMenu() and prompt for the user's choice of menu options. Each option is represented by a single character.

If an invalid character is entered, continue to prompt for a valid choice. When a valid option is entered, execute the option by calling ExecuteMenu(). Then, print the menu and prompt for a new option. Continue until the user enters 'q'. (1 pt)
Hint: Implement Quit before implementing other options.

Step 5b: Implement "Output shopping cart" menu option in ExecuteMenu(). (3 pts)

Step 5c: Implement "Output items' descriptions" menu option in ExecuteMenu(). (2 pts)

Step 5d: Implement "Add item to cart" menu option in ExecuteMenu(). (3 pts)

Step 5e: Implement "Remove item from cart" menu option in ExecuteMenu(). (4 pts)

Step 5f: Implement "Change item quantity" menu option in ExecuteMenu(). (5 pts)
Hint: Make new ItemToPurchase object and use ItemToPurchase modifiers before using ModifyItem() method.
