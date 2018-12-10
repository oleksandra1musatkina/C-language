#include <stdio.h>
#include <ctype.h>


int main()
{
	int num;
	char pis;
	scanf("%c%d", &pis, &num);	
	pis=toupper(pis);

	char newpis;
	int newnum;
		
	newpis=pis-1;
	newnum=num;
	
	while(newpis>='A'){
	
		printf("%c%d\n",newpis,newnum);
		newpis--;
	}
	
	newpis=pis+1;
	newnum=num;
	while( newpis<='H'){
		printf("%c%d\n", newpis,newnum);
		newpis++;		
	}
	
	newpis=pis;
	newnum=num-1;
	
	while(newnum>=1){
		printf("%c%d\n",newpis,newnum);
		newnum--;
	}
	
	newpis=pis;
	newnum=num+1;
	while( newnum<=8){
		printf("%c%d\n", newpis,newnum);
		newnum++;		
	}
	

	for(newpis=pis-1, newnum=num+1; newpis>='A' && newnum<=8; newpis--, newnum++){
		
		printf("%c%d\n", newpis,newnum);
	}
	
	newpis=pis-1;
	newnum=num-1;
	
	while( newpis>='A'&& newnum>=1){
		printf("%c%d\n", newpis,newnum);
		newpis--;
		newnum--;	
	}
	
	newpis=pis+1;
	newnum=num+1;
	while(newpis<='H' && newnum<=8){
		printf("%c%d\n", newpis,newnum);
		newpis++;
		newnum++;
	}
	
	newpis=pis+1;
	newnum=num-1;
	while(newpis<='H' && newnum>=1){
		printf("%c%d\n", newpis,newnum);
		newpis++;
		newnum--;
	}
}
