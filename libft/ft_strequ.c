/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlernoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 17:26:08 by tlernoul          #+#    #+#             */
/*   Updated: 2016/12/22 17:54:03 by tlernoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strequ(const char *s1, const char *s2)
{
	if (!(s1) || !(s2))
		return (0);
	while (*s1 == *s2)
	{
		s1++;
		s2++;
		if (*s1 == '\0' && *s2 == '\0')
			return (1);
	}
	return (0);
}
