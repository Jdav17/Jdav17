/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavila- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:48:26 by jdavila-          #+#    #+#             */
/*   Updated: 2022/05/15 17:15:03 by jdavila-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

void	new_line(void)
{
	write(1, "\n", 1);
}

void	as_line(char x, int x2)
{
	while (x2 <= x)
	{
		if (x2 == 1 || x2 == x)
		{
			write(1, "o", 1);
			if (x2 == x)
			{
				new_line();
			}
			x2++;
		}
		else if (x2 < x && x2 > 1)
		{
			write(1, "-", 1);
			x2++;
		}
		else
		{
			break ;
		}
	}
}

void	bs_line(char x, int x2)
{
	while (x2 <= x)
	{
		if (x2 > 1 && x2 < x)
		{
			write(1, " ", 1);
			x2++;
		}
		else if (x2 == 1 || x2 == x)
		{
			write (1, "|", 1);
			if (x2 == x)
			{
				new_line();
				break ;
			}
			x2++;
		}
	}
}
