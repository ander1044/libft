/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 11:20:57 by event             #+#    #+#             */
/*   Updated: 2019/06/07 14:09:46 by anben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	char	*st1;
	char	*st2;
	int		i;

	st1 = (char *)s1;
	st2 = (char *)s2;
	i = 0;
	if (st1 == NULL)
		return (0);
	while (st1[i])
	{
		if (st1[i] == st2[i])
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	if (st1 == st2 && st2 != '\0')
		return (1);
	return (0);
}
