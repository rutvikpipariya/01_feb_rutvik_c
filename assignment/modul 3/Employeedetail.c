#include <stdio.h>
struct empdata{
    int empno;
    char nm[20];
    char add[30];
    int age;
};
int main() {
    struct empdata obj[4]; 
    for(int i = 0; i < 5; i++){
        printf("Enter your id no. : ");
        scanf("%d", &obj[i].empno);
        printf("Enter your name : ");
        scanf("%s", &obj[i].nm);
        printf("Enter your address : ");
        scanf("%s", &obj[i].add);
        printf("Enter your age : ");
        scanf("%d", &obj[i].age);
        printf("\n");
    }  
    printf("\n");  
    for(int j = 0; j < 5; j++){
        printf("\nEmployee ID : %d", obj[j].empno);
        printf("\nEmployee Name : %s", obj[j].nm);
        printf("\nEmployee Address : %s", obj[j].add);
        printf("\nEmployee Age : %d", obj[j].age);
        printf("\n");
    }  
    return 0;
}
