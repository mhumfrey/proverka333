/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhumfrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 11:28:35 by mhumfrey          #+#    #+#             */
/*   Updated: 2020/11/08 13:52:31 by mhumfrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	s1len;
	char	*s2;

	s1len = ft_strlen(s1) + 1;
	s2 = (char *)malloc((s1len) * sizeof(char));
	if (s2 == NULL)
		return (NULL);
	ft_memcpy(s2, s1, s1len);
	return (s2);
}
