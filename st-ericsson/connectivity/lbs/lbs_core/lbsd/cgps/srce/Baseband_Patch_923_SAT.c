/****************************************************************************
 GPS IP Centre, ST-Ericsson (UK) Ltd.
 Copyright (c) 2009 ST-Ericsson (UK) Ltd.
 15-16 Cottesbrooke Park, Heartlands Business Park, Daventry, NN11 8YL, UK.
 All rights reserved.
 Author: Mohan Babu N [194997]
 Filename Baseband_Patch_923.c

 $Header: $
 $Locker: $
****************************************************************************


****************************************************************************

 This file was created from base patch file E923C005.F309


****************************************************************************/

// PG2.1-SAT - Patch014


#define PatchCheckSum_923_SAT             0x32C6
#define PatchFileName_923_SAT     "E923C014.32C6"
#define PatchRomVersion_923_SAT              923

static const U1 vg_CG2900_Patch_923_SAT[]= {
"HEAD Rom923 patch: Patches the N1_04_C1 chip\x0D\x0A\
{D6>H[ool0}D5\x0D\x0A\
{D1P;O;C;6cCX0}6C\x0D\x0A\
{D1P;O;C;6cCX0}6C\x0D\x0A\
{D6L_C}68\x0D\x0A\
{D6L_C}68\x0D\x0A\
{D1R3O<_f`oP3n024@e?UT250R8A1@424`e;cV\\]FhCYcD^4jRD2J<^E0VeKa>XT60V157hXgRUne@4DF0GTIN@Eh6CZT0}09\x0D\x0A\
{D1R3ODT70h6GD^>I5c0I@8T70h6UN6>1K<@E1`9RAGP9>h83R083D^>I5D59N6>1P<@E1`9RAe;SV?e6AU[bKn870JP00}F0\x0D\x0A\
{D1R3OL]feP\\00Oh30J03L]=BhiSjF_9_hPL1<0=fVGQWo`4<UP\\00?h6hgJE@<5hJJ3WL]=BhiY2Ko<<?VdB2`03`P;T0}73\x0D\x0A\
{D1R3OT]BliY1NHEiVAH1NAUi1GPI>ZEh2iSb0hP>0GQ[oomBlCk3D_4nde;a<L470g551`=fae;SVT50Qc?mB0]R=PoX0}3F\x0D\x0A\
{D1R3O\\P0`F3XBl5]1POX081:`f9R3nP104W3HUh?j020B<=RGPOX0817`f9N3nP0P4K0Q0=BlCZ0QL=BliY1@@470Y1X0}9B\x0D\x0A\
{D1R3OdT70Y3M1`=aMGP9?TEhHC]dKBVO@6dYN6TjW@L3<lEiQGVI5P460Xkm7hXgR1<i@@HgR1=m@LDF0GQY>:1L`GV80}25\x0D\x0A\
{D1R3OlT601>V=`8IID18W1ehJCRR6XAJ0GV91P0CUGT2<`4m^D79N0Tk78d0@X87b041@@5h2C]`S410`GV11P9]QGUX0}81\x0D\x0A\
{D1R3P4UiKd]26^E66WdB>^I?1Qk:6^La6DKIK@8:2DH5WP8:26d8D05ikFe;>5514Mn1gILH5ElEJFU2`Fd22PU1bFd00}F5\x0D\x0A\
{D1R3P<X226d91`=oTGQ8055ikGWY5P4ORSN:TBU0AAH3D^>I5c0I5PUh3h8]K@c46@L2HcB4Q@L2a:T70Y6b7h`06SN<0}D3\x0D\x0A\
{D1R3PD^2GEb9NHT60Y5[HoXbR@H2K4dYTIP=\\]f1P?9@PMR8D93HV0RhEGQXF9=b;AH1N6PP4g8AN6PX:g8EN6R1Kg900}34\x0D\x0A\
{D1R3PLUhJ8Z3LTEhJ9?KLTUhJ9P7LTehJ:>OLU5hJ:P7LUEhJ;0?LUUhJ74kLSUhJ7[;LSdF08:XRS2@k9P8Xj2X180`0}18\x0D\x0A\
{D1R3PTR:d934V0RSU:P51`:KNc055Pei0kOD00E5RGQSWJ:H3cT5H6Ql0D29N601me;`_65hHigJV0li1F1XO050RGQP0}1C\x0D\x0A\
{D1R3P\\P1@e;`_6D704nc]m@01D@;E^2lHGQSWJ:H3cT5H6Q]PeKP_6EhHigJV0li1F1XKH5iPAH1N@5hHifRV0li1F1X0}61\x0D\x0A\
{D1R3PdQl0GV11P1YCGT1N6>MfYP?>@EPJ7`1NH4606VMb?4706X:d?cPokOD00E2BGQWWJ:L3cd5H6alPD29N6@1me;P0}FF\x0D\x0A\
{D1R3PlRlF@H081=Fh;b5NFgMPeK`_8D70Za]NNmFl;b55P5h2iUA_H1m:TX9N0TikeKP_8Eh70nR0Fhj[7fZCPY]9WlT0}52\x0D\x0A\
{D1R3Q4UhA006FdE`PhAj<^E15S[U9Q8JiBHBOoiKoGP9X6];@eKSVEVNAf_2OamFlihFKMa^:6d[D_>N6AH1N0V0cP>80}C7\x0D\x0A\
{D1R3Q<P028@91`;4ZGP9P<h;R0095P4F0GT5N@\\8?F5Z6`=\\c045K0EP=Qn003d60[59NB5i2GTUNFeiM@L2PE5imGV80}22\x0D\x0A\
{D1R3QDYFRGVUNHUiXAH1N0^N4e;SWQIJlU88K@Y]`D5;D^>N6e;aX6dF0e;SVEU1Re;SWQVO@e;aX6dF0e;SWQVO@e;`0}B6\x0D\x0A\
{D1R3QLVPKAH11`>5G@L02]mBhiFCJl=CoD215PmFlD21N0^EY7dZBTUh2D1hKBQ^BAH11`9kAAn:=hYgGAH91`;5A@L00}7C\x0D\x0A\
{D1Q_QTZ=oGQP3j=Bl;niN0Kh0GP;<M5`7hIhOBA]:@L2ad5h1c7AN0[h0G0OQZ1m96dYNHT60WN400000}4D\x0D\x0A\
{D1P7O:TG`}80\x0D\x0A\
{D1P7O;n6\\}86\x0D\x0A\
{D1P7O;n6\\}86\x0D\x0A\
{D1R3m]=l`hJcO<OM\\g0SQBM`>hCcMi>4_g?3OUml5gnKO1460g63Oomk3gdWN`T60gKCO=Mk1h3_N`460gEkPUmePh>00}DA\x0D\x0A\
{D1Q;me=`Ph<cL8^3FgACPmMdFh@7L=>5dgLcQRM\\Sh5OK<i\\Bfd<00@00}35\x0D\x0A\
{D1P7m\\_gU}E0\x0D\x0A\
{D1Pcmi^Gf0GAU09\\BIA000NL<003W3@01<TD00`00}BF\x0D\x0A\
{D1P7m\\oga}FC\x0D\x0A\
{D1P7ml[jb}FC\x0D\x0A\
{D1P7m\\Ogb}DD\x0D\x0A\
{D1P7m\\:FA}86\x0D\x0A\
{D6Lao}96\x0D\x0A\
{D1R3m]=l`hJcO<OM\\g0SQBM`>hCcMi>4_g?3OUml5gnKO1460g63Oomk3gdWN`T60gKCO=Mk1h3_N`460gEkPUmePh>00}DA\x0D\x0A\
{D1Q;me=`Ph<cL8^3FgACPmMdFh@7L=>5dgLcQRM\\Sh5OK<i\\Bfd<00@00}35\x0D\x0A\
{D1P7m\\_gU}E0\x0D\x0A\
{D1Pcmi^Gf0GAU09\\BIA000NL<003W3@01<TD00`00}BF\x0D\x0A\
{D1P7m\\oga}FC\x0D\x0A\
{D1P7ml[jb}FC\x0D\x0A\
{D1P7m\\Ogb}DD\x0D\x0A\
{D1P7m\\:FA}86\x0D\x0A\
{D6Lao}96\x0D\x0A\
{D1R3Q[0110480?`000200A@0i0380<`130300<@0d0200800P0200800001h01@OL00\\0>P0P00h002=DDTEC83T00000}5A\x0D\x0A\
{D1R3Qc00700000@0300L03`0OAH1Wh460X<UWh4606mGE^>HbGU_]m@01D6;]1@0CD3AgH=FliS91`2^2GW_E_>Hbm3D0}27\x0D\x0A\
{D1R3Qk51RLQSDo^L?D2KS=@0@AH17i8gT:mm1PN7jAH1NI79lkOD00E12eKSV<T61;051P2_Pe;P_`4F2N@?=N50ecHX0}01\x0D\x0A\
{D1R3R350CAH1NGg9lGQ^m08biD@Ei1e3QWodl1mBhiRLh5N<e020Q1WYlWom1`=eW@H3RhgMPk@X00WOEkO800WMQLOD0}DF\x0D\x0A\
{D1R3R;8:iIi1KnWT5GQP04hfhDV=a2U4aGQP04m[0SKQAlEhH00WJ`8fhDJ5N6004SKQAHC4Cg^0l1D60h^=N600?f\\00}81\x0D\x0A\
{D1R3RC8fhD<5N6007f\\2=^51ac@=@DC4?g^0l1D60h^?Y=@0PD59a5MCniRE1QN;UeKQ<L^ge005@8]FhihQa1La?M`@0}9A\x0D\x0A\
{D1R3RK<`WM`C<2E1CkOD00E0RMb1gd747S;U1Pn;RNAS=2U1EcAI1Pn;2@H3RiGT3cGQA57WeD37]2P02D<Ei1EhH00l0}BE\x0D\x0A\
{D1R3RS8fhD7BO`GO@?0E1`=eG@H3RhmFhC7;]m@01D2;E^>N8L@G<CgL4c2Mg1<`9D5?]m@01D29g87O@L@N<^E>QVd40}02\x0D\x0A\
{D1R3R[6O@>0N<^E<akAP01U<3Vd5Wd3P7k@X005:QS;UBPNdH00ABDi]1Im0h1e8@L@M@PI]oNAS=7fL4cBeW13P7DG00}26\x0D\x0A\
{D1R3Rc5hH00UN6@04kOD00FObN@F=^53fWoll1G4;GUYWT9]o>0]1`=eGGWXh2e0@?0OQ=@01GWm5P77eAH5al\\`2D340}7B\x0D\x0A\
{D1R3Rk>d:0095QD6034kD^>Om@L7S6T701C[]m@01DO9N@Ui0J0>?hP11F0:7h^NV7b9lPh5KF`^?h^NVQn;W]iB26d80}65\x0D\x0A\
{D1R3S39]`Sn;W]hORilFBPXOPim>DP1^26d1NH5iRAH1N@Uh2ijIN6Dk06fYN6Cb>6fYN6BYL6fYN6APZ6fYN6@Gh6fX0}EF\x0D\x0A\
{D1R3S;5hImEPKJUhIhbHKJUhId?@KJUhI_\\8KJUhI[90KJUhIVUhKJUhIR2`KJUhIMOXKJUhIHlPKHUh2inmN6@4E6fX0}0A\x0D\x0A\
{D1R3SC5hI0=DKJUhI09@KJUhI05@KJUhI01DKJUhI0e`KJUhI0a`KJUhI0]dKJUhI0YdKJUhI0UdKJUhI0QdKJUhI0Mh0}CF\x0D\x0A\
{D1R3SK1]ZGQT1WQ]ZGQT1GQ]RGV9N6@01eKcWoDF0e;P_`TF2GTIN@Ei3GTANAEi7GT1N0Cj@:`1N1SjBGP=4XEh4B[00}CA\x0D\x0A\
{D1R3SS1m97f6Od8JiG_QNA5RVF2=gH5i8PnP015`Phi\\OCA]9GVQH8hOQ008001m1@L2N]EPJF2>7h@0;000OJD611Ul0}EA\x0D\x0A\
{D1R3S[5PSQn4000007dTOHIo@QkQH8hOQ01OFd8ji6d6=h001D46<`1>8@H<6LXc06eQ1P`Ib@H05FUikSN000D621ND0}A7\x0D\x0A\
{D1R3Sc=FhiUI@8XJ[D12>Zd601NGNd9_lVgj6^M[`Wob6^M[`WoR6^M[`Wo26^I]lGW]1P0HY@L0UBmBhC77D_>N7e;P0}63\x0D\x0A\
{D1R3Sk4abe;cWR4F0461iRD70i2aNNT60:P=H>gWmDI6_1GOPDC=gH3cmNAS=1E4DO0888E\\[Ql0nUePK<@0l6C4`?1D0}68\x0D\x0A\
{D1R3T31]XP^00250`??da1E0@<@;E_>H<GQU:gjL2F1]i6=GniPa@=C406f1@@1mPY`Egd1]P<@nSR50Q<@0KH5\\QAH00}FC\x0D\x0A\
{D1R3T;5PkeKQ?`D71i3KE^4o1@L8ZK4F0<@nSR4F2NQSEo^H<IfGY=@0PD99iOll8MiG=0TF3NQZ=`03jI`GY=@20D840}65\x0D\x0A\
{D1R3TC=[`MiF=`1e<I`F=`16DI`GSo0031@1i1GO@cA1@A8oo006O`ENP@H0[5TOSSN<4KD61i6M5P=;@QV19PhIPBH<0}DC\x0D\x0A\
{D1R3TK=Bl<VGBd8YPBH>:H4V3kOD00E1bK0>7hnLWS8=@5Al3D53DoRlFD2GD^2lFSkQgIDV2SkQgIDV2BH>?^7MUBH<0}97\x0D\x0A\
{D1R3TS=K@S[U9P8NhBH19PHNhBH6^ki]nY^lhkjmQWo^WHCaQSL1ooe0fWonKOeNP?8INf\\`0IiEj9\\eTD1HaI5SkeKP0}CB\x0D\x0A\
{D1R3T[2lCP5]K:io2F?]H>X=1F`\\<3`j6VeBKM9]ld_1WUI_l?>ENHd601<iNNT70Y]i1PAK8MTfdCT705kk]lP02@H80}77\x0D\x0A\
{D1R3Tc1K8L@n2`001GPL3j81JNA27Zhg01ZU1PaNfg]1Wd470XfLhQ7V4D>737e32FbVOb<NSYhEH6gI=]4hKR1]0LHD0}91\x0D\x0A\
{D1R3Tk<H2>8EiQ<eE@H8Fb7T3cd5N0nN:Qj=HNgWY6f=1P1KfGUYH>Qn9U8VJmIO`c@i@HLd?D45NNT7063=5P5hH0000}9D\x0D\x0A\
{D1R3U3>d:009@YEiKMPjd3d70YEjOolL1GV:=XVMQGV95P470W7e1`;nZ@L300TF0471AXT607@T@<55R@H0L^G4:D@40}58\x0D\x0A\
{D1R3U;=FhD19@d]FhiOY@XWXHc`Q@MNd900Y@A?7lD24Q04F08@55P6MPJ0:7h]l>fjl<1Q]J@H0Lcg4:D48@<74:5b80}FB\x0D\x0A\
{D1R3UC4F0@H0B[g4BkC@0050bVeFKJe0PVeJKJY]FVfXhE4F0AoR<`0[NE_55P4OUSNDZ4U11SNDP^e6AAH3`mDF2k@P0}B5\x0D\x0A\
{D1R3UK00<DAEd0hOUibLO1HOU00jK`HJiVd3E^39USkQgIAl5GVE1P2XMGVE5P<d1AH;SR?ooGVE1P23DGP0a4eh2d_P0}27\x0D\x0A\
{D1R3US5`GiI8OBY_1Q[VKOQ]8GP0a6B48NN7=0d65;BeN034K8@11P2d]e;SULUiJ@L3U\\mBhiG:F_5ikSKQ5PMBhiRD0}03\x0D\x0A\
{D1R3U[6OPNAF:H3PE8@0h6DF0k@L07d641\\GQo001@H06aA1@Qn@5\\XoT1jY5P5RTQn@00U`5iODOC1]9QfPOCA]9QfP0}34\x0D\x0A\
{D1R3Uc1m<6dV7J1m=6dV7J8OT00:7i@027d`KBXMX7ddKBXMX7d`KBXMX7ddKBXMXQn@00XOU008OC1];QfPOCA];QfP0}13\x0D\x0A\
{D1R3Uk1m<6d^7J1m=6d^7J8OT04Z7i@1:L@C<0U1AQn@0E8OP00a5P1m<QfPOCHMX7db7J1m=QfR7i002QnD00Qm<QfP0}60\x0D\x0A\
{D1R3V31m=QfPOC8MX7df7J8OT00:7i@027db7J1m=QfPOC8MX7df7J8OT04Z7i@1:AH1KnP52eKPi6\\d9IbIWh4F0@L00}4D\x0D\x0A\
{D1R3V;44oGTIN1^CC451N1^CW421NITF0fHM=0dF2GTQ3`=V7C@=@@]V5gH?IQ]f7GVQ5P4701IW]m@01AH9a1<`0AHH0}54\x0D\x0A\
{D1R3VC5i6GT9N@=Bh;`CE^2l5@L0KAESJLYAX0hoR045H0XORikNDP]bFVg1nT[FCSn;W]hORilFBPXOPim>DP8Jig9D0}22\x0D\x0A\
{D1R3VK9]`g9B?h^O5Qn;Wkg:EQX;LVeiPGV9NITF0kOD00E62L@C<1U5BGT9N@5i18@1X0hoR045H0UPRQn;W]a]2Qn00}DC\x0D\x0A\
{D1R3VS>O56d27hNOC6d5NHEiPGV91`03TAH3]m@01DE9N@VP3Sn80@HORic<O8Yo@Q[UX0hoR0467h^NVGPL3j84RSZ\\0}CE\x0D\x0A\
{D1R3V[5hI005NHT706e55P5i7GT1N@EPJF3]K0FO@05Y@8R41Dj1K@<`1D==N6>SR@L3<lE\\104MK9e1AGd3VcEV70000}B7\x0D\x0A\
{D1R3Vc000F`5Wd012Gd3VeEV2000005PJSN000U3bQn400e\\QQn7oo@1jD85N6>SR@L3<iU\\Jc?Y@5R<3Fd3<0U2fQn40}C1\x0D\x0A\
{D1R3Vk002F`40Ae\\WD55O@>KfFHL00000F`1NHEiPGVM5P=Bh<Re1`<YfGP8akB40G0OW1AlZIm91`<YcAH11`??g@L00}10\x0D\x0A\
{D1R3W35LaAH11`:<Qg]15P4OiSL049e0QFaY5P470\\@]1P;4;@L3_PDORSN8lbdF2@L3fGTF0AoR<`1f:D56<`219DG40}95\x0D\x0A\
{D1R3W;460ZheN0SS>7hZDPUh2?Y2DRY:2GP8hfIJ:V8;DnnHY@L3:RmBhioi1`<YfEY1N6001@L3:L5I0AoR<`1fQD540}AD\x0D\x0A\
{D1R3WC8c0851B8D609^=N@5h0_@27h00AGP8hcQn:U89N0Sj@U8ZBPUh2>=VFRYR2e?_V:D70^^;D^>On6dPQ01]86dP0}00\x0D\x0A\
{D1R3WK5iPGQ<0635BEN1N@5h0_@27h00EGQP00A]88@0KB1]8GV1N4`0H<EADh5i2F5[D^3SkGU[Dn>MNe;`hne]2@L00}C2\x0D\x0A\
{D1R3WS23MGW[D_3SkGV95P47074A1`>NJGWY1P0X?AH3D^2lT@H8B<MBh;`WE^2l<Wlj6^Eh0<7EN0Mg<GP;NR5h3g`h0}84\x0D\x0A\
{D1R3W[5h4gfcKPUhC01]1`19Ne;P_3mFh;a:Oa8JiGQ<04T704UkD^2l9eKP_39o>Q[UN031eGP7N:Uh2g[MN0mlmGP@0}9C\x0D\x0A\
{D1R3Wc=nKGQ<06d704W7D^2l?eKP_4Yo4Q[UN4`0B@L0BLMFhCY9N6000F7Z7h`03GQP00<K;Q[UH6Uh1gLaN0]hZG2h0}74\x0D\x0A\
{D1R3Wk>P67`?<N50Uc8YBeT70W[EA@Ql9SXUWUAlZShYgUHfhD2BOoY]2Vgj6^HJ06d27h040Qn<104604PeHP=FhCY80}37\x0D\x0A\
{D1R3X3<d:D2F?i00:7`V>RFNE7bZ?RWNESKQ@99onVd:KOXJiQX@KA5I0F83E^4jBc@Y@9HoT00XO0FNE7b9gUHfhD2@0}A9\x0D\x0A\
{D1R3X;9onVd:KOXJiQX@KA8OT00XO2Hj9IiDO:Xn:MiF=^50TWojK@Y]nQ[V6Q1]4E01N04j9eKP_0Xf8D7;E^2l3SH00}4E\x0D\x0A\
{D1R3XC50beKQ>SE30GP1>RmFh;`:=R54BeKP_0hf0D=;E^4j>F?]N0Tig7fZCPYooSE]K:io`eKaX@4F0GV11P08McB00}33\x0D\x0A\
{D1R3XK51VcL5@9Lg5D2I1P22<@H0PLeQ=S>9k:DF2eKSX1<d0AH5WH=Bli5_=1E12@L3Y;d60j>g=1T61j>g=1e2R@L00}4E\x0D\x0A\
{D1R3XS=c_@L3MhEhH003D_>SF@H3XkEi0GT5N06AAGP7V=1l1e;cTCH;Q0062h001GU]1`=c_@L3MhD70NfEN6>HlGQT0}0D\x0D\x0A\
{D1R3X[008GR002470c;OD^>SFc05APUhH02GE^>SB@L2Hh5hH02KE^>SC@L2Hh5hH03CE^>SD@L2Hh5hH03GE^>SE@L00}38\x0D\x0A\
{D1R3Xc9SPGP3X2UhI000<aa]XGW]NB8?X00C=0D71jQ7=0T71jEW=0d71j\\o=1471jh5NJ=Fhi4eN0>Hd6f11`7^FGV40}0B\x0D\x0A\
{D1R3Xk5iP8@51`7ZOGQP00=Blj0ANN460Nf5N6000e;cWoehHj0[D_>P1F3YNAUh6i==1`<?DFdKE^>P8@L38EU\\0DO40}38\x0D\x0A\
{D1R3Y36O@DM5N6>77@L39gMBhj0A1`<YcGQP081]8eKSX1eh1j0YM6nTS7dU1`<Yl000005hH020KB470bI]1`:_C@L00}98\x0D\x0A\
{D1R3Y;<?NGVI5P5i0GQSX2]Blj05N6>P:F1YN600U@L2HiA]8GQP09T70V>DKB5hH03A1`9SU6dQN600e@L2HiA]8GQP0}76\x0D\x0A\
{D1R3YC003e;cX1ehH03;D_>P8@L3XmehI009NH4F0@L33e0@08`0Q00co6dQN602Ee;cX1ehH0kKD_>P8GQP01]Blj000}DA\x0D\x0A\
{D1R3YK5hHj0[D_>P1GP3VE5h1j08OB9:06dTKREhKQ81N0@0NTj66^Eh1j0DOJI>1S[UN0>ID6dPKP470Z^XB85h0iU@0}12\x0D\x0A\
{D1R3YS1m8TX1N0>IDS\\0CR1]86h11`:[ZGP3X08kP005FhT70j?MN0>IDGP7X0Qm9TX4KB1^8@L2ZjT70`miN6@02AH00}B0\x0D\x0A\
{D1R3Y[5h6K01N6000e;a\\6343gH0Q05hI4fEgT5hB06=N4`0?G0SYc=fPQl04Z244g:@Q0=bXg:U9Q=bRgJJ7iP0PBH@0}DE\x0D\x0A\
{D1R3Yc000e;QX:ePJG2OYfMBhJ2_E^6P[SKQG`@00000@44F0GP00@240344KB5i3GT@_2Eh4K2YN0010GPMh08ST3ol0}1A\x0D\x0A\
{D1R3Yk5OBG0;YnfMPF2ML7^WfU8VDRHOQ042KO1^86dR7i`02Qn@0802CEZaNI5iSGP40@=Fhj05H6e`HjP`ORIB9Vgd0}ED\x0D\x0A\
{D1R3Z31]8F`3D_>P1AH11`<?D100S02403?lKB5hH0X[D_>P8GQP0HmBlj0MN6000e;cWoehH0I3D_>P0GQSX2]Blj040}B7\x0D\x0A\
{D1R3Z;5h0iUAN0NP27dRBP1]96hUN6hB0GP407Y>QQ[UN0>ID6dPKP470Z^XBX5h0iU@OB9:0GP3VE8k09a0KB1^0@L00}A7\x0D\x0A\
{D1R3ZC:[ZGP3WohKP01CD^>OoS\\00I471j?MN0>P0S^000EI2GP3VE5h1j08OBI:16dPKR470Z^Y1`<?NGQT00DF0GPH0}6E\x0D\x0A\
{D1R3ZK6`0GQP00=BlK1Pa0mf08@1N6@00GQ80n5hC00=L1^Z:gJ27`0^S8@3LY240g:SLZDV4g:;MYXOV0219Q000e;P0}14\x0D\x0A\
{D1R3ZS6P[F1YL1^ZGe;QX:mFhJ2^=^5O10000010@AH1N00108@0<@A]8GT=NA2l7GPA\\:Uh0041N1gP0R>@?oeOBG080}D5\x0D\x0A\
{D1R3Z[>ZiIf1H9e`Nj[BDRIB9Qn40@9]n6hPKB8OW00:7i00P09=F[5iTGV=N0@10eKSX0EPKG1?ZbQn9U8VKOA]8F`00}90\x0D\x0A\
{D1R3Zc=Blj055P470`m@402<08@0<oa]8GQP00MBlK1QN6<Bae;cX2MBlJ6SD_6QZe;aXK=BlJ6kD_6Q`e;aXL]BlJ7@0}E0\x0D\x0A\
{D1R3Zk5hH01CD_>P7GQP0X=Blj0QN60:Ve;cX05hHj0[D_>P1GPI\\0240GQTH\\GN@GQ80UUhC00=L1^\\FgJ27`0L>8@40}E7\x0D\x0A\
{D1R3[3=bT8@3LZ=bYBHCLX]fVQnH084V4003D^6P[F1YL2N\\Se;QX:mFhJ2^=^5O100000190@L3XmmBhj01Wh<`0DH40}0F\x0D\x0A\
{D1R3[;=Blj03D^>P9U[c>3]Blj0WD_6QXe;aXJ]BlJ6cD_6Q^e;aXL=BlJ7;D_6Qd@H3Zn470`miN6@03AH1N00108@00}C2\x0D\x0A\
{D1R3[C0a16dQN@ei4;`MN16`ZGP00@5h7N028i0ooEm9L0^]ZIf1H9e`6jfFDRIB9U8VDRHOQ052KOQ^86dR7i`04Qn@0}D6\x0D\x0A\
{D1R3[K00P09=FS5iTGV=N0@10eKSX0EPKG1C[Nan9U8VKOA]8GQSX2]Blj055P470`m@402<08@0<oa]8GQP0UMBlj0L0}E9\x0D\x0A\
{D1R3[S5hH0kKD_>P8GQP02=Blj01N6>P:e;cX0Eh1j0DOBI:1GQT3kT70YimN6LBhUkf?^<L2eKaXJ=FlJ6[E_6Q\\eK`0}63\x0D\x0A\
{D1R3[[6Q^eKaXL=FlJ7;E_6QdeKcVEa8@e;SVEiJlS\\001=BlJ6SD_6QZe;aXK=BlJ6kD_6Q`e;aXL]BlJ7CD_>IGGP00}1A\x0D\x0A\
{D1R3[c>P0S^000EIB@L3Xmd70`miN6@02AH1N1V`0GQP00MBlK1Pa0mf08@1N6@L4Mi1N4P0]GQ<03e`6joOMX8O00Q\\0}EA\x0D\x0A\
{D1R3[k244g:@Q0=bXg:U9Q=bRgJJ7iP0PBH@00=BhJ2]H6U`Wk0CD^6P[eKQX:hfhEl4000004115P5h0040Q00a16dP0}DB\x0D\x0A\
{D1R3\\35i3GT@_1eh4K2YN0010GPMh08ST3omGdU`2k2QWH5PWG0K\\8iB9U8VDRIB9Qn40D9]l6hPKB8OW00B7i00P09<0}10\x0D\x0A\
{D1R3\\;5J<GVANHeh1043E^>P1F1]L4n`i7hVDRI]m6dQK0=Blj055P5hIhK1N6=?H@L2Wjb4>e;cW05hP00IN6N6oGQP0}99\x0D\x0A\
{D1R3\\C>L1@L2W`d70k595P241e;a?]D70hM=5P25oe;cWQmBlihQ5P5i1e;SWQmBlihTQ0Eh1ib8L8MCiib9K6U0b8@80}60\x0D\x0A\
{D1R3\\K=Blib91`3?bF`7D_>LRGV55P5i6F<f7kOoo001NAei0GT5H6Q`P@L0:@Qa908V=hP1kD58O0McoF4H0TU2`F400}66\x0D\x0A\
{D1R3\\S02:F2H0TAl2Fb51`0KLF45K6U=17`;>@IJlGP4iI\\`=DL<LhXOWooL84e\\[Fe^6XEQJe;Q<La`2F5^7hSUW7480}B2\x0D\x0A\
{D1R3\\[5\\JD;9K0]CniRi@Le\\0e?kV;E0c8@?D_4acf?oD_3TR@L34D=Bh>B=HnPPCF`^6XEQJ7`;<2E0S9`XH8UiQGV00}33\x0D\x0A\
{D1R3\\c5iWFJH005iVAH1N@5i1GT=NA5h2C:\\c01l2e;`i8Uh0CG9N0dfcFaYA<EPR@L34D470l2KD^3TC@L91S`2<F`@0}16\x0D\x0A\
{D1R3\\k<`=D6<0RAl1e;`i8U\\JE^8O03<0e;`i8U\\JDC5H8470a511`?0Ve;Pi4d72@Hl0S5\\4c09@H`297`7D_3TRFaX0}03\x0D\x0A\
{D1R3]35KR7`<c0=Bl>B9K6U4aF2=1`<A@@L3`9]Bh>A=1`T6?08aK1<`4D6<0RAl1e;`i8U\\JE^;D^>MBDP51`2koSOX0}ED\x0D\x0A\
{D1R3];001DK9N0Tg5<`0O0]Bl>B9K6U4aF291`<A@@L3`9]Bh>A=1`^e>08aK1<`=D6<0RAl1e;`i8U\\JE^9NI5iSGV40}B4\x0D\x0A\
{D1R3]C5iPAH1NAUS=QngokP00GTMN@5i1GT=NA5i5@L3_PMBh>AXaP=gnc1=@8R4bg?kE^3TSF?\\84e\\[F5^7hSUW7`80}82\x0D\x0A\
{D1R3]K<`@@H?_Meh1>FJ7XEQK7`;Do^H]@H?_Mb44e;`i4S4Q<`7Moeh0@]UN0D;NGP=2eE307`7<150V<`1Ah241AWl0}7A\x0D\x0A\
{D1R3]S8OP0267h@0Qg?oHol`WDD<L@hOS025K8]Gn>B9FlXcQ00=FLQl0U[bKM470@@YK>]Gn>A]F=C<0F`A1PNmg<B40}B4\x0D\x0A\
{D1R3][=goGQQ2gUhI147Lkmg^f>mH6YS0@H;_J]Bh>B=HnPPCF`]HFXOR>FHO0Tan@HK^=MFh>@9N63jDg?aN63jHg?\\0}25\x0D\x0A\
{D1R3]c5hH>@KLnEhH>@OLn5hH>@SLmehH>@[LmUhH>@_LmEhH>@cLm5hH>EkLl5hH>@gLlehHBaSLlUhHBdOLoEhHBmL0}83\x0D\x0A\
{D1R3]k=caGQPnVEh4>@AN1CT5GP5>0Mcjc@M1PNj08A7D_4bGFa;D_4bI<@4Q;5h0C:QN0dbYeKa<V=BlC9KE^4bFF?\\0}F4\x0D\x0A\
{D1R3^30PQF`]HFXOR?YdO0T72m\\aN0TbFQ^800MBhC9K<;EKF?`4Hh1SS8@OD_3T3:`dHA2\\064GInEPK6d1N63T3@L00}14\x0D\x0A\
{D1R3^;2l>8@M1`2l88@OD_3T2@H3^P=Fh>@:G_EhH?YCLo5hH?YSLnehH>@KLnEhH>@OLn5hH>@SLmehH>@[LmUhH>@\\0}BE\x0D\x0A\
{D1R3^C=ceGQPi3=cdGQPiG]c`GQPi3MccGQQ;6=cbGQQ;AmcmGQQ;emcaGQPnVEh4>@AN1CT5GP5>0Mcjc@9AHb4=<@L0}4A\x0D\x0A\
{D1R3^K=Bl>@AK4]Fl>@<a0mBl>@GE_3T6GQPi0d70;`hQ0d70;`PQ0mBl>@;D^4a]@H;^e=BhC6jF_<`4@H?^e=BhC7<0}F2\x0D\x0A\
{D1R3^S<`2@H;^e=BhCPo<0d62k]AK8MGkCQ1HFiW27d;<0e0SQ^800EkcDI7D^>N7Vd5gl=Bh>A]NfWO@Fe:N^e3TF5\\0}40\x0D\x0A\
{D1R3^[5\\bWd5gl8oc005gd5kcD35KFijREfGE_3TKe;Pi6\\`9D:KE^>N7e;Pi6iJlW[]AI]Fl>A]A<=BhihNK@GO`Mm00}A3\x0D\x0A\
{D1R3^c=Bh>A^F_9jkD9KE_3TKD61K8MGkCQ1H>b\\0647D^4a]DX;D^4acc09B@]BhCPo<0e82e;Pi8eSj21=K2eP6F5X0}CC\x0D\x0A\
{D1R3^k8OPooj7hSUV7>0L@PP3F`]K8XfjD1IHF]Bh>AcDncTMF?Y>ggO`Sj:6X]Fl>AcD_3TM8@7D_3T3:`dHA=So@L00}20\x0D\x0A\
{D1R3_34_V6dGHnEPJe;Pi8Q]0f?QH>]Bh>AXK@MSgF5[D^3TK6d;HmUPJe;Pi71]0f?EH>]Bh>AdK@MBh>B=HnPPCF`\\0}BB\x0D\x0A\
{D1R3_;4I`F5[Hm5PJ728H8=WcF3\\OBY:B6h51`3_=@L1J_UhH>@=1`9lPf?m6LUQJe;Pi71]2fOm7OEQKe;Pi7A]2GQP0}D2\x0D\x0A\
{D1R3_C3T3@L0_3]SoAW5HFS416f;HkePJ9`<H8=S^AWYHFRL062;IkTMlF5_D^3TR6d91`5B_fNi7NeQK6d9@d24QAVl0}E6\x0D\x0A\
{D1R3_K=c_8@56Oc4QAfkLomg^f?o<9d66kK=NIEiTGV=NHEiPGVMIYP00GVI5P=FhCPm@l]Bh>AgDocTLU[b<`09GD7H0}41\x0D\x0A\
{D1R3_S243e;`i6]Fl>A]1P?0;eKQ>3e]Kc05B@ehP005K4]BlCPoE^>SGFe_<0U268A?D_3TJIf3D_3TK@H3`2e\\kD840}8B\x0D\x0A\
{D1R3_[249Fc;D_3TJeK`i6d60l0\\Q1mBl>AYK4]Bl>A]1P?0;e;Pi4ekJSO\\00U1Ae;Pi550QG]9BTUkBD;9N6N7<8@L0}98\x0D\x0A\
{D1R3_c=GkCQGD_3TJ07[D_3TKDg3E^>SGFe_<0U1f8A?D_3TJ8@OD_3TKD[1K>e1a8@WD_3TJ8@oD_3TKDR0Q1mBl>AX0}AD\x0D\x0A\
{D1R3_k24?e;`i6e6`eKSXee]Kc09@MR4Ce;`i6R4oe;`i6e3`Fc]@LB49e;`i6R5oe;`i6e1P8@OD_3TJ8GoD_3TKe;P0}36\x0D\x0A\
{D1R3`34h?U[c<0E5Fe;Pi4e4QeKSWQmBh>A^F_9jkD2KE_3TKeKSWRMBh>A^F_9jkD2KE_3TKAH1NAei1e;Pi8eSj21<0}DB\x0D\x0A\
{D1R3`;5\\;G]YH<Uh2>BR7hCUN7dZBTYR9UY5N7@01PL3D_i]4Vgb<^E2S7dVBTE1aF5:7hSUY7`;D_>SGD31WH=Blj=L0}E4\x0D\x0A\
{D1R3`C470Y^QNHEiWAH1NAUS=Qngok000GTMN@5i1GT=NA5i5g?mWH5RKg>lO1465lX;E^>LLgOkHo]Cniae1Po:2F?\\0}C6\x0D\x0A\
{D1R3`K0PQF`_LkERj8@96KMc]GQWooTM]AWoMkDMoQnE4[5QjgN`Q2dI\\F3[Lk5hIooDO0DM\\gNc<0d66lW1N63jIAVd0}FC\x0D\x0A\
{D1R3`S5QJS>800T61lW1NB8?X00@O8hOS013E_3TR7`>7hoomg?e9P1m;TX]9P5PVQn7onQY96Q4O0hOSonoLnDV07d\\0}80\x0D\x0A\
{D1R3`[9:CBH27h`05F2J7hOoc6TTJ4EiX7`_LlQl3g?0Q0D9`g?27hoomGQSo_mCk>B8LDiJlc0e@8b41g>mK0]CnC8<0}F7\x0D\x0A\
{D1R3`c463lW1K>d66lW11`<A@@L2Vj=Fh>AgEocTLIo2F_9]oF3Z7hOo=Fd67h@0cS<01lU3CFb7EncTLQl029]Fl>Ad0}78\x0D\x0A\
{D1R3`k5hHnkCDncTMe;`i7=Bh>A=1PO9`eKPi8eSk21=K:eQKQn8iIe\\7V<;LkUh0>FNC@9]4Vgc<Hd63lW3HohgjA:40}79\x0D\x0A\
{D1R3a354BGR0nT5QBF3\\OJY>BQn4iGUQ6Io27h_ocV8VFTA]:6i9@d5QKQn8iGUPVf?BKD41cQn7oliR:UY8KBA^Af?@0}BD\x0D\x0A\
{D1R3a;9]@@7=1QO9`7`CIm9o@@G>=^463lW3D^3TMe?\\i77O`UkfOlHJkF?[D^3TMe?li79JlVgmH>WMPC[oMlMS`D=40}13\x0D\x0A\
{D1R3aC5hIooSEnnHUf?:F_9jkD5AK0LaTD2Ha0Mgaf?f>\\eQ6g?b7h_ojf?TOJY>BU[bKM=ciMc21^Q]Z6k:7h_od1@@0}33\x0D\x0A\
{D1R3aK1cR21=K:eQKQn8iHXNP7dZBTUQ6Qn;omfL`aPPKBQ^BF5\\1PUQ6Qn;omE\\B6dXKT]S_@H7abXORooiK4dV07dX0}F9\x0D\x0A\
{D1R3aS9:BBH1NB4?0Mf1Ho85BF?2>FUSbSEZOd8N[GVQWl5hM00:1`?eS@L2005Q6f?RKD41gQn;omhJi6dXKT]SkVe00}07\x0D\x0A\
{D1R3a[41jfOROd45gS[VKA9]lD8AN7@1lPL31P8JiVdBKO5O5GQ\\Ol470P02KA9]lS<0@0466lP^>`1o`@H3b2eQ6Qn80}BD\x0D\x0A\
{D1R3ac?ocFa=9P1m:TY99P5i8@l1gH5SlPE9Hl8iJF?:=FYo@Qj]NJ6O`GQd00H70MoY1`800F4KHn9]@@7N7h_ogQ[T0}88\x0D\x0A\
{D1R3ak1]:6i;Hni]@@7[In9o@@GN>^I]4Vga@Q5hM0GJ1`:90Q[VKA9]lElEN6co`@L2009]4Vgb<`1o`D2J>`3o`fO@0}D2\x0D\x0A\
{D1R3b39o@@G=@IUQ408XL@U]QQj9H>mWlD2AgT=glVdBKO6NEfO5C4]WfWm11MHO0802KA9]lWlBOo8biDV>7i003fOH0}53\x0D\x0A\
{D1R3b;9o@@GF7Q8OToofKA9]lWlBOo8biD>IHAXORonhLhPPCFb]HFhOR>FTa0h>2Fc_=0E2SQn@00QlTQj5H>hOTooh0}F3\x0D\x0A\
{D1R3bC=WlSJ5B5]WoSO\\nTU12<@CE_4bGD30a1MFlC9OD_4bHf?cD_4bIfOkE_4bF@L3fc8;Uoon7iOolP^GoohOUoo\\0}20\x0D\x0A\
{D1R3bK8;Uoon7i@098B56KMc]<B4Q0DM\\AWkMk=cnQnD08HOS027Io]Gniae1Q_1mGVENI5iSGV5NH5iWFJH005iVAH00}6C\x0D\x0A\
{D1R3bS5i1G_XQ25Pk:`X50=Ciib9K6U1ASO<0De0RF5l54b44e?WW8U\\JDB6=l`17D28[2@DPSO<0DU0R:`L53Xgc05<0}F9\x0D\x0A\
{D1R3b[50aSO<0DE0R:`454e\\1S:9@iUPRF`5K8HfoD9AKHHNbF5]oH1YZIm1K>XfoEkEK0EiQAH1NAUS=Qngoo`00GT00}55\x0D\x0A\
{D1R3bc5i1GT=H6T7030\\L81lY08W=Ne3QF400RQl2Dg5HFXcR021@@P2:S>8085O1769@41aYSO\\0Ne2QQn000U\\V7`00}0C\x0D\x0A\
{D1R3bk7OP@L00W5\\JDP5@81l1g?n=h`17D59N84b[GP5>;E3`SN<0DU1BGR1=aEPV095@L8gS05=@XUh1CRmN84ebfOl0}15\x0D\x0A\
{D1R3c35\\3@L3bS=co6d5NHeiQGV1IYP00GVI5P5i6F<f7kOon001N@5i1GT=H6T703`7D^4a_D7;D_>LRGQSZH=Bliah0}DE\x0D\x0A\
{D1R3c;54@SOX00E1be;cW8UhHO@3D_>LND70Q1mBlib9N63j0e;cW7Q`P76T0RHgS07]@\\EQ008YK9Ql2Mn11`02LFaX0}6F\x0D\x0A\
{D1R3cC461ljM@81l9g?oIoldbD:;D^>H`U[bKOEh2iS3D_>MNP^;oo8gk02]1P_>WSN<0Ne81Qn000UPVQn7ooQl0Qn00}3A\x0D\x0A\
{D1R3cK?onFb51`0KLFaYCDHOP00=K8Al0Qn3ooD701]aK6U:aQn0015\\Q7`11`0KLFaYB<E10Qn400Ql1g?kHoU3Be;P0}A8\x0D\x0A\
{D1R3cS6R6P\\3l0=BlJ8KD^6QgP\\3momBlJ7M@l8gj005@`]BhJ8J1nP?oe;aXQ]BhJ7N1nP80e;aXMeiSGV5NH5VV0000}D6\x0D\x0A\
{D1R3c[5iVAH3D^>SHU[cE^>SHGQ800E_jWl;B`=Gki`_DnNL<FaY@HMBhj=U1`>Jbe;cXfEhHj=[DnnSHF5[D^>SI6d80}AC\x0D\x0A\
{D1R3cc<`2D75N0^SHIf26hP01e;cXfMBhj=RF_<`7D;I1`??VIf3D_>L<e;cXf=Blj=U1`=c_AH1N0^SQMf0Q1io1S>80}5F\x0D\x0A\
{D1R3ck003D1;10@2BQo[ooeMd8@Q1`2S`AH1NAei0GT5N@ei4GTEWH5PJGPCWF5h3ieIN0Db[e;cW]1l9e;`i8U\\JD@H0}65\x0D\x0A\
{D1R3d3470g<GD^3TSF?X84e\\;F5Z7hSUX7`9@AUh2ikB6hP0108QK@<`OEWHg05h0A:MN0DBSFbF=n`0;D18a3Xgk01T0}3A\x0D\x0A\
{D1R3d;50B<B5Hn`PQF`]NfU]BQZ1HFY<RD99KDXJQF5XO0VOPU[c<7e0C08egd5\\Kc2]F9VMPF1YN0Dg5e;cW]Al9e;`0}56\x0D\x0A\
{D1R3dC3TRFaYA1T70g<GD^3TSF?X84e\\;F5Z7hSUX7`9@AUh2ikF6hP0108QK@<`=EWIHA1l2D;;D_>MDGP5e<1PR:`40}33\x0D\x0A\
{D1R3dK1Q3e;cWF]Blie\\O0e8Ae;SW]9Jlc0IAU]BhikFF_<`2DD=N0STX7dZBTUh2CV<OJY>BS[VNQ52DeKQ<K51RFdD0}DB\x0D\x0A\
{D1R3dS<`5D3?E_4hDD30Q0MBlCQANIEiTGV=NHEiPGVM5P470mZgD^>MA@L97lmBhie9@HD70;_n=nP01@L7dZdF0GTH0}EC\x0D\x0A\
{D1R3d[5S=QngonP00GTMN@5i1GT=NA5i58B5gH=cngOmN64;JGQT4@Eh4>@?Lnmgje;PakD61mTgD^3T2U[c<0U4C8@<0}8B\x0D\x0A\
{D1R3dc470;`PQ0mBl>@8[1aQ48@gD_3T4<@?E_3T6F`A1`2l>GQPnWDIjF5XO0U6QF2J7hOon7>488E\\;F5Z7hSjM8B40}68\x0D\x0A\
{D1R3dk4Ikg?\\Q0DIn<B57N]cngO[Ho\\`W@H?fE8OR024O0UKbe;Pb5MBl>B91`<A@@L2Vj470FSY1`3_=@L1J_Uh2C0H0}06\x0D\x0A\
{D1R3e35h5<OdOBY:B@L3W3QlUF2JJ@9NmWoj7hOolV;\\KBA^AVdBKO51TF4J7h_olIi0KBQ^Bf?fKD41lc?m@QUPVGQ\\0}1E\x0D\x0A\
{D1R3e;07oQn7oo8nh6fTK\\Eh2<PEN6OoZeO\\i71aRF29N03UWF`><^d65mPXa5]Gk>AeK0hbk@H?f2]Fh>B=Hn`PCFb\\0}76\x0D\x0A\
{D1R3eC5QKQn8iImSmVe10O344Qh9K>hbi@H?f2Uh2C0Ho0Am:TY;6oa]:6i91`:<QVlUN0T`6SkPKJQ^be;Pb7MBl>AX0}00\x0D\x0A\
{D1R3eK=Bh<REK9mFl>@?D_3TKf?i1`4_Ae;`i1=Sn@L1;i]Bl>@GD^3TRe;`i1]Bh>A[D_3T7e;Pi6eh2>@WD_3T87`80}90\x0D\x0A\
{D1R3eS<`1D1HHhQl1GP0i2\\h56d0O8Eh3>@_71A]Se;P_0iJlFQZC@=Ch<PeN0STXVT0OBY:BV;:F\\7O0VdBKO8biD5H0}F1\x0D\x0A\
{D1R3e[5hLoom9PXNhBH9K<U\\@eK`i3=Bl>@eN0T`67bDOBY:BUkfOoYBke;`i45\\Le;`i4B44e;`i4UhH>@=1`9lPGQP0}8B\x0D\x0A\
{D1R3ec3jMAWYHFUPV<@>7hOok6f8LXB\\064EN6?okAW_Lnaa1e;Pi8Q]28@A6Nmck@L1D[ePVQn7oneQ67:67h_ok6dd0}9A\x0D\x0A\
{D1R3ek1RRGQQ;64InF5XL81PRGQU;AdMnF5\\L8aPRGQQ;MTInF5XHhUhIBjE7OUQK6>9N63T3Gd3fBeh<;`h002\\664@0}DC\x0D\x0A\
{D1R3f334=eK`i1=Fh>B;E_3T6Fc8Q1mFl>@OD_3T5f?cD_3T8F`A1`2l><@SE_3T57`7D_3T68AKDncTMGQWoj]Gk>A`0}11\x0D\x0A\
{D1R3f;=Bl>@SE_3T7F`A1`2l>eKPi8eSk21=K2hJPF5[IoIo@@G`Q18J2FaZ=^51FGP;UM8KR005@@5h2iGB6hP1T@L00}59\x0D\x0A\
{D1R3fC5<@8@56Omcof?o<1d66m<9NIEiTGV=NHEiPGVMIYP00GVI5P=BhCPo<0e=2e;Pi5iJlc2=@AVMPe;cW]U;PGP80}58\x0D\x0A\
{D1R3fK>NfQ^800MBhikJF_<`5D7=N64g4e?_W]UQJ7`9A8]Bh>A=@lMBh>A[<2E1Fe;SWQmBl>A]@H=BhihNK@L01e;`0}5C\x0D\x0A\
{D1R3fS3TKe;SW]YJlc6=@MR5Se;cW]U0`If3D_>NfAH1NAei1e;Pi8eSj21=K2eQJQn8iJA`R@L0kcE\\1e;`i2EiQGVL0}4F\x0D\x0A\
{D1R3f[4F0e;Q<M<`1DB9gH5h2<DANfgO@6TYK6l`CEkIgH5h2<NeNfgO@6TYK6l`7EkI5P=BhC7A@@Eh2>@V2hP08AH00}CC\x0D\x0A\
{D1R3fc470DQ=N64_Ge?]<UUQJ8@4K@TF0GTIHcHO]ood005i0GT5H>UQ108YK9Ql2Mn11`02LFaY1POMVf?mH6XgP00T0}86\x0D\x0A\
{D1R3fk462md>7h@02GQWX11l1Qn7ooT701Z=K6T61mfKE^>P4Fe_<152cQn400ehIj0DO0D701Z=K6T61mfIC88gk00H0}42\x0D\x0A\
{D1R3g35;bQn400ehIj=8O0HOQooe1`0JSFaY1POMVQn4015hIj=<O0HOQooa1`0JSFaY1POMVQn401EhIj=@O0HOQoo\\0}BF\x0D\x0A\
{D1R3g;4701Z=K6U=QQn401UhIj=DO0D701Z=K6U;A8@7D_>SFMf0Q0Em0mfIN37Xl002=h001DM:7h@02FbHO0Ll3@L00}0D\x0D\x0A\
{D1R3gC0JSFaYALMSnVe10OEh2hNdKBQ^BF`1gH470NSaWH=Blj0AN0^P5If0KBQ^BD31K0D709iUNHEiPFJH005iVAH00}A2\x0D\x0A\
{D1P7gK000}3E\x0D\x0A\
{D1P7O;=7<}36\x0D\x0A\
{D1P7K0MI0}3D\x0D\x0A\
{D1P7K0460}11\x0D\x0A\
{D64oB0000}1F\x0D\x0A\
{D1R3n1=hMk3kN7460gE[Qf]bBho3KE^85g0;Rimb4h_7LR>I4gF;VUm^RiWWL6^NBg`OTHMl6@H3N0NC0gP11P=g]hO@0}21\x0D\x0A\
{D1R3n9=g\\@H3LW>cAgA3`9]d6k5kM1>?UgCS\\MMbRmY[NkNaHg^a1P=_BhgWN4N?7gQ11P=hChmCN4T60foKU6m^LiB80}8B\x0D\x0A\
{D1R3nA=^NiBKLS>E7gQGUG=hD@H3O3NEQg`a1P=hQc:3N8460g43UR=gBl57K\\^FOgCcc6=djl\\KKd>FkgJKV:mf4ljh0}45\x0D\x0A\
{D1R3nI=kii__Nn460g;[W2Md^m9_N<nLBgS91P=c2iacKY>LUg83WB=eXih7L3>Q3gGKTo=iAm\\CND460gL;fc=ggj6P0}C0\x0D\x0A\
{D1QSnQ=gf@H3MA_KFg[WXMMjh@H3K9>7DfcBPb=\\UiR?K=D4>fbSXJm\\h877KA004fd<09`00}B6\x0D\x0A\
{D1P7n0_jK}AE\x0D\x0A\
{D1Q3nW6D1X<QU0T4>I@DPLFDB00AU400WiZ\\00DoB000bA@07}FD\x0D\x0A\
{D1P7n0oj[}CE\x0D\x0A\
{D1P;n[>`nc:00}D2\x0D\x0A\
{D1P7n0Oj]}B0\x0D\x0A\
{D1P7n06Un}93\x0D\x0A\
{D6LbE}6D\x0D\x0A\
{D1R3n1=hMk3kN7460gE[Qf]bBho3KE^85g0;Rimb4h_7LR>I4gF;VUm^RiWWL6^NBg`OTHMl6@H3N0NC0gP11P=g]hO@0}21\x0D\x0A\
{D1R3n9=g\\@H3LW>cAgA3`9]d6k5kM1>?UgCS\\MMbRmY[NkNaHg^a1P=_BhgWN4N?7gQ11P=hChmCN4T60foKU6m^LiB80}8B\x0D\x0A\
{D1R3nA=^NiBKLS>E7gQGUG=hD@H3O3NEQg`a1P=hQc:3N8460g43UR=gBl57K\\^FOgCcc6=djl\\KKd>FkgJKV:mf4ljh0}45\x0D\x0A\
{D1R3nI=kii__Nn460g;[W2Md^m9_N<nLBgS91P=c2iacKY>LUg83WB=eXih7L3>Q3gGKTo=iAm\\CND460gL;fc=ggj6P0}C0\x0D\x0A\
{D1QSnQ=gf@H3MA_KFg[WXMMjh@H3K9>7DfcBPb=\\UiR?K=D4>fbSXJm\\h877KA004fd<09`00}B6\x0D\x0A\
{D1P7n0_jK}AE\x0D\x0A\
{D1Q3nW6D1X<QU0T4>I@DPLFDB00AU400WiZ\\00DoB000bA@07}FD\x0D\x0A\
{D1P7n0oj[}CE\x0D\x0A\
{D1P;n[>`nc:00}D2\x0D\x0A\
{D1P7n0Oj]}B0\x0D\x0A\
{D1P7n06Un}93\x0D\x0A\
{D6LbE}6D\x0D\x0A\
{D6>H[ool0}D5\x0D\x0A"
};


