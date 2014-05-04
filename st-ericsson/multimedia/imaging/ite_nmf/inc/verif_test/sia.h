
#ifndef _SIA_H_
#define _SIA_H_

/****************************************************************************************
*                     Copyright STMicroelectronics
*              All rights reserved, COMPANY CONFIDENTIAL
*     Unauthorized reproduction and communication strictly prohibited
*----------------------------------------------------------------------------------------
*                   System Platforms Group - IP&Design/SPG
*----------------------------------------------------------------------------------------
*  This C header file was automatically generated by 'spirit2regtest' utility from the
*  SPIRIT description of the component.
*
*  Purpose : It declares C preprocessor definitions for component, register and 
*            register fields parameters
*
*  Generated by spirit2regtest v1.7.6
*
*  PLEASE DO NOT MODIFY THIS FILE
****************************************************************************************/


/*
* Component section
* Purpose : defines macros for component
*           specific informations
*/

#define SIA_VENDOR                                          ("st.com")
#define SIA_LIBRARY                                         ("orphan_component")
#define SIA_NAME                                            ("SIA")
#define SIA_VERSION                                         ("0.0")

/*
* Address Block : SIA
*/

#define SIA_SIA_BASE_ADDR                                   (0x54000)

/*
* Register section
* Purpose : defines macros for register and
*           its associated fields specific
*           informations
*/

/*
* Register : SIA_RESET
*/

#define SIA_SIA_RESET_SIZE                                  (16)
#define SIA_SIA_RESET_OFFSET                                (SIA_SIA_BASE_ADDR + 0x00)
#define SIA_SIA_RESET_RESET_VALUE                           (0x00)
#define SIA_SIA_RESET_BITFIELD_MASK                         (0x001F)
#define SIA_SIA_RESET_RWMASK                                (0x001F)
#define SIA_SIA_RESET_ROMASK                                (0x0000)
#define SIA_SIA_RESET_WOMASK                                (0x0000)
#define SIA_SIA_RESET_UNUSED_MASK                           (0xFFE0)
#define SIA_SIA_RESET_SIA_CORE_OFFSET                       (0x0000)
#define SIA_SIA_RESET_SIA_CORE_WIDTH                        (1)
#define SIA_SIA_RESET_SIA_CORE_MASK                         (0x0001)
#define SIA_SIA_RESET_SIA_CORE_B_0x0                        (0x0000)
#define SIA_SIA_RESET_SIA_CORE_B_0x1                        (0x0001)
#define SIA_SIA_RESET_IPP_OFFSET                            (0x0001)
#define SIA_SIA_RESET_IPP_WIDTH                             (1)
#define SIA_SIA_RESET_IPP_MASK                              (0x0002)
#define SIA_SIA_RESET_IPP_B_0x0                             (0x0000)
#define SIA_SIA_RESET_IPP_B_0x1                             (0x0001)
#define SIA_SIA_RESET_VCF_OFFSET                            (0x0002)
#define SIA_SIA_RESET_VCF_WIDTH                             (1)
#define SIA_SIA_RESET_VCF_MASK                              (0x0004)
#define SIA_SIA_RESET_VCF_B_0x0                             (0x0000)
#define SIA_SIA_RESET_VCF_B_0x1                             (0x0001)
#define SIA_SIA_RESET_PROJ_OFFSET                           (0x0003)
#define SIA_SIA_RESET_PROJ_WIDTH                            (1)
#define SIA_SIA_RESET_PROJ_MASK                             (0x0008)
#define SIA_SIA_RESET_PROJ_B_0x0                            (0x0000)
#define SIA_SIA_RESET_PROJ_B_0x1                            (0x0001)
#define SIA_SIA_RESET_ROT_OFFSET                            (0x0004)
#define SIA_SIA_RESET_ROT_WIDTH                             (1)
#define SIA_SIA_RESET_ROT_MASK                              (0x0010)
#define SIA_SIA_RESET_ROT_B_0x0                             (0x0000)
#define SIA_SIA_RESET_ROT_B_0x1                             (0x0001)

/*
* Register : SIA_CLOCK_ENABLE
*/

#define SIA_SIA_CLOCK_ENABLE_SIZE                           (16)
#define SIA_SIA_CLOCK_ENABLE_OFFSET                         (SIA_SIA_BASE_ADDR + 0x10)
#define SIA_SIA_CLOCK_ENABLE_RESET_VALUE                    (0x00)
#define SIA_SIA_CLOCK_ENABLE_BITFIELD_MASK                  (0x001F)
#define SIA_SIA_CLOCK_ENABLE_RWMASK                         (0x001F)
#define SIA_SIA_CLOCK_ENABLE_ROMASK                         (0x0000)
#define SIA_SIA_CLOCK_ENABLE_WOMASK                         (0x0000)
#define SIA_SIA_CLOCK_ENABLE_UNUSED_MASK                    (0xFFE0)
#define SIA_SIA_CLOCK_ENABLE_DMA_OFFSET                     (0x0000)
#define SIA_SIA_CLOCK_ENABLE_DMA_WIDTH                      (1)
#define SIA_SIA_CLOCK_ENABLE_DMA_MASK                       (0x0001)
#define SIA_SIA_CLOCK_ENABLE_DMA_B_0x0                      (0x0000)
#define SIA_SIA_CLOCK_ENABLE_DMA_B_0x1                      (0x0001)
#define SIA_SIA_CLOCK_ENABLE_STBP_OFFSET                    (0x0001)
#define SIA_SIA_CLOCK_ENABLE_STBP_WIDTH                     (1)
#define SIA_SIA_CLOCK_ENABLE_STBP_MASK                      (0x0002)
#define SIA_SIA_CLOCK_ENABLE_STBP_B_0x0                     (0x0000)
#define SIA_SIA_CLOCK_ENABLE_STBP_B_0x1                     (0x0001)
#define SIA_SIA_CLOCK_ENABLE_IPP_OFFSET                     (0x0002)
#define SIA_SIA_CLOCK_ENABLE_IPP_WIDTH                      (1)
#define SIA_SIA_CLOCK_ENABLE_IPP_MASK                       (0x0004)
#define SIA_SIA_CLOCK_ENABLE_IPP_B_0x0                      (0x0000)
#define SIA_SIA_CLOCK_ENABLE_IPP_B_0x1                      (0x0001)
#define SIA_SIA_CLOCK_ENABLE_VCF_OFFSET                     (0x0003)
#define SIA_SIA_CLOCK_ENABLE_VCF_WIDTH                      (1)
#define SIA_SIA_CLOCK_ENABLE_VCF_MASK                       (0x0008)
#define SIA_SIA_CLOCK_ENABLE_VCF_B_0x0                      (0x0000)
#define SIA_SIA_CLOCK_ENABLE_VCF_B_0x1                      (0x0001)
#define SIA_SIA_CLOCK_ENABLE_PROJ_OFFSET                    (0x0004)
#define SIA_SIA_CLOCK_ENABLE_PROJ_WIDTH                     (1)
#define SIA_SIA_CLOCK_ENABLE_PROJ_MASK                      (0x0010)
#define SIA_SIA_CLOCK_ENABLE_PROJ_B_0x0                     (0x0000)
#define SIA_SIA_CLOCK_ENABLE_PROJ_B_0x1                     (0x0001)

