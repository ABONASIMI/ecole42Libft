/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnasimi <mnasimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 18:10:00 by mnasimi           #+#    #+#             */
/*   Updated: 2025/11/16 17:33:28 by mnasimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_sep(char c, char sep)
{
	if (c == sep)
		return (1);
	return (0);
}

int	count_words(char const *str, char sep)
{
	int	i;
	int	words;
	int	in_word;

	i = 0;
	words = 0;
	in_word = 0;
	while (str[i])
	{
		if (is_sep(str[i], sep))
			in_word = 0;
		else if (!in_word)
		{
			words++;
			in_word = 1;
		}
		i++;
	}
	return (words);
}

char	*add(char const *str, char sep)
{
	char	*word;
	int		len;
	int		i;

	len = 0;
	while (str[len] && !is_sep(str[len], sep))
		len++;
	word = malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

int	split_fill(char **res, char const *str, char c)
{
	int	i;
	int	j;
	int	in_word;

	i = 0;
	j = 0;
	in_word = 0;
	while (str[i])
	{
		if (is_sep(str[i], c))
			in_word = 0;
		else if (!in_word)
		{
			res[j] = add(&str[i], c);
			if (!res[j])
				return (0);
			j++;
			in_word = 1;
		}
		i++;
	}
	res[j] = NULL;
	return (1);
}

char	**ft_split(char const *str, char c)
{
	char	**res;

	if (!str)
		return (NULL);
	res = malloc((count_words(str, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	if (!split_fill(res, str, c))
		return (NULL);
	return (res);
}
