#include <stdio.h>
#include <string.h>

void getnum(int a[], char s [])
{
     for(int i = 0, j = strlen(s) - 1; i < strlen(s); i ++)
    {
        a[i] = s[j--] - '0';
    }
}

void addnum(int a[], int b[], int c[])
{
    int temp = 0;
    for( int i = 0 ; i  < 200; i ++ )
    {
        c[i] = (a[i] + b[i] + temp) % 10;
        temp = (a[i] + b[i] + temp) / 10;
        
    }
   
}

void subnum(int a[], int b[], int c[])
{
    int temp = 0;
    for(int i = 0; i < 200 ; i ++)
    {
        c[i] = (a[i] - b[i] - temp);
        if (c[i] < 0)
        {
            c[i] += 10;
            temp = 1;
        }
        else
            temp = 0;
    }
}

void divnum(int a[], int n)
{
    int flag = 0;
    int q = 0 , r = 0;
    for (int i = 199; i >= 0; i--){
        
        if (a[i] != 0)
            flag = 1;
        if ( flag  == 1)
        {   q = a[i];
            a[i] = ((r * 10) + a[i]) / n;
            r = q % n;
            
        }
    }
}
int main()
{   
    char s1[200], s2[200];
    int a [200], b[200], c[200], d[200];
    
    
   
//   //addnum(a, b, c);
//   //subnum(a,b,c);
//   divnum(a , 2);
//   
        
//     }
    int t = 10;
    while(t--){
        
        scanf("%s%s", s1, s2);
        memset(a, 0 , sizeof(a));
        memset(b, 0 , sizeof(b));
        memset(c, 0 , sizeof(c));
        memset(d, 0 , sizeof(d));
        getnum(a, s1); 
        getnum(b, s2);
        
        addnum(a, b, c);
        divnum(c, 2);
        subnum(a,b,d);
        divnum(d,2);
        
        int flag = 0;
   
    for(int i = 199; i >= 0 ; i--){
        
        if(c[i] != 0)
            flag = 1;
        if (flag == 1)
            printf("%d", c[i]);
    }   
    printf("\n");
     flag = 0;
   
    for(int i = 199; i >= 0 ; i--){
        
        if(d[i] != 0)
            flag = 1;
        if (flag == 1)
            printf("%d", d[i]);
    }        
    printf("\n");
            
        
        
        
        
        
    }
    
        
    return 0;
}
