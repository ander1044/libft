/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 10:59:24 by event             #+#    #+#             */
/*   Updated: 2019/06/04 11:40:26 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	char	*str;
	int		i;

	str = (char *)s;
	i = 0;
	if (str == NULL)
		return ;
	while (str[i])
	{
		(f)(i, (&str[i]));
		i++;
	}
}
