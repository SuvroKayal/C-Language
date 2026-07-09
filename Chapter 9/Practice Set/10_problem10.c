// Solve problem 9 for time using ‘typedef’ keyword. 
#include <stdio.h>
typedef struct D
{
    int mm, dd, yyyy;
}date;
int compare(date d1, date d2)
{   //if d1 is in the future return 1
    if ((d1.yyyy == d2.yyyy) && (d1.mm == d2.mm) && (d1.dd == d2.dd))
    {
        return 0;
    }

    if (d1.yyyy > d2.yyyy)
    {
        return 1;
    }
    else if (d1.yyyy < d2.yyyy)
    {
        return -1;
    }
    else if(d1.mm > d2.mm)
    {
        return 1;
    }
    else if(d1.mm < d2.mm)
    {
        return -1;
    }
    else if(d1.dd > d2.dd)
    {
        return 1;
    }
    else if(d1.dd < d2.dd)
    {
        return -1;
    }
}
int main()
{
    date d1 = {10, 17, 2006};
    date d2 = {3, 4, 2005};

    printf("%d", compare(d1, d2));

    return 0;
}