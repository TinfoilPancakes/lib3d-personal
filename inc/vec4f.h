/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec4f.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 06:46:25 by ppatil            #+#    #+#             */
/*   Updated: 2016/11/11 06:46:25 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC4F_H
# define VEC4F_H

# include <math.h>
# include "vec3f.h"

typedef	struct
{
	float	w;
	float	x;
	float	y;
	float	z;
}			t_vec4f;

t_vec4f		vec4f(void);

t_vec4f		vec4f_init(float w, float x, float y, float z);

t_vec4f		vec4f_from_euler(t_vec3f e);

t_vec3f		vec4f_rot_vec3f(t_vec3f v, t_vec3f e);

# define VEC4F_ADD(l, r) vec4f_init(l.w + r.w, l.x + r.x, l.y + r.y, l.z + r.z)
# define VEC4F_SUB(l, r) vec4f_init(l.w - r.w, l.x - r.x, l.y - r.y, l.z - r.z)
# define VEC4F_MUL(l, r) vec4f_init(l.w * r.w, l.x * r.x, l.y * r.y, l.z * r.z)
# define VEC4F_DIV(l, r) vec4f_init(l.w / r.w, l.x / r.x, l.y / r.y, l.z / r.z)
# define VEC4F_MAG(q) sqrtf(q.w * q.w + q.x * q.x + q.y * q.y + q.z * q.z)
# define VEC4F_SCALE(q, s) vec4f_init(q.w * s, q.x * s, q.y * s, q.z * s)
# define VEC4F_NORMALIZE(q) VEC4F_SCALE(q, 1 / VEC4F_MAG(q))
# define VEC4F_CONJ(q) vec4f_init(q.w, -q.x, -q.y, -q.z)
#endif
