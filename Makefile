CC = gcc

.RECIPEPREFIX = |

simpleGame:*.c
| $(CC) -g m_main.c -Wall -Werror -w -lGL -lGLU -lglut -lm -o simpleGame
