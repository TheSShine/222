#include<stdio.h>
#include<math.h>
main(){
	int n;
	double f,i,p;
	int a;
	printf("��������ѡ��1\n��������ѡ��2\n�������ѡ��3\n");
	scanf("%d",&a);
	
	
	if(a==1){
		printf("���뱾��");
	scanf("%lf",&p);
	printf("���������ʣ�");
	scanf("%lf",&i);
	printf("�������ޣ�");
	scanf("%d",&n);
	f=p*(1+i*n);
		printf("��ϢΪ%.4lf",f);
	}
	if(a==2){
		printf("���뱾��");
	scanf("%lf",&p);
	printf("���������ʣ�");
	scanf("%lf",&i);
	printf("�������ޣ�");
	scanf("%d",&n);
		f=p*pow((1+i),n);
		printf("��ϢΪ%.4lf",f);}
	else
	{
		printf("���뱾Ϣ��");
	scanf("%lf",&f);
	printf("���������ʣ�");
	scanf("%lf",&i);
	printf("�������ޣ�");
	scanf("%d",&n);
		p=f/pow((1+i),n);
		printf("����Ϊ%.4lf",p);
	}
}


	