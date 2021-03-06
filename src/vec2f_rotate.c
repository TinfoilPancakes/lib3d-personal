/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2f_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 14:03:03 by ppatil            #+#    #+#             */
/*   Updated: 2016/11/09 14:03:03 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec2f.h"

t_vec2f	vec2f_rotate(t_vec2f v, float a)
{
	return (
		vec2f_init(v.x * cosf(a) - v.y * sinf(a),
		v.x * sinf(a) + v.y * cosf(a)));
}
