/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusavign <jusavign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:16:53 by jusavign          #+#    #+#             */
/*   Updated: 2025/02/20 16:24:04 by jusavign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp_div;
	int	tmp_mod;

	tmp_div = *a / *b;
	tmp_mod = *a % *b;
	*a = tmp_div;
	*b = tmp_mod;
}
