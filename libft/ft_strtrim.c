/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvolberg <dvolberg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/25 06:12:55 by dvolberg          #+#    #+#             */
/*   Updated: 2014/12/26 00:34:15 by dvolberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(s) - 1;
	while (s[i] <= ' ')
		i++;
	while (s[len] <= ' ')
		len--;
	return (ft_strsub(s, i, len - i + 1));
}
