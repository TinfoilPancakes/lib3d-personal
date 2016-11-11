/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2f.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 19:29:36 by ppatil            #+#    #+#             */
/*   Updated: 2016/11/08 19:29:36 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC2F_H
# define VEC2F_H

# include <math.h>

typedef	struct
{
	float	x;
	float	y;
}			t_vec2f;

t_vec2f		vec2f(void);

t_vec2f		vec2f_init(float x, float y);

/*
**	Rotate function left as function because would not fit within 80 characters
**	if inside a macro.
**	No reason not to do so as it's just a single return statement.
*/

t_vec2f		vec2f_rotate(t_vec2f v, float a);

/*
**	Macro versions of simple operations. Saves the function call.
**	Effectivley just declaring these inline. But we can't use inline keywords :C
*/

# define VEC2F_ADD(l, r) (vec2f_init(l.x + r.x, l.y + r.y))
# define VEC2F_SUB(l, r) (vec2f_init(l.x - r.x, l.y - r.y))
# define VEC2F_MULT(l, r) (vec2f_init(l.x * r.x, l.y * r.y))
# define VEC2F_DIV(l, r) (vec2f_init(l.x / r.x, l.y / r.y))
# define VEC2F_DOT(l, r) (l.x * r.x + l.y * r.y)
# define VEC2F_SCALE(v, s) (vec2f_init(v.x * s, v.y * s))
# define VEC2F_LENGTH(v) (sqrtf(v.x * v.x + v.y * v.y))
# define VEC2F_NORMALIZE(v) (VEC2F_SCALE(v, 1 / VEC2F_LENGTH(v)))

/*
**	Leftover original function calls. If macros turn out not to work...
**
**	Here's a bunny:
**
**	 ()()
**	 ('.')
**	 (()()
**	*(_()()
**
**	t_vec2f	vec2f_add(t_vec2f l, t_vec2f r)
**	{
**		return (vec2f_init(l.x + r.x, l.y + r.y));
**	}
**
**	t_vec2f vec2f_sub(t_vec2f l , t_vec2f r)
**	{
**		return (vec2f_init(l.x - r.x, l.y - r.y));
**	}
**
**	t_vec2f	vec2f_mult(t_vec2f l, t_vec2f r)
**	{
**		return (vec2f_init(l.x * r.x, l.y * r.y));
**	}
**
**	t_vec2f	vec2f_div(t_vec2f l, t_vec2f r)
**	{
**		return (vec2f_init(l.x / r.x, l.y / r.y));
**	}
**
**	float	vec2f_dot(t_vec2f l, t_vec2f r)
**	{
**		return (l.x * r.x + l.y * r.y);
**	}
**
**	t_vec2f	vec2f_scale(t_vec2f	v, float s)
**	{
**		return (vec2f_init(v.x * s, v.y * s));
**	}
**
**	float	vec2f_length(t_vec2f v)
**	{
**		return (sqrtf(v.x * v.x + v.y * v.y));
**	}
**
**	t_vec2f	vec2f_normalize(t_vec2f v)
**	{
**		return (vec2f_scale(v, 1 / vec2f_length(v)));
**	}
*/

#endif
