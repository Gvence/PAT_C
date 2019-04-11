#include <stdio.h>
int main(){
	int n;
	int HA_num,MA_num,EA_num,times;
	int i,j,k,P,A,T;
	char a[11][100] ;
	scanf("%d",&n);
	for(i = 0;i<n;i++){
		scanf("%s", &a[i]);
	}
	for (j = 0; j<n; j++){
		k = 0;
		P =0;
		A = 0;
		T = 0;
		HA_num = 0;
		MA_num = 0;
		EA_num = 0;
		times =0;
		while(a[j][k] != '\0'){
			if(a[j][k] != 'P' && a[j][k] != 'A' && a[j][k] != 'T')
				break;
			else{
				times ++;
				if  (a[j][k] == 'T' && P==0)
					break;
				if(a[j][k] == 'P' && P == 1 )
					break;
				if(a[j][k] == 'T' && T==1)
					break;
				if(a[j][k] == 'P' && P == 0){
					HA_num = times -1;
					//printf("%d",HA_num);
					P = 1;
					times = 0;
				}
				if(a[j][k] == 'T' && P == 1 && T==0){
					MA_num = times - 1;
					//printf("%d",MA_num);
					T = 1;
					times = 0;
				}
				if(a[j][k + 1] == '\0')
					EA_num = times;
			}
					k ++;
		}
		if (HA_num * MA_num == EA_num && MA_num >= 1 )
			printf("YES");
		else
			printf("NO");
		if (j != (n -1))
			printf("\n");

	}
	
		return 0;
} 
