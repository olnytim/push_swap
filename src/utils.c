/* ************************************************************************** */
/*                                                                            */
/*                                                    *._           _.*   @   */
/*   utils.c                                            |\  \\_//  /|     #   */
/*                                                      \/         \/     $   */
/*   By: olnytim <yearagotomorrow@gmail.com>           _|_    V  V  |_    %   */
/*                                                  *=.    =  _*  =   .=* ^   */
/*   Created: 2023/05/28 22:36:25 by olnytim           \= ___________=/   &   */
/*   Updated: 2023/05/30 15:32:51 by olnytim                /     \       *   */
/*                                                                            */
/* ************************************************************************** */

#include "../hf/push_swap.h"

int	ft_fail(char *str, int arg)
{
	ft_printf("%s, %d\n", str, arg);
	exit(1);
}

int	ft_suc(char *str)
{
	ft_printf("%s\n", str);
	return (1);
}

void	argchecker(int ac, char **av)
{
	int	i;
	int	j;

	if (ac > 1)
	{
		i = 1;
		while (av[i])
		{
			j = 0;
			if (!av[i][j])
				ft_fail("Error!\n", i);
			while (av[i][j])
			{
				if (!(av[i][j] >= '0' && av[i][j] <= '9'))
					ft_fail("Error!\nThe arg is not number!", i);
				j++;
			}
			i++;
		}
	}
	else
		ft_fail("Error!\nThe invalid number of args", -1);
	ft_suc("Everything is allright!\nThis is the end\n");
}
