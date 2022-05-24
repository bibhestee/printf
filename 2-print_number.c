#include "main.h"
  2
  3 /**
  4  * print_number - print out a number in base 10
  5  * @num: pass the number as arg to the func
  6  * _printf - print out the character
  7  *
  8  * Return: returns the number of character printed
  9  */
 10
 11 int print_number(int num)
 12 {
 13         int i = 0;
 14
 15         if (num < 0)
 16         {
 17                 _putchar('-');
 18                 i++;
 19                 num = -num;
 20         }
 21
 22         if (num > 9)
 23         {
 24                 print_number(num / 10);
 25         }
 26         _putchar('0' + (num % 10));
 27         i++;
 28
 29         return (i);
 30
 31 }
