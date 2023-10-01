int get_integer(void)
{
    int n;
    while(printf("n: ") , scanf("%d",&n) == 0 )
        scanf("%*c");
    return n;
}