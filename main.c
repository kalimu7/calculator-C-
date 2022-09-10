#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

void Fact(float number){
    printf("please enter a value\n");
    scanf("%f",&number);
    int fact=1,i;
    for(i=1;i<=number;i++){
        fact = fact * i;
    }
    printf("%d",fact);
}
void add(float a,float b){
    printf("entrer the first number\n");
    scanf("%f",&a);
    printf("entrer the second number\n");
    scanf("%f",&b);
    printf("%.2f + %.2f = %.2f",a,b,a+b);
}
void sub(float a,float b){
    printf("entrer the first number\n");
    scanf("%f",&a);
    printf("entrer the second number\n");
    scanf("%f",&b);
    printf("%.2f - %.2f = %.2f",a,b,a-b);
}
void mul(float a,float b){
    printf("entrer the first number\n");
    scanf("%f",&a);
    printf("entrer the second number\n");
    scanf("%f",&b);
    printf("%.2f X %.2f = %.2f",a,b,a*b);
}
void Div(float a,float b){
    printf("entrer the first number\n");
    scanf("%f",&a);
    printf("entrer the second number\n");
    scanf("%f",&b);
    if(b==0){
    printf("you cant devid by 0");
    }else{
        printf("%.2f / %.2f = %.2f",a,b,a/b);
    }
}
void modulo(int a,int b){
    printf("entrer the first number\n");
    scanf("%d",&a);
    printf("entrer the second number\n");
    scanf("%d",&b);
    if(b==0){
        printf("you cant devid by 0\n");
    }
    else{
    printf("rest of %d by %d is %d",a,b,a%b);
    }
}
void Pow(float a,float b){
    printf("entrer the first number\n");
    scanf("%f",&a);
    printf("entrer the second number\n");
    scanf("%f",&b);
    printf("%.2f ^ %.2f = %.2f",a,b,pow(a,b));

}
void Cos(float a){
    printf("please enter a value\n");
    scanf("%f",&a);
    printf("cos(%.2f)=%.2f",a,cos(a));
}
void Sin(float a){
    printf("please enter a value\n");
    scanf("%f",&a);
    printf("sin(%.2f)=%.2f",a,sin(a));
}
void Tan(float a){
    printf("please enter a value\n");
    scanf("%f",&a);
    printf("sin(%.2f)=%.2f",a,tan(a));
}
int main()
{
    float a,b;
    int choix;
    while(1<2){
    printf("\n------------------------------------------------------------------\n");
    printf("1. addition\n");
    printf("2. soustraction\n");
    printf("3. multiplication\n");
    printf("4. devision\n");
    printf("5. rest de la devision\n");
    printf("6. power\n");
    printf("7.factoriel\n");
    printf("8.cos\n");
    printf("9.sin\n");
    printf("10.tan\n");
    printf("11.Quitter\n");
    printf("\n------------------------------------------------------------------\n");
    printf("\nplease choose the number of the operation\n");
    scanf("%d",&choix);
    switch(choix){
    case 1:
        add(a,b);
        break;
    case 2:
        sub(a,b);
        break;
    case 3:
        mul(a,b);
        break;
    case 4:
        Div(a,b);
        break;
    case 5:
        modulo(a,b);
        break;
    case 6:
        Pow(a,b);
        break;
    case 7:
        Fact(a);
        break;
    case 8:
        Cos(a);
        break;
    case 9:
        Sin(a);
        break;
    case 10:
        Tan(a);
        break;
    case 11:
        exit(0);
    default:
        printf("you did entred a wrong choice\n");
        break;
    }
    printf("\nenter anything to clear\n");
    getch();
    system("cls");
    }
    return 0;
}
