/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 10:04:02 by ppatil            #+#    #+#             */
/*   Updated: 2016/11/12 10:04:02 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "color.h"

t_color	color_init(unsigned char r, unsigned char g, unsigned char b)
{
	t_color c;

	c.c.a = 0;
	c.c.r = r;
	c.c.g = g;
	c.c.b = b;
	return (c);
}
