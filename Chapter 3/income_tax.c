#include <stdio.h>

int main() {
    /*
     Calculate income tax paid by an employee to the government as per the slabs 
mentioned below: 
Income Slab         Tax                                   
2.5 – 5.0L          5%                     
5.0L - 10.0L        20%                  
Above 10.0L         30%                
               
Note that there is no tax below 2.5L. Take income amount as an input from the user. 
    */
    int salary;
    float tax = 0;
    int tax1;
    int tax2;
    int tax3;
    printf("Enter your salary here: \n");
    scanf("%d",&salary);
        tax2 = tax1 + (salary-500000)*0.2;
        tax3 = tax2 + (salary-1000000)*0.3;
    if (salary<250000){
        tax =0;
    }       
    else if (salary>250000 && salary <500000){
        tax = (salary-250000)*0.05;
    }       
    else if (salary>500000 && salary <1000000){
        tax = (salary-500000)*0.2 + (500000-250000)*0.05;
    }
    else if (salary>1000000){
        tax = (salary-1000000)*0.3 + (1000000-500000)*0.2 + (500000-250000)*0.05; 
    }
      printf("Your tax is %f\n", tax);

    return 0;
}