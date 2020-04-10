#include<stdio.h>
void main()
{
int i;
double jj,lev1,lev2,lev4,lev6,lev10;
scanf("%d",&i);
lev1=0.1*100000;//10万元利润应该得到的奖金
lev2=lev1+(200000-100000)*0.075;
lev4=lev2+(400000-200000)*0.05;
lev6=lev4+(600000-400000)*0.03;
lev10=lev6+(1000000-600000)*0.015;
if(i<=100000) jj=0.1*i;
else if (i<=200000) jj=lev1+(i-100000)*0.075;
	else if(i<=400000) jj=lev2+(i-200000)*0.05;
		else if(i<=600000) jj=lev4+(i-400000)*0.03;
		    else if(i<=1000000) jj=lev6+(i-600000)*0.015;
		        else jj=lev10+(i-1000000)*0.01;
printf("奖金是：%12.2f\n",jj);
}
