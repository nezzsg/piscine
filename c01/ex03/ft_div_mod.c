/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusavign <jusavign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:09:21 by jusavign          #+#    #+#             */
/*   Updated: 2025/02/20 16:14:10 by jusavign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int *a, int *b, int *div, int *mod)
{
	*div = *a / *b;
	*mod = *a % *b;
}
