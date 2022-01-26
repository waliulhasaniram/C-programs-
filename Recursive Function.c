#include<stdio.h>

 int fact1(int p);
 int fact2(int p);
main()
{                           ///*taking two numbers, finding their factorial using recursive functions
                             ///and adding the factorials
  int n,m;
  printf("Enter any two number: ");
  scanf("%d%d",&n,&m);


  int (*a)(int);///function of pointer
  a = fact1;
  int (*b)(int);
  b = fact2;
  int result = a(n) + b(m);
  printf("%d",result);

}
 int fact1(int p)
 {
     if(p == 1)
        return 1;
     else
        return p * fact1(p-1);
 }
int fact2(int p)
 {
     if(p == 1)
        return 1;
     else
        return p * fact2(p-1);
 }
