#include <stdio.h>
void decimal_binaire(int entier){
    int add,s=0,aux,i;
    int * p;
    p=&add;
    aux=entier;
    while(aux/2!=0){
        aux=aux/2;
        s=s+1;
    }
    *(p+s+1)='\0';
    for (i=s;i>=0;i--){
        *(p+i)=entier/2;
        entier=entier/2;
    }
    for (i=0;i<s;i++){
        printf("%s",*p);


}
char Octal_Binaire( char oct[100])){
    char T[8];
    for (i=0;i<8;i++){
        if (i>=0 && i<=3){
                //ajout des 0
            T[i]=decimal_binaire(i);
        }
        else{
            T[i]=decimal_binaire(i);
        }
    }

}

void main(){
    int m;
    printf("entrer un entier ");
    scanf("%d",&m);
decimal_binaire(m);
}

