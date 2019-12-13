/****************************************************************************/
/*                                                                          */
/* This Source Code Form is subject to the terms of the Mozilla Public      */
/* License, v. 2.0. If a copy of the MPL was not distributed with this      */
/* file, You can obtain one at http://mozilla.org/MPL/2.0/.                 */
/*                                                                          */
/****************************************************************************/


/**
 * @file doxygen_example.h
 * @brief  Example file with documentation using Doxygen coding
 * @details This example file has an implementation of Doxygen documentation for C a code,
 * is intended to show usefull features of Doxygen, and ideias for documentation
 * @author Bruno Augusto Casu
 * @copyright  Mozilla Public License 2.0, see repository LICENSE file
 */

/**
 * @defgroup group_label Group Name
 * @details group description of the content of the group
 * @pre no precondition
 * @{
 */
#ifndef DOXYGEN_TEST_H
#define DOXYGEN_TEST_H

/**
 * Macro with comment without grouping
 */
#define MACRO_EXAMPLE_A 0xff


/**
 * A {@link test_variable_1} link can reference where the macro is used
 * 
 * @note The link feature can be used to refer any other defined structure in the code
 * (such as variables, functions, struc and enum types or other macros)
 */
#define MACRO_EXAMPLE_B 5


/**
 * @{
 * @name Grouping macros whith individual comments
 */
/**
 * Individual documentation for the macro inside the grouping
 * the See also feature can be used to refence which function the macro is used, for example: 
 * @sa  example_function_1()
 */
#define MACRO_EXAMPLE_C 0
/**
 * Individual documentation for the macro
 */
#define MACRO_EXAMPLE_D 1
///@}


/**
 * @{
 * @name Grouping Macros without individual comments
 * @brief A brief description may be added after the <b>name</b> of the grouping
 */
#define MACRO_EXAMPLE_E1 1 
#define MACRO_EXAMPLE_E2 2 
#define MACRO_EXAMPLE_E3 3 
///@}

/** @} */ // END of group

/**
 * @{
 * @name Enum documentation using a grouping to present a name to it (optional)
 */
/**
 * Documentation for the enum type created
 */
typedef enum {PARAM_A,
              PARAM_B,
              PARAM_C,
              PARAM_D}
              param_type_t;
///@}


/**
 * Struct documentation linked with {@link param_type_t} enum
 * 
 * @note struct documentation is kept in Classes in Doxygen interface 
 */
typedef struct
{
    param_type_t param;
    char*        str;
    int          size;
} struct_1_t;


/**
 * Struct documentation can include comments for each individual parameter of the struct
 */
typedef struct
{
    /** Individual documentation for parameters */
    char param_a;
    /** 
     * When compiled, the doxygen configuration file will 
     * report if the individual param are not documented
     */
    char param_b;
} struct_2_t;


/**
 * Documentation for a variable that is used externally
 * 
 * Multiple link can be used to reference the characteristics of this variable, for example:
 * Variable with type {@link struct_1_t}, and size {@link MACRO_EXAMPLE_B}
 *
 * @sa can show in which file(s) the variable is used
 */
extern struct_1_t example_strcut_array [MACRO_EXAMPLE_B];


/**
 * @brief Brief explanation of the function
 * @param str Description of the input paramters
 * @return Description of the returned value
 *
 * A more detailed explanation of the function
 * 
 * @note To use an expression in bold use the following syntax: <b>text in bold</b>
 */
int example_function_1 (char str);


/**
 * @{
 * @name Grouping Functions 
 */
/**
 * @brief Brief description of the function in the group
 * @param size Description of the input parameter
 * 
 * @note As the function is a void type, there is no need to use a return reference
 */
void example_function_2(int size);

/**
 * @brief Brief description of the function in the group
 * 
 * Detailed description of the function
 */
void example_function_3(void);

///@}

#endif // SDR_MANAGER_H