/*
* Register : SIA_IDN_HRV
*/

#define SIA_SIA_IDN_HRV_SIZE                                (16)
#define SIA_SIA_IDN_HRV_OFFSET                              (SIA_SIA_BASE_ADDR + 0x20)
#define SIA_SIA_IDN_HRV_RESET_VALUE                         (0x426)
#define SIA_SIA_IDN_HRV_BITFIELD_MASK                       (0x0FFF)
#define SIA_SIA_IDN_HRV_RWMASK                              (0x0000)
#define SIA_SIA_IDN_HRV_ROMASK                              (0x0FFF)
#define SIA_SIA_IDN_HRV_WOMASK                              (0x0000)
#define SIA_SIA_IDN_HRV_UNUSED_MASK                         (0xF000)
#define SIA_SIA_IDN_HRV_R0_OFFSET                           (0x0000)
#define SIA_SIA_IDN_HRV_R0_WIDTH                            (4)
#define SIA_SIA_IDN_HRV_R0_MASK                             (0x000F)
#define SIA_SIA_IDN_HRV_R1_OFFSET                           (0x0004)
#define SIA_SIA_IDN_HRV_R1_WIDTH                            (4)
#define SIA_SIA_IDN_HRV_R1_MASK                             (0x00F0)
#define SIA_SIA_IDN_HRV_R2_OFFSET                           (0x0008)
#define SIA_SIA_IDN_HRV_R2_WIDTH                            (4)
#define SIA_SIA_IDN_HRV_R2_MASK                             (0x0F00)
#define SIA_SIA_IDN_HRV_R2_B_0x1                            (0x0001)
#define SIA_SIA_IDN_HRV_R2_B_0x2                            (0x0002)
#define SIA_SIA_IDN_HRV_R2_B_0x3                            (0x0003)
#define SIA_SIA_IDN_HRV_R2_B_0x4                            (0x0004)

/*
* Register : SIA_VCF_ENABLE
*/

#define SIA_SIA_VCF_ENABLE_SIZE                             (16)
#define SIA_SIA_VCF_ENABLE_OFFSET                           (SIA_SIA_BASE_ADDR + 0x30)
#define SIA_SIA_VCF_ENABLE_RESET_VALUE                      (0x00)
#define SIA_SIA_VCF_ENABLE_BITFIELD_MASK                    (0x0001)
#define SIA_SIA_VCF_ENABLE_RWMASK                           (0x0001)
#define SIA_SIA_VCF_ENABLE_ROMASK                           (0x0000)
#define SIA_SIA_VCF_ENABLE_WOMASK                           (0x0000)
#define SIA_SIA_VCF_ENABLE_UNUSED_MASK                      (0xFFFE)
#define SIA_SIA_VCF_ENABLE_EN_OFFSET                        (0x0000)
#define SIA_SIA_VCF_ENABLE_EN_WIDTH                         (1)
#define SIA_SIA_VCF_ENABLE_EN_MASK                          (0x0001)
#define SIA_SIA_VCF_ENABLE_EN_B_0x0                         (0x0000)
#define SIA_SIA_VCF_ENABLE_EN_B_0x1                         (0x0001)

/*
* Register : SIA_ROTATION
*/

#define SIA_SIA_ROTATION_SIZE                               (16)
#define SIA_SIA_ROTATION_OFFSET                             (SIA_SIA_BASE_ADDR + 0x32)
#define SIA_SIA_ROTATION_RESET_VALUE                        (0x00)
#define SIA_SIA_ROTATION_BITFIELD_MASK                      (0x0003)
#define SIA_SIA_ROTATION_RWMASK                             (0x0003)
#define SIA_SIA_ROTATION_ROMASK                             (0x0000)
#define SIA_SIA_ROTATION_WOMASK                             (0x0000)
#define SIA_SIA_ROTATION_UNUSED_MASK                        (0xFFFC)
#define SIA_SIA_ROTATION_ROTATION_OFFSET                    (0x0000)
#define SIA_SIA_ROTATION_ROTATION_WIDTH                     (2)
#define SIA_SIA_ROTATION_ROTATION_MASK                      (0x0003)
#define SIA_SIA_ROTATION_ROTATION_B_0x0                     (0x0000)
#define SIA_SIA_ROTATION_ROTATION_B_0x1                     (0x0001)
#define SIA_SIA_ROTATION_ROTATION_B_0x3                     (0x0003)

/*
* Register : ISP_MCU_SYS_ADDR0
*/

#define SIA_ISP_MCU_SYS_ADDR0_SIZE                          (16)
#define SIA_ISP_MCU_SYS_ADDR0_OFFSET                        (SIA_SIA_BASE_ADDR + 0x40)
#define SIA_ISP_MCU_SYS_ADDR0_RESET_VALUE                   (0x00)
#define SIA_ISP_MCU_SYS_ADDR0_BITFIELD_MASK                 (0xFFFF)
#define SIA_ISP_MCU_SYS_ADDR0_RWMASK                        (0xFFFF)
#define SIA_ISP_MCU_SYS_ADDR0_ROMASK                        (0x0000)
#define SIA_ISP_MCU_SYS_ADDR0_WOMASK                        (0x0000)
#define SIA_ISP_MCU_SYS_ADDR0_UNUSED_MASK                   (0x0000)
#define SIA_ISP_MCU_SYS_ADDR0_REGION_BA_OFFSET              (0x0000)
#define SIA_ISP_MCU_SYS_ADDR0_REGION_BA_WIDTH               (16)
#define SIA_ISP_MCU_SYS_ADDR0_REGION_BA_MASK                (0xFFFF)

/*
* Register : ISP_MCU_SYS_SIZE0
*/

