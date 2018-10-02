main()
{
    int i,j,k=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
            {if(j>=1 && j<=i)
               {
                if(i==j)
               {printf("%d",k);
               k++;}
               else
                printf(" ");
               }
            else
                printf(" ");
            }
            printf("\n");
    }
    getch();
}
