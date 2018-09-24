/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.h
 * @brief This is the header file.
 *
 * This file provides declarations for the functions to be implemented in the
 * .c file.
 *
 * @author Ahmed Gamal
 * @date September 23rd, 2018
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

void print_statistics(unsigned char* data, int size);

/**
 * @brief prints maximum, minimum, mean and median of data
 *
 * This function calls other functions that calculates the statistics needed.
 * Namely: maximum, minimum, mean and median of the array. Function also prints
 * out the statistics.
 *
 * @param data: input array of data
 * @param size: number of elements in data
 * 
 * @return void
 */

void print_array(unsigned char* data, int size);

/**
 * @brief prints the array data
 *
 * This function prints the elements of the array data separated by spaces.
 *
 * @param data: input array of data
 * @param size: number of elements in data
 * 
 * @return void
 */

unsigned char find_median(unsigned char* data, int size);

/**
 * @brief finds median of array data
 *
 * This function finds the median of the array, where the median is defined as
 * the element with index floor(size/2).
 *
 * @param data: input array of data
 * @param size: number of elements in data
 * 
 * @return unsigned char, median of array
 */

double find_mean(unsigned char* data, int size);

/**
 * @brief finds mean of array
 *
 * This function calculates and returns the mean (average) of the array.
 *
 * @param data: input array of data
 * @param size: number of elements in data
 * 
 * @return double, the average of array
 */

unsigned char find_maximum(unsigned char* data, int size);

/**
 * @brief finds the maximum element of array
 *
 * This function finds and returns the maximum element of array
 *
 * @param data: input array of data
 * @param size: number of elements in data
 * 
 * @return unsigned char, maximum of array
 */

unsigned char find_minimum(unsigned char* data, int size);

/**
 * @brief finds the minimum element of array
 *
 * This function finds and returns the minimm element of array
 *
 * @param data: input array of data
 * @param size: number of elements in data
 * 
 * @return unsigned char, minimum of array
 */

void sort_array(unsigned char* data, int size);

/**
 * @brief sorts the array non-increasingly
 *
 * This function sorts the array in non-increasing order, it uses merge sort.
 *
 * @param data: input array of data
 * @param size: number of elements in data
 * 
 * @return void.
 */

#endif /* __STATS_H__ */
