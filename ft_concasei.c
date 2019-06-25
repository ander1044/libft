/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concasei.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anben <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 11:01:45 by anben             #+#    #+#             */
/*   Updated: 2019/06/25 11:01:57 by anben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_concasei(unsigned int n, char ch)
{
	(void)n;
	if (ch == 0)
		return (0);
	if (ch >= 'a' && ch <= 'z')
	{
		return (ch - 32);
	}
	else if (ch >= 'A' && ch <= 'Z')
	{
		return (ch + 32);
	}
	return (0);
}
