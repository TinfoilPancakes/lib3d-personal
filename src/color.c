/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 10:03:29 by ppatil            #+#    #+#             */
/*   Updated: 2016/11/12 10:03:29 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "color.h"

t_color	color(void)
{
	t_color	c;

	c.a = 0;
	c.r = 0;
	c.g = 0;
	c.b = 0;
	return (c);
}
