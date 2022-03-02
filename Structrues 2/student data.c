#include <stdio.h>

struct students{
    char name[20];
    char faculty[15];
    int age;
    int id;
};

int main(){

    struct students st1;

    strcpy(st1.name,"Bamtu");
    strcpy(st1.faculty,"FOC");
    st1.age =18;
    st1.id =19853;

    printf("Name: %s \n",st1.name);
    printf("Faculty: %s \n",st1.faculty);
    printf("Age: %d \n",st1.age);
    printf("ID: %d \n",st1.id);

}