#define SIA_ISP_MCU_SYS_SIZE0_SIZE                          (16)
#define SIA_ISP_MCU_SYS_SIZE0_OFFSET                        (SIA_SIA_BASE_ADDR + 0x42)
#define SIA_ISP_MCU_SYS_SIZE0_RESET_VALUE                   (0x00)
#define SIA_ISP_MCU_SYS_SIZE0_BITFIELD_MASK                 (0x0003)
#define SIA_ISP_MCU_SYS_SIZE0_RWMASK                        (0x0003)
#define SIA_ISP_MCU_SYS_SIZE0_ROMASK                        (0x0000)
#define SIA_ISP_MCU_SYS_SIZE0_WOMASK                        (0x0000)
#define SIA_ISP_MCU_SYS_SIZE0_UNUSED_MASK                   (0xFFFC)
#define SIA_ISP_MCU_SYS_SIZE0_REGION_SZ_OFFSET              (0x0000)
#define SIA_ISP_MCU_SYS_SIZE0_REGION_SZ_WIDTH               (2)
#define SIA_ISP_MCU_SYS_SIZE0_REGION_SZ_MASK                (0x0003)
#define SIA_ISP_MCU_SYS_SIZE0_REGION_SZ_B_0x0               (0x0000)
#define SIA_ISP_MCU_SYS_SIZE0_REGION_SZ_B_0x1               (0x0001)
#define SIA_ISP_MCU_SYS_SIZE0_REGION_SZ_B_0x2               (0x0002)
#define SIA_ISP_MCU_SYS_SIZE0_REGION_SZ_B_0x3               (0x0003)

/*
* Register : ISP_MCU_SYS_ADDR1
*/

#define SIA_ISP_MCU_SYS_ADDR1_SIZE                          (16)
#define SIA_ISP_MCU_SYS_ADDR1_OFFSET                        (SIA_SIA_BASE_ADDR + 0x44)
#define SIA_ISP_MCU_SYS_ADDR1_RESET_VALUE                   (0x00)
#define SIA_ISP_MCU_SYS_ADDR1_BITFIELD_MASK                 (0xFFFF)
#define SIA_ISP_MCU_SYS_ADDR1_RWMASK                        (0xFFFF)
#define SIA_ISP_MCU_SYS_ADDR1_ROMASK                        (0x0000)
#define SIA_ISP_MCU_SYS_ADDR1_WOMASK                        (0x0000)
#define SIA_ISP_MCU_SYS_ADDR1_UNUSED_MASK                   (0x0000)
#define SIA_ISP_MCU_SYS_ADDR1_REGION_BA_OFFSET              (0x0000)
#define SIA_ISP_MCU_SYS_ADDR1_REGION_BA_WIDTH               (16)
#define SIA_ISP_MCU_SYS_ADDR1_REGION_BA_MASK                (0xFFFF)

/*
* Register : ISP_MCU_SYS_SIZE1
*/

#define SIA_ISP_MCU_SYS_SIZE1_SIZE                          (16)
#define SIA_ISP_MCU_SYS_SIZE1_OFFSET                        (SIA_SIA_BASE_ADDR + 0x46)
#define SIA_ISP_MCU_SYS_SIZE1_RESET_VALUE                   (0x00)
#define SIA_ISP_MCU_SYS_SIZE1_BITFIELD_MASK                 (0x0003)
#define SIA_ISP_MCU_SYS_SIZE1_RWMASK                        (0x0003)
#define SIA_ISP_MCU_SYS_SIZE1_ROMASK                        (0x0000)
#define SIA_ISP_MCU_SYS_SIZE1_WOMASK                        (0x0000)
#define SIA_ISP_MCU_SYS_SIZE1_UNUSED_MASK                   (0xFFFC)
#define SIA_ISP_MCU_SYS_SIZE1_REGION_SZ_OFFSET              (0x0000)
#define SIA_ISP_MCU_SYS_SIZE1_REGION_SZ_WIDTH               (2)
#define SIA_ISP_MCU_SYS_SIZE1_REGION_SZ_MASK                (0x0003)
#define SIA_ISP_MCU_SYS_SIZE1_REGION_SZ_B_0x0               (0x0000)
#define SIA_ISP_MCU_SYS_SIZE1_REGION_SZ_B_0x1               (0x0001)
#define SIA_ISP_MCU_SYS_SIZE1_REGION_SZ_B_0x2               (0x0002)
#define SIA_ISP_MCU_SYS_SIZE1_REGION_SZ_B_0x3               (0x0003)

/*
* Register : ISP_MCU_SYS_ADDR2
*/

#define SIA_ISP_MCU_SYS_ADDR2_SIZE                          (16)
#define SIA_ISP_MCU_SYS_ADDR2_OFFSET                        (SIA_SIA_BASE_ADDR + 0x48)
#define SIA_ISP_MCU_SYS_ADDR2_RESET_VALUE                   (0x00)
#define SIA_ISP_MCU_SYS_ADDR2_BITFIELD_MASK                 (0xFFFF)
#define SIA_ISP_MCU_SYS_ADDR2_RWMASK                        (0xFFFF)
#define SIA_ISP_MCU_SYS_ADDR2_ROMASK                        (0x0000)
#define SIA_ISP_MCU_SYS_ADDR2_WOMASK                        (0x0000)
#define SIA_ISP_MCU_SYS_ADDR2_UNUSED_MASK                   (0x0000)
#define SIA_ISP_MCU_SYS_ADDR2_REGION_BA_OFFSET              (0x0000)
#define SIA_ISP_MCU_SYS_ADDR2_REGION_BA_WIDTH               (16)
#define SIA_ISP_MCU_SYS_ADDR2_REGION_BA_MASK                (0xFFFF)

/*
* Register : ISP_MCU_SYS_SIZE2
*/

#define SIA_ISP_MCU_SYS_SIZE2_SIZE                          (16)
#define SIA_ISP_MCU_SYS_SIZE2_OFFSET                        (SIA_SIA_BASE_ADDR + 0x4A)
#define SIA_ISP_MCU_SYS_SIZE2_RESET_VALUE                   (0x00)
#define SIA_ISP_MCU_SYS_SIZE2_BITFIELD_MASK                 (0x0003)
#define SIA_ISP_MCU_SYS_SIZE2_RWMASK                        (0x0003)
#define SIA_ISP_MCU_SYS_SIZE2_ROMASK                        (0x0000)
#define SIA_ISP_MCU_SYS_SIZE2_WOMASK                        (0x0000)
#define SIA_ISP_MCU_SYS_SIZE2_UNUSED_MASK                   (0xFFFC)
#define SIA_ISP_MCU_SYS_SIZE2_REGION_SZ_OFFSET              (0x0000)
#define SIA_ISP_MCU_SYS_SIZE2_REGION_SZ_WIDTH               (2)
#define SIA_ISP_MCU_SYS_SIZE2_REGION_SZ_MASK                (0x0003)
#define SIA_ISP_MCU_SYS_SIZE2_REGION_SZ_B_0x0               (0x0000)
#define SIA_ISP_MCU_SYS_SIZE2_REGION_SZ_B_0x1               (0x0001)
#define SIA_ISP_MCU_SYS_SIZE2_REGION_SZ_B_0x2               (0x0002)
#define SIA_ISP_MCU_SYS_SIZE2_REGION_SZ_B_0x3               (0x0003)

