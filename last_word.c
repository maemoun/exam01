#include <unistd.h>

int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i])
        i++;
    return(i);
}

void ft_check(char *str)
{
    int size;
    size = ft_strlen(str);
    size--;
    while(size > 0 && (str[size] == ' ' || str[size] == '\t'))
        size--;
    while(size > 0 && !(str[size] == ' ' || str[size] == '\t'))
        size--;
    if(str[size] == ' ' || str[size] == '\t')
        size++;
    while(str[size] && !(str[size] == ' ' || str[size] == '\t'))
    {
        write(1, &str[size], 1);
        size++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        ft_check(av[1]);
        write(1, "\n", 1);
    }
    else
        write(1, "\n", 1);
}