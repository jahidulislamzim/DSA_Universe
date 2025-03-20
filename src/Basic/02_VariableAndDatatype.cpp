#include <bits/stdc++.h>  // Includes most of the C++ standard library headers

using namespace std;  // Use the standard namespace

int main() {
    // ------------------------- DECLARING AND INITIALIZING VARIABLES -------------------------
    
    // Integer variable (Whole numbers): Declaring and initializing at once
    int num = 10;  // Declaration and initialization of 'num' with value 10
    
    // Floating-point variable (Single precision): Declaring and initializing at once
    float height = 5.9f;  // Declaration and initialization of 'height' with value 5.9f
    
    // Double precision floating-point variable: Declaring and initializing at once
    double weight = 70.5;  // Declaration and initialization of 'weight' with value 70.5
    
    // Character variable (Single character): Declaring and initializing at once
    char grade = 'A';  // Declaration and initialization of 'grade' with value 'A'
    
    // String variable (Sequence of characters): Declaring and initializing at once
    string name = "Alice";  // Declaration and initialization of 'name' with value "Alice"
    
    // Boolean variable (True or false): Declaring and initializing at once
    bool isEmployed = true;  // Declaration and initialization of 'isEmployed' with value true
    
    // Constant variable (A fixed value that can't be changed): Declaring and initializing at once
    const int MAX_VALUE = 100;  // Declaration and initialization of constant 'MAX_VALUE' with value 100

    // ---------------------------- OUTPUT VARIABLES -------------------------
    // Displaying values of the variables
    cout << "Integer variable (num): " << num << endl;
    cout << "Floating-point variable (height): " << height << " feet" << endl;
    cout << "Double precision variable (weight): " << weight << " kg" << endl;
    cout << "Character variable (grade): " << grade << endl;
    cout << "String variable (name): " << name << endl;
    cout << "Boolean variable (isEmployed): " << (isEmployed ? "Yes" : "No") << endl;
    cout << "Constant variable (MAX_VALUE): " << MAX_VALUE << endl;

    // ---------------------------- TYPE CASTING ----------------------------

    // 1. C-style Casting: Explicit type conversion using parentheses
    float numAsFloat = (float)num;  // Casting int to float (C-style)
    cout << "C-style Casting (int to float): " << num << " as float: " << numAsFloat << endl;

    // 2. C-style Casting: Converting a float to an int (discarding the decimal part)
    float pi = 3.14159;
    int piAsInt = (int)pi;  // Casting float to int (decimal part is discarded)
    cout << "C-style Casting (float to int): " << pi << " as int: " << piAsInt << endl;

    // -------------------------- AUTOMATIC TYPE CASTING --------------------------
    // Implicit or Automatic Type Conversion (done by the compiler)

    // Example 1: Integer to Float
    int a = 7;
    float b = a;  // Implicit casting (integer to float)
    cout << "Automatic casting (int to float): " << a << " as float: " << b << endl;

    // Example 2: Float to Double
    float heightInFeet = 5.9f;
    double heightInMeters = heightInFeet;  // Implicit casting (float to double)
    cout << "Automatic casting (float to double): " << heightInFeet << " as double: " << heightInMeters << endl;

    // Example 3: Integer to Double
    int num1 = 10;
    double result = num1;  // Implicit casting (int to double)
    cout << "Automatic casting (int to double): " << num1 << " as double: " << result << endl;

    // ---------------------------- PERFORMING OPERATIONS ----------------------
    // Performing operations with variables (e.g., addition)
    int num2 = 10;
    int sum = num + num2;
    cout << "Sum of " << num << " and " << num2 << ": " << sum << endl;

    // Demonstrate using a constant in operation
    cout << "The maximum allowed value is: " << MAX_VALUE << endl;

    // ------------------------- DISPLAYING WITH PRECISION -------------------------
    // Display floating-point numbers with set precision
    cout << fixed << setprecision(3);  // Set precision to 3 decimal places for floats/doubles
    
    // Showing floating point with precision
    cout << "Displaying precision - float value: " << height << endl;
    cout << "Displaying precision - double value: " << weight << endl;

    return 0;  // Return 0 to indicate successful execution
}
