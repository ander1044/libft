/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anben <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:04:31 by anben             #+#    #+#             */
/*   Updated: 2019/06/05 09:46:49 by anben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		a;
	int		b;
	char	*str;
	char	*st1;
	char	*st2;

	a = 0;
	b = 0;
	st1 = (char *)s1;
	st2 = (char *)s2;
	str = (char *)ft_memalloc(sizeof(char) * (ft_strlen(st1) + ft_strlen(st2) + 1));
	if (str == NULL)
		return (NULL);
	if (st1 == NULL && st2 == NULL && str == NULL)
		return (0);
	while (st1[a] != '\0')
	{
		str[a] = st1[a];
		a++;
	}
	while (st2[b] != '\0')
	{
		str[a + b] = st2[b];
		b++;
	}
	str[a + b] = '\0';
	return (str);
}
