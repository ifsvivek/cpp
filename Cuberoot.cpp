#include <bits/stdc++.h>
using namespace std;
double diff(double n,double mid)
{
    if (n > (mid*mid*mid))
    return (n-(mid*mid*mid));
    else
    return ((mid*mid*mid) - n);
}

double cubicRoot(double n)
{
    double start = 0, end = n;
    double e = 0.0000001;
    while (true)

    {
        double mid = (start + end)/2;
        double error = diff(n, mid);
        if (error <= e)
        return mid;
        if ((mid*mid*mid) > n)
        end = mid;
        else
        start = mid;

    }
}
int main()
{

    double n ;
    clock_t time_req;
    
    printf("input number: ");
    scanf("%lf", &n);
    printf("Cubic root of %lf is %lf\n", n, cubicRoot(n));
    cout<<endl;
        time_req = clock();
	for(int i=0; i<100000; i++)
	{
		  double diff(double n,double mid)
{
    if (n > (mid*mid*mid))
    return (n-(mid*mid*mid));
    else
    return ((mid*mid*mid) - n);
}

double cubicRoot(double n)
{
    double start = 0, end = n;
    double e = 0.0000001;
    while (true)

    {
        double mid = (start + end)/2;
        double error = diff(n, mid);
        if (error <= e)
        return mid;
        if ((mid*mid*mid) > n)
        end = mid;
        else
        start = mid;

    }
};
	}
	time_req = clock() - time_req;
	cout << "It took " << (float)time_req/CLOCKS_PER_SEC << " seconds" << endl;

    return 0;
}
