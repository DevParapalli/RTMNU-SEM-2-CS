#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX_LENGTH 60
typedef struct Part{char serial[4];char material[64];int quantity;int year;}part;int serial_to_index(char serial[4]){int last_digit=serial[2]-'0';int first_digit=serial[0]-'A';return first_digit*10+last_digit;}void index_to_serial(int index,char*serial){int first_digit=index/10;int last_digit=index%10;serial[0]=first_digit+'A';serial[1]=first_digit+'A';serial[2]=last_digit+'0';serial[3]='\0';}int main(){part parts[MAX_LENGTH];char serial[4];for(int i=0;i<MAX_LENGTH;i++){index_to_serial(i,serial);printf("Enter material,quantity,and year of part%s:",serial);scanf("%s%d%d",parts[i].material,&parts[i].quantity,&parts[i].year);}for(int i=11;i<=26;i++){index_to_serial(i,serial);printf("Part%s:%s%d%d\n",serial,parts[i].material,parts[i].quantity,parts[i].year);}}