/*
* Register : ISP_MCU_SYS_ADDR3
*/

#define SIA_ISP_MCU_SYS_ADDR3_SIZE                          (16)
#define SIA_ISP_MCU_SYS_ADDR3_OFFSET                        (SIA_SIA_BASE_ADDR + 0x4C)
#define SIA_ISP_MCU_SYS_ADDR3_RESET_VALUE                   (0x00)
#define SIA_ISP_MCU_SYS_ADDR3_BITFIELD_MASK                 (0xFFFF)
#define SIA_ISP_MCU_SYS_ADDR3_RWMASK                        (0xFFFF)
#define SIA_ISP_MCU_SYS_ADDR3_ROMASK                        (0x0000)
#define SIA_ISP_MCU_SYS_ADDR3_WOMASK                        (0x0000)
#define SIA_ISP_MCU_SYS_ADDR3_UNUSED_MASK                   (0x0000)
#define SIA_ISP_MCU_SYS_ADDR3_REGION_BA_OFFSET              (0x0000)
#define SIA_ISP_MCU_SYS_ADDR3_REGION_BA_WIDTH               (16)
#define SIA_ISP_MCU_SYS_ADDR3_REGION_BA_MASK                (0xFFFF)

/*
* Register : ISP_MCU_SYS_SIZE3
*/

#define SIA_ISP_MCU_SYS_SIZE3_SIZE                          (16)
#define SIA_ISP_MCU_SYS_SIZE3_OFFSET                        (SIA_SIA_BASE_ADDR + 0x4E)
#define SIA_ISP_MCU_SYS_SIZE3_RESET_VALUE                   (0x00)
#define SIA_ISP_MCU_SYS_SIZE3_BITFIELD_MASK                 (0x0003)
#define SIA_ISP_MCU_SYS_SIZE3_RWMASK                        (0x0003)
#define SIA_ISP_MCU_SYS_SIZE3_ROMASK                        (0x0000)
#define SIA_ISP_MCU_SYS_SIZE3_WOMASK                        (0x0000)
#define SIA_ISP_MCU_SYS_SIZE3_UNUSED_MASK                   (0xFFFC)
#define SIA_ISP_MCU_SYS_SIZE3_REGION_SZ_OFFSET              (0x0000)
#define SIA_ISP_MCU_SYS_SIZE3_REGION_SZ_WIDTH               (2)
#define SIA_ISP_MCU_SYS_SIZE3_REGION_SZ_MASK                (0x0003)
#define SIA_ISP_MCU_SYS_SIZE3_REGION_SZ_B_0x0               (0x0000)
#define SIA_ISP_MCU_SYS_SIZE3_REGION_SZ_B_0x1               (0x0001)
#define SIA_ISP_MCU_SYS_SIZE3_REGION_SZ_B_0x2               (0x0002)
#define SIA_ISP_MCU_SYS_SIZE3_REGION_SZ_B_0x3               (0x0003)

/*
* Register : ISP_MCU_SYS_ADDR4
*/

#define SIA_ISP_MCU_SYS_ADDR4_SIZE                          (16)
#define SIA_ISP_MCU_SYS_ADDR4_OFFSET                        (SIA_SIA_BASE_ADDR + 0x50)
#define SIA_ISP_MCU_SYS_ADDR4_RESET_VALUE                   (0x00)
#define SIA_ISP_MCU_SYS_ADDR4_BITFIELD_MASK                 (0xFFFF)
#define SIA_ISP_MCU_SYS_ADDR4_RWMASK                        (0xFFFF)
#define SIA_ISP_MCU_SYS_ADDR4_ROMASK                        (0x0000)
#define SIA_ISP_MCU_SYS_ADDR4_WOMASK                        (0x0000)
#define SIA_ISP_MCU_SYS_ADDR4_UNUSED_MASK                   (0x0000)
#define SIA_ISP_MCU_SYS_ADDR4_REGION_BA_OFFSET              (0x0000)
#define SIA_ISP_MCU_SYS_ADDR4_REGION_BA_WIDTH               (16)
#define SIA_ISP_MCU_SYS_ADDR4_REGION_BA_MASK                (0xFFFF)

/*
* Register : ISP_MCU_SYS_SIZE4
*/

#define SIA_ISP_MCU_SYS_SIZE4_SIZE                          (16)
#define SIA_ISP_MCU_SYS_SIZE4_OFFSET                        (SIA_SIA_BASE_ADDR + 0x52)
#define SIA_ISP_MCU_SYS_SIZE4_RESET_VALUE                   (0x00)
#define SIA_ISP_MCU_SYS_SIZE4_BITFIELD_MASK                 (0x0003)
#define SIA_ISP_MCU_SYS_SIZE4_RWMASK                        (0x0003)
#define SIA_ISP_MCU_SYS_SIZE4_ROMASK                        (0x0000)
#define SIA_ISP_MCU_SYS_SIZE4_WOMASK                        (0x0000)
#define SIA_ISP_MCU_SYS_SIZE4_UNUSED_MASK                   (0xFFFC)
#define SIA_ISP_MCU_SYS_SIZE4_REGION_SZ_OFFSET              (0x0000)
#define SIA_ISP_MCU_SYS_SIZE4_REGION_SZ_WIDTH               (2)
#define SIA_ISP_MCU_SYS_SIZE4_REGION_SZ_MASK                (0x0003)
#define SIA_ISP_MCU_SYS_SIZE4_REGION_SZ_B_0x0               (0x0000)
#define SIA_ISP_MCU_SYS_SIZE4_REGION_SZ_B_0x1               (0x0001)
#define SIA_ISP_MCU_SYS_SIZE4_REGION_SZ_B_0x2               (0x0002)
#define SIA_ISP_MCU_SYS_SIZE4_REGION_SZ_B_0x3               (0x0003)

/*
* Register : ISP_MCU_SYS_ADDR5
*/

