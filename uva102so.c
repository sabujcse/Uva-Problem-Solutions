#include<stdio.h>

int main()
{
     long int b1,b2,b3,g1,g2,g3,c1,c2,c3,bcg,bgc,gbc,gcb,cbg,cgb,puja;
    while(scanf("%ld%ld%ld%ld%ld%ld%ld%ld%ld",&b1,&g1,&c1,&b2,&g2,&c2,&b3,&g3,&c3)==9)
    {
        bcg=0,bgc=0,gbc=0,gcb=0,cbg=0,cgb=0;
        bcg=b2+b3+c1+c3+g1+g2;
        bgc=b2+b3+g1+g3+c1+c2;
        gbc=g2+g3+b1+b3+c1+c2;
        gcb=g2+g3+c1+c3+b1+b2;
        cgb=c2+c3+g1+g3+b1+b2;
        cbg=c2+c3+b1+b3+g1+g2;

        puja=bcg;

        if(bgc<puja)
            puja=bgc;
        if(gbc<puja)
            puja=gbc;
        if(gcb<puja)
            puja=gcb;
        if(cgb<puja)
            puja=cgb;
        if(cbg<puja)
            puja=cbg;

        if(bcg==puja)
            printf("BCG %ld\n",puja);
        else if(bgc==puja)
            printf("BGC %ld\n",puja);
        else if(gbc==puja)
            printf("GBC %ld\n",puja);
        else if(gcb==puja)
             printf("GCB %ld\n",puja);
        else if(cgb==puja)
             printf("CGB %ld\n",puja);
        else
             printf("CBG %ld\n",puja);
    }
    return 0;
}
