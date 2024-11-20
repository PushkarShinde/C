#include <stdio.h>

int main() {
/*
Write a program to determine whether a character entered by the user is 
lowercase or not.
*/
char ch;
printf("Enter a character: ");
scanf("%c",&ch);
//97-122 The ASCII code for all the lower case charecters in C.
if (ch>=97 && ch<=122){
    printf("The input character is lower case.");
}
else if (ch<=90 && ch>=65){
    printf("The input character is upper case.");
}
else {
    printf("The character is neither a lower nor an upper case character.");
}
    return 0;
}

// wow!!!!
/*
+--------+-------------------------+--------+-------------------------+
| ASCII  | Character               | ASCII  | Character               |
| Value  | Representation           | Value  | Representation         |
+--------+-------------------------+--------+-------------------------+
|  000   | NUL (Null character)     |  048   | '0' (Digit Zero)        |
|  001   | SOH (Start of Heading)   |  049   | '1' (Digit One)         |
|  002   | STX (Start of Text)      |  050   | '2' (Digit Two)         |
|  003   | ETX (End of Text)        |  051   | '3' (Digit Three)       |
|  004   | EOT (End of Transmission)|  052   | '4' (Digit Four)        |
|  005   | ENQ (Enquiry)            |  053   | '5' (Digit Five)        |
|  006   | ACK (Acknowledge)        |  054   | '6' (Digit Six)         |
|  007   | BEL (Bell)               |  055   | '7' (Digit Seven)       |
|  008   | BS  (Backspace)          |  056   | '8' (Digit Eight)       |
|  009   | TAB (Horizontal Tab)     |  057   | '9' (Digit Nine)        |
|  010   | LF  (Line Feed)          |  065   | 'A' (Uppercase A)       |
|  011   | VT  (Vertical Tab)       |  066   | 'B' (Uppercase B)       |
|  012   | FF  (Form Feed)          |  067   | 'C' (Uppercase C)       |
|  013   | CR  (Carriage Return)    |  068   | 'D' (Uppercase D)       |
|  014   | SO  (Shift Out)          |  069   | 'E' (Uppercase E)       |
|  015   | SI  (Shift In)           |  070   | 'F' (Uppercase F)       |
|  016   | DLE (Data Link Escape)   |  071   | 'G' (Uppercase G)       |
|  017   | DC1 (Device Control 1)   |  072   | 'H' (Uppercase H)       |
|  018   | DC2 (Device Control

*/