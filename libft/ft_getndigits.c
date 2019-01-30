/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getndigits.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlernoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 21:13:58 by tlernoul          #+#    #+#             */
/*   Updated: 2016/12/12 22:33:55 by tlernoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_getndigits(int nb)
{
	int i;

	i = 0;
	if (nb < 0)
		i++;
	while (nb >= 10 || nb <= -10)
	{
		i++;
		nb = nb / 10;
	}
	i++;
	return (i);
}