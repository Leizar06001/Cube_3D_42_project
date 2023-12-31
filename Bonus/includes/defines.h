/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   defines.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphaelloussignian <raphaelloussignian@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 22:12:45 by raphaellous       #+#    #+#             */
/*   Updated: 2023/10/01 19:10:38 by raphaellous      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEFINES_H
# define DEFINES_H

# define WIN_WIDTH	1280
# define WIN_HEIGHT	800
# define DOWNSCALE	2.0

# define PLAYER_SPEED	0.7
# define RUN_SPEED		1.2
# define ROT_SPEED		0.04
# define FPS_SLEEP		1

# define ON_DESTROY		17
# define ON_KEYDOWN		2
# define ON_KEYUP		3

# define DIR_LEFT		100 //97 / 113
# define DIR_RIGHT		97
# define DIR_DOWN		115
# define DIR_UP			119 //119 / 122
# define ESCAPE			65307
# define SPACE			32
# define SHIFT			65505
# define STEP_LEFT		113
# define STEP_RIGHT		101
# define ARR_UP			65362
# define ARR_DOWN		65364
# define ARR_LEFT		65361
# define ARR_RIGHT		65363
# define ENTER			65293
# define SPACE			32

# define PI				3.1415926535
# define P2				1.5707963267
# define P3				4.7123889803
# define FOV			60.0
# define RAYS			WIN_WIDTH / DOWNSCALE
# define DR				0.0174533 * FOV / RAYS

# define MINIMAP_X		0
# define MINIMAP_Y		0
# define MINIMAP_H		512
# define MINIMAP_W		512

# define START_X		200.0
# define START_Y		200.0

# define BUFFER_SIZE	1

#endif
