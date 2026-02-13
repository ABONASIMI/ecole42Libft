/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnasimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 09:09:49 by mnasimi           #+#    #+#             */
/*   Updated: 2025/08/16 10:44:29 by mnasimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	td;
	unsigned int	ts;
	unsigned int	i;

	i = 0;
	td = 0;
	ts = 0;
	while (dest[td] && td < size)
		td++;
	while (src[ts])
		ts++;
	if (td == size)
		return (ts + size);
	while (src[i] && td + i + 1 < size)
	{
		dest[td + i] = src[i];
		i++;
	}
	dest[td + i] = '\0';
	return (td + ts);
}

// #include<stdio.h>
// int main()
// {
//     unsigned int a = 50;
//     char dest[30] = "hello";
//     char src[] = " salaam chotori khobi ";
//     printf("%d\n%s", ft_strlcat(dest,src,a), dest);
//     return (0);
// }
