#pragma once

#include "libmx.h"

#define INT_MAX 2147483647

typedef struct s_pathf {
    char *str_from_f;
    char **islands;
    char **uniq_isl;
    int descr;
    int isl_num;
    int count_w;  
}   t_pathf;

typedef struct s_matrix {
    int len;
    int *route;
    long **first;
    long **table;
}   t_matrix;


//Errors

void mx_all_errors(int argc, char *argv[], t_pathf *rotes);
void mx_file_ie(char *argv[], t_pathf *rotes); // file is empty
void mx_in_of_args(int argc, char *argv[], t_pathf *rotes); //invalid number of arguments
void mx_file_dne(char *argv[], t_pathf *rotes); //file doesnt exist
void mx_fl_error(t_pathf *rotes); // first line incorrect
void mx_ol_error(t_pathf *rotes); // other lines incorrect
void mx_print_in_isl(t_pathf *rotes); //print error incorrect number of islands
void mx_in_of_isl(t_pathf *rotes); // incorrect number of islands
void mx_unique_isl(t_pathf *rotes); // unique islands
void mx_double_isl(t_pathf *rotes); // double islands
void mx_dup_br(t_pathf *rotes); // duplicate bridges
void mx_print_in_line(int line, t_pathf *rotes); // print error incorrect number of line
void mx_length_inc(t_pathf *rotes); // max int length

//Algorithm 

void mx_algorithm(t_pathf *rotes, t_matrix *matrix);
int mx_isl_index(char *island, t_pathf *rotes);
void mx_mem_mx(t_pathf *rotes, t_matrix *matrix);
void mx_init_m(t_pathf *rotes, t_matrix *matrix);
void mx_print_form();
void mx_pr_path(t_pathf *rotes, t_matrix *matrix);
void mx_pr_dist(t_pathf *rotes, t_matrix *matrix);
void mx_res_out(t_pathf *rotes, t_matrix *matrix);
bool mx_check_short(t_pathf *rotes, t_matrix *matrix, int k);
void mx_pr_short(t_pathf *rotes, t_matrix *matrix);
void mx_clean_routes(t_pathf *rotes);
void mx_del_arr(int **arr, t_pathf *routes);
void mx_clean_mx(t_pathf *rotes, t_matrix *matrix);

