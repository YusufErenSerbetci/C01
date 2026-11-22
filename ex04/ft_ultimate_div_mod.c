void    ft_ultimate_div_mod(int *a, int *b)
{
    int temp;
    int remainder;

    temp = *a / *b;
    remainder = *a % *b;
    *a = temp;
    *b = remainder;
}
