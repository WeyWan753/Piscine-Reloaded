/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pola <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 11:13:57 by pola              #+#    #+#             */
/*   Updated: 2025/10/16 11:26:17 by pola             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		count;
	char	*str;
	int		i;

	count = 0;
	while (src[count])
		count++;
	str = (char *)malloc((count + 1) * sizeof(char));
	i = 0;
	while (i < count)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
