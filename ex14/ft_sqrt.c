/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pola <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 23:43:21 by pola              #+#    #+#             */
/*   Updated: 2025/10/16 09:58:06 by pola             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	l;
	int	r;
	int	m;

	if (nb < 0)
		return (0);
	l = 0;
	r = 1;
	while (r * r <= nb)
		r *= 2;
	m = (l + r) / 2;
	while (m * m != nb)
	{
		if (r - l == 1)
			return (0);
		if (m * m > nb)
			r = m;
		else
			l = m;
		m = (l + r) / 2;
	}
	return (m);
}
