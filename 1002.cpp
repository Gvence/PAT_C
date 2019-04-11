#include <stdio.h>

int main(){
	char n[100];
	const char *p[3];
	int index,i;
	const char *dic[] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	int sum = 0,j = 0;
	scanf("%s", n);
		
	for (i = 0; n[i] != '\0'; i++){
		sum += n[i] - '0';
	}
	if (sum == 0){
		index = 0;
		printf("%s", dic[index]);
	}else{
	while(sum>0){
		index = sum%10;
		sum /= 10;
		p[j] = dic[index];
		j++;
	}
	while(j>0){
		j -- ;
		printf("%s", p[j]);
		if (j != 0){
			printf(" ");
		} 
	}
}
	return 0;
}
