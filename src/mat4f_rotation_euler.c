/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat4f_rotation_euler.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 12:13:31 by ppatil            #+#    #+#             */
/*   Updated: 2016/11/12 12:13:31 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mat4f.h"

t_mat4f	mat4f_rotation_euler(t_vec3f e)
{
	t_vec2f	n;
	t_mat4f	y;
	t_mat4f	p;
	t_mat4f	r;

	y = mat4f();
	n = vec2f_init(cosf(e.x), sinf(e.x));
	y.m[0][0] = n.x;
	y.m[0][1] = n.y;
	y.m[1][0] = -n.y;
	y.m[1][1] = n.x;
	p = mat4f();
	n = vec2f_init(cosf(e.y), sinf(e.y));
	p.m[1][1] = n.x;
	p.m[1][2] = n.y;
	p.m[2][1] = -n.y;
	p.m[2][2] = n.x;
	r = mat4f();
	n = vec2f_init(cosf(e.z), sinf(e.z));
	r.m[0][0] = n.x;
	r.m[0][2] = n.y;
	r.m[0][2] = -n.y;
	r.m[2][2] = n.x;
	return (mat4f_mult(r, mat4f_mult(p, y)));
}