#define SIA_ISP_MCU_SYS_ADDR5_SIZE                          (16)
#define SIA_ISP_MCU_SYS_ADDR5_OFFSET                        (SIA_SIA_BASE_ADDR + 0x54)
#define SIA_ISP_MCU_SYS_ADDR5_RESET_VALUE                   (0x00)
#define SIA_ISP_MCU_SYS_ADDR5_BITFIELD_MASK                 (0xFFFF)
#define SIA_ISP_MCU_SYS_ADDR5_RWMASK                        (0xFFFF)
#define SIA_ISP_MCU_SYS_ADDR5_ROMASK                        (0x0000)
#define SIA_ISP_MCU_SYS_ADDR5_WOMASK                        (0x0000)
#define SIA_ISP_MCU_SYS_ADDR5_UNUSED_MASK                   (0x0000)
#define SIA_ISP_MCU_SYS_ADDR5_REGION_BA_OFFSET              (0x0000)
#define SIA_ISP_MCU_SYS_ADDR5_REGION_BA_WIDTH               (16)
#define SIA_ISP_MCU_SYS_ADDR5_REGION_BA_MASK                (0xFFFF)

/*
* Register : ISP_MCU_SYS_SIZE5
*/

#define SIA_ISP_MCU_SYS_SIZE5_SIZE                          (16)
#define SIA_ISP_MCU_SYS_SIZE5_OFFSET                        (SIA_SIA_BASE_ADDR + 0x56)
#define SIA_ISP_MCU_SYS_SIZE5_RESET_VALUE                   (0x00)
#define SIA_ISP_MCU_SYS_SIZE5_BITFIELD_MASK                 (0x0003)
#define SIA_ISP_MCU_SYS_SIZE5_RWMASK                        (0x0003)
#define SIA_ISP_MCU_SYS_SIZE5_ROMASK                        (0x0000)
#define SIA_ISP_MCU_SYS_SIZE5_WOMASK                        (0x0000)
#define SIA_ISP_MCU_SYS_SIZE5_UNUSED_MASK                   (0xFFFC)
#define SIA_ISP_MCU_SYS_SIZE5_REGION_SZ_OFFSET              (0x0000)
#define SIA_ISP_MCU_SYS_SIZE5_REGION_SZ_WIDTH               (2)
#define SIA_ISP_MCU_SYS_SIZE5_REGION_SZ_MASK                (0x0003)
#define SIA_ISP_MCU_SYS_SIZE5_REGION_SZ_B_0x0               (0x0000)
#define SIA_ISP_MCU_SYS_SIZE5_REGION_SZ_B_0x1               (0x0001)
#define SIA_ISP_MCU_SYS_SIZE5_REGION_SZ_B_0x2               (0x0002)
#define SIA_ISP_MCU_SYS_SIZE5_REGION_SZ_B_0x3               (0x0003)

/*
* Register : ISP_MCU_SYS_ADDR6
*/

#define SIA_ISP_MCU_SYS_ADDR6_SIZE                          (16)
#define SIA_ISP_MCU_SYS_ADDR6_OFFSET                        (SIA_SIA_BASE_ADDR + 0x58)
#define SIA_ISP_MCU_SYS_ADDR6_RESET_VALUE                   (0x00)
#define SIA_ISP_MCU_SYS_ADDR6_BITFIELD_MASK                 (0xFFFF)
#define SIA_ISP_MCU_SYS_ADDR6_RWMASK                        (0xFFFF)
#define SIA_ISP_MCU_SYS_ADDR6_ROMASK                        (0x0000)
#define SIA_ISP_MCU_SYS_ADDR6_WOMASK                        (0x0000)
#define SIA_ISP_MCU_SYS_ADDR6_UNUSED_MASK                   (0x0000)
#define SIA_ISP_MCU_SYS_ADDR6_REGION_BA_OFFSET              (0x0000)
#define SIA_ISP_MCU_SYS_ADDR6_REGION_BA_WIDTH               (16)
#define SIA_ISP_MCU_SYS_ADDR6_REGION_BA_MASK                (0xFFFF)

/*
* Register : ISP_MCU_SYS_SIZE6
*/

#define SIA_ISP_MCU_SYS_SIZE6_SIZE                          (16)
#define SIA_ISP_MCU_SYS_SIZE6_OFFSET                        (SIA_SIA_BASE_ADDR + 0x5A)
#define SIA_ISP_MCU_SYS_SIZE6_RESET_VALUE                   (0x00)
#define SIA_ISP_MCU_SYS_SIZE6_BITFIELD_MASK                 (0x0003)
#define SIA_ISP_MCU_SYS_SIZE6_RWMASK                        (0x0003)
#define SIA_ISP_MCU_SYS_SIZE6_ROMASK                        (0x0000)
#define SIA_ISP_MCU_SYS_SIZE6_WOMASK                        (0x0000)
#define SIA_ISP_MCU_SYS_SIZE6_UNUSED_MASK                   (0xFFFC)
#define SIA_ISP_MCU_SYS_SIZE6_REGION_SZ_OFFSET              (0x0000)
#define SIA_ISP_MCU_SYS_SIZE6_REGION_SZ_WIDTH               (2)
#define SIA_ISP_MCU_SYS_SIZE6_REGION_SZ_MASK                (0x0003)
#define SIA_ISP_MCU_SYS_SIZE6_REGION_SZ_B_0x0               (0x0000)
#define SIA_ISP_MCU_SYS_SIZE6_REGION_SZ_B_0x1               (0x0001)
#define SIA_ISP_MCU_SYS_SIZE6_REGION_SZ_B_0x2               (0x0002)
#define SIA_ISP_MCU_SYS_SIZE6_REGION_SZ_B_0x3               (0x0003)

/*
* Register : ISP_MCU_SYS_ADDR7
*/

#define SIA_ISP_MCU_SYS_ADDR7_SIZE                          (16)
#define SIA_ISP_MCU_SYS_ADDR7_OFFSET                        (SIA_SIA_BASE_ADDR + 0x5C)
#define SIA_ISP_MCU_SYS_ADDR7_RESET_VALUE                   (0x00)
#define SIA_ISP_MCU_SYS_ADDR7_BITFIELD_MASK                 (0xFFFF)
#define SIA_ISP_MCU_SYS_ADDR7_RWMASK                        (0xFFFF)
#define SIA_ISP_MCU_SYS_ADDR7_ROMASK                        (0x0000)
#define SIA_ISP_MCU_SYS_ADDR7_WOMASK                        (0x0000)
#define SIA_ISP_MCU_SYS_ADDR7_UNUSED_MASK                   (0x0000)
#define SIA_ISP_MCU_SYS_ADDR7_REGION_BA_OFFSET              (0x0000)
#define SIA_ISP_MCU_SYS_ADDR7_REGION_BA_WIDTH               (16)
#define SIA_ISP_MCU_SYS_ADDR7_REGION_BA_MASK                (0xFFFF)

