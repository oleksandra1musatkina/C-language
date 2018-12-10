#include <stdio.h>
#include <ctype.h>

void validate (char pis, int num);



int main(){
	char pis;
	int num;
	printf("Kon: ");
	scanf("%c%d",&pis ,&num);
	
	char newpis=pis-2;
	int newnum=num-1;
	validate (newpis,newnum);
	
	newpis=pis-2;
	newnum=num+1;
	validate (newpis,newnum);
	
	newpis=pis-1;
	newnum=num-2;
	validate (newpis,newnum);
	
	newpis=pis+1;
	newnum=num-2;
	validate (newpis,newnum);
	
	newpis=pis-1;
	newnum=num+2;
	validate (newpis,newnum);
	
	newpis=pis+1;
	newnum=num+2;
	validate (newpis,newnum);
	
	newpis=pis+2;
	newnum=num-1;
	validate (newpis,newnum);
	
	newpis=pis+2;
	newnum=num+1;
	validate (newpis,newnum);
	

}
void validate (char pis, int num){
	if(pis>='A' && pis<='H' && num>=1 && num<=8){
		printf("%c%d\n", pis, num);		
	}
}
	

