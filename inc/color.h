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

union	u_color
{
	int				val;
	unsigned char	a;
	unsigned char	r;
	unsigned char	g;
	unsigned char	b;
};

typedef	union u_color	t_color;

t_color	color(void);

t_color	color_init(unsigned char r, unsigned char g, unsigned char b);

#endif
