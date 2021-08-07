#include <stdio.h>
#include <string.h>

int uff(const char *source)
{
  int a;
  char c;
  char final[50];
  for(int i=0;source[i];i++)
    {
    c=source[i];
    a=c;
    if(isupper(c))
      {
        printf("%c",c);
        a=a+32;
        for(int j=0;j<=i-1;j++)
        {
            printf("%c",a);
        }
        printf("-");
      }
      else
      {
        a=a-32;
        printf("%c",a);
        a=a+32;
        for(int j=0;j<=i-1;j++)
            {
                printf("%c",a);
            }
        if(i!=strlen(source)-1)
        {
             printf("-");
        }
      }
    }
  return 0;
}
int main()
{
    uff("RqaEzty");
    return 0;
}
