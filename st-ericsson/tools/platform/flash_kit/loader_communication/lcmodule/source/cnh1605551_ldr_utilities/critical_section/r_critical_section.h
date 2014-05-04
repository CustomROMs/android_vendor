/*******************************************************************************
 * $Copyright ST-Ericsson 2011 $
 ******************************************************************************/
#ifndef _R_CRITITCAL_SECTION_H_
#define _R_CRITITCAL_SECTION_H_

/**
 * @addtogroup ldr_utilities
 * @{
 *   @addtogroup critical_section
 *   @{
 */

/*******************************************************************************
 * Includes
 ******************************************************************************/
#include "t_critical_section.h"

/*******************************************************************************
 * File scope types, constants and variables
 ******************************************************************************/

/*******************************************************************************
 * Declaration of functions
 ******************************************************************************/
/**
 * Perform initialization of Critical Section.
 *
 * Creates a critical section object and returns pointer to it for later usage
 * when it is needed to enter and leave the critical part of the code,
 * and destroy the critical section object when not used anymore.
 *
 * @retval  Pointer to initialized critical section object if initialization was
 *          successful, otherwise NULL.
 */
CriticalSection_t Do_CriticalSection_Create(void);

/**
 * Free resources used for Critical Section object.
 *
 * Free all resources and destroy the critical section object given as parameter
 * to the function.
 *
 * @param [in] CriticalSectionObject  Pointer to pointer at the object to be destroyed.
 *
 * @retval  None.
 */
void Do_CriticalSection_Destroy(CriticalSection_t *CriticalSectionObject);

/**
 * Enter to the Critical Section code.
 *
 * Take ownership over critical section object and execute the part of the code
 * covered by the Critical Section object passed as parameter to the function.
 *
 * @param [in] CriticalSectionObject  Pointer to the object used to exclusively
 *                                    lock some critical part of the code.
 *
 * @retval  TRUE if Critical Section code entered successfully, otherwise FALSE.
 */
boolean Do_CriticalSection_Enter(CriticalSection_t CriticalSectionObject);

/**
 * Leave the Critical Section code.
 *
 * Release the Critical Section object when finished execution to allow someone
 * else to execute the code covered by the Critical Section object passed as
 * parameter to the function.
 *
 * @param [in] CriticalSectionObject  Pointer to the object used to exclusively
 *                                    lock some critical part of the code.
 *
 * @retval  None.
 */
void Do_CriticalSection_Leave(CriticalSection_t CriticalSectionObject);

/** @} */
/** @} */
#endif /*_R_CRITITCAL_SECTION_H_*/
