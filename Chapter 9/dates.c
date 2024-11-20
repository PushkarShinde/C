#include <stdio.h>

typedef struct date{
    int dd;
    int mm;
    int yyyy;
} D;

int compare(D a, D b){
    if((a.yyyy==b.yyyy)&&(a.mm==b.mm)&&(a.dd==b.dd)){
        return 0;
    }
    if(a.yyyy>b.yyyy){
        return 1;
    }
    if(a.yyyy<b.yyyy){
        return -1;
    }
    else if (a.mm>b.mm){
        return 1;
    }
    else if (a.mm<b.mm){
        return -1;
    }
    else if (a.dd>b.dd){
        return 1;
    }
    else if (a.dd<b.dd){
        return -1;
    }
}

int main() {
    D d1 ={24,9,2002};
    D d2 ={12,8,2006};
    D d3 ={31,7,1973};
    D d4 ={26,11,1967};
    printf("%d\n",compare(d1,d2));
    printf("%d\n",compare(d3,d4));
    return 0;
}