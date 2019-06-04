/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anben <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 14:05:45 by anben             #+#    #+#             */
/*   Updated: 2019/06/04 14:32:58 by anben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strnequ(char const *s1, char const *s2, size_t n)
{
	char	*st1;
	char	*st2;

	st1 = (char *)s1;
	st2 = (char *)s2;
	if (st1 == NULL)
		return (0);
	return (!ft_strncmp(st1, st2, n));
}
