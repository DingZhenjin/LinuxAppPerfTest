 
void longa(int a[])
{
	int i,j;
	for(i = 0; i < 1000000; i++)
	{
		j=i;
	}
	
	*a = j;
}

 void foo2(int a[])
{
	int i;
	for(i=0 ; i < 10; i++)
	{
		longa(&a[i]);
	}
}
 
 void foo1(int a[])
{
	int i;
	for(i = 0; i< 100; i++)
	{
		longa(&a[i]);
	}

}
 
int main(void)
{
	int a[100];
	foo1(a);
	foo2(a);
}

