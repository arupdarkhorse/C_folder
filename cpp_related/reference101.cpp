/* references used for parameter parsing */
int main()
{
    int a = 10;
	int &r=a;
	
	cout<<a<<endl<<r<<endl; /* here the value of a, r will be both 10
    r = 25; /* here value of r and a both will change to 25, this like shallow copy in python */
    return 0;
}
