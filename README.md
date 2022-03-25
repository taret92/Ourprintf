# project printf

## pressente by: ivan ocampo & kevin ramirez

### PROYECTO _PRINTF 

What is Printf? printf is a function of the <stdio.h> library of the C language and its main utility is to print data on the screen, be it Character, String, Integer and Decimal numbers. Our _printf function emulates this same function. It was created from structures, variadic functions, pointers and arrays. Applying learned themes and logic obtained along the process, in case of our parameter %d and %i, we use the same function since they share the same type of output, their difference is in the input.


``sintaxis``

````
Printf("Parameters", VariableName)
````

``Parametros``
````
"%c": Print character. print a Character
"%s": Print String.    print String of characters
"%d": Print Integer.   print Signed decimal integer
"%i": Print Interger.  print Signed decimal integer
````
### Examples
````
1. Printing the string of chars "Hello, friends":
use: print_f("hello %s", friends);
Output: hello friends
````
````
2. Printing an integer number:
use: print_f("the sum between 2 + 2 is %d", 4);
output: the sum between 2 + 2 is 4.
````
````
3. printing a caracter:
use: print_f("the first letter of the alphabet is %c", A);
output: the first letter of the alphabet is A.
````


![Image text](https://github.com/taret92/printf/blob/main/Diagrama%20Printf.jpg)

 
