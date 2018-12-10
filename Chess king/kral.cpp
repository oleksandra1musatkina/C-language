#include <stdio.h>
#include <ctype.h>


int main()
{
	int kral;
	int num;
	char pis;
	printf("Kral: ");
	scanf("%c%d", &pis, &num);	
	pis=toupper(pis);

	char newpis=pis-1;
	int newnum=num;
	if(newpis>='A' && newpis<='H' && newnum>=1 && newnum<=8){
		printf("%c%d\n", newpis, newnum);	
	}
	newpis=pis-1;
	newnum=num+1;
	if(newpis>='A' && newpis<='H' && newnum>=1 && newnum<=8){
		printf("%c%d\n", newpis, newnum);
}
	newpis=pis;
	newnum=num+1;
	if(newpis>='A' && newpis<='H' && newnum>=1 && newnum<=8){
		printf("%c%d\n", newpis, newnum);
}
	newpis=pis+1;
	newnum=num+1;
	if(newpis>='A' && newpis<='H' && newnum>=1 && newnum<=8){
		printf("%c%d\n", newpis, newnum);
}
	newpis=pis+1;
	newnum=num;
	if(newpis>='A' && newpis<='H' && newnum>=1 && newnum<=8){
		printf("%c%d\n", newpis, newnum);
}
	newpis=pis+1;
	newnum=num-1;
	if(newpis>='A' && newpis<='H' && newnum>=1 && newnum<=8){
		printf("%c%d\n", newpis, newnum);
}
	newpis=pis;
	newnum=num-1;
	if(newpis>='A' && newpis<='H' && newnum>=1 && newnum<=8){
		printf("%c%d\n", newpis, newnum);
}
	newpis=pis-1;
	newnum=num-1;
	if(newpis>='A' && newpis<='H' && newnum>=1 && newnum<=8){
		printf("%c%d\n", newpis, newnum);
}
}
