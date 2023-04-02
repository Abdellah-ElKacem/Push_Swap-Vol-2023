/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdellah_elkacem <abdellah_elkacem@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 18:26:27 by ael-kace          #+#    #+#             */
/*   Updated: 2023/04/02 17:29:53 by abdellah_el      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int				nbr;
	struct s_stack	*next;
}					t_stack;

/*funtions of libft*/

int		ft_isdigit(int c);
int		ft_atoi(const char *str);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	**freed(char **str);
char	**ft_split(char const *s, char c);
t_stack	*ft_lstnew(int nbr);
void	ft_lstadd_front(t_stack **lst, t_stack *new);
int		ft_lstsize(t_stack *lst);
t_stack	*ft_lstlast(t_stack *lst);
void	ft_lstadd_back(t_stack **alst, t_stack *new);
void	ft_lstdelone(t_stack *lst);
void	ft_lstclear(t_stack **lst);

/*Parsing functions*/

int		check_num(char *str);
int		check_arg_num(int ac, char **av);
t_stack	*join_stck(t_stack *first, int ac, char **av);
void	check_dbl(t_stack *stack_a);
int 	ft_exite(void);
int		check_sort(t_stack **stack_a);

#endif