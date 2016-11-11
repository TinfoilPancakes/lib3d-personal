/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec4f_rot_vec3f.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 07:32:05 by ppatil            #+#    #+#             */
/*   Updated: 2016/11/11 07:32:05 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec4f.h"

t_vec3f	vec4f_rot_vec3f(t_vec3f v, t_vec3f e)
{
	t_vec4f	q;
	t_vec3f	u;
	float	s;

	q = vec4f_from_euler(e);
	u = vec3f_init(q.x, q.y, q.z);
	s = q.w;
	return (VEC3F_ADD(VEC3F_ADD(VEC3F_SCALE(u, VEC3F_DOT(u, v) * 2),
		VEC3F_SCALE(v, s * s - VEC3F_DOT(u, u))),
		VEC3F_SCALE(vec3f_cross(u, v), 2 * s)));
}
