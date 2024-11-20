 #include <stdio.h>
 
 int main() {
    int age = 71;
    if (age > 60){ 
        printf("You can drive and you are a senior citizen.\n");
    }
    // all the program from here will be ignored if the above condition is true.
    else if (age >18){ 
        printf("You can drive.\n");
    }
    else {
        printf("you cannot drive.\n");
    }
    return 0;
 }