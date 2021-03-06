/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putpixel.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlernoul <tlernoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 18:07:37 by tlernoul          #+#    #+#             */
/*   Updated: 2018/01/28 17:40:15 by tlernoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/wolf.h"

void	putpixel(int x, int y, float hue)
{
	t_hsl hsl;
	t_env *env;

	env = get_env();
	hsl.h = hue;
	hsl.s = 1.0;
	if (hue == -1.0)
		hsl.l = 0;
	else if (hue == -2.0)
		hsl.l = 1;
	else
		hsl.l = 0.5;
	env->data[y * W_WDTH + x] = (ft_hsl_to_rgb(hsl) & 0x00FFFFFF) | 0xff000000;
}

void	putpixel_opt(int x, int y, float hue)
{
	t_hsl hsl;
	t_env *env;

	env = get_env();
	hsl.h = hue;
	hsl.s = 1.0;
	hsl.l = 0.5;
	SDL_SetSurfaceRLE(env->surf, 1);
	SDL_LockSurface(env->surf);
	env->data[y * W_WDTH + x] = (ft_hsl_to_rgb(hsl) & 0x00FFFFFF) | 0xff000000;
	SDL_UnlockSurface(env->surf);
}
