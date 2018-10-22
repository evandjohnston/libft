/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evjohnst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 17:11:47 by evjohnst          #+#    #+#             */
/*   Updated: 2018/09/10 17:37:10 by evjohnst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_isspace(char c);
char	*ft_itoa(int n);
void	*ft_memalloc(size_t size);
void	*ft_memset(void *b, int c, size_t len);
void 	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void 	ft_putendl(char const *s);
void 	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr(int n);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr(char const *s);
void	ft_putstr_fd(char const *s, int fd);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
int		ft_strequ(char const *s1, char const *s2);
void 	ft_strclr(char *s);
char	*ft_strcpy(char *dst, const char *src);
void	ft_strdel(char **as);
char	*ft_strjoin(char const *s1, char const *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strncpy(char *dst, const char *src, size_t len);
char	*ft_strndup(const char *s1, size_t len);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strchr(const char *s, int c);
int		ft_strcmp(const char *s1, const char *s2);
char 	*ft_strsub(char const *s, unsigned int start, size_t len);
char	**ft_strsplit(char const *s, char c);
char	*ft_strtrim(char const *s);
int		ft_toupper(int c);
int		ft_tolower(int c);

#endif
