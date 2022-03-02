#include <stdio.h>


struct cars{
    char brand[20];
    char model[20];
    char chasino[15];
    int engcpty;
};

int main(){
    /*car 1 */
    struct cars c1;
    strcpy(c1.brand,"Rolls Royce");
    strcpy(c1.model,"Cullinan");
    strcpy(c1.chasino,"PR67353");
    c1.engcpty = 3500;

    printf("Brand: %s \n", c1.brand );
    printf("Model: %s \n", c1.model );
    printf("Chasi: no %s \n", c1.chasino );
    printf("engcpty: %d \n", c1.engcpty );

    /*car 2 */
    struct cars c2;
    strcpy(c2.brand,"Toyota");
    strcpy(c2.model,"corolla");
    strcpy(c2.chasino,"TC1232");
    c2.engcpty = 3100;

        printf("\n","\n");
    printf("Brand: %s \n", c2.brand );
    printf("Model: %s \n", c2.model );
    printf("Chasi: no %s \n", c2.chasino );
    printf("engcpty: %d \n", c2.engcpty );


}
