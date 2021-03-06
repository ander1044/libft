/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anben <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 11:01:07 by anben             #+#    #+#             */
/*   Updated: 2019/06/25 11:32:26 by anben            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_concase(char *ch)
{
	if (ch == NULL)
		return ;
	if (*ch >= 'a' && *ch <= 'z')
		*ch = *ch - 32;
	else if (*ch >= 'A' && *ch <= 'Z')
		*ch = *ch + 32;
}
