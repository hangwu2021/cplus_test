union T
{
    int x;
    double d;
    char b[sizeof(double)];
};

T t = {0};
