# SCHOOL - Project

## DESCRIPTION  
You must recode the printf function from the C library. 
Your function should be prototyped like the printf function.
You do not have to implement the C library printf buffer handling.
You must process all printf formating flags except the following (which are optional): 
• float or double types management, 
• %n flag management, 
• " * " , " ’ " and " I " (capital i) flags management. 
You must add a %b formating flag, which prints unsigned numbers in a binary base. 
You must also add a %S formating flag, which prints a character string (like %s). 
However, non-printable characters (ASCII value strictly smaller than 32 or greater or equal than 127) must be represented by a backslash to be followed by the character’s value in octal base.


---

## FUNCTIONS ALLOWED  
- **System calls:**  
  `write`.

- **Other functions:**  
  None.

---

## USAGE 
Include your custom `my_printf` in a C program and compile it:
```c
#include "my_printf.h"

int main(void) {
    my_printf("Hello, %s! You have %d new messages.\n", "User", 5);
    return 0;
}
