#include<stdio.h>
int fonct(int m){
    int s=0;
    while( (m /10) !=0 ){
        s=s+ (m%10);
        m=m/10;

    }
    s=s + (m%10);
    return s;
}
void Verif_auto_nombre(int n){
    int i=10,test=0;
    while (i<n){
        if (n== (i+ fonct(n))){
            test=1;
        }
        else{
            i++;
        }
    }
    if (test==0){
        printf("%d n est pas un auto nombre",n);
    }
    else{
        printf("%d est  un auto nombre",n);
    }

}

void main(){
    printf("bonjour");
    Verif_auto_nombre(100);
}

