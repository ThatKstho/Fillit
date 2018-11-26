/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlenc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachim <othmanehachim@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/17 20:34:55 by ohachim           #+#    #+#             */
/*   Updated: 2018/10/20 20:57:10 by ohachim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlenc(const char *s, char c)
{
	size_t	cn;

	cn = 0;
	while (s[cn] != c && s[cn] != '\0')
	{
		cn++;
	}
	return (cn);
}
