CC = gcc

.RECIPEPREFIX = |

simpleGame:*.c
| $(CC) -g d_display.c m_main.c -Wall -Werror -w -lGL -lGLU -lglut -lm -o simpleGame
