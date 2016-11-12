/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pixel_line_draw.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 11:29:46 by ppatil            #+#    #+#             */
/*   Updated: 2016/11/12 11:29:46 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pixel.h"

void	pixel_line_draw(
	t_pixel p0,
	t_pixel p1,
	void *plot(t_pixel, t_color *, void *),
	void *args)
{
	t_vec2f	s;
	t_pixel	delta;

	delta = pixel_init(color(), p1.x - p0.x, p1.y - p0.y);
	if (delta.x < delta.y)
	{
		delta = pixel_init(delta.c, delta.y, delta.x);
		delta.c.b = 1;
	}
	s = vec2f_init(-1, (float)delta.y / delta.x);
	while (delta.x)
	{
		s.x += s.y;
		if (s.x >= 0)
		{
			s.x -= 1;
			p0.y++;
		}
		if (delta.c.b)
			plot(pixel_init(p0.c, p0.y, p0.x), &p0.c, args);
		else
			plot(p0, &p0.c, args);
		p0.x++;
		delta.x--;
	}
}
