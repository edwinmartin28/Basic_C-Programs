//Check whether a given number is palindrome or not 
int main()
{
	int n, d, r=0,copy;
	printf("Enter the number: ");
	scanf("%d",&n);
	copy= n;
	while(n>=1)
	{
		d = n % 10;
		r = (r*10) + d;
		n = n /10;
	}
	printf("\n The reverse of the given number is %d",r);
	if(r==copy)
	  printf("\n The given number is a palindrome");
	else 
	  printf("\n The given number is not  a palindrome");
	return 0;
}

