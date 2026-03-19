/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitrakot <mitrakot@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 14:34:41 by mitrakot          #+#    #+#             */
/*   Updated: 2026/02/09 17:35:45 by mitrakot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_cnt(char const *str, char sep)
{
	int	i;
	int	count;
	int	x;

	i = 0;
	count = 0;
	x = 0;
	while (str[i] != '\0')
	{
		if (str[i] != sep && x == 0)
		{
			count++;
			x = 1;
		}
		else if (str[i] == sep)
			x = 0;
		i++;
	}
	return (count);
}

static char	*fill_word(const char *str, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start + i < end)
	{
		word[i] = str[start + i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	*ft_free(char **strg, int cnt)
{
	int	j;

	j = 0;
	while (j < cnt)
	{
		free(strg[j]);
		j++;
	}
	free(strg);
	return (NULL);
}

void	initialise(size_t *i, int *start, int *j)
{
	*i = 0;
	*start = -1;
	*j = 0;
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	int		start_word;
	char	**ch;
	int		j;

	initialise(&i, &start_word, &j);
	ch = malloc((word_cnt(s, c) + 1) * sizeof(char *));
	if (!ch)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && start_word < 0)
			start_word = i;
		else if ((s[i] == c || i == ft_strlen(s)) && start_word >= 0)
		{
			ch[j] = fill_word(s, start_word, i);
			if (!ch[j])
				return (ft_free(ch, j));
			start_word = -1;
			j++;
		}
		i++;
	}
	ch[j] = NULL;
	return (ch);
}