/*
* Register : ISP_MCU_SYS_SIZE7
*/

#define SIA_ISP_MCU_SYS_SIZE7_SIZE                          (16)
#define SIA_ISP_MCU_SYS_SIZE7_OFFSET                        (SIA_SIA_BASE_ADDR + 0x5E)
#define SIA_ISP_MCU_SYS_SIZE7_RESET_VALUE                   (0x00)
#define SIA_ISP_MCU_SYS_SIZE7_BITFIELD_MASK                 (0x0003)
#define SIA_ISP_MCU_SYS_SIZE7_RWMASK                        (0x0003)
#define SIA_ISP_MCU_SYS_SIZE7_ROMASK                        (0x0000)
#define SIA_ISP_MCU_SYS_SIZE7_WOMASK                        (0x0000)
#define SIA_ISP_MCU_SYS_SIZE7_UNUSED_MASK                   (0xFFFC)
#define SIA_ISP_MCU_SYS_SIZE7_REGION_SZ_OFFSET              (0x0000)
#define SIA_ISP_MCU_SYS_SIZE7_REGION_SZ_WIDTH               (2)
#define SIA_ISP_MCU_SYS_SIZE7_REGION_SZ_MASK                (0x0003)
#define SIA_ISP_MCU_SYS_SIZE7_REGION_SZ_B_0x0               (0x0000)
#define SIA_ISP_MCU_SYS_SIZE7_REGION_SZ_B_0x1               (0x0001)
#define SIA_ISP_MCU_SYS_SIZE7_REGION_SZ_B_0x2               (0x0002)
#define SIA_ISP_MCU_SYS_SIZE7_REGION_SZ_B_0x3               (0x0003)

/*
* Register : ISP_MCU_IO_ADDR_0
*/

#define SIA_ISP_MCU_IO_ADDR_0_SIZE                          (16)
#define SIA_ISP_MCU_IO_ADDR_0_OFFSET                        (SIA_SIA_BASE_ADDR + 0x60)
#define SIA_ISP_MCU_IO_ADDR_0_RESET_VALUE                   (0x00)
#define SIA_ISP_MCU_IO_ADDR_0_BITFIELD_MASK                 (0xFF00)
#define SIA_ISP_MCU_IO_ADDR_0_RWMASK                        (0xFF00)
#define SIA_ISP_MCU_IO_ADDR_0_ROMASK                        (0x0000)
#define SIA_ISP_MCU_IO_ADDR_0_WOMASK                        (0x0000)
#define SIA_ISP_MCU_IO_ADDR_0_UNUSED_MASK                   (0x00FF)
#define SIA_ISP_MCU_IO_ADDR_0_REGION_BA_OFFSET              (0x0008)
#define SIA_ISP_MCU_IO_ADDR_0_REGION_BA_WIDTH               (8)
#define SIA_ISP_MCU_IO_ADDR_0_REGION_BA_MASK                (0xFF00)

/*
* Register : ISP_MCU_IO_ADDR_1
*/

#define SIA_ISP_MCU_IO_ADDR_1_SIZE                          (16)
#define SIA_ISP_MCU_IO_ADDR_1_OFFSET                        (SIA_SIA_BASE_ADDR + 0x62)
#define SIA_ISP_MCU_IO_ADDR_1_RESET_VALUE                   (0x00)
#define SIA_ISP_MCU_IO_ADDR_1_BITFIELD_MASK                 (0xFF00)
#define SIA_ISP_MCU_IO_ADDR_1_RWMASK                        (0xFF00)
#define SIA_ISP_MCU_IO_ADDR_1_ROMASK                        (0x0000)
#define SIA_ISP_MCU_IO_ADDR_1_WOMASK                        (0x0000)
#define SIA_ISP_MCU_IO_ADDR_1_UNUSED_MASK                   (0x00FF)
#define SIA_ISP_MCU_IO_ADDR_1_REGION_BA_OFFSET              (0x0008)
#define SIA_ISP_MCU_IO_ADDR_1_REGION_BA_WIDTH               (8)
#define SIA_ISP_MCU_IO_ADDR_1_REGION_BA_MASK                (0xFF00)

/*
* Register : ISP_MEM_PAGE
*/

