/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 09:43:54 by ppatil            #+#    #+#             */
/*   Updated: 2016/11/12 09:43:54 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLOR_H
# define COLOR_H

struct	s_argb_color
{
	unsigned char	b;
	unsigned char	g;
	unsigned char	r;
	unsigned char	a;
};

typedef struct s_argb_color	t_argb;

union	u_color
{
	t_argb	c;
	int		val;
};

typedef	union u_color	t_color;

t_color	color(void);

t_color	color_init(unsigned char r, unsigned char g, unsigned char b);

#endif
