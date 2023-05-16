/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kace <ael-kace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 18:26:27 by ael-kace          #+#    #+#             */
/*   Updated: 2023/04/16 21:07:00 by ael-kace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_stack
{
	int				nbr;
	int				pos;
	struct s_stack	*next;
}					t_stack;

typedef struct s_data
{
	int			size;
	int			ugment;
	int			next;
}				t_data;

/*funtions of libft*/

int		ft_isdigit(int c);
long	ft_atoi(const char *str);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	**ft_freed(char **str);
char	**ft_split(char const *s, char c);
t_stack	*ft_lstnew(int nbr);
void	ft_lstadd_front(t_stack **lst, t_stack *new);
int		ft_lstsize(t_stack *lst);
t_stack	*ft_lstlast(t_stack *lst);
void	ft_lstadd_back(t_stack **alst, t_stack *new);
void	ft_lstdelone(t_stack *lst);
void	ft_lstclear(t_stack **lst);
void	ft_rrange(long long res);

/*Parsing functions*/

int		ft_check_num(char *str);
t_stack	*ft_join_stck(t_stack *first, int ac, char **av);
void	ft_check_dbl(t_stack *stack_a);
int		ft_exi(void);
int		ft_exite(t_stack *stack_a);
int		ft_check_sort(t_stack *stack_a);
int		ft_check_empty(int ac, char **av);
int		check_spaces(char *str);

/*Instructions fuctions*/

void	ft_sa(t_stack *stack_a, int nbr);
void	ft_sb(t_stack *stack_b, int nbr);
void	ft_ss(t_stack *stack_a, t_stack *stack_b);
void	ft_rot_stck_a(t_stack **stack_a, int i);
void	ft_rot_stck_b(t_stack **stack_b, int i);
void	ft_rot_stck_both(t_stack **stack_a, t_stack **stack_b);
void	ft_rev_rot_stck_a(t_stack **stack_a, int i);
void	ft_rev_rot_stck_b(t_stack **stack_b, int i);
void	ft_rev_rot_stck_both(t_stack **stack_a, t_stack **stack_b);
void	ft_pa(t_stack **stack_a, t_stack **stack_b);
void	ft_pb(t_stack **stack_a, t_stack **stack_b);

/*sorting 2 to 5*/

void	sort_2(t_stack **stack_a);
void	sort_3(t_stack **stack_a);
void	easy_sort_mod(t_stack **stack_a, t_stack **stack_b);
int		find_position(t_stack *stack_a, int nbr);
int		check_max(t_stack *stack_a);
int		check_min(t_stack *stack_a);

/*sorting to 100*/

void	take_chanks(t_data	*data, t_stack **stack_a, \
	t_stack **stack_b, int num);

#endif