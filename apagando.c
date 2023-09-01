#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct no{
    char dig;
    struct no* prox;
}no;


int main(){
    int num_dig, num_apag;
    no num;
	while(0==0){
        scanf("%d", &num_dig);
        scanf("%d", &num_apag);
        //le os digitos
        if((num_dig==0)&&(num_apag==0)) break;
        int tam=num_dig;
        getchar();
        char c;
        num.prox=NULL;
        
        for(int i=0; i<num_dig; i++){
            c=getchar();
            no* filho=&num;
            
            if(i!=0){
		    //printf("%c", c);
                while(filho->prox!=NULL){
                    filho=filho->prox;
                }
                no *aux=malloc(sizeof(no)); 
                aux->dig=c;
                aux->prox=NULL;
                filho->prox=aux;
            }
            else {
                num.dig=c;
                
            }
            //LEITURA DA LISTA DE ELEMENTOS
        }
	    
        
        for(int j=0; j<num_apag; j++){
	        no* filho=&num;
                        
	        int min=filho->dig;
	        
            no* pmin=NULL;
            
            while(filho->prox!=NULL){
                if(filho->prox->dig<min){
                       // printf("%c%c\n", filho->prox->dig, filho->dig); 
                    min=filho->prox->dig;
                    pmin=filho;
                }
                filho=filho->prox;
            }
            filho=&num;
	        if(pmin==NULL){
		        num.dig=filho->prox->dig;
		        num.prox=filho->prox->prox;

	        }
	        else{        
	            while(filho!=NULL){
                    if(filho->dig==min){
                        pmin->prox=filho->prox;
                        break;
                    }
                    filho=filho->prox;
            	} 
	        }          
        }
        no* filho=&num;
        while(filho!=NULL){
            printf("%c",filho->dig);
            filho=filho->prox;  
        }
            printf("\n");
    }
     
}

    free (prox); 			
    return 0;
    }
