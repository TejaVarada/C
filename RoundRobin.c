#include<stdio.h>

int main(){
 int i,j,k,n,q,r[10],a[10],p[10],bt[10],wt[10],Bt[10],tat[10],c=0,ai,et[10],t=0,abt;
float atat,awt;    
 

printf("Enter no of processes:");
scanf("%d",&n);

for(i=0;i<n;i++){
p[i]=i;
printf("Enter BT of process:");
scanf("%d",&bt[i]);Bt[i]=bt[i];
wt[i]=0;abt=abt+bt[i];
}

printf("Enter time quantum:");
scanf("%d",&q);

while(abt!=0){

for(i=0;i<n;i++){
if(bt[i]>q){bt[i]=bt[i]-q; abt=abt-q; t=t+q;}
else if(bt[i]==q){abt=abt-bt[i]; t=t+bt[i]; et[i]=t; bt[i]=0; }
else if(bt[i]<q && bt[i]!=0){abt=abt-bt[i];  t=t+bt[i]; et[i]=t; bt[i]=0;}

}

}

for(i=0;i<n;i++){tat[i]=et[i]; atat=tat[i]+atat;  wt[i]=et[i]-Bt[i];  awt=awt+wt[i];}

for(i=0;i<n;i++){
printf("p.NO:%d\tBT:%d\tWT:%d\tTAT:%d\n",p[i],Bt[i],wt[i],tat[i]);
}


printf("Avg.WT:%f  Avg.TAT:%f\n",awt/n,atat/n);
return 0;
}
