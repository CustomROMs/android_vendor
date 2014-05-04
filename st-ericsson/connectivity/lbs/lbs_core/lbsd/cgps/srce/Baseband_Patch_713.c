/****************************************************************************
 GPS IP Centre, ST-Ericsson (UK) Ltd.
 Copyright (c) 2009 ST-Ericsson (UK) Ltd.
 15-16 Cottesbrooke Park, Heartlands Business Park, Daventry, NN11 8YL, UK.
 All rights reserved.

 Filename Baseband_Patch_713.c

 $Header: $
 $Locker: $
****************************************************************************


****************************************************************************

 This file was created from base patch file E713A019.187D


****************************************************************************/

//PG1 - Patch019

#define PatchCheckSum_713             0x187D
#define PatchFileName_713     "E713A019.187D"
#define PatchRomVersion_713              713

static const U1 vg_CG2900_Patch[]= {
"#COMD 24 17814 00000 &FE\x0D\x0A\
#COMD 24 17814 00000 &FE\x0D\x0A\
#COMD 24 60464 65535 &15\x0D\x0A\
#COMD 6 2 EADB 187D E783 &22\x0D\x0A\
#COMD 6 2 EADB 187D E783 &22\x0D\x0A\
#COMD 25 53544 &EF\x0D\x0A\
#COMD 25 53544 &EF\x0D\x0A\
#COMD 31 6038 0000 0001 &79\x0D\x0A\
#COMD 31 6038 0000 0001 &79\x0D\x0A\
#COMD 6 16 EAE0 FE6A FE6A FE6A 5E19 3FF D4B8 EC6E 5071 81C0 2000 CC01 5031 5E12 2 93B2 D4B8 &D5\x0D\x0A\
#COMD 6 16 EAF0 EC3C 5021 81C0 1000 D4B8 EC49 41C0 E913 4580 D4B8 591E D4BC EC99 D4B8 325E 41C0 &87\x0D\x0A\
#COMD 6 16 EB00 4F6D D4BC 325E 5B5B CC00 50D5 CC09 50B3 41C0 5AD1 D5B8 EC97 CD08 5032 2106 41C0 &7A\x0D\x0A\
#COMD 6 16 EB10 E92D 2100 4580 41C0 5B3D 2100 4580 5E40 5E41 5E1A 3235 D5B8 593F 41C0 5154 5B40 &DC\x0D\x0A\
#COMD 6 16 EB20 52A1 D5B8 593F 5ED9 5E19 5 41C0 5169 581A 83E8 4 D5B8 5949 1B68 1BA8 5B40 &0A\x0D\x0A\
#COMD 6 16 EB30 5E02 594A 1F62 5E02 594B 9382 41C0 4FB8 D5B8 594C 41C0 4FA3 D5B8 5943 41C0 4FA3 &56\x0D\x0A\
#COMD 6 16 EB40 581A 5B40 7760 5E19 51E 41C0 4FB8 81E8 4 D4BC 5A43 5E61 5E60 4580 584D 8CE2 &71\x0D\x0A\
#COMD 6 16 EB50 AD79 41C2 C377 4580 D4B8 682B 5E5A 213D 41C0 B9E1 5E7B D4B8 682B 96BC 8DB8 5062 &95\x0D\x0A\
#COMD 6 16 EB60 41C0 B00F 41C0 B005 4180 EB54 41C0 AF8F 1170 4180 AAEE 41C0 20B 211E 41C0 A7BF &05\x0D\x0A\
#COMD 6 16 EB70 961A 4582 211E 3140 41C0 A7D3 5E18 4E28 4180 B62F 41C0 A802 2117 31C0 4180 A7C5 &DF\x0D\x0A\
#COMD 6 16 EB80 D4B8 EC42 4581 9A78 82C0 FF 80C0 4A00 41C0 B62F 5B12 80C0 4C00 4180 B62F 41C0 &CC\x0D\x0A\
#COMD 6 16 EB90 A66A 5E02 45FA 5E18 FFE6 1B4A CE02 1B4A 2104 1B4A 6790 1B4A D4BC 460C 2111 D4BC &97\x0D\x0A\
#COMD 6 16 EBA0 4596 5E1A EBB7 3102 41C0 A7A7 5590 D4B8 5AFA 5011 D480 85E4 FFFF 8C 85E5 FFFF &6B\x0D\x0A\
#COMD 6 16 EBB0 4580 8DE4 4 4585 5E7A 4180 A719 3C00 40CC 5E18 3500 5E02 5AFB 80E2 C 4180 &DE\x0D\x0A\
#COMD 6 16 EBC0 266A 5E02 6050 82E2 FF D4BC 6051 8DC0 800 5011 7700 D5BC 6052 41C0 A86C C0F &60\x0D\x0A\
#COMD 6 16 EBD0 0 4180 2758 9B40 5E02 5AFB 80E2 100 5E7B 4180 26C7 8FB8 9FC3 D5BC 5A39 4180 &73\x0D\x0A\
#COMD 6 16 EBE0 27D2 5E48 5E40 5E5A 5E5C 5E00 326C 1F88 9480 67D0 1B50 1B80 2101 41C0 CAB8 41C0 &3B\x0D\x0A\
#COMD 6 16 EBF0 EC0C 41C0 CAD4 D4B8 6511 951A 41C1 EC00 5E7C 5E60 94A0 5E60 5E68 45C0 0 0 &22\x0D\x0A\
#COMD 6 16 EC00 5E41 C20F 86C0 E723 583A 580D 87E0 6 0 601 5E61 4580 5E00 603A 80E0 2 &CC\x0D\x0A\
#COMD 6 16 EC10 D4B8 6036 82C0 40 5071 0 D4B8 6038 82C0 FFFD D4BC 6038 6760 D4BC 6036 D4B8 &3D\x0D\x0A\
#COMD 6 16 EC20 460F CC02 5086 5E18 400 D4BC 5A5C 5E00 326C 41C0 E8D1 4580 77D0 4580 5E02 681C &EB\x0D\x0A\
#COMD 6 16 EC30 8CE2 6 4581 2106 1B42 4580 434F 4646 0 2020 2020 2020 2020 202D 3000 0 &58\x0D\x0A\
#COMD 6 16 EC40 D4B8 5109 5092 41C0 EC54 5B1A 50C2 D4B8 5109 67D0 D4BC 5109 41C0 1691 5B1A 5032 &13\x0D\x0A\
#COMD 6 16 EC50 2100 D4BC 5109 4580 5E02 5AFB 9922 5022 6760 4580 9822 57C2 41C0 CB17 5E46 5E06 &E9\x0D\x0A\
#COMD 6 16 EC60 323F 5B46 5E19 28 41C0 CE2D 3101 5B00 4181 ECB8 67D0 4181 ECB7 2123 1B48 5B40 &AF\x0D\x0A\
#COMD 6 16 EC70 D4BC 2F18 5E18 EC36 41C0 CF2E 41C0 ECDD 5E01 5AFE 1F69 5E5B 1F01 50A4 5E7B 7790 &D0\x0D\x0A\
#COMD 6 16 EC80 5E5B 67D0 5052 5E18 EC3B 41C0 CF2E 5020 41C0 CF53 5E18 2E 1B48 5E7A 5E07 3E8 &D2\x0D\x0A\
#COMD 6 16 EC90 815A 5B0B 9B70 41C0 CFAE 5E07 5168 D4B8 5B00 5E48 43C0 855A 5B0B 5E68 5B1C 5012 &67\x0D\x0A\
#COMD 6 16 ECA0 67D0 DAF0 83C0 7 5E5B 96BC 9B7D 41C0 CFC8 5E18 2E 1B48 5E7A 3F64 815A 5B0B &B7\x0D\x0A\
#COMD 6 16 ECB0 9B7D 41C0 CFAC 41C0 B309 41C0 B331 3100 5B5B 5E66 41C0 CB21 4580 5E02 EC68 80E2 &56\x0D\x0A\
#COMD 6 16 ECC0 3 5E02 5AFB 82E2 200 5E02 ECA7 1F4A 9292 CC64 5063 5E1A BA80 1B4A 5E1A 18C &6E\x0D\x0A\
#COMD 6 16 ECD0 1B42 4180 CA5C 2100 D4BC 2F64 5E02 5AFB 80E2 200 82E2 4 4580 41C0 CB17 500 &0B\x0D\x0A\
#COMD 6 16 ECE0 5EFF 589F 58BF D4B8 EC9E 96BC 5E07 13B6 815A 5B2B 9E71 9BC1 86B9 9B41 94B2 5ED8 &0C\x0D\x0A\
#COMD 6 16 ECF0 9BFF 86B9 9BFA 86B9 581A 5E02 5AFB 9822 52A2 D4B8 598B D5B8 598C 589A 58BB 5E07 &F0\x0D\x0A\
#COMD 6 16 ED00 5415 815A 5B0B 805B 5B2B 9B70 86B9 9B44 5EF8 9B70 6795 D2F0 5872 5830 8CB9 5104 &3F\x0D\x0A\
#COMD 6 16 ED10 7760 41C0 ED4D 86B9 41C0 ED71 501C 501 CC00 5061 5BA1 95A3 9FC8 5ED9 8CB9 5075 &2D\x0D\x0A\
#COMD 6 16 ED20 7F60 5893 58B3 D2D0 9B48 5ED8 5010 5ED8 D6F0 7790 5EF9 9B7B D4BC 5B00 5E07 616E &97\x0D\x0A\
#COMD 6 16 ED30 815A 5B2B 9F6F D4BC ECCD 5B44 D4BC ECCB 5B45 D4BC ECCC D6F0 D5BC 5AFE 5B7D D5BC &B0\x0D\x0A\
#COMD 6 16 ED40 5AFF 5B3F 5021 41C0 E95F 41C0 CB21 4580 501 5BA1 95A3 5ED9 5530 5E5B 5E5D 5E52 &33\x0D\x0A\
#COMD 6 16 ED50 5E50 5E02 5AFB 9422 5041 5E02 ECA9 1C42 5020 5E02 0 5E1A 1A 96BC 86A2 5E07 &21\x0D\x0A\
#COMD 6 16 ED60 13B6 815A 5B2B 9E79 9BC1 86B9 9B49 D2F0 86B9 5E62 5E7B 93A2 5ED9 5E62 5E7B 93A2 &B7\x0D\x0A\
#COMD 6 16 ED70 4580 5E02 5AFB 9922 50F2 D5B8 5A46 58FB 5E02 ECA9 5E48 43C0 8D22 5B2B 5E68 9FFC &AF\x0D\x0A\
#COMD 6 16 ED80 8CB9 5025 2B01 5010 2B02 92 4580 5EF9 9158 581B DAC0 D6F0 5EF8 9059 86A0 DEE0 &E4\x0D\x0A\
#COMD 6 16 ED90 581A D6D0 5E12 2F76 41C0 2730 5B20 CD20 5093 5E02 2F78 9F22 5012 67D0 5E19 20 &8D\x0D\x0A\
#COMD 6 16 EDA0 8FA0 5050 CF20 7790 5BFB DAC0 7760 581B 4580 5E62 1F49 8CC0 2001 41C1 EDBF 4181 &60\x0D\x0A\
#COMD 6 16 EDB0 5C53 8CC0 2002 41C1 5C77 4181 5C53 8CC0 2003 41C1 5CB2 4181 5C53 4180 5C53 5E40 &EB\x0D\x0A\
#COMD 6 16 EDC0 D4B8 5A43 5E1B 2001 5E12 C 41C0 51BC 581A 5E02 ECCB 1F6A 938A 41C0 4FB8 5E02 &E1\x0D\x0A\
#COMD 6 16 EDD0 5AFB 9822 5031 5E19 FFFF 5040 D5B8 ECCD 5012 77D0 41C0 4FA3 581A 7760 1B68 1B68 &85\x0D\x0A\
#COMD 6 16 EDE0 5B40 D4BC 5A43 5E60 6760 4580 5E62 CC0A 41C1 EDEE 4181 521A 4180 5217 5E02 5786 &35\x0D\x0A\
#COMD 6 16 EDF0 D4B8 ECA7 D4BC 5B01 D4B8 ECA8 D4BC 5B02 D4B8 ECA9 D4BC 5B03 1F4A 1F6A D4BC ECA7 &71\x0D\x0A\
#COMD 6 16 EE00 D5BC ECA8 1F6A 8DC0 FFFF 5031 8DC0 1 52A5 D5BC ECA9 9F1B 51E1 5E02 5AFB 9222 &5B\x0D\x0A\
#COMD 6 16 EE10 5112 5E02 5B03 D4B8 ECA9 9E82 50B2 5E02 5B01 1F6A 9382 5E02 ECA7 1F4A 9282 8CB9 &6A\x0D\x0A\
#COMD 6 16 EE20 5012 50F0 5E02 5AFB 80E2 4 82E2 300 41C0 E95F 5060 5E02 5AFB 82E2 100 41C0 &F0\x0D\x0A\
#COMD 6 16 EE30 ECD3 6760 4580 5E19 8 210A 41C0 5526 4580 5E46 58CD 87ED FFF8 0 5E40 5E41 &02\x0D\x0A\
#COMD 6 16 EE40 583A 1C41 1C0A 8A 8DE0 7B 50B1 5841 8A 5B26 1F02 77E0 41C0 A4 5B1A 4181 &72\x0D\x0A\
#COMD 6 16 EE50 EEAD 5020 1F02 DCFF D8FF CC2C 4182 EEAA 8DE0 7B 4181 EEAD 87E1 2 5B26 1F01 &E4\x0D\x0A\
#COMD 6 16 EE60 87E1 FFFE CF02 41C0 464 5B1A 4181 EEAD 87E1 3 5B26 1F01 87E1 FFFD CF03 41C0 &E1\x0D\x0A\
#COMD 6 16 EE70 464 5B1A 53A1 87E1 4 5B26 1F01 87E1 FFFC CF05 41C0 389 5B1A 52F1 87E1 5 &A7\x0D\x0A\
#COMD 6 16 EE80 5B26 1F01 87E1 FFFB CF07 41C0 464 5B1A 5241 87E1 6 5B26 1F01 CF08 41C0 464 &36\x0D\x0A\
#COMD 6 16 EE90 5B1A 51B1 D8FE 5111 5E02 ECA7 D8FC 9B50 407B 1B4A 1B92 D8F9 D4BC ECA9 41C0 E95D &F1\x0D\x0A\
#COMD 6 16 EEA0 5F40 EEAD 5E0C E95F 0 5F40 EEAD 5E0C ECD3 0 5B01 41C0 C59 5E61 5E60 59A6 &50\x0D\x0A\
#COMD 6 4 EEB0 0 5E66 4580 0 &A0\x0D\x0A\
#COMD 6 1 EAD8 CDD &F7\x0D\x0A\
#COMD 6 1 EADD EEB3 &37\x0D\x0A\
#COMD 6 1 EADD EEB3 &37\x0D\x0A\
#COMD 6 16 FE6E E7CA EBE1 E978 EB8F EA47 EBA7 EA46 4180 EA45 EBB1 EA44 4180 EA5B EBD3 EA5A 4180 &4A\x0D\x0A\
#COMD 6 16 FE7E E956 EBC1 EA33 EC2C EA32 4180 E902 EB54 E854 EC40 E8AA EE39 E95E ECBD EA63 ECD3 &57\x0D\x0A\
#COMD 6 16 FE8E EA62 4180 EA91 EDA9 EA90 4180 EA79 EDE6 EA78 4180 E932 EB4E EADE EEB3 EADF FE67 &67\x0D\x0A\
#COMD 6 16 FE9E E8CA EB6B E8EC EB7A E9C9 EC2E E9C8 4180 E723 EBB9 E733 2668 E724 EBDB E734 27CE &6A\x0D\x0A\
#COMD 6 4 FEAE E744 0 E743 3 &C8\x0D\x0A\
#COMD 6 1 FE6C FEB1 &2C\x0D\x0A\
#COMD 6 14 FEB2 459B 0 5AFA 0 6500 2668 6501 27CE 6512 0 6510 3 5144 3 &9A\x0D\x0A\
#COMD 6 1 FE6D FEBF &42\x0D\x0A\
#COMD 6 2 FEC0 EB91 EAE3 &38\x0D\x0A\
#COMD 6 1 FE6B FEC1 &2C\x0D\x0A\
#COMD 6 1 FE6A 6001 &F3\x0D\x0A\
#COMD 25 53716 &F0\x0D\x0A\
#COMD 6 16 FE6E E7CA EBE1 E978 EB8F EA47 EBA7 EA46 4180 EA45 EBB1 EA44 4180 EA5B EBD3 EA5A 4180 &4A\x0D\x0A\
#COMD 6 16 FE7E E956 EBC1 EA33 EC2C EA32 4180 E902 EB54 E854 EC40 E8AA EE39 E95E ECBD EA63 ECD3 &57\x0D\x0A\
#COMD 6 16 FE8E EA62 4180 EA91 EDA9 EA90 4180 EA79 EDE6 EA78 4180 E932 EB4E EADE EEB3 EADF FE67 &67\x0D\x0A\
#COMD 6 16 FE9E E8CA EB6B E8EC EB7A E9C9 EC2E E9C8 4180 E723 EBB9 E733 2668 E724 EBDB E734 27CE &6A\x0D\x0A\
#COMD 6 4 FEAE E744 0 E743 3 &C8\x0D\x0A\
#COMD 6 1 FE6C FEB1 &2C\x0D\x0A\
#COMD 6 14 FEB2 459B 0 5AFA 0 6500 2668 6501 27CE 6512 0 6510 3 5144 3 &9A\x0D\x0A\
#COMD 6 1 FE6D FEBF &42\x0D\x0A\
#COMD 6 2 FEC0 EB91 EAE3 &38\x0D\x0A\
#COMD 6 1 FE6B FEC1 &2C\x0D\x0A\
#COMD 6 1 FE6A 6001 &F3\x0D\x0A\
#COMD 25 53716 &F0\x0D\x0A\
#COMD 6 16 EEB3 3F 42 43 0 20 45 37 31 33 41 30 31 39 20 20 20 &72\x0D\x0A\
#COMD 6 16 EEC3 20 20 0 53 65 70 20 20 36 20 32 30 31 30 20 31 &52\x0D\x0A\
#COMD 6 16 EED3 38 3A 35 30 3A 30 33 0 4580 D4B8 EC33 D4BC EC31 4580 5E18 8 &DE\x0D\x0A\
#COMD 6 16 EEE3 D4BC EC31 D4B8 44DF CC01 4582 2103 D4BC 44DF 4580 2102 3804 4580 41C0 B568 41C0 &49\x0D\x0A\
#COMD 6 16 EEF3 CAE6 5E62 87E2 2 5E42 4580 D4B8 2F8A 8CC0 DDDD 5052 2100 D4BC 2F8A 41C0 EF58 &1B\x0D\x0A\
#COMD 6 16 EF03 4580 41C0 3378 5E02 4471 1F4A 9292 41C0 EFF6 D5B8 32D9 97BD 9FFE 8EB9 6795 8CC0 &8F\x0D\x0A\
#COMD 6 16 EF13 200 5035 8EC0 3FF 6790 D5B8 34DB D5BC E6BB D5B8 34F9 58FB 813 5B2B 87C0 3673 &FA\x0D\x0A\
#COMD 6 16 EF23 585B 8E82 CC04 50D3 D5B8 34F2 CF16 8D81 5083 D5B8 34F3 C716 8D81 5035 5E62 4180 &4D\x0D\x0A\
#COMD 6 16 EF33 39BE 3163 CC04 7763 77D0 D5FB 327F D5BC 327F 41C0 42D1 5E62 4180 3A72 D5B8 E6BB &88\x0D\x0A\
#COMD 6 16 EF43 D5BC 34DB 4580 D4B8 4441 41C0 CFC5 D4B8 3351 41C0 CFC5 5E02 32B1 2100 5C13 EF54 &64\x0D\x0A\
#COMD 6 16 EF53 1F2A 67D2 41C0 CFC2 4580 2100 5E02 329D C13 1B4A 5E02 32B1 C13 1B4A 5E02 32C5 &B3\x0D\x0A\
#COMD 6 16 EF63 C13 1B4A 5E02 32D9 C13 1B4A 5E02 32ED C13 1B4A 5E02 3301 C13 1B4A 5E02 3315 &43\x0D\x0A\
#COMD 6 16 EF73 C13 1B4A 5E02 3329 C13 1B4A 5E02 333D C13 1B4A D4BC 3351 4580 7203 CC20 4583 &6A\x0D\x0A\
#COMD 6 16 EF83 7259 7A5A 9FC2 C702 AC5B 5034 725B 7A5C 9FC2 5ED8 800 41C0 B0E5 82C0 3 50E1 &93\x0D\x0A\
#COMD 6 16 EF93 210C 3885 C0F F85 9F6E CE01 7C26 805A 5B1D 82C0 3 9FC2 87B8 97BD 7611 B412 &6B\x0D\x0A\
#COMD 6 16 EFA3 86C0 2000 9B72 8FB8 5024 87C0 FFC 5EF9 7951 3C85 7790 93B0 95B2 7765 9FC8 C0F &0F\x0D\x0A\
#COMD 6 16 EFB3 F85 97BD 5E00 32B1 9F88 5044 8DE0 32C5 57B5 5380 5B40 8EC0 32B2 5E5A 5E5B 41C0 &35\x0D\x0A\
#COMD 6 16 EFC3 1BBE 5E7B 5E7A 581A 87E0 32B1 1B60 581A 87E0 32D9 1A60 581A 87E0 32C5 1A40 581A &66\x0D\x0A\
#COMD 6 16 EFD3 87E0 32ED 7924 87AB 1B60 581A 87E0 3301 7944 1B60 581A 87E0 3315 7903 1B60 581A &0A\x0D\x0A\
#COMD 6 16 EFE3 87E0 3329 7A05 1B60 581A 87E0 333D 7A07 1B60 581A 87E0 329D D5B8 3351 77D0 D5BC &4A\x0D\x0A\
#COMD 6 16 EFF3 3351 1B60 4580 41C0 B023 DED0 4580 7104 CC06 5122 3700 6002 87E0 3368 18A0 87E0 &C1\x0D\x0A\
#COMD 6 16 F003 2F 18A0 87E0 2F 18A0 87E0 2F 18A0 41C0 D34 E335 2 7104 CC05 5022 E335 &CC\x0D\x0A\
#COMD 6 16 F013 2 41C0 90 4580 24C0 1F3C 1A8D 1691 132F 104E DDC BC7 A03 883 73C 626 &B2\x0D\x0A\
#COMD 6 16 F023 53A 471 3C6 335 2BA 251 1F8 1AC 16C 135 107 DF BE A1 89 74 &92\x0D\x0A\
#COMD 6 16 F033 63 54 47 3D D888 96BC 5E1B 7D00 5A5B 9EBB 67F3 9B76 D986 97BD 9FF4 CF0D &0C\x0D\x0A\
#COMD 6 16 F043 7790 58FB 805A 5B2B 7765 CD1F 5026 5E19 1F 87C0 F017 5E67 4180 5DA5 9C1A 5031 &CB\x0D\x0A\
#COMD 6 16 F053 5E1A 2 5020 5E1A 102 4180 CA10 9D1A 5031 5E1A 3 5020 5E1A 103 4180 CA2A &16\x0D\x0A\
#COMD 6 16 F063 83E8 4 5E02 6037 82E2 400 4580 2100 D4BC 6043 41C0 F063 5E02 603B 80E2 400 &9B\x0D\x0A\
#COMD 6 16 F073 5E02 EC68 9122 4182 F080 5E02 6038 80E2 2 5E02 603B 82E2 400 4180 ACED 4186 &04\x0D\x0A\
#COMD 6 16 F083 C56 7903 CD78 4184 C56 4180 C3A 41C0 1E D5B8 EC6E 5251 7103 CC78 5184 67E0 &20\x0D\x0A\
#COMD 6 16 F093 5BFA 2101 DAC0 5ED8 5E01 5986 1F69 9381 82B9 5051 85B8 1BB1 1B61 7760 3C0A D2D0 &40\x0D\x0A\
#COMD 6 16 F0A3 5E01 5982 1F69 9381 83B8 5101 50A0 CE77 5BFA 2101 DAC0 5E01 5984 1F69 9381 83B8 &1F\x0D\x0A\
#COMD 6 16 F0B3 5051 5E62 5E02 106 5E42 4580 5E62 5E02 12D 5E42 4580 D4B8 44DF CC03 4582 2101 &76\x0D\x0A\
#COMD 6 16 F0C3 D4BC 44DF 4580 41C0 225 7121 8CC0 1F4 5025 5E18 200 9B42 D980 83C0 3 5031 &A2\x0D\x0A\
#COMD 6 16 F0D3 9BC1 86B9 C605 5E19 7FF 8860 DC96 5E18 8000 DC94 4580 D4B8 EC2E D4FB EC2D 9B7F &AD\x0D\x0A\
#COMD 6 16 F0E3 E935 20 5021 D4B8 EC2E 8DB8 4180 599 87E2 3541 58 CC40 6721 58FA 4180 29D7 &1A\x0D\x0A\
#COMD 6 16 F0F3 5E18 323F 5E19 8C 4180 4639 8E82 9B7B 8682 1B4A 9BFB 4580 48C5 5E02 5C89 1760 &D8\x0D\x0A\
#COMD 6 16 F103 589B 4AC5 1F22 5022 4AE5 1B62 16F0 4A85 58BB 8EB2 6795 16A0 3104 D5BC 4596 5E02 &2B\x0D\x0A\
#COMD 6 16 F113 3292 D4B8 5C8A 1B4A D4B8 EC40 961A 5081 D4B8 5C88 67D0 CC20 6763 D4BC 5C88 4581 &73\x0D\x0A\
#COMD 6 16 F123 5E62 5E62 4180 AA55 41C0 A88E 2103 3110 41C0 A7C5 5000 5E40 5E41 5E01 9 5E18 &33\x0D\x0A\
#COMD 6 16 F133 E67C 5B61 5E12 3F 41C0 F1CD 230A 2105 41C0 B9E1 41C0 A88E 961A 5051 90 577C &4C\x0D\x0A\
#COMD 6 16 F143 50F0 41C0 A88E 82C0 3F 5A5A 5E18 E67C 3109 41C0 F1B7 91 569C D4B8 E680 5010 &62\x0D\x0A\
#COMD 6 16 F153 210E 41C0 A8D5 5E61 5E60 4580 F68 F96 1286 158C 2C53 431F 616E 7689 9224 AA7F &B9\x0D\x0A\
#COMD 6 16 F163 F392 FFF3 FFFF D889 96BC 5E1B 800 8CB9 67F3 8FB8 9FF9 77D0 58FB 5B03 5E62 5E02 &C8\x0D\x0A\
#COMD 6 16 F173 5E27 5E42 5E1F F159 4180 7697 D4B8 EC6E 50C2 D4B8 EC67 911A 5042 5E1A 6 41C0 &BB\x0D\x0A\
#COMD 6 16 F183 C8D0 5E1A 5 41C0 C881 D4B8 6408 5E02 460A 6780 82C0 10 1B42 4580 41C0 AB7C &FB\x0D\x0A\
#COMD 6 16 F193 41C0 C8A5 41C0 C8F3 41C0 C955 41C0 C9B6 4580 47E2 8DE2 39B3 4181 EF04 4180 3378 &28\x0D\x0A\
#COMD 6 16 F1A3 41C0 A6EE 3110 D5F9 6408 D5FE 460A 5091 D5BC 460A 2105 5B3B 6761 86C0 4E28 41C0 &3E\x0D\x0A\
#COMD 6 16 F1B3 B62F 5E62 5E61 4580 5E40 585A 86B9 5B7A 67E0 581A 5B12 9FA2 50B6 8C8A 57C3 5B62 &68\x0D\x0A\
#COMD 6 16 F1C3 77E0 5840 92 1E52 1A50 9FA0 57C5 1B40 5E60 4580 585A 77E0 4586 D1B 1A4A 4580 &68\x0D\x0A\
#COMD 6 16 F1D3 5E46 58CD 87ED FFE2 0 5E40 5E41 5806 87E0 FFE2 583A 5E20 1E 5B00 41C0 B113 &61\x0D\x0A\
#COMD 6 16 F1E3 5840 1F0A 98CA 5B1A 5076 9B48 80B2 1B49 1F0A 98CA 5B1A 5793 5B01 5E61 5E60 59A6 &57\x0D\x0A\
#COMD 6 16 F1F3 0 5E66 4580 5E19 EEC6 5E18 EBE6 1580 585A 8EC0 EBE6 5B1A CC0B 5093 5E19 2020 &E0\x0D\x0A\
#COMD 6 16 F203 1B6A 5B02 8EC0 EBE6 5B1A CC0B 5796 5E19 EEB7 5E18 EBDF 1440 41C0 F216 D4B8 EC6E &DC\x0D\x0A\
#COMD 6 16 F213 41C1 B568 4580 41C0 EEDB 4580 5E40 5E41 5E43 5E44 2107 D4BC 4505 D4B8 44DF 2300 &22\x0D\x0A\
#COMD 6 16 F223 5E04 37F2 5E01 37F1 5E03 37F7 D4BC 4506 1F03 87E3 20 5B1A 50F6 D5B8 EC2D 1F41 &E3\x0D\x0A\
#COMD 6 16 F233 9EBB 50A3 9A24 5081 5B00 D4BC 4504 1F01 D4BC 4507 41C0 4219 88 87E4 20 87E1 &34\x0D\x0A\
#COMD 6 16 F243 20 5B00 CC2E 5646 D4B8 34ED 96BC CC01 5056 6760 D4BC 34E5 D4BC 34E6 6760 D4BC &17\x0D\x0A\
#COMD 6 16 F253 5C0A D4BC 5C1A 5E64 5E63 5E61 5E60 4580 D4B8 EC33 D4BC EC31 41C0 65E9 2108 D4BC &9B\x0D\x0A\
#COMD 6 16 F263 EC31 4580 5E46 58CD 87ED FFFA 0 5E47 5E40 5E41 5E43 5E44 5E45 D4B8 34D2 96BC &FC\x0D\x0A\
#COMD 6 16 F273 CC02 4186 F39C 210D DCFF D9FF CD0D 5052 D4B8 34D4 96BC CC01 50A3 D8FF CC04 4182 &D2\x0D\x0A\
#COMD 6 16 F283 F394 2103 D4F9 34D3 CC02 4182 F394 7760 5E04 37F7 DDFE D8FF 41C0 B663 467E DCFD &A5\x0D\x0A\
#COMD 6 16 F293 9BC5 5B5B 86A4 585A 8CE2 5 4182 F38D 585B 87E2 37F1 5E03 37F1 1F42 CC20 4186 &B7\x0D\x0A\
#COMD 6 16 F2A3 F38D DDFA 5E05 37EE 2101 5B25 DCFB 477A 6760 5805 583B DCFC 6760 41C0 B663 467C &9E\x0D\x0A\
#COMD 6 16 F2B3 58FA 4EC5 5B7A 87A0 585B 1F22 8D81 5102 5B7A 87A4 585B 8CE2 5 50A2 86A3 585A &C8\x0D\x0A\
#COMD 6 16 F2C3 D5B8 EC2C 1F42 9EBB 5035 6760 DCFB 5060 3101 477C DDFC D8FC CC0A 55E6 D8FF CC0D &15\x0D\x0A\
#COMD 6 16 F2D3 52C2 D9FB 4181 F38D 5E01 37EE 5B21 477A 6760 581B DCFC 2104 41C0 B663 467C 58FA &7A\x0D\x0A\
#COMD 6 16 F2E3 4EC5 5B7A 87A1 585B 1F22 8D80 5102 5B7A 87A4 585B 8CE2 5 50A2 86A3 585A D5B8 &CA\x0D\x0A\
#COMD 6 16 F2F3 EC2C 1F42 9EBB 5035 6760 DCFB 5060 3101 477C DDFC D8FC CC0A 55E6 D8FB 4181 F38D &EA\x0D\x0A\
#COMD 6 16 F303 6760 1F24 50A1 5E02 37F7 67D0 5B3A CD0A 5043 87E2 20 1F22 5782 D9FF CD0D 5112 &BC\x0D\x0A\
#COMD 6 16 F313 8DFA B 5122 210E D5B8 39B7 50A1 5E02 39B7 67D0 5B3A CD18 5043 87E2 20 1F22 &1F\x0D\x0A\
#COMD 6 16 F323 5782 8DFA B 4181 F38D 8DFA 19 4181 F38D 58FA 41C0 3E19 583A 5B07 41C0 3E2E &60\x0D\x0A\
#COMD 6 16 F333 DCFC 2104 D4BC 34D5 D9FF D5BC 34D6 D8FE 5B21 D5BC 34D8 D4BC 34D7 D8FC D4BC 34D9 &42\x0D\x0A\
#COMD 6 16 F343 5E18 34D5 41C0 2922 5E18 34D5 41C0 3D1 5847 87E2 4442 3101 1B62 4EC5 585A 87E2 &B3\x0D\x0A\
#COMD 6 16 F353 37F7 2705 1822 585A 87E2 37F3 5B7A 87A5 82E2 FFFF 585B 5B25 477A 581B 1C20 1822 &44\x0D\x0A\
#COMD 6 16 F363 5E02 37F2 86A2 583A 5B02 467A 585A 1F22 83C0 F000 1B61 2103 D4BC 34D5 5E18 34D5 &0F\x0D\x0A\
#COMD 6 16 F373 41C0 2922 5E18 34D5 41C0 3D1 5E19 4442 477D 585B 2701 1822 5E18 37F7 467A 585A &AF\x0D\x0A\
#COMD 6 16 F383 82E2 FFFF 5E19 37F3 477A 585B 82E2 FFFF 82E0 FFFF 2101 467E DCFE D8FE CC0A 4186 &28\x0D\x0A\
#COMD 6 16 F393 F28E 5E19 FFF7 477F DDFF D8FF CC03 4183 F278 5E65 5E64 5E63 5E61 5E60 5E67 59A6 &E4\x0D\x0A\
#COMD 6 16 F3A3 0 5E66 4580 5E46 58CD 87ED FFFE 0 5E47 5E40 5E41 5E43 5E44 5E45 2110 DCFF &4A\x0D\x0A\
#COMD 6 16 F3B3 D9FF D5FE 443F 4185 F5B6 5E18 4508 467F 585A 1F02 4182 F5AD D9FF CD04 4181 F5AD &C9\x0D\x0A\
#COMD 6 16 F3C3 CD0D 4181 F5AD 67F0 41C0 B663 DCFE 58FA 4EC5 585A 87E2 37F7 1F02 4182 F5AD 5E18 &C6\x0D\x0A\
#COMD 6 16 F3D3 4442 467E 585A 98C2 4182 F5AD 5E00 5C0A 5B12 1F20 5146 5840 5E01 34D5 5C0F F3E4 &2E\x0D\x0A\
#COMD 6 16 F3E3 1F6A 1B69 1B40 5E19 5C2A 477E 585B 2101 1B42 5E19 5C59 477E 585B 1A42 5170 5E00 &23\x0D\x0A\
#COMD 6 16 F3F3 5C1A 1F20 5136 5840 5E01 34D5 5E19 5C2A 5C0F F3FE 1CEA 18E9 1B40 477E 585B 1A42 &6C\x0D\x0A\
#COMD 6 16 F403 5E19 5C59 477E 585B 2101 1B42 5B1A 4181 F456 5E01 34D6 D8FF 1B41 5E19 43E1 477E &2F\x0D\x0A\
#COMD 6 16 F413 585B D4B8 34DC 1B42 5E18 4410 467E 585A D4B8 34DD 1B42 5B01 67E0 41C0 2922 2108 &16\x0D\x0A\
#COMD 6 16 F423 D4F9 34DB 5E05 34D7 5B1A 5031 210F D4BC 34D7 5B01 67E0 41C0 3D1 82E5 FFFF 5E19 &48\x0D\x0A\
#COMD 6 16 F433 4442 477E 585B 5806 3F01 87E0 FFFE 18E2 1CE0 4EC5 583A 5841 87E2 37F7 2303 1802 &2E\x0D\x0A\
#COMD 6 16 F443 5841 87E2 37F3 82E2 FFFF 5841 87E2 37EE D4B8 34F8 1B42 41C0 43FC 5841 87E2 37F2 &73\x0D\x0A\
#COMD 6 16 F453 1B42 4180 F5AD 5E01 34E6 1C21 5E00 34ED 1C00 41C0 295A D4B8 4545 50B1 D9FF CD03 &42\x0D\x0A\
#COMD 6 16 F463 5082 5B01 5B20 D4BC 34E6 D5BC 34ED 4180 F5AD D4B8 34F8 4186 F5AD 41C0 2C82 D4B8 &90\x0D\x0A\
#COMD 6 16 F473 34F9 58FA 80C 5B2B 585B 87E2 3672 5E01 3672 1F02 D4BC 34E4 CC0E 50F3 585B 87E2 &36\x0D\x0A\
#COMD 6 16 F483 3671 1F22 D5FE EC34 5084 D5B8 44DF CD02 4182 F5AD CC04 4186 F5AD 41C0 2BCE D4B8 &B5\x0D\x0A\
#COMD 6 16 F493 34ED CC03 5292 D4B8 34EE 96BC CC23 5046 6760 D4BC 4441 5230 5E02 4441 86E2 1 &88\x0D\x0A\
#COMD 6 16 F4A3 D4B8 4441 96BC CC08 5073 5E19 34FF D5FB 4441 585B 1F02 5072 D4B8 34E9 5041 D4B8 &61\x0D\x0A\
#COMD 6 16 F4B3 44DD D4BC 34F1 D4B8 4441 96BC CC63 5076 2163 D4BC 4441 5030 6760 D4BC 4441 D4B8 &5B\x0D\x0A\
#COMD 6 16 F4C3 44D9 51E2 D4B8 34E9 51B1 D5B8 34F9 58FB 80C 5B0B 86A1 585A 1F02 CC63 5113 D4B8 &4B\x0D\x0A\
#COMD 6 16 F4D3 34ED CC03 50D2 D4B8 34F2 D4FB 34F3 58FA 4EDF 77F0 CF3C C63C D5BC 34F2 D4BC 34F3 &19\x0D\x0A\
#COMD 6 16 F4E3 2101 D4BC 34D5 D9FF 6760 D4BC 34D7 D4B8 34F8 D4BC 34D8 D4B8 34F0 D4BC 34D9 D4B8 &E7\x0D\x0A\
#COMD 6 16 F4F3 34F1 D4BC 34DA D4B8 34F2 D5BC 34D6 D4BC 34DC D4B8 34F3 D5B8 34F9 D4BC 34DD 58FB &21\x0D\x0A\
#COMD 6 16 F503 80C 5B0B 585A 87E2 366A 5E05 34D7 1F02 D4BC 34DE 1F4A 9292 9B70 D4BC 34DF 41C0 &4C\x0D\x0A\
#COMD 6 16 F513 332F 41C0 3378 D4B8 44E0 5112 D4B8 EC08 50E1 D4B8 34ED 96BC CC01 5096 D4B8 34F0 &5F\x0D\x0A\
#COMD 6 16 F523 CC0E 5056 2108 D4FB 34DB D4BC 34DB 5E19 43E1 477E 589B D4B8 34F2 1B44 5E18 4410 &75\x0D\x0A\
#COMD 6 16 F533 467E 587A D4B8 34F3 1B43 5E19 5C2A 477E 581B 3F00 18E0 5E18 5C59 467E 583A 18E1 &54\x0D\x0A\
#COMD 6 16 F543 D4B8 34ED CC03 5112 41C0 F5C0 5E02 5BFA 1F02 50B6 D4B8 34DC 1B44 5E04 34DD 1C84 &74\x0D\x0A\
#COMD 6 16 F553 1883 3101 1B60 1B61 18E2 5E18 34D5 41C0 2922 D4B8 34F8 CC20 5143 D4B8 34EA 50A1 &FB\x0D\x0A\
#COMD 6 16 F563 5E18 3541 D4FB 34F9 585A 3101 D5FB 34F1 1B62 5070 5E18 3541 D4FB 34F9 585A 2708 &32\x0D\x0A\
#COMD 6 16 F573 1822 D4B8 34F8 CC77 5076 5E19 44B7 D5FB 34F8 585B 3F01 18E2 D4B8 34DB 931A 5022 &5E\x0D\x0A\
#COMD 6 16 F583 2B0F 1845 5E18 34D5 41C0 3D1 82E5 FFFF 5E19 4442 477E 585B 5806 3F01 87E0 FFFE &46\x0D\x0A\
#COMD 6 16 F593 18E2 1CE0 4EC5 583A 5841 87E2 37F7 2303 1802 5841 87E2 37F3 82E2 FFFF 5841 87E2 &40\x0D\x0A\
#COMD 6 16 F5A3 37EE D4B8 34F8 1B42 41C0 43FC 5841 87E2 37F2 1B42 5E19 FFFF 477F DDFF D8FF D4FE &11\x0D\x0A\
#COMD 6 16 F5B3 443F 4184 F3B8 5E65 5E64 5E63 5E61 5E60 5E67 59A6 0 5E66 4580 5E46 58CD 87ED &C5\x0D\x0A\
#COMD 6 16 F5C3 FFFF 0 5E47 5E40 5E41 5E43 5E44 5E02 5BFA 2700 1822 D4B8 34F0 5802 CC0E 4186 &BA\x0D\x0A\
#COMD 6 16 F5D3 F632 2F23 CC10 5013 2F2C 5E01 34E4 1F01 CCAB 5043 58E3 803 5B0B 587A D4B8 34F3 &15\x0D\x0A\
#COMD 6 16 F5E3 D4FF 34F2 5B23 41C0 B0EF 67D0 96BC CC03 4186 F632 5EC6 8FF2 1 3103 41C0 B0FE &EF\x0D\x0A\
#COMD 6 16 F5F3 5EDA 5B32 D8FF CC02 77D1 1F01 CCAB 5043 5E02 9D 1841 5030 5E02 1FB 1841 5F20 &BE\x0D\x0A\
#COMD 6 16 F603 34D5 5820 5853 5C0F F609 1CEA 18E9 5E01 5C0A 5853 58FB 5C0F F611 1C8A 1889 5E01 &53\x0D\x0A\
#COMD 6 16 F613 5C1A 5853 5C0F F618 1F4A 1B49 8043 5B0B D5B8 5C12 8FBA 67F0 D4BC 5C11 D4BC 5C02 &96\x0D\x0A\
#COMD 6 16 F623 58F2 8043 5B0B D4FB 5C21 5833 5840 D4BC 5C01 D4BC 5C22 5C0F F631 1C0A 1809 5E64 &55\x0D\x0A\
#COMD 6 16 F633 5E63 5E61 5E60 5E67 59A6 0 5E66 4580 5E46 58CD 87ED FFFF 0 5E47 5E40 5E41 &33\x0D\x0A\
#COMD 6 16 F643 5E43 5E44 5E45 6760 5E05 454B D4BC 4546 D4BC 4548 5865 DCFF 2700 1823 D8FF 41C0 &5E\x0D\x0A\
#COMD 6 16 F653 B663 58FA D8FF 5052 5F40 F66D 5E0C 2951 0 D9FF CD04 5052 5F40 F66D 5E0C 2954 &E6\x0D\x0A\
#COMD 6 16 F663 0 D8FF CC0D 5052 5F40 F66D 5E0C 2957 0 5B01 96BC CC01 4183 F73E 4EC5 585A &38\x0D\x0A\
#COMD 6 16 F673 87E2 37F7 583A 1F22 5E04 37F7 5B3B 5082 D9FF CD03 5231 5E02 4546 86E2 1 51E0 &8D\x0D\x0A\
#COMD 6 16 F683 5841 87E2 37EE 6F60 99C2 5E00 37EE 5E02 3520 5B32 5B13 8C8A 5022 5E20 1 77D0 &73\x0D\x0A\
#COMD 6 16 F693 5B1B CC1F 5776 5ED2 5091 5E02 4548 5B61 87A0 86E2 1 585B 1C42 1843 5B41 86A4 &79\x0D\x0A\
#COMD 6 16 F6A3 585A 8CE2 3 4182 F73E D9FF D5BC 34D6 5841 7760 87E2 37F3 D5BC 34D7 1F02 50F6 &ED\x0D\x0A\
#COMD 6 16 F6B3 2109 D4BC 4505 5B07 D5BC 4506 D5BC 4507 D4BC 4504 5F40 F73E 5E0C 4219 0 87E1 &B1\x0D\x0A\
#COMD 6 16 F6C3 37EE 5E19 FFFF 1F01 D4BC 34F8 D5FB 34F8 D5BC 34F9 41C0 2C82 5847 87E2 5C2A 5E01 &E1\x0D\x0A\
#COMD 6 16 F6D3 43E1 1F02 50A1 5847 87E2 43E1 1F02 D5B8 34F2 8DBA 5024 D4BC 34F2 5847 87E2 5C59 &50\x0D\x0A\
#COMD 6 16 F6E3 5E00 4410 1F02 50A1 5847 87E2 4410 1F02 D5B8 34F3 8DBA 5026 D4BC 34F3 5B47 86A1 &25\x0D\x0A\
#COMD 6 16 F6F3 583A D5B8 34F2 5EDB 1C81 5B04 8CB2 5072 5B67 87A0 585B 1F02 D4FE 34F3 53C1 5B67 &81\x0D\x0A\
#COMD 6 16 F703 87A0 585B 5B12 8C82 5043 D5B8 34F3 8DA4 5124 210A D4BC 4505 D4B8 34F3 D4BC 4507 &3D\x0D\x0A\
#COMD 6 16 F713 5B32 5B07 D5BC 4506 D4BC 4504 5F40 F73E 5E0C 4219 0 1F02 8E81 D4FF 34F3 D4FB &D6\x0D\x0A\
#COMD 6 16 F723 34F2 5B1A CC09 5176 1A41 1B62 2105 D4BC 34D5 5B12 D4BC 34D8 D5BC 34D9 5E18 34D5 &62\x0D\x0A\
#COMD 6 16 F733 41C0 2922 5E18 34D5 41C0 3D1 5847 87E2 4442 2701 1822 3101 477F DDFF 8B D8FF &73\x0D\x0A\
#COMD 6 16 F743 CC10 4186 F64F D4B8 4547 D4FF 4546 3101 581A 5825 89 DDFF 1F09 5211 5B00 51F6 &D0\x0D\x0A\
#COMD 6 16 F753 D8FF 41C0 B663 58FA D9FF 6760 D4BC 34D7 2112 D4BC 4505 D4B8 4547 D4BC 4506 D4B8 &AA\x0D\x0A\
#COMD 6 16 F763 4546 D4BC 4507 5B07 D5BC 34D6 D4BC 4504 41C0 4219 5E02 4546 90 86E2 1 3101 &E8\x0D\x0A\
#COMD 6 16 F773 477F DDFF D8FF CC10 5576 5E65 5E64 5E63 5E61 5E60 5E67 59A6 0 5E66 4580 5E40 &E7\x0D\x0A\
#COMD 6 16 F783 5E41 5E01 444F 1C01 41C0 4318 5B00 5072 8CE1 1 5042 D4BC 5C37 D4BC 5C66 5E61 &74\x0D\x0A\
#COMD 6 16 F793 5E60 4580 5E40 5E41 5E43 41C0 3E92 7760 5E03 3315 5E00 32C5 5E01 32B1 5E02 329D &D8\x0D\x0A\
#COMD 6 16 F7A3 5EDB 1A4A 1A49 1A48 77D0 1A4B 5B1B CC13 5786 6760 D4BC 3351 5E63 5E61 5E60 4580 &5E\x0D\x0A\
#COMD 6 16 F7B3 87FA FFFB 6765 2B01 5BFA 142 67E0 4580 5E46 58CD 87ED FFEC 0 5E47 5E40 5E41 &E7\x0D\x0A\
#COMD 6 16 F7C3 5E43 5E44 5E45 D4B8 EC33 CC18 5032 2132 D4BC EC33 6760 5E02 3500 DCFC 1F02 D4BC &82\x0D\x0A\
#COMD 6 16 F7D3 34F8 5B1A 4181 FABB 5E19 FFFF D5FB 34F8 D5BC 34F9 41C0 2C82 D4B8 34E9 4181 FAAB &07\x0D\x0A\
#COMD 6 16 F7E3 41C0 2BCE D4B8 34F0 CC0F 5062 2140 DCFD 50A0 2700 4180 F876 3167 5B1A DDFD CC0F &98\x0D\x0A\
#COMD 6 16 F7F3 5026 2132 DCFD D5B8 34F9 58FB 80C 5B0B 585A 87E2 3672 1C02 5B20 D5FE EC33 4183 &4A\x0D\x0A\
#COMD 6 16 F803 FAAB 585A 87E2 3671 1C62 5B03 D4FE EC34 4183 FAAB 3104 5E02 34E4 DDFF 270F 1822 &8B\x0D\x0A\
#COMD 6 16 F813 2107 D4BC 34D5 7760 D5BC 34D7 5B00 CC08 5073 5B03 D4FE EC32 5033 DDFF 2708 1822 &58\x0D\x0A\
#COMD 6 16 F823 7760 2701 DDFE D8FE 5072 D4B8 34D2 96BC CC01 5023 310E DDFE D8FE CC0B 5022 310E &AA\x0D\x0A\
#COMD 6 16 F833 DDFE D8FE CC0E 5072 D4B8 34D3 96BC CC01 5023 3121 DDFE D8FE CC19 5022 3121 DDFE &F0\x0D\x0A\
#COMD 6 16 F843 D8FE CC21 5052 D4B8 34D4 96BC CC01 52B6 5806 87E0 FFFE 1CE0 4EC5 585A 87E2 37EE &D1\x0D\x0A\
#COMD 6 16 F853 1F22 D5FE 34F8 5182 585A 87E2 37F7 8CE2 3 50E2 585A 87E2 37F2 1F02 96BC 9B74 &C9\x0D\x0A\
#COMD 6 16 F863 41C0 F7B3 5B3A D5FE 34F1 5066 2700 50B0 1F02 CC04 4183 F7EC 2101 467E DCFE D8FE &8A\x0D\x0A\
#COMD 6 16 F873 CC2B 4186 F826 5B21 4181 FAAB D8FF 5022 270A 5020 272B 210E DCFE D9FE 8DA1 4183 &8C\x0D\x0A\
#COMD 6 16 F883 FAAB D8FE CC19 5022 3121 DDFE 5806 87E0 FFFE 1CE0 4EC5 585A 87E2 37F7 1F22 DCED &10\x0D\x0A\
#COMD 6 16 F893 5B3B 4182 FAA4 D8FE 41C0 3E19 DCFF D4B8 34F9 58FA 80C 5B0B 585A 87E2 3671 1F02 &88\x0D\x0A\
#COMD 6 16 F8A3 4C7D 4186 F947 D9FF 5042 D4B8 34D2 3F07 50A0 D8FF CC04 5042 D4B8 34D3 3F06 5030 &6E\x0D\x0A\
#COMD 6 16 F8B3 D4B8 34D4 3F06 5E19 37EE DDF9 5E19 37F2 DDF8 5E19 34D8 DDF5 5E19 34D9 DDF4 5E19 &06\x0D\x0A\
#COMD 6 16 F8C3 34DA DDF3 5E19 34DC DDF2 5E19 34DD DDF1 5E19 34DE DDF0 5E19 43E1 DDEC 5E19 4410 &15\x0D\x0A\
#COMD 6 16 F8D3 DDF6 5E19 4442 DDFA 5E19 37F3 5E03 34D6 5E00 35A1 5E04 366A 5E05 34DF DDF7 5B3A &B1\x0D\x0A\
#COMD 6 16 F8E3 8DA7 4181 F9C7 2111 D4BC 4505 6760 D4BC 4506 D4BC 4507 3101 477F 583B 5B01 41C0 &2C\x0D\x0A\
#COMD 6 16 F8F3 B663 D4BC 4504 5B21 DDEF 3102 477F 585A 8A 5E01 4508 DDEE 5B3A 8DA2 5133 5B02 &16\x0D\x0A\
#COMD 6 16 F903 DCFB D4B8 4504 9B45 585A 87E2 37F7 1F02 41C2 4219 5E02 4504 86E2 1 D5B8 4504 &86\x0D\x0A\
#COMD 6 16 F913 4D7B 56F6 5B01 466F 585A 3101 1B62 5B01 466E 585A 1B62 D9FF 1B63 D8F5 583A 5B03 &4E\x0D\x0A\
#COMD 6 16 F923 67E0 18E1 41C0 3D1 D8FF 50B2 5B07 41C0 3C8 5B27 2103 D5BC 34D2 D4BC 443F 4180 &D6\x0D\x0A\
#COMD 6 16 F933 F9C7 D8FF CC04 5082 5B07 41C0 3CB 5B27 D5BC 34D3 4180 F9C7 5B07 41C0 3CE 5B07 &1E\x0D\x0A\
#COMD 6 16 F943 D4BC 34D4 4180 F9C7 5E02 34D6 D9FF 2702 1B62 5B01 D4BC 34D8 5E19 34D8 5862 DDF5 &8B\x0D\x0A\
#COMD 6 16 F953 D8FF CC04 5392 D4B8 34D3 5E19 37EE DDF9 5E19 37F2 DDF8 5E19 34D9 DDF4 5E19 34DA &01\x0D\x0A\
#COMD 6 16 F963 DDF3 5E19 34DC DDF2 5E19 34DD DDF1 5E19 34DE DDF0 5E19 43E1 DDEC 5E19 4410 DDF6 &21\x0D\x0A\
#COMD 6 16 F973 5E19 4442 DDFA 5E19 37F3 5E00 35A1 5E04 366A 5E05 34DF DDF7 CC03 4182 F9C7 5B01 &81\x0D\x0A\
#COMD 6 16 F983 41C0 3CB 5B01 D4BC 34D3 5B03 67E0 5F40 F9C7 5E0C 3D1 0 5E19 37EE 5E18 37F2 &63\x0D\x0A\
#COMD 6 16 F993 DDF9 5E19 34D9 DCF8 5E18 34DA DDF4 5E19 34DC DCF3 5E18 34DD DDF2 5E19 34DE DCF1 &46\x0D\x0A\
#COMD 6 16 F9A3 5E18 43E1 DDF0 5E19 4410 DCEC 5E18 4442 DDF6 DCFA 5E19 37F3 5E00 35A1 5E04 366A &A9\x0D\x0A\
#COMD 6 16 F9B3 5E05 34DF DDF7 D8FF CC0D 50E2 D4B8 34D4 CC03 50A2 5B01 41C0 3CE 5B21 5B03 D5BC &96\x0D\x0A\
#COMD 6 16 F9C3 34D4 67E0 41C0 3D1 D4B8 44D9 4182 FA0D D4B8 44DA 96BC CC04 53D3 D4B8 44DF CC02 &7F\x0D\x0A\
#COMD 6 16 F9D3 5392 D4B8 34ED CC03 5352 5B00 D4FB 34F9 585A 99C2 1F42 CC03 5023 86E2 1 5EF3 &C3\x0D\x0A\
#COMD 6 16 F9E3 5161 D5B8 34F1 5EDB D5B8 44DD 5B52 9EBB 50E4 585B 5B32 9F41 77F0 8FF3 1 77D0 &08\x0D\x0A\
#COMD 6 16 F9F3 5EF3 5031 5B5B 9EA2 5765 D5BC 34F1 D5B8 44DD D4B8 34F1 96BC 9EBB 5026 D5BC 34F1 &D8\x0D\x0A\
#COMD 6 16 FA03 D5B8 34EF D4B8 34F1 96BC 9EBB 5096 D5BC 34F1 5060 5B00 D4FB 34F9 581A 82E0 FFFF &E3\x0D\x0A\
#COMD 6 16 FA13 D4B8 44D9 5282 D4B8 44DF CC02 5242 D4B8 34ED CC03 5202 D5B8 34F9 58FB 80C 5B0B &62\x0D\x0A\
#COMD 6 16 FA23 5806 585A 87E0 FFFD 87E2 3671 1CE0 1C42 803 5B0B 5B22 8DBA 5016 585A D4B8 34F2 &34\x0D\x0A\
#COMD 6 16 FA33 D4FB 34F3 58FA 4EDF 77F0 8FA2 86A2 D5BC 34F2 D4BC 34F3 2101 D4BC 34D5 D9FF 1B63 &FA\x0D\x0A\
#COMD 6 16 FA43 D8FE 41C0 3E2E D4BC 34D7 D8F5 581A D4B8 34F8 1B40 D8F4 583A D4B8 34F0 1B41 D8F3 &D2\x0D\x0A\
#COMD 6 16 FA53 585A D4B8 34F1 1B42 D8F2 581A D4B8 34F2 1B40 D8F1 583A D4B8 34F3 1B41 D4B8 34F9 &8C\x0D\x0A\
#COMD 6 16 FA63 58FA 80C 5B0B 86A4 585A D8F0 581A 1C22 1820 1F4A 9292 1B85 41C0 332F 41C0 3378 &F7\x0D\x0A\
#COMD 6 16 FA73 5E18 34D5 41C0 2922 D8FE 466C 585A D4B8 34F2 1B42 D9FE 4776 585B D4B8 34F3 1B42 &81\x0D\x0A\
#COMD 6 16 FA83 5E18 34D5 41C0 3D1 D8FE 467A 585A 3101 1B62 5E18 37F7 466D 585A 2703 1822 D9ED &11\x0D\x0A\
#COMD 6 16 FA93 4777 585B 82E2 FFFF D8ED 4679 585A D4B8 34F8 1B42 41C0 43FC D9ED 4778 585B 1B42 &C0\x0D\x0A\
#COMD 6 16 FAA3 5070 2101 467E DCFE D9FE 8DA1 4186 F884 2101 467C DCFC D8FC CC0D 50A3 5E19 3500 &B2\x0D\x0A\
#COMD 6 16 FAB3 477C 585B 1F02 D4BC 34F8 5B1A 4182 F7D7 5E65 5E64 5E63 5E61 5E60 5E67 59A6 0 &D9\x0D\x0A\
#COMD 6 16 FAC3 5E66 4580 5E46 58CD 87ED FFFA 0 5E47 5E40 5E41 5E43 5E44 5E45 D4B8 34D2 96BC &12\x0D\x0A\
#COMD 6 16 FAD3 CC02 5153 2103 41C0 3C8 3103 2101 5E02 34D5 D4BC 443F D5BC 34D2 2707 1822 6760 &B0\x0D\x0A\
#COMD 6 16 FAE3 D4BC 34D6 D5BC 34D8 5B02 41C0 3D1 2101 DCFF D9FF CD04 5022 2105 DCFF D9FF CD0D &CA\x0D\x0A\
#COMD 6 16 FAF3 5022 210E DCFF D8FF 41C0 B663 DCFE 58FA 4EC5 585A 87E2 37F7 8CE2 5 4182 FC41 &40\x0D\x0A\
#COMD 6 16 FB03 585A 87E2 37F1 1F22 D5FE EC2D 4181 FC41 DCFA 5E19 FFFF DDFB 5E18 37EE 7760 467A &15\x0D\x0A\
#COMD 6 16 FB13 DDFD 58BA 5E04 37F1 5E00 37EF 5B24 5B00 477A 467A 587B 583A 7760 DDFC D8FD 41C0 &BF\x0D\x0A\
#COMD 6 16 FB23 B663 467C 58FA 4EE5 585B 87E2 37EE 1F02 8C85 5122 5B5B 86A4 585A 1F42 9E83 50C3 &77\x0D\x0A\
#COMD 6 16 FB33 5B5B 86A0 585A 1F02 8C81 5064 585B 87E2 37F7 8CE2 5 51B1 3101 477C DDFC D8FC &DB\x0D\x0A\
#COMD 6 16 FB43 CC0A 55C6 D8FB 5294 D9FD 5142 2104 DCFD D4B8 34D3 96BC CC02 51C3 310D DDFD D4B8 &F0\x0D\x0A\
#COMD 6 16 FB53 34D4 96BC CC02 5153 2163 DCFD 5120 5B27 DDFB 5680 D8FD CC04 50A2 310D DDFD D4B8 &C5\x0D\x0A\
#COMD 6 16 FB63 34D4 96BC CC02 5053 2163 DCFD 5020 3163 DDFD D8FD CC0D 4186 FB1F 5E18 FFFF 7760 &DD\x0D\x0A\
#COMD 6 16 FB73 2303 5E01 34D5 2F07 DCFB DDFD 6760 DCFC D8FD 41C0 B663 58FA 4EC5 86C0 37F7 585A &E7\x0D\x0A\
#COMD 6 16 FB83 1F02 5032 5B07 DCFB 5130 3101 477C DDFC D8FC CC0A 50D3 D8FD 41C0 B663 467C 58FA &B6\x0D\x0A\
#COMD 6 16 FB93 4EC5 585A 87E2 37F7 1F02 56F2 5B07 DCFB D9FB 4184 FBDE D8FD 5192 3104 DDFD D4B8 &08\x0D\x0A\
#COMD 6 16 FBA3 34D3 96BC CC01 5303 2103 41C0 3CB 5B00 D4BC 34D3 1861 D9FD D4BC 34D8 D5BC 34D6 &5E\x0D\x0A\
#COMD 6 16 FBB3 5B01 5F40 FBD7 5E0C 3D1 0 D8FD CC04 5192 310D DDFD D4B8 34D4 96BC CC02 5143 &E1\x0D\x0A\
#COMD 6 16 FBC3 2103 41C0 3CE 5B00 D4BC 34D4 1861 D9FD D4BC 34D8 D5BC 34D6 5B01 5F40 FBD7 5E0C &87\x0D\x0A\
#COMD 6 16 FBD3 3D1 0 2163 DCFD D8FD CC0D 4186 FB79 D9FB 4185 FC41 D8FB 58FA 41C0 3E19 DCFD &47\x0D\x0A\
#COMD 6 16 FBE3 5B07 41C0 3E2E DCFC 3104 D5BC 34D5 D8FF 7760 D4BC 34D6 D5BC 34D7 D8FD D4BC 34D8 &1B\x0D\x0A\
#COMD 6 16 FBF3 D9FC D5BC 34D9 5E18 34D5 41C0 2922 5E18 34D5 41C0 3D1 5847 87E2 4442 2701 1822 &F9\x0D\x0A\
#COMD 6 16 FC03 4EC5 585A 87E2 37F7 3103 1B62 585A 87E2 37F3 5E19 37EE 82E2 FFFF 477A 581B 585A &92\x0D\x0A\
#COMD 6 16 FC13 87E2 37EE 1C20 1822 5E02 37F2 86A2 583A 5B02 467A 585A 1F22 83C0 F000 1B61 2103 &F7\x0D\x0A\
#COMD 6 16 FC23 D4BC 34D5 5E18 34D5 41C0 2922 5E18 34D5 41C0 3D1 5E19 4442 477E 585B 3F01 18E2 &EF\x0D\x0A\
#COMD 6 16 FC33 5E18 37F7 467A 585A 82E2 FFFF 5E19 37F3 477A 585B 82E2 FFFF 82E0 FFFF 2101 467F &E0\x0D\x0A\
#COMD 6 16 FC43 DCFF D8FF CC10 4186 FAEC 5E65 5E64 5E63 5E61 5E60 5E67 59A6 0 5E66 4580 5E40 &12\x0D\x0A\
#COMD 6 16 FC53 5E41 D4B8 34D4 CC06 5021 CC02 5302 5E20 1 3121 5E02 3C17 8CE2 3 5022 6F60 &A5\x0D\x0A\
#COMD 6 16 FC63 50C0 77D0 5B1B CC2B 5083 9F45 585A 87E2 37F7 8CE2 3 5752 6F60 5ED2 5181 2103 &97\x0D\x0A\
#COMD 6 16 FC73 41C0 3CE 6760 3103 5E02 4517 D4BC 4516 D5BC 34D4 1B42 5E02 34D5 2107 1B42 210D &C6\x0D\x0A\
#COMD 6 16 FC83 D4BC 34D6 D5BC 34D8 5B02 41C0 3D1 5E00 34D2 1C00 5E01 34D3 1C21 8DE1 2 5032 &55\x0D\x0A\
#COMD 6 16 FC93 2106 D4BC 34D3 41C0 3535 8DE0 7 5072 D4B8 34D2 CC03 5032 2101 D4BC 443F 8DE1 &8D\x0D\x0A\
#COMD 6 16 FCA3 2 5072 D4B8 34D3 CC03 5031 5B01 D4BC 34D3 5E61 5E60 4580 5E46 58CD 87ED FFFD &EA\x0D\x0A\
#COMD 6 16 FCB3 0 5E47 5E40 5E41 5E43 5E44 5E45 5E03 3541 3F00 5843 5B27 87E7 1 1B6A 5B07 &D1\x0D\x0A\
#COMD 6 16 FCC3 CC1F 57A6 3F00 5E02 452F 5B27 87E7 1 1B6A 5B07 CC12 57A6 5E18 37EE DCFF 5E18 &12\x0D\x0A\
#COMD 6 16 FCD3 37F1 3F00 DCFE 5B07 5E01 37F7 DCFD 5B07 41C0 E909 581A 5B07 41C0 E90B 58BA 5E20 &AB\x0D\x0A\
#COMD 6 16 FCE3 8 5B00 5042 41C0 2951 5EDA 50D0 8DE0 4 5042 41C0 2954 5EDA 5060 8DE0 D &37\x0D\x0A\
#COMD 6 16 FCF3 5032 41C0 2957 5EDA 5B32 CD01 5033 5B05 4182 FD48 D8FD 585A 8CE1 5 5072 D9FE &CF\x0D\x0A\
#COMD 6 16 FD03 581B D4B8 EC2C 1F60 9FBA 5034 8CE1 3 53C2 D8FF 589A 5E00 37EE 1F24 CD20 5283 &FD\x0D\x0A\
#COMD 6 16 FD13 5B12 CC07 5256 87E2 37F2 3701 1F22 97BD 9FF4 5B5B CC05 5066 4AC1 77E0 58BA 5B5B &78\x0D\x0A\
#COMD 6 16 FD23 CC05 57A3 5B00 467D 585A 5E04 34F9 1C42 92 1844 41C0 449C D4B8 34EA 5012 3708 &A8\x0D\x0A\
#COMD 6 16 FD33 5B03 D4FB 34F9 585A 1F42 9EA5 5014 18A2 5B00 467D 585A 1F02 CC77 5076 1F02 CE78 &58\x0D\x0A\
#COMD 6 16 FD43 585A 87E2 452F 2301 1802 2120 467F DCFF 2120 467E DCFE 2120 467D DCFD 87E7 1 &BF\x0D\x0A\
#COMD 6 16 FD53 87E1 20 5B07 CC2E 4186 FCDA 5E65 5E64 5E63 5E61 5E60 5E67 59A6 0 5E66 4580 &55\x0D\x0A\
#COMD 6 16 FD63 5E46 58CD 87ED FFF8 0 5E47 5E40 5E41 5E43 5E44 5E45 3300 5E00 37F7 8DE4 B &43\x0D\x0A\
#COMD 6 16 FD73 5012 330E 8DE4 19 5012 3321 48E5 5B5B 86A0 585A 1F02 DDFA CC03 4186 FE49 5E19 &DD\x0D\x0A\
#COMD 6 16 FD83 37EE 477A 585B 1F02 5EE4 D4BC 34F8 87F3 1 5B13 5E02 37EE CC2E 4183 FE49 9745 &00\x0D\x0A\
#COMD 6 16 FD93 5B7A 87A2 86A0 DDF9 DCF8 9745 D9F8 585B 587A 3120 1F02 4778 DDF8 CC03 4186 FE40 &B9\x0D\x0A\
#COMD 6 16 FDA3 D8F9 585A 1F02 D4FE 34F8 4182 FE40 5E01 37F1 5B21 477A 500 5B1F 585B DCFB DCFC &9A\x0D\x0A\
#COMD 6 16 FDB3 1F02 5B63 87A1 585B DCFE 1F02 DCFD 3705 D5B8 EC2C D8FE 96BC 9EBB 5025 2101 DCFC &15\x0D\x0A\
#COMD 6 16 FDC3 D8FD 96BC 9EBB 5015 501 5E01 37EF 5B21 477A 585B 5B63 87A1 1F02 DCFF 585B 5E01 &7A\x0D\x0A\
#COMD 6 16 FDD3 37F5 5B01 467A 1CE2 585A 5B63 87A1 98C2 585B 5B12 1C42 8EA2 5B1A 5035 3101 DDFB &68\x0D\x0A\
#COMD 6 16 FDE3 5010 6790 5B1A 8CC0 A00 5096 5B42 8CC0 BB7 5046 5B52 8CC0 BB7 5013 3709 5E18 &85\x0D\x0A\
#COMD 6 16 FDF3 FFFF D4BC 4504 D8FC 5211 5B3F 52B1 5B47 86A5 D9FF 8DBA 5046 5B13 D4BC 4504 52D0 &DA\x0D\x0A\
#COMD 6 16 FE03 5B05 467F 5B27 8DBA 5046 5B04 D4BC 4504 5240 5B05 CC05 5313 D9FB 5041 5B13 D4BC &49\x0D\x0A\
#COMD 6 16 FE13 4504 51B0 5B24 D5BC 4504 5170 5B1F 50A1 D5B8 EC2D D8FE 96BC 9EBB 50F4 5B24 D5BC &B6\x0D\x0A\
#COMD 6 16 FE23 4504 50B0 D8FC 5091 D5B8 EC2D D8FD 96BC 9EBB 5034 5B33 D5BC 4504 D4B8 4504 50D5 &A6\x0D\x0A\
#COMD 6 16 FE33 210B D4BC 4505 5B33 5B04 5833 D4BC 4506 D5BC 4507 41C0 4219 5EE1 2120 4679 DCF9 &33\x0D\x0A\
#COMD 6 16 FE43 87F3 1 5B13 CC2E 4186 FD98 8C 5B04 CC2B 4186 FD71 5E65 5E64 5E63 5E61 5E60 &73\x0D\x0A\
#COMD 6 16 FE53 5E67 59A6 0 5E66 4580 5E19 E723 5E18 0 62 86A2 77D0 8DFB FE67 57A6 D4BC &C5\x0D\x0A\
#COMD 6 5 FE63 514D D4BC 5145 4580 0 &4D\x0D\x0A\
#COMD 6 1 EADA 6D87 &1E\x0D\x0A\
#COMD 6 1 E701 E240 &E2\x0D\x0A\
#COMD 6 1 E700 4180 &D3\x0D\x0A\
#COMD 24 17983 00000 &05\x0D\x0A\
#COMD 6 16 FE6E EA11 F1F6 EA10 4180 EA13 FE58 EA12 4180 E756 F219 E999 EEDC E998 4180 E99B EEE1 &EC\x0D\x0A\
#COMD 6 16 FE7E E99A 4180 E94E F25B E78C F265 E746 F3A6 E768 F63B EA41 EEED EA40 4180 E766 F782 &01\x0D\x0A\
#COMD 6 16 FE8E EA0F EEF0 EA0E 4180 E752 F795 E9C7 EEF9 E9C6 4180 E750 F19C E9E7 EF41 E9E6 4180 &23\x0D\x0A\
#COMD 6 16 FE9E E748 F7BB EA1F EF46 EA1E 4180 E7F0 EF80 E78A FAC5 E7A6 EFFA EA99 F037 EA98 4180 &67\x0D\x0A\
#COMD 6 16 FEAE EA2B F06A EA2A 4180 E790 F08A E74E FC52 E99D F0BE E99C 4180 E816 F0C6 E782 FCAF &3F\x0D\x0A\
#COMD 6 16 FEBE E85A F0F3 E8ED 4580 E97A F1A3 E980 F127 EA9D F166 EA9C 4180 E9E9 F179 E9E8 4180 &12\x0D\x0A\
#COMD 6 16 FECE E7C8 F191 E76A FD63 EABF EAF9 EAC1 EB17 EAD7 E07A E725 F082 E735 C39 E726 F0EB &32\x0D\x0A\
#COMD 6 10 FEDE E736 29D4 E727 F0DE E737 597 E744 14 E743 1F &68\x0D\x0A\
#COMD 6 1 FE6C FEE7 &35\x0D\x0A\
#COMD 6 16 FEE8 5AFA F0FF 459B 0 6502 C39 6503 29D4 6504 597 6512 14 EC95 1 463F 0 &69\x0D\x0A\
#COMD 6 2 FEF8 5144 7 &59\x0D\x0A\
#COMD 6 1 FE6D FEF9 &39\x0D\x0A\
#COMD 6 3 FEFA F127 F1F6 FE58 &49\x0D\x0A\
#COMD 6 1 FE6B FEFC &41\x0D\x0A\
#COMD 6 1 FE6A 20E6 &09\x0D\x0A\
#COMD 25 53738 &F4\x0D\x0A\
#COMD 6 16 FE6E EA11 F1F6 EA10 4180 EA13 FE58 EA12 4180 E756 F219 E999 EEDC E998 4180 E99B EEE1 &EC\x0D\x0A\
#COMD 6 16 FE7E E99A 4180 E94E F25B E78C F265 E746 F3A6 E768 F63B EA41 EEED EA40 4180 E766 F782 &01\x0D\x0A\
#COMD 6 16 FE8E EA0F EEF0 EA0E 4180 E752 F795 E9C7 EEF9 E9C6 4180 E750 F19C E9E7 EF41 E9E6 4180 &23\x0D\x0A\
#COMD 6 16 FE9E E748 F7BB EA1F EF46 EA1E 4180 E7F0 EF80 E78A FAC5 E7A6 EFFA EA99 F037 EA98 4180 &67\x0D\x0A\
#COMD 6 16 FEAE EA2B F06A EA2A 4180 E790 F08A E74E FC52 E99D F0BE E99C 4180 E816 F0C6 E782 FCAF &3F\x0D\x0A\
#COMD 6 16 FEBE E85A F0F3 E8ED 4580 E97A F1A3 E980 F127 EA9D F166 EA9C 4180 E9E9 F179 E9E8 4180 &12\x0D\x0A\
#COMD 6 16 FECE E7C8 F191 E76A FD63 EABF EAF9 EAC1 EB17 EAD7 E07A E725 F082 E735 C39 E726 F0EB &32\x0D\x0A\
#COMD 6 10 FEDE E736 29D4 E727 F0DE E737 597 E744 14 E743 1F &68\x0D\x0A\
#COMD 6 1 FE6C FEE7 &35\x0D\x0A\
#COMD 6 16 FEE8 5AFA F0FF 459B 0 6502 C39 6503 29D4 6504 597 6512 14 EC95 1 463F 0 &69\x0D\x0A\
#COMD 6 2 FEF8 5144 7 &59\x0D\x0A\
#COMD 6 1 FE6D FEF9 &39\x0D\x0A\
#COMD 6 3 FEFA F127 F1F6 FE58 &49\x0D\x0A\
#COMD 6 1 FE6B FEFC &41\x0D\x0A\
#COMD 6 1 FE6A 20E6 &09\x0D\x0A\
#COMD 25 53738 &F4\x0D\x0A\
#COMD 24 60464 65535 &15\x0D\x0A"
};
