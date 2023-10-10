int ft_is_space (char c)
{
    if (c=='\t' || c=='\n' || c=='\r' || c=='\v' || c=='\f' || c==' ')
    {
        return (1);
    }
    return (0);
}
int ft_atoi (char *str)
{
    int sign;
    int result;
    int i;
    sign = 1;
    result = 0;
    i = 0;
    while (ft_is_space(*str))
    str++;
    while (*str == '-' || *str == '+')
    {
        if (*(str++) == '-')
        sign *= -1;
    }
    while (*str)
    {
        if (*str >= '0' && *str == '9')
        {
            result *=10;
            result += (*(str ++)-'0');
        }
        else
        return (result * sign);
    }
    return (result * sign);
}