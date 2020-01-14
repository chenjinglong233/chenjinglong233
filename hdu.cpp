/*#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
char a[100];
int main()
{
	int m,t,i,k,j,flag,sum1,sum;
	char b[100],c[100];
	while(~scanf("%d",&t))
	{
		getchar();
		sum=0;
		while(t--)
		{
			gets(a);
			k=0;
			j=0;
			flag=0;
			sum1=0;
			for(i=0;a[i]!=')';i++)
			{
				if(a[i]=='(')
				{
					flag=1;
					continue;
				}
				if(flag==0)
				{
					b[j]=a[i];
					j++;
				}
				else
				{
					c[k]=a[i];
					k++;
				}
			}
			c[k]='\0';
			b[j]='\0';
			k=atoi(b);
			j=atoi(c);
			i=0;
			while(k!=0)
			{
				m=k%10;
				k/=10;
				sum1+=m*pow(j,i);
				i++;
			}
			sum+=sum1;
		}
		printf("%d\n",sum);
	}
	return 0;
}*/

/*#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char a[100];
	int i,n=0,l;
	 sum;
	double aver;
	while(gets(a))
	{
		n=0;
		sum=0.0;
		l=strlen(a);
		if(strstr(a,"E"))
		{
			printf("Unknown letter grade in input\n");
		}
		else
		{
			for(i=0;i<l;i++)
			{
				if(a[i]=='A')
				{
					sum+=4.0;
					n++;
				}
				else if(a[i]=='B')
				{
					sum+=3.0;
					n++;
				}
				else if(a[i]=='C')
				{
					sum+=2.0;
					n++;
				}
				else if(a[i]=='D')
				{
					sum+=1.0;
					n++;
				}
				else if(a[i]=='F')
				{
					n++;
				}
			}
			aver=(double)sum/n;
			printf("%.2lf\n",aver);
		}
	}
	return 0;
}
#include<stdio.h>
#include<stdlib.h>

double exp()
{
	char s[20];
	scanf("%s",s);
	switch(s[0])
	{
	case '+':return exp()+exp();break;
	case '-':return exp()-exp();break;
	case '/':return exp()/exp();break;
	case '*':return exp()*exp();break;
	default:return atof(s);
	}
}


int main()
{
	printf("%lf",exp());
}
*/


/*#include<iostream>
#include<cstring>
#include<stack>
using namespace std;
int main()
{
   int i;
   double a,b;
   char s[250],c;
   while(gets(s),strcmp(s,"0")!=0)
   {
       stack<char>s1;
       stack<double>s2;
       for(i=0;s[i];i++)
       {
           if(s[i]>='0'&&s[i]<='9')
           {
               a=0;
               while(s[i]>='0'&&s[i]<='9')
               {
                   a=a*10+s[i]-'0';
                   i++;
               }
               i--;
               s2.push(a);
           }
           else if(s[i]=='-'||s[i]=='+')
           {
               if(!s1.empty())
               {
                   c=s1.top();
                   s1.pop();
                   a=s2.top();
                   s2.pop();
                   b=s2.top();
                   s2.pop();
                   if(c=='+')
                       a+=b;
                   else
                       a=b-a;
                   s2.push(a);
                   s1.push(s[i]);
               }
               else
                   s1.push(s[i]);
           }
           else if(s[i]=='/')
           {
               b=0;
               i+=2;
               while(s[i]>='0'&&s[i]<='9')
               {
                   b=b*10+s[i]-'0';
                   i++;
               }
               i--;
               a=s2.top();
               s2.pop();
               a=a/b;
               s2.push(a);
           }
           else if(s[i]=='*')
           {
               b=0;
               i+=2;
               while(s[i]>='0'&&s[i]<='9')
               {
                   b=b*10+s[i]-'0';
                   i++;
               }
               i--;
               a=s2.top();
               s2.pop();
               a=a*b;
               s2.push(a);
           }
       }
       while(!s1.empty())
       {
           c=s1.top();
           s1.pop();
           a=s2.top();
           s2.pop();
           b=s2.top();
           s2.pop();
           if(c=='+')
               a+=b;
           else
               a=b-a;
           s2.push(a);
       }
       printf("%.2f\n",s2.top());
   }
   return 0;
}*/
/*	#include<iostream>
	#include<cstring>
	using namespace std;
	int main()
	{
		char a[1100],b[1100];
		int i,n,l1,l2,c[1100]={0},d[1200]={0},j,ans[1100]={0},flag=0,k,p;
		scanf("%d",&n);
		//getchar();
		for(i=1;i<=n;i++)
		{
			flag=0;
			scanf("%s %s",a,b);
			l1=strlen(a);
			l2=strlen(b);
			j=0;
			for(p=l1-1;p>=0;p--)
			{
				c[j]=a[p]-'0';
				j++;
			}
			k=0;
			for(p=l2-1;p>=0;p--)
			{
				d[k]=b[p]-'0';
				k++;
			}
			for(p=0;p<j||p<k;p++)
			{
				ans[p]=c[p]+d[p]+flag;
				flag=0;
				if(ans[p]>=10)
				{
					ans[p]=ans[p]%10;
					flag=1;
				}
			}
			ans[p]=flag;
			printf("Case %d:\n",i);
			printf("%s + %s = ",a,b);
			if(flag==1)
			{
				for(j=p;j>=0;j--)
				{
					printf("%d",ans[j]);
				}
			}
			else
			{
				for(j=k-1;j>=0;j--)
				{
					printf("%d",ans[j]);
				}
			}
			printf("\n\n");
		}		
		return 0;
	}*/
/*#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
long int gcd(long int a,long int b)
{
    long int n;
    while(n=a%b){
        a=b;
        b=n;
    }
    return b;
}
int main()
{
    long int a,b,c,d,num,k;
    int i,n;
    while(cin>>n)
    {
        for(i=0;i<n;i++)
        {
            scanf("%ld%ld%ld%ld",&a,&b,&c,&d);
			if(abs(a-c)==abs(b-d))
			{
				printf("%ld\n",abs(a-c)-1);
			}
			else
			{
				k=gcd(abs(a-c),abs(b-d));
				num=k-1;
				cout<<num<<endl;
			}
        }
    }
    return 0;
}*/

#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<cstring>
using namespace std;
int roomnum=0,maxroomarea=0;
int roomarea;
int rooms[100]={0};
int color[60][60];
int room[60][60];
void dfs(int i,int k)
{
    if(color[i][k])
    {
        return ;
    }
    roomarea++;
	rooms[roomnum]++;
    color[i][k]=roomnum;
    if((room[i][k]&1)==0)dfs(i,k-1);
    if((room[i][k]&2)==0)dfs(i-1,k);
    if((room[i][k]&4)==0)dfs(i,k+1);
    if((room[i][k]&8)==0)dfs(i+1,k);
}
int main()
{
    int n,m,i,j;
    while(cin>>n>>m)
    {
        memset(color,0,sizeof(color));
        for(i=1;i<=m;i++)
        {
            for(j=1;j<=n;j++)
            {
                cin>>room[i][j];
            }
        }
        for(i=1;i<=m;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(!color[i][j])
                {
                    roomnum++;
                    roomarea=0;
                    dfs(i,j);
                    maxroomarea=(maxroomarea>roomarea)?maxroomarea:roomarea;
                }
            }
        }
        cout<<roomnum<<endl;
        cout<<maxroomarea<<endl;
    }
	return 0;
}
