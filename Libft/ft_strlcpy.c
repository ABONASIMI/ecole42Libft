/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnasimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 08:30:40 by mnasimi           #+#    #+#             */
/*   Updated: 2025/08/17 08:36:03 by mnasimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	sizee(const char *dest)
{
	size_t	i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	size_src;

	size_src = sizee(src);
	if (size == 0)
		return (size_src);
	i = 0;
	while (src[i] && i + 1 < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (size_src);
}

// #include<unistd.h>
// #include<stdio.h>
// int main()
// {
// 	char c[256] = "Abobaker";
// 	char d[256];
// 	unsigned int i = 5;
// 	printf("%s\n%d\n%d\n%s", c,ft_strlcpy(d,c,i),i, d);
// 	return (0);
// }
