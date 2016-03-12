#include<stdio.h>
#include<math.h>
main(){
	int n;
	double f,i,p;
	int a;
	printf("单利计算选择1\n复利计算选择2\n本金计算选择3\n");
	scanf("%d",&a);
	
	
	if(a==1){
		printf("输入本金：");
	scanf("%lf",&p);
	printf("输入年利率：");
	scanf("%lf",&i);
	printf("输入年限：");
	scanf("%d",&n);
	f=p*(1+i*n);
		printf("本息为%.4lf",f);
	}
	if(a==2){
		printf("输入本金：");
	scanf("%lf",&p);
	printf("输入年利率：");
	scanf("%lf",&i);
	printf("输入年限：");
	scanf("%d",&n);
		f=p*pow((1+i),n);
		printf("本息为%.4lf",f);}
	else
	{
		printf("输入本息：");
	scanf("%lf",&f);
	printf("输入年利率：");
	scanf("%lf",&i);
	printf("输入年限：");
	scanf("%d",&n);
		p=f/pow((1+i),n);
		printf("本金为%.4lf",p);
	}
}


	