#define SIA_ISP_MEM_PAGE_SIZE                               (16)
#define SIA_ISP_MEM_PAGE_OFFSET                             (SIA_SIA_BASE_ADDR + 0x70)
#define SIA_ISP_MEM_PAGE_RESET_VALUE                        (0x00)
#define SIA_ISP_MEM_PAGE_BITFIELD_MASK                      (0x003F)
#define SIA_ISP_MEM_PAGE_RWMASK                             (0x003F)
#define SIA_ISP_MEM_PAGE_ROMASK                             (0x0000)
#define SIA_ISP_MEM_PAGE_WOMASK                             (0x0000)
#define SIA_ISP_MEM_PAGE_UNUSED_MASK                        (0xFFC0)
#define SIA_ISP_MEM_PAGE_INDEX_OFFSET                       (0x0000)
#define SIA_ISP_MEM_PAGE_INDEX_WIDTH                        (6)
#define SIA_ISP_MEM_PAGE_INDEX_MASK                         (0x003F)
#define SIA_ISP_MEM_PAGE_INDEX_B_0x0                        (0x0000)
#define SIA_ISP_MEM_PAGE_INDEX_B_0x1                        (0x0001)
#define SIA_ISP_MEM_PAGE_INDEX_B_0x2                        (0x0002)
#define SIA_ISP_MEM_PAGE_INDEX_B_0x3                        (0x0003)
#define SIA_ISP_MEM_PAGE_INDEX_B_0x4                        (0x0004)
#define SIA_ISP_MEM_PAGE_INDEX_B_0x5                        (0x0005)
#define SIA_ISP_MEM_PAGE_INDEX_B_0x6                        (0x0006)
#define SIA_ISP_MEM_PAGE_INDEX_B_0x7                        (0x0007)
#define SIA_ISP_MEM_PAGE_INDEX_B_0x8                        (0x0008)
#define SIA_ISP_MEM_PAGE_INDEX_B_0x9                        (0x0009)
#define SIA_ISP_MEM_PAGE_INDEX_B_0xA                        (0x000A)
#define SIA_ISP_MEM_PAGE_INDEX_B_0xB                        (0x000B)
#define SIA_ISP_MEM_PAGE_INDEX_B_0xC                        (0x000C)
#define SIA_ISP_MEM_PAGE_INDEX_B_0xD                        (0x000D)
#define SIA_ISP_MEM_PAGE_INDEX_B_0xE                        (0x000E)
#define SIA_ISP_MEM_PAGE_INDEX_B_0xF                        (0x000F)
#define SIA_ISP_MEM_PAGE_INDEX_B_0x10                       (0x0010)
#define SIA_ISP_MEM_PAGE_INDEX_B_0x11                       (0x0011)
#define SIA_ISP_MEM_PAGE_INDEX_B_0x12                       (0x0012)
#define SIA_ISP_MEM_PAGE_INDEX_B_0x13                       (0x0013)
#define SIA_ISP_MEM_PAGE_INDEX_B_0x14                       (0x0014)
#define SIA_ISP_MEM_PAGE_INDEX_B_0x15                       (0x0015)
#define SIA_ISP_MEM_PAGE_INDEX_B_0x16                       (0x0016)
#define SIA_ISP_MEM_PAGE_INDEX_B_0x17                       (0x0017)
#define SIA_ISP_MEM_PAGE_INDEX_B_0x18                       (0x0018)
#define SIA_ISP_MEM_PAGE_INDEX_B_0x19                       (0x0019)
#define SIA_ISP_MEM_PAGE_INDEX_B_0x20                       (0x0020)
#define SIA_ISP_MEM_PAGE_INDEX_B_0x21                       (0x0021)
#define SIA_ISP_MEM_PAGE_INDEX_B_0x22                       (0x0022)
#define SIA_ISP_MEM_PAGE_INDEX_B_0x23                       (0x0023)
#define SIA_ISP_MEM_PAGE_INDEX_B_0x24                       (0x0024)
#define SIA_ISP_MEM_PAGE_INDEX_B_0x25                       (0x0025)
#define SIA_ISP_MEM_PAGE_INDEX_B_0x26                       (0x0026)
#define SIA_ISP_MEM_PAGE_INDEX_B_0x27                       (0x0027)
#define SIA_ISP_MEM_PAGE_INDEX_B_0x30                       (0x0030)

/*
* Register : SIA_XBUS_BYTE_ENABLE
*/

#define SIA_SIA_XBUS_BYTE_ENABLE_SIZE                       (16)
#define SIA_SIA_XBUS_BYTE_ENABLE_OFFSET                     (SIA_SIA_BASE_ADDR + 0x72)
#define SIA_SIA_XBUS_BYTE_ENABLE_RESET_VALUE                (0x0303)
#define SIA_SIA_XBUS_BYTE_ENABLE_BITFIELD_MASK              (0x0303)
#define SIA_SIA_XBUS_BYTE_ENABLE_RWMASK                     (0x0303)
#define SIA_SIA_XBUS_BYTE_ENABLE_ROMASK                     (0x0000)
#define SIA_SIA_XBUS_BYTE_ENABLE_WOMASK                     (0x0000)
#define SIA_SIA_XBUS_BYTE_ENABLE_UNUSED_MASK                (0xFCFC)
#define SIA_SIA_XBUS_BYTE_ENABLE_BE0_OFFSET                 (0x0000)
#define SIA_SIA_XBUS_BYTE_ENABLE_BE0_WIDTH                  (2)
#define SIA_SIA_XBUS_BYTE_ENABLE_BE0_MASK                   (0x0003)
#define SIA_SIA_XBUS_BYTE_ENABLE_BE0_B_0x0                  (0x0000)
#define SIA_SIA_XBUS_BYTE_ENABLE_BE0_B_0x1                  (0x0001)
#define SIA_SIA_XBUS_BYTE_ENABLE_BE0_B_0x2                  (0x0002)
#define SIA_SIA_XBUS_BYTE_ENABLE_BE0_B_0x3                  (0x0003)
#define SIA_SIA_XBUS_BYTE_ENABLE_BE1_OFFSET                 (0x0008)
#define SIA_SIA_XBUS_BYTE_ENABLE_BE1_WIDTH                  (2)
#define SIA_SIA_XBUS_BYTE_ENABLE_BE1_MASK                   (0x0300)
#define SIA_SIA_XBUS_BYTE_ENABLE_BE1_B_0x0                  (0x0000)
#define SIA_SIA_XBUS_BYTE_ENABLE_BE1_B_0x1                  (0x0001)
#define SIA_SIA_XBUS_BYTE_ENABLE_BE1_B_0x2                  (0x0002)
#define SIA_SIA_XBUS_BYTE_ENABLE_BE1_B_0x3                  (0x0003)

/*
* Register : SIA_PIPE03_SELECT
*/

#define SIA_SIA_PIPE03_SELECT_SIZE                          (16)
#define SIA_SIA_PIPE03_SELECT_OFFSET                        (SIA_SIA_BASE_ADDR + 0x80)
#define SIA_SIA_PIPE03_SELECT_RESET_VALUE                   (0x00)
#define SIA_SIA_PIPE03_SELECT_BITFIELD_MASK                 (0x0001)
#define SIA_SIA_PIPE03_SELECT_RWMASK                        (0x0001)
#define SIA_SIA_PIPE03_SELECT_ROMASK                        (0x0000)
#define SIA_SIA_PIPE03_SELECT_WOMASK                        (0x0000)
#define SIA_SIA_PIPE03_SELECT_UNUSED_MASK                   (0xFFFE)
#define SIA_SIA_PIPE03_SELECT_AP_OFFSET                     (0x0000)
#define SIA_SIA_PIPE03_SELECT_AP_WIDTH                      (1)
#define SIA_SIA_PIPE03_SELECT_AP_MASK                       (0x0001)
#define SIA_SIA_PIPE03_SELECT_AP_B_0x0                      (0x0000)
#define SIA_SIA_PIPE03_SELECT_AP_B_0x1                      (0x0001)

/*
* Register : LICN_ITS
*/

#define SIA_LICN_ITS_SIZE                                   (16)
#define SIA_LICN_ITS_OFFSET                                 (SIA_SIA_BASE_ADDR + 0x90)
#define SIA_LICN_ITS_RESET_VALUE                            (0x00)
#define SIA_LICN_ITS_BITFIELD_MASK                          (0x0001)
#define SIA_LICN_ITS_RWMASK                                 (0x0000)
#define SIA_LICN_ITS_ROMASK                                 (0x0001)
#define SIA_LICN_ITS_WOMASK                                 (0x0000)
#define SIA_LICN_ITS_UNUSED_MASK                            (0xFFFE)
#define SIA_LICN_ITS_BUSERR_OFFSET                          (0x0000)
#define SIA_LICN_ITS_BUSERR_WIDTH                           (1)
#define SIA_LICN_ITS_BUSERR_MASK                            (0x0001)
#define SIA_LICN_ITS_BUSERR_B_0x0                           (0x0000)
#define SIA_LICN_ITS_BUSERR_B_0x1                           (0x0001)

