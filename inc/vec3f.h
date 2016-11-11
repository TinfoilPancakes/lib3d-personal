/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3f.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 14:12:45 by ppatil            #+#    #+#             */
/*   Updated: 2016/11/09 14:12:45 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC3F_H
# define VEC3F_H

# include <math.h>
# include "vec2f.h"

typedef	struct
{
	float	x;
	float	y;
	float	z;
}			t_vec3f;

t_vec3f		vec3f(void);

t_vec3f		vec3f_init(float x, float y, float z);

t_vec3f		vec3f_cross(t_vec3f l, t_vec3f r);

t_vec2f		vec3f_perspective_proj(t_vec3f v, float focal_dist);

t_vec2f		vec3f_orthographic_proj(t_vec3f v);

# define VEC3F_ADD(l, r) (vec3f_init(l.x + r.x, l.y + r.y, l.z + r.z))
# define VEC3F_SUB(l, r) (vec3f_init(l.x - r.x, l.y - r.y, l.z - r.z))
# define VEC3F_MULT(l, r) (vec3f_init(l.x * r.x, l.y * r.y, l.z * r.z))
# define VEC3F_DIV(l, r) (vec3f_init(l.x / r.x, l.y / r.y, l.z / r.z))
# define VEC3F_DOT(l, r) (l.x * r.x + l.y * r.y + l.z *r.z)
# define VEC3F_SCALE(v, s) (vec3f_init(v.x * s, v.y * s, v.z * s))
# define VEC3F_LENGTH(v) (sqrtf(v.x * v.x + v.y * v.y + v.z * v.z))
# define VEC3F_NORMALIZE(v) (VEC3F_SCALE(v, 1 / VEC3F_LENGTH(v)))

#endif
