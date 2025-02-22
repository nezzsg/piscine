/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusavign <jusavign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 23:46:47 by jusavign          #+#    #+#             */
/*   Updated: 2025/02/23 00:07:26 by jusavign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// ft_putstr :  Parametre : char *str
// Si il n'y a pas de chaine de characteres alors on return
// On parcour la chaine de characteres via le pointeur "*str"
void	ft_putstr(char *str)
{
	if (!str)
		return ;
	while (*str != '\0')
		write(1, str++, 1);
}
