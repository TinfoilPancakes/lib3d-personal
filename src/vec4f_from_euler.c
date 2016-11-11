/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec4f_from_euler.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 07:31:29 by ppatil            #+#    #+#             */
/*   Updated: 2016/11/11 07:31:29 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec4f.h"

/*
**	!!IMPORTANT!!
**	Note that euler angle vector is expressed as (yaw, pitch, roll) to (x,y,z)
**	respectivley.
*/

t_vec4f	vec4f_from_euler(t_vec3f e)
{
	t_vec4f	q;
	float	t[6];

	t[0] = cosf(e.x / 2);
	t[1] = sinf(e.x / 2);
	t[2] = cosf(e.z / 2);
	t[3] = sinf(e.z / 2);
	t[4] = cosf(e.y / 2);
	t[5] = sinf(e.y / 2);
	q.w = t[0] * t[2] * t[4] + t[1] * t[3] * t[5];
	q.x = t[0] * t[3] * t[4] - t[1] * t[2] * t[5];
	q.y = t[0] * t[2] * t[5] + t[1] * t[3] * t[4];
	q.z = t[1] * t[2] * t[4] - t[0] * t[3] * t[5];
	return (q);
}
