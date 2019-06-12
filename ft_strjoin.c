/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anben <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:04:31 by anben             #+#    #+#             */
/*   Updated: 2019/06/12 15:09:05 by anben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		n;
	char	*str;
	char	*st1;
	char	*st2;

	if (s1 == NULL || s2 == NULL)
		return (0);
	st1 = (char *)s1;
	st2 = (char *)s2;
	if (!(n = ft_strlen(st1) + ft_strlen(st2)))
		return (NULL);
	if (!s1 || !s2)
		return (NULL);
	if (!(str = (char *)malloc(sizeof(*str) * (n + 1))))
		return (NULL);
	ft_strcpy(str, st1);
	ft_strcat(str, st2);
	return (str);
}
