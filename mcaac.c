#include <stdio.h>
int no[100];
int i=0, info, d, j, b, m, k, maxi=0, max=0, x;

void criar_arvore(int no[], int info, int i){

    if(no[i]==-1){
        no[i]=info;
                
    }
    else if(info<no[i]){
        criar_arvore(no,info,(i*2)+1);
    }
    else{
        criar_arvore(no,info,(i*2)+2);
    }
}


void altura(int no[], int m){

    while(max==0 && maxi==0){
    
    x=m%2;

    if(x==1){
        max=no[m];
    }
    else if(x==0){
        maxi=no[m];
    }
    m--;
    }
    b=max-maxi;
    if(b==0 || b==1 || b==-1){
       printf("\nT");
    }
    else{
       printf("\nF");
    }

}


int main(){
   

    scanf("%d",&d);
    while(d!=0){
      
        scanf("%d", &j);
        
        
        m=j;
        printf("%d",j);
        if(j>0){
          for(k=0;k<j;k++){

            scanf(" %d", &info);
            criar_arvore(no,info,i);
            
        }
          altura(no,m);
        }
        else{
          printf("\nT");
    
        }
        
        d--;
             
    }
return 0;
}
