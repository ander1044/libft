/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conmcase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anben <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 12:14:41 by anben             #+#    #+#             */
/*   Updated: 2019/06/25 12:21:24 by anben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_conmcase(char ch)
{
	if (ch == 0)
		return (0);
	if (ch >= 'a' && ch <= 'z')
		ch = ch - 32;
	else if (ch >= 'A' && ch <= 'Z')
		ch = ch + 32;
	return (0);
}
