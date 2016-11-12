/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2f_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 14:16:17 by ppatil            #+#    #+#             */
/*   Updated: 2016/11/09 14:16:17 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec2f.h"

t_vec2f	vec2f_init(float x, float y)
{
	t_vec2f v;

	v.x = x;
	v.y = y;
	return (v);
}