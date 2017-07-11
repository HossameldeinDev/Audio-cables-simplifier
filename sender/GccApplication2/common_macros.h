/*
 * common_macros.h
 *
 *  Created on: Dec 8, 2015
 *      Author: hussam_mostafa
 */

#ifndef COMMON_MACROS_H_
#define COMMON_MACROS_H_

#define SET_BIT(REG,BIT) (REG|=(1<<BIT))
#define CLEAR_BIT(REG,BIT) (REG&=(~(1<<BIT)))
#define TOGGOLE_BIT(REG,BIT) (REG^=(1<<BIT))
#define ROR(REG,NUM) (REG = (REG>>NUM) | (REG<<(8-NUM)))
#define ROL(REG,NUM) (REG = (REG<<NUM) | (REG>>(8-NUM)))
#define BIT_IS_SET(REG,BIT) (REG&(1<<BIT))
#define BIT_IS_CLEAR(REG,BIT) (!(REG&(1<<BIT)))


#endif /* COMMON_MACROS_H_ */
