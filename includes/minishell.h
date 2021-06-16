/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 16:37:45 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/06/16 22:19:25 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include "../libft/libft.h"
# include "../GNL/get_next_line.h"
# include <stdio.h>
# include <readline/readline.h>
# include <readline/history.h>
# include <string.h>
# include <errno.h>

int					g_status;

char				**copy_2dim_arr(char **arr);
void				free_2dim_arr(char **arr);
int					count_els_2dim_arr(char **arr);
void				realloc_2dim_arr(char ***arr, int size_new);
void				sort_2dim_arr(char ***arr);
void				exit_err_malloc(void);
char				*get_env(char **envs, char *name);
char				*get_env_name(char *env);
int					check_env_has_val(char *env);
int					check_env_exists(char **envs, char *name);
void				set_env(char ***envs, char *name, char *value);
void				del_env_by_name(char ***envs, char *name);
void				del_uninit_envs(char ***envs);
int					ft_echo(char **args);
int					ft_cd(char ***envs, char **args);

#endif
