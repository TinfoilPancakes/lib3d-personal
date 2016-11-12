/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pixel.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 10:05:09 by ppatil            #+#    #+#             */
/*   Updated: 2016/11/12 10:05:09 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIXEL_H
# define PIXEL_H

# include "color.h"
# include "vec2f.h"

struct	s_pixel
{
	t_color	c;
	int		x;
	int		y;
};

typedef struct s_pixel	t_pixel;

t_pixel	pixel(void);

t_pixel	pixel_init(t_color c, int x, int y);

void	pixel_line_draw(
	t_pixel	p0,
	t_pixel p1,
	void plot(t_pixel, t_color *, void *),
	void *args);

#endif
