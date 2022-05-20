C - PROGRAMMING
A group project on building a copy of the built-in function ( printf() )

GROUP MEMBERS:
- ABDULLAHI, Abdulbasit
- THOMAS, Christiana

Pseudocode

First task
- Program start
- Declare a variable to store the arguments provided by the user
- Initialize the variable to the last argument before the elipse variable

- Initialize the va_list and va_start argument to declare and start the argument list
- Loop through the list of arguments provided while not null ('\0')
- Loop through the argument one at a time
- Check if the argument does not contain a format specifier
...if not, print as seen
- If the argument contains a format specifier(preceded by % sign)
- Check the format specifier
...if its c
....get the next argument and print the character it contains
...if its s
....get the next argument and print the string it contains
...if its %
....print %

Second task
- Check the format specifier
...if its d (decimal)
....get the next argument and print the value it contains in base 10
...if its i
....get the next argument
....detect the base
....convert to base 10 if needed

Third task
- Check the format specifier
...if its b (binary )
....get the next argument and convert the unsigned int value it contains to binary then print the value

Fourth task
- Check the format specifier
...if its u (unsigned integer)
....get the next argument and print the unsigned int value it contains
......if not unsigned, return error
...if its o (Octal number)
....get the next argument and convert the value it contains to octal base then print the value
...if its x (hexadecimal number - lower case)
....get the next argument and convert the value it contains to lower case hexadecimal number.
...if its X (hexadecimal number - Upper case)
....get the next argument and convert the value it contains to Upper case hexadecimal number.