/*
* Register : LICN_ITS_BCLR
*/

#define SIA_LICN_ITS_BCLR_SIZE                              (16)
#define SIA_LICN_ITS_BCLR_OFFSET                            (SIA_SIA_BASE_ADDR + 0x92)
#define SIA_LICN_ITS_BCLR_RESET_VALUE                       (0x00)
#define SIA_LICN_ITS_BCLR_BITFIELD_MASK                     (0x0001)
#define SIA_LICN_ITS_BCLR_RWMASK                            (0x0000)
#define SIA_LICN_ITS_BCLR_ROMASK                            (0x0000)
#define SIA_LICN_ITS_BCLR_WOMASK                            (0x0001)
#define SIA_LICN_ITS_BCLR_UNUSED_MASK                       (0xFFFE)
#define SIA_LICN_ITS_BCLR_BUSERR_OFFSET                     (0x0000)
#define SIA_LICN_ITS_BCLR_BUSERR_WIDTH                      (1)
#define SIA_LICN_ITS_BCLR_BUSERR_MASK                       (0x0001)
#define SIA_LICN_ITS_BCLR_BUSERR_B_0x0                      (0x0000)
#define SIA_LICN_ITS_BCLR_BUSERR_B_0x1                      (0x0001)

/*
* Register : LICN_ITS_BSET
*/

#define SIA_LICN_ITS_BSET_SIZE                              (16)
#define SIA_LICN_ITS_BSET_OFFSET                            (SIA_SIA_BASE_ADDR + 0x94)
#define SIA_LICN_ITS_BSET_RESET_VALUE                       (0x00)
#define SIA_LICN_ITS_BSET_BITFIELD_MASK                     (0x0001)
#define SIA_LICN_ITS_BSET_RWMASK                            (0x0000)
#define SIA_LICN_ITS_BSET_ROMASK                            (0x0000)
#define SIA_LICN_ITS_BSET_WOMASK                            (0x0001)
#define SIA_LICN_ITS_BSET_UNUSED_MASK                       (0xFFFE)
#define SIA_LICN_ITS_BSET_BUSERR_OFFSET                     (0x0000)
#define SIA_LICN_ITS_BSET_BUSERR_WIDTH                      (1)
#define SIA_LICN_ITS_BSET_BUSERR_MASK                       (0x0001)
#define SIA_LICN_ITS_BSET_BUSERR_B_0x0                      (0x0000)
#define SIA_LICN_ITS_BSET_BUSERR_B_0x1                      (0x0001)

/*
* Register : LICN_ITM
*/

#define SIA_LICN_ITM_SIZE                                   (16)
#define SIA_LICN_ITM_OFFSET                                 (SIA_SIA_BASE_ADDR + 0x96)
#define SIA_LICN_ITM_RESET_VALUE                            (0x00)
#define SIA_LICN_ITM_BITFIELD_MASK                          (0x0001)
#define SIA_LICN_ITM_RWMASK                                 (0x0000)
#define SIA_LICN_ITM_ROMASK                                 (0x0001)
#define SIA_LICN_ITM_WOMASK                                 (0x0000)
#define SIA_LICN_ITM_UNUSED_MASK                            (0xFFFE)
#define SIA_LICN_ITM_BUSERR_OFFSET                          (0x0000)
#define SIA_LICN_ITM_BUSERR_WIDTH                           (1)
#define SIA_LICN_ITM_BUSERR_MASK                            (0x0001)
#define SIA_LICN_ITM_BUSERR_B_0x0                           (0x0000)
#define SIA_LICN_ITM_BUSERR_B_0x1                           (0x0001)

/*
* Register : LICN_ITM_BCLR
*/

#define SIA_LICN_ITM_BCLR_SIZE                              (16)
#define SIA_LICN_ITM_BCLR_OFFSET                            (SIA_SIA_BASE_ADDR + 0x98)
#define SIA_LICN_ITM_BCLR_RESET_VALUE                       (0x00)
#define SIA_LICN_ITM_BCLR_BITFIELD_MASK                     (0x0001)
#define SIA_LICN_ITM_BCLR_RWMASK                            (0x0000)
#define SIA_LICN_ITM_BCLR_ROMASK                            (0x0000)
#define SIA_LICN_ITM_BCLR_WOMASK                            (0x0001)
#define SIA_LICN_ITM_BCLR_UNUSED_MASK                       (0xFFFE)
#define SIA_LICN_ITM_BCLR_BUSERR_OFFSET                     (0x0000)
#define SIA_LICN_ITM_BCLR_BUSERR_WIDTH                      (1)
#define SIA_LICN_ITM_BCLR_BUSERR_MASK                       (0x0001)
#define SIA_LICN_ITM_BCLR_BUSERR_B_0x0                      (0x0000)
#define SIA_LICN_ITM_BCLR_BUSERR_B_0x1                      (0x0001)

/*
* Register : LICN_ITM_BSET
*/

#define SIA_LICN_ITM_BSET_SIZE                              (16)
#define SIA_LICN_ITM_BSET_OFFSET                            (SIA_SIA_BASE_ADDR + 0x9A)
#define SIA_LICN_ITM_BSET_RESET_VALUE                       (0x00)
#define SIA_LICN_ITM_BSET_BITFIELD_MASK                     (0x0001)
#define SIA_LICN_ITM_BSET_RWMASK                            (0x0000)
#define SIA_LICN_ITM_BSET_ROMASK                            (0x0000)
#define SIA_LICN_ITM_BSET_WOMASK                            (0x0001)
#define SIA_LICN_ITM_BSET_UNUSED_MASK                       (0xFFFE)
#define SIA_LICN_ITM_BSET_BUSERR_OFFSET                     (0x0000)
#define SIA_LICN_ITM_BSET_BUSERR_WIDTH                      (1)
#define SIA_LICN_ITM_BSET_BUSERR_MASK                       (0x0001)
#define SIA_LICN_ITM_BSET_BUSERR_B_0x0                      (0x0000)
#define SIA_LICN_ITM_BSET_BUSERR_B_0x1                      (0x0001)

#endif /* _SIA_H_ */
