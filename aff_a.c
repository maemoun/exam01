#include <unistd.h>
void    ft_search(char*str)
{
    int i = 0;

    while(str[i])
    {
        if (str[i] == 'a')
            write(1, "a", 1);
        i++;
    }
}
int main(int ac, char **av)
{
    if (ac == 2)
    {
        ft_search(av[1]);
        write(1, "\n", 1);
    }
    else
        write(1, "a\n", 2);
}