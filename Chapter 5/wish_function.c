#include <stdio.h>
    void GoodMorning();
    void GoodAfternoon();
    void GoodNight();

    void GoodMorning(){
        printf("good morning\n");
    }
    void GoodAfternoon(){
        printf("good afternoon\n");
    }
    void GoodNight(){
        printf("good night\n");
    }


    int main(){
        GoodMorning();
        GoodAfternoon();
        GoodNight();
        return 0;
    }