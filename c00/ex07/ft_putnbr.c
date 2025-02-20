/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusavign <jusavign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 15:10:58 by jusavign          #+#    #+#             */
/*   Updated: 2025/02/20 15:38:23 by jusavign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// INT_MAX = 2147483647
// INT_MIN = -2147483648

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb > 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar('0' + nb);
}

// int main(void)
//{
//     ft_putnbr(78423);
//     write(1, "\n", 1);
//     ft_putnbr(0);
//     write(1, "\n", 1);
//     ft_putnbr(42);
//     write(1, "\n", 1);
//     ft_putnbr(-42);
//     write(1, "\n", 1);
//     ft_putnbr(-424242);
//     write(1, "\n", 1);
//     ft_putnbr(424242);
//     write(1, "\n", 1);
//     ft_putnbr(-2147483648);
//     write(1, "\n", 1);
//     ft_putnbr(2147483647);
//     return (0);
// }