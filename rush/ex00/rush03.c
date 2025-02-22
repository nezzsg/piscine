/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusavign <jusavign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 16:13:10 by jusavign          #+#    #+#             */
/*   Updated: 2025/02/22 19:44:41 by jusavign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Affiche un caractère donné à l'écran
void	ft_putchar(char c);

// Affiche un message d'erreur si les valeurs de x ou y sont incorrectes
void	ft_err(void)
{
	write(1, "Wrong x or y values\n", 20);
}

// Vérifie la position actuelle dans la grille et affiche le bon caractère :
//- 'A' pour les coins en haut à gauche et en bas à gauche
//- 'C' pour les coins en haut à droite et en bas à droite
//- 'B' pour les bordures (haut, bas, gauche, droite)
//- ' ' pour l'intérieur du rectangle

void	ft_printer(int col, int row, long int x, long int y)
{
	if ((col == 0 && row == 0) || (col == 0 && row == y - 1))
		ft_putchar('A');
	else if ((col == x - 1 && row == 0) || (col == x - 1 && row == y - 1))
		ft_putchar('C');
	else if (col == 0 || col == x - 1 || row == 0 || row == y - 1)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

// Génère un rectangle avec les dimensions données :
//- Vérifie si les valeurs de x et y sont valides
//- Parcourt chaque ligne et chaque colonne pour afficher les bons caractères
//- Affiche un retour à la ligne après chaque ligne de la grille

void	rush(long int x, long int y)
{
	int	row;
	int	col;

	if (x < 1 || y < 1 || x > 2147483647 || y > 2147483647)
	{
		ft_err();
		return ;
	}
	row = 0;
	while (row < y)
	{
		col = 0;
		while (col < x)
		{
			ft_printer(col, row, x, y);
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
