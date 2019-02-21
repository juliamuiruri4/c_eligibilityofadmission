#include <stdio.h>
//program to f ind the eligibility of admission  for  a technology course based on given criteria

int main()
{
    int Maths,Phyc,Chem,Total,Maths_Phyc;
    printf("Key in Maths scores\n");
    scanf("%d",&Maths);

     printf("Key in Physics scores\n");
    scanf("%d",&Phyc);

     printf("Key in Chemistry scores\n");
    scanf("%d",&Chem);

    Total=Maths+Phyc+Chem;
    Maths_Phyc=Maths+Phyc;
    if(Maths>=65){
        printf("Based on your maths score: Eligible\n");
    }
    else{
        printf("Based on your maths score: Not Eligible!!\n");
    }

     if(Phyc>=55){
        printf("Based on your physics score:Eligible\n");
    }
    else{
        printf("Based on your physics score:Not Eligible!!\n");
    }

     if(Chem>=50){
        printf("Based on your chemistry score:Eligible\n");
    }
    else{
        printf("Based on your chemistry score:Not Eligible!!\n");
    }

     if(Total>=180){
        printf("Based on your total score:Eligible\n");
    }
    else{
        printf("Based on your total score:Not Eligible!!\n");
    }

     if(Maths_Phyc>=140){
        printf("Based on your maths and physics scores:Eligible\n");
    }
    else{
        printf("Based on your maths and physics scores : Not Eligible!!\n");
    }





    return 0;
}
