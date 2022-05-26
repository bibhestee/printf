<h1> PRINTF FUNCTION </h1>
A group project on building a copy of the built-in function ( printf() )

GROUP MEMBERS:
- ABDULLAHI, Abdulbasit
- THOMAS, Christiana

<pre> <h2>Requirements</h2>
General
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
The prototypes of all your functions should be included in your header file called main.h
Don’t forget to push your header file
All your header files should be include guarded</pre>

<div>
<pre>
<h2>
<b> Authorized functions and macros </b>
    </h2>
- write (man 2 write)
- malloc (man 3 malloc)
- free (man 3 free)
- va_start (man 3 va_start)
- va_end (man 3 va_end)
- va_copy (man 3 va_copy)
- va_arg (man 3 va_arg)
</pre></div>
<div> Compilation
The code is compiled using:
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c


Example of test file used:
<pre>
#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
</pre> </div>
<div>
<pre><h2> Output </h2>
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[2147484671]
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[800003ff, 800003FF]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Address:[0x7ffe637541f0]
Address:[0x7ffe637541f0]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Unknown:[%r]
Unknown:[%r]
</pre>
</div>

<div><pre> <h2> Resources Used </h2>
<ul>
<li><a href="https://alx-intranet.hbtn.io/rltoken/gxdsTXxWMklkBTgY197HYQ"> Secret of Printf </a></l>
<li><a href="https://linux.die.net/man/3/write"> write (man 2 write) </a></l>
<li><a href="https://man7.org/linux/man-pages/man3/free.3.html"> malloc (man 3 malloc)</a></l>
<li><a href="https://linux.die.net/man/3/free"> free (man 3 free)</a></l>
<li><a href="https://linux.die.net/man/3/va_start"> va_start (man 3 va_start)</a></l>
<li><a href="https://linux.die.net/man/3/va_end"> va_end (man 3 va_end)</a></l>
<li><a href="https://linux.die.net/man/3/va_copy"> va_copy (man 3 va_copy)</a></l>
<li><a href="https://linux.die.net/man/3/va_arg"> va_arg (man 3 va_arg)</a></l>
</ul>
</pre>
</div>
