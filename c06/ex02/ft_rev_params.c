/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusavign <jusavign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 23:50:48 by jusavign          #+#    #+#             */
/*   Updated: 2025/03/07 23:50:51 by jusavign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = ac - 1;
	if (ac < 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while (i > 0)
	{
		ft_putstr(av[i]);
		ft_putchar('\n');
		i--;
	}
	return (0);
}
