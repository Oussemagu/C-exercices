#include<stdio.h>
int fonct(int m){
    int s=0;
    while((m /10)!=0 ){
        s=s+(m%10);
        m=m/10;

    }
    s=s+(m%10);
    return s;
}
void Verif_auto_nombre(int n){
    int i=10,test=0;
    while (i<n && test==0){
        if (n== (i+ fonct(i))){
            test=1;
        }
        else{
            i++;
        }
    }
    if (test==0){
        printf("%d n est pas un auto nombre \n ",n);
    }
    else{
         printf("%d  est  un auto nombre forme de %d + %d \n",n,i,fonct(i));
    }
    return test;

}

int Verif_auto_nombre1(int n){
    int i=10,test=0;
    while (i<n && test==0){
        if (n== (i+ fonct(i))){
            test=1;
        }
        else{
            i++;
        }
    }
    return test;
}
void main(){
    int nombre,i;
    printf("ceci est un programme qui verifie si l'entier saisi est autonombre ou pas\t");
    scanf("%d",&nombre);
    Verif_auto_nombre(nombre);
    printf("les elements de 0 a %d qui sont des autonombres :\t",nombre);
    for (i=0;i<nombre;i++){
            if (Verif_auto_nombre1(i)==1){
                printf("%d\t",i);
            }

    }
}

