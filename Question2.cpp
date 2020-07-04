#include <stdio.h>
#include <stdlib.h>
struct company{
    char ItemC[10];
    char name[25];
    char price[10];
};
struct company am[20][3];


void append(){
    FILE *ptr;
    ptr = fopen("data.txt", "a");
    int n;
    printf("How many items would you want to enter? \n");
    scanf("%d" , &n);
    for (int i =1 ; i<=n ; i++){
        printf("Enter itemcode %d \n",i);
        scanf("%s" , &am[i][0].ItemC);
        printf("Enter name %d \n",i);
        scanf("%s" , &am[i][1].name);
        printf("Enter price %d \n",i);
        scanf("%s" , &am[i][2].price);
        fprintf(ptr , "%d | %s | %s | %s | \n" , i , am[i][0].ItemC , am[i][1].name , am[i][2].price);
        fprintf(ptr , "______________________________________________________ \n");
    }
    
    fclose(ptr);
    getchar(); 
   
}


void modify(){
    FILE *ptr;
    ptr = fopen("data.txt", "w");
    int c , d;
    printf("Enter the Serial number/Position of data to be modified \n");
    scanf("%d" , &c);
    printf("What Would you like to modify in entry %d \n" , c);
    printf("Enter 0 for ItemCode, 1 for Name and 2 for price \n");
    scanf("%d" , &d);
    if (d==0){
        printf("Enter new Itemcode \n");
        scanf("%s" , &am[c][0].ItemC);
       
    }
    else if (d==1){
         printf("Enter new Name \n");
        scanf("%s" , &am[c][1].name);
    }
    else if (d==2){
         printf("Enter new Price \n");
        scanf("%s" , &am[c][2].price);
    }
    else {
    printf("invalid input!! \n");
    }
 
    fprintf(ptr , "The MODIFIED Data \n");
    for (int i =0 ; i<=20 ; i++){
        fprintf(ptr , "%d | %s | %s | %s |\n" , i ,am[i][0].ItemC , am[i][1].name , am[i][2].price);
        fprintf(ptr , "______________________________________________________\n");
    }
    
   fclose(ptr);
    getchar(); 
   
}

void display(){
  FILE *ptr = fopen("data.txt", "r"); 
  int ch = getc(ptr); 
  while (ch != EOF)  
  {  
    putchar(ch);  
    ch = getc(ptr); 
  }   
  if (feof(ptr)) 
     printf("\n End of file reached."); 
  else 
     printf("\n Something went wrong."); 
  fclose(ptr);     
  getchar(); 
 
} 

void read(){
    FILE *ptr = fopen("data.txt", "r"); 
  int ch = getc(ptr);
  if (ptr != NULL){
  printf("The file has been opened and is being read \n") ;
  }
  while (ch != EOF)  
  {  
    printf(".");
  } 
  
  if (feof(ptr)) 
     printf("\n End of file reached."); 
  else 
     printf("\n Something went wrong."); 
  fclose(ptr);     
  getchar(); 

}

int main(){
    int e , f;
    FILE *ptr;
    ptr = fopen("data.txt", "w");
    printf("Welcome to data entry portal ! \n");
    printf("Please enter initial data \n");
    printf("Enter Itemcode \n");
    scanf("%s" , &am[0][0].ItemC);
    printf("Enter Name \n");
    scanf("%s" , &am[0][1].name);
    printf("Enter price \n");
    scanf("%s" , &am[0][2].price);
    fprintf(ptr , "0 | %s | %s | %s |\n" ,am[0][0].ItemC , am[0][1].name , am[0][2].price);
    fprintf(ptr , "____________________________________________________\n");
    
    printf("To READ Data enter 1 \n To DISPLAY Data enter 2 \n To APPEND Data enter 3 \n To MODIFY Data enter 4\n");
    scanf("%d" , &e);
    
    switch(e){
    case 1: read();
    break;
    case 2: display();
    break;
    case 3: append();
    break;
    case 4: modify();
    break;
    default:
    printf("invalid entry!");
    break;
    
    printf("THANK YOU");
    }
    
    return(0);
}
}

