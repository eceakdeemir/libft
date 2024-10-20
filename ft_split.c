/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakdemi <ecakdemi@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 15:30:54 by ecakdemi          #+#    #+#             */
/*   Updated: 2024/10/19 19:49:53 by ecakdemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_string_count(char const *s, char c)
{
	int	i;
	int	string_count;

	i = 0;
	string_count = 0;
	while (s[i])
	{
		if (s[i] == c && i > 0 && s[i - 1] != c)
		{
			while (s[i + 1] != '\0' && s[i] == c)
				i++;
			string_count++;
		}
		i++;
	}
	if (s[i - 1] != c && i > 0)
		string_count++;
	return (string_count);
}

static void	ft_string_appender(char const *s, char **str, char c,
			int string_count)
{
	int	i;
	int	strc;
	int	start;

	start = 0;
	strc = 0;
	i = 0;
	while (strc < string_count)
	{
		if (s[i] != c && i > 0 && s[i - 1] == c)
			start = i;
		if ((s[i] == c && i > 0 && s[i - 1] != c) || s[i] == '\0')
		{
			str[strc] = ft_substr(s, start, i - start);
			while (s[i] && s[i + 1] != '\0'&& s[i + 1] == c)
				i++;
			strc++;
		}
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		string_count;

	string_count = ft_string_count(s, c);
	str = (char **)malloc(sizeof(char *) * (string_count + 1));
	if (!str)
		return (0);
	str[string_count] = NULL;
	ft_string_appender(s, str, c, string_count);
	return (str);
}
