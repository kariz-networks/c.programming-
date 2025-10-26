/*
NAME :joseph kariuki gichuhi
REG :CT100/G/26129/25
DESCRIPTION : calculate fare in distance travelled
*/
#include <stdio.h>

double farecalculations(int distance){
	double fare=0;
	if(distance>=1){
		fare=distance *50;
		
	}
	return fare;
}
int main(){
	int distance;
	
	printf("enter distance travelled ;\n");
	scanf("%d",&distance);
	
	double totalfare=calculatedistacetravelled(distance);
	printf("total fare is :ksh.%2f\n",totalfare);
	
	
	return 0;
	
	
}