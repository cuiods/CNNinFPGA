/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/Project/CNNinFPGA/CNNinFPGA/usb.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 4294967295U};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {2U, 0U};
static int ng5[] = {256, 0};
static int ng6[] = {1, 0};
static unsigned int ng7[] = {3U, 0U};
static unsigned int ng8[] = {4U, 0U};
static int ng9[] = {0, 0};



static void Cont_56_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 6064U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 4984);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8576);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 3U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 1);
    t18 = (t0 + 8368);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_57_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 6312U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 4344);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8640);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 8384);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_58_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 6560U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 4504);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8704);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 8400);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_59_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 6808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 4664);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8768);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 8416);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_60_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 7056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 4824);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8832);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 8432);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_61_5(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;

LAB0:    t1 = (t0 + 7304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 4664);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB7;

LAB4:    if (t20 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t8) = 1;

LAB7:    memset(t4, 0, 8);
    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t24) != 0)
        goto LAB10;

LAB11:    t31 = (t4 + 4);
    t32 = *((unsigned int *)t4);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB12;

LAB13:    t39 = *((unsigned int *)t4);
    t40 = (~(t39));
    t41 = *((unsigned int *)t31);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t31) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t43, 8);

LAB20:    t44 = (t0 + 8896);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    memset(t48, 0, 8);
    t49 = 65535U;
    t50 = t49;
    t51 = (t3 + 4);
    t52 = *((unsigned int *)t3);
    t49 = (t49 & t52);
    t53 = *((unsigned int *)t51);
    t50 = (t50 & t53);
    t54 = (t48 + 4);
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t55 | t49);
    t56 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t56 | t50);
    xsi_driver_vfirst_trans(t44, 0, 15);
    t57 = (t0 + 8448);
    *((int *)t57) = 1;

LAB1:    return;
LAB6:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t30 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB11;

LAB12:    t35 = (t0 + 5144);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memcpy(t38, t37, 8);
    goto LAB13;

LAB14:    t43 = ((char*)((ng2)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t38, 32, t43, 32);
    goto LAB20;

LAB18:    memcpy(t3, t38, 8);
    goto LAB20;

}

static void Always_63_6(char *t0)
{
    char t11[8];
    char t35[8];
    char t36[8];
    char t42[8];
    char t58[8];
    char t66[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;

LAB0:    t1 = (t0 + 7552U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 8464);
    *((int *)t2) = 1;
    t3 = (t0 + 7584);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(63, ng0);

LAB5:    xsi_set_current_line(64, ng0);
    t4 = (t0 + 3544);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:    xsi_set_current_line(102, ng0);

LAB79:    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(65, ng0);

LAB20:    xsi_set_current_line(67, ng0);
    t9 = (t0 + 2024U);
    t10 = *((char **)t9);
    t9 = ((char*)((ng1)));
    memset(t11, 0, 8);
    t12 = (t10 + 4);
    t13 = (t9 + 4);
    t14 = *((unsigned int *)t10);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB24;

LAB21:    if (t23 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t11) = 1;

LAB24:    t27 = (t11 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(71, ng0);

LAB29:    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB27:    goto LAB19;

LAB9:    xsi_set_current_line(75, ng0);

LAB30:    xsi_set_current_line(76, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 3704);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB19;

LAB11:    xsi_set_current_line(78, ng0);

LAB31:    xsi_set_current_line(79, ng0);
    t3 = (t0 + 4024);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng5)));
    t9 = ((char*)((ng6)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_minus(t11, 32, t7, 32, t9, 32);
    memset(t35, 0, 8);
    t10 = (t5 + 4);
    t12 = (t11 + 4);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t11);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t10);
    t18 = *((unsigned int *)t12);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t10);
    t22 = *((unsigned int *)t12);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB35;

LAB32:    if (t23 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t35) = 1;

LAB35:    memset(t36, 0, 8);
    t26 = (t35 + 4);
    t28 = *((unsigned int *)t26);
    t29 = (~(t28));
    t30 = *((unsigned int *)t35);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t26) != 0)
        goto LAB38;

LAB39:    t33 = (t36 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (!(t37));
    t39 = *((unsigned int *)t33);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB40;

LAB41:    memcpy(t66, t36, 8);

LAB42:    t94 = (t66 + 4);
    t95 = *((unsigned int *)t94);
    t96 = (~(t95));
    t97 = *((unsigned int *)t66);
    t98 = (t97 & t96);
    t99 = (t98 != 0);
    if (t99 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(82, ng0);

LAB58:    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB56:    goto LAB19;

LAB13:    xsi_set_current_line(86, ng0);

LAB59:    xsi_set_current_line(87, ng0);
    t3 = (t0 + 2184U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t3);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB63;

LAB60:    if (t23 != 0)
        goto LAB62;

LAB61:    *((unsigned int *)t11) = 1;

LAB63:    t10 = (t11 + 4);
    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB64;

LAB65:    xsi_set_current_line(90, ng0);

LAB68:    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB66:    goto LAB19;

LAB15:    xsi_set_current_line(94, ng0);

LAB69:    xsi_set_current_line(95, ng0);
    t3 = (t0 + 4024);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 4184);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memset(t11, 0, 8);
    t12 = (t5 + 4);
    t13 = (t10 + 4);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB73;

LAB70:    if (t23 != 0)
        goto LAB72;

LAB71:    *((unsigned int *)t11) = 1;

LAB73:    t27 = (t11 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB74;

LAB75:    xsi_set_current_line(98, ng0);

LAB78:    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB76:    goto LAB19;

LAB23:    t26 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB24;

LAB25:    xsi_set_current_line(67, ng0);

LAB28:    xsi_set_current_line(69, ng0);
    t33 = ((char*)((ng1)));
    t34 = (t0 + 3704);
    xsi_vlogvar_assign_value(t34, t33, 0, 0, 3);
    goto LAB27;

LAB34:    t13 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB35;

LAB36:    *((unsigned int *)t36) = 1;
    goto LAB39;

LAB38:    t27 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB39;

LAB40:    t34 = (t0 + 2024U);
    t41 = *((char **)t34);
    t34 = ((char*)((ng3)));
    memset(t42, 0, 8);
    t43 = (t41 + 4);
    t44 = (t34 + 4);
    t45 = *((unsigned int *)t41);
    t46 = *((unsigned int *)t34);
    t47 = (t45 ^ t46);
    t48 = *((unsigned int *)t43);
    t49 = *((unsigned int *)t44);
    t50 = (t48 ^ t49);
    t51 = (t47 | t50);
    t52 = *((unsigned int *)t43);
    t53 = *((unsigned int *)t44);
    t54 = (t52 | t53);
    t55 = (~(t54));
    t56 = (t51 & t55);
    if (t56 != 0)
        goto LAB46;

LAB43:    if (t54 != 0)
        goto LAB45;

LAB44:    *((unsigned int *)t42) = 1;

LAB46:    memset(t58, 0, 8);
    t59 = (t42 + 4);
    t60 = *((unsigned int *)t59);
    t61 = (~(t60));
    t62 = *((unsigned int *)t42);
    t63 = (t62 & t61);
    t64 = (t63 & 1U);
    if (t64 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t59) != 0)
        goto LAB49;

LAB50:    t67 = *((unsigned int *)t36);
    t68 = *((unsigned int *)t58);
    t69 = (t67 | t68);
    *((unsigned int *)t66) = t69;
    t70 = (t36 + 4);
    t71 = (t58 + 4);
    t72 = (t66 + 4);
    t73 = *((unsigned int *)t70);
    t74 = *((unsigned int *)t71);
    t75 = (t73 | t74);
    *((unsigned int *)t72) = t75;
    t76 = *((unsigned int *)t72);
    t77 = (t76 != 0);
    if (t77 == 1)
        goto LAB51;

LAB52:
LAB53:    goto LAB42;

LAB45:    t57 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB46;

LAB47:    *((unsigned int *)t58) = 1;
    goto LAB50;

LAB49:    t65 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t65) = 1;
    goto LAB50;

LAB51:    t78 = *((unsigned int *)t66);
    t79 = *((unsigned int *)t72);
    *((unsigned int *)t66) = (t78 | t79);
    t80 = (t36 + 4);
    t81 = (t58 + 4);
    t82 = *((unsigned int *)t80);
    t83 = (~(t82));
    t84 = *((unsigned int *)t36);
    t85 = (t84 & t83);
    t86 = *((unsigned int *)t81);
    t87 = (~(t86));
    t88 = *((unsigned int *)t58);
    t89 = (t88 & t87);
    t90 = (~(t85));
    t91 = (~(t89));
    t92 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t92 & t90);
    t93 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t93 & t91);
    goto LAB53;

LAB54:    xsi_set_current_line(79, ng0);

LAB57:    xsi_set_current_line(80, ng0);
    t100 = ((char*)((ng7)));
    t101 = (t0 + 3704);
    xsi_vlogvar_assign_value(t101, t100, 0, 0, 3);
    goto LAB56;

LAB62:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB63;

LAB64:    xsi_set_current_line(87, ng0);

LAB67:    xsi_set_current_line(88, ng0);
    t12 = ((char*)((ng8)));
    t13 = (t0 + 3704);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 3);
    goto LAB66;

LAB72:    t26 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB73;

LAB74:    xsi_set_current_line(95, ng0);

LAB77:    xsi_set_current_line(96, ng0);
    t33 = ((char*)((ng3)));
    t34 = (t0 + 3704);
    xsi_vlogvar_assign_value(t34, t33, 0, 0, 3);
    goto LAB76;

}

static void Always_108_7(char *t0)
{
    char t11[8];
    char t25[8];
    char t45[8];
    char t61[8];
    char t69[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    int t32;
    int t33;
    int t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    char *t102;

LAB0:    t1 = (t0 + 7800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 8480);
    *((int *)t2) = 1;
    t3 = (t0 + 7832);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(108, ng0);

LAB5:    xsi_set_current_line(109, ng0);
    t4 = (t0 + 3544);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:    xsi_set_current_line(183, ng0);

LAB79:    xsi_set_current_line(184, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4344);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(185, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4504);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(186, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4664);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(187, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4824);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(188, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4984);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(189, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4024);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(190, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4184);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(191, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 5144);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);

LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(110, ng0);

LAB20:    xsi_set_current_line(111, ng0);
    t9 = ((char*)((ng1)));
    t10 = (t0 + 4344);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 1, 0LL);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4504);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4664);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4824);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4984);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4024);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4184);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 5144);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    goto LAB19;

LAB9:    xsi_set_current_line(120, ng0);

LAB21:    xsi_set_current_line(121, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 4344);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4504);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4664);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4824);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4984);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4024);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4184);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 5144);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    goto LAB19;

LAB11:    xsi_set_current_line(132, ng0);

LAB22:    xsi_set_current_line(134, ng0);
    t3 = (t0 + 2024U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t4 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB26;

LAB24:    if (*((unsigned int *)t3) == 0)
        goto LAB23;

LAB25:    t5 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t5) = 1;

LAB26:    t7 = (t11 + 4);
    t9 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t18 = (~(t17));
    *((unsigned int *)t11) = t18;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t9) != 0)
        goto LAB28;

LAB27:    t23 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t23 & 1U);
    t24 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t24 & 1U);
    t10 = (t0 + 4344);
    xsi_vlogvar_wait_assign_value(t10, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4504);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4664);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4824);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4984);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(142, ng0);
    t2 = (t0 + 2024U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t12 = *((unsigned int *)t2);
    t13 = (~(t12));
    t14 = *((unsigned int *)t3);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB29;

LAB30:
LAB31:    xsi_set_current_line(146, ng0);
    t2 = (t0 + 2344U);
    t3 = *((char **)t2);
    t2 = (t0 + 3864);
    t4 = (t0 + 3864);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t9 = (t0 + 3864);
    t10 = (t9 + 64U);
    t26 = *((char **)t10);
    t27 = (t0 + 4024);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    xsi_vlog_generic_convert_array_indices(t11, t25, t7, t26, 2, 1, t29, 8, 2);
    t30 = (t11 + 4);
    t12 = *((unsigned int *)t30);
    t8 = (!(t12));
    t31 = (t25 + 4);
    t13 = *((unsigned int *)t31);
    t32 = (!(t13));
    t33 = (t8 && t32);
    if (t33 == 1)
        goto LAB33;

LAB34:    xsi_set_current_line(148, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4184);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 5144);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    goto LAB19;

LAB13:    xsi_set_current_line(151, ng0);

LAB35:    xsi_set_current_line(152, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 4344);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4504);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4664);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(155, ng0);
    t2 = (t0 + 2184U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t11, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t5);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t5);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB39;

LAB36:    if (t21 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t11) = 1;

LAB39:    t9 = (t11 + 4);
    t24 = *((unsigned int *)t9);
    t36 = (~(t24));
    t37 = *((unsigned int *)t11);
    t38 = (t37 & t36);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(158, ng0);

LAB44:    xsi_set_current_line(159, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4824);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB42:    xsi_set_current_line(162, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4984);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(163, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4024);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 5144);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    goto LAB19;

LAB15:    xsi_set_current_line(166, ng0);

LAB45:    xsi_set_current_line(167, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 4344);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(169, ng0);
    t2 = (t0 + 2184U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t3 + 4);
    t12 = *((unsigned int *)t2);
    t13 = (~(t12));
    t14 = *((unsigned int *)t3);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB49;

LAB47:    if (*((unsigned int *)t2) == 0)
        goto LAB46;

LAB48:    t4 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t4) = 1;

LAB49:    t5 = (t11 + 4);
    t7 = (t3 + 4);
    t17 = *((unsigned int *)t3);
    t18 = (~(t17));
    *((unsigned int *)t11) = t18;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB51;

LAB50:    t23 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t23 & 1U);
    t24 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t24 & 1U);
    t9 = (t0 + 4504);
    xsi_vlogvar_wait_assign_value(t9, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(170, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4664);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(172, ng0);
    t2 = (t0 + 2184U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t11, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t5);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t5);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB55;

LAB52:    if (t21 != 0)
        goto LAB54;

LAB53:    *((unsigned int *)t11) = 1;

LAB55:    memset(t25, 0, 8);
    t9 = (t11 + 4);
    t24 = *((unsigned int *)t9);
    t36 = (~(t24));
    t37 = *((unsigned int *)t11);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t9) != 0)
        goto LAB58;

LAB59:    t26 = (t25 + 4);
    t40 = *((unsigned int *)t25);
    t41 = (!(t40));
    t42 = *((unsigned int *)t26);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB60;

LAB61:    memcpy(t69, t25, 8);

LAB62:    t95 = (t69 + 4);
    t96 = *((unsigned int *)t95);
    t97 = (~(t96));
    t98 = *((unsigned int *)t69);
    t99 = (t98 & t97);
    t100 = (t99 != 0);
    if (t100 > 0)
        goto LAB74;

LAB75:    xsi_set_current_line(175, ng0);

LAB78:    xsi_set_current_line(176, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4824);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB76:    xsi_set_current_line(179, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4984);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(180, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 8, t4, 8, t5, 8);
    t7 = (t0 + 4024);
    xsi_vlogvar_wait_assign_value(t7, t11, 0, 0, 8, 0LL);
    xsi_set_current_line(181, ng0);
    t2 = (t0 + 3864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3864);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = (t0 + 3864);
    t26 = (t10 + 64U);
    t27 = *((char **)t26);
    t28 = (t0 + 4024);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_generic_get_array_select_value(t11, 16, t4, t9, t27, 2, 1, t30, 8, 2);
    t31 = (t0 + 5144);
    xsi_vlogvar_wait_assign_value(t31, t11, 0, 0, 16, 0LL);
    goto LAB19;

LAB23:    *((unsigned int *)t11) = 1;
    goto LAB26;

LAB28:    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t11) = (t19 | t20);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t9);
    *((unsigned int *)t7) = (t21 | t22);
    goto LAB27;

LAB29:    xsi_set_current_line(142, ng0);

LAB32:    xsi_set_current_line(143, ng0);
    t4 = (t0 + 4024);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t9 = ((char*)((ng1)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 8, t7, 8, t9, 8);
    t10 = (t0 + 4024);
    xsi_vlogvar_wait_assign_value(t10, t11, 0, 0, 8, 0LL);
    goto LAB31;

LAB33:    t14 = *((unsigned int *)t11);
    t15 = *((unsigned int *)t25);
    t34 = (t14 - t15);
    t35 = (t34 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t25), t35, 0LL);
    goto LAB34;

LAB38:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB39;

LAB40:    xsi_set_current_line(155, ng0);

LAB43:    xsi_set_current_line(156, ng0);
    t10 = ((char*)((ng1)));
    t26 = (t0 + 4824);
    xsi_vlogvar_wait_assign_value(t26, t10, 0, 0, 1, 0LL);
    goto LAB42;

LAB46:    *((unsigned int *)t11) = 1;
    goto LAB49;

LAB51:    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t11) = (t19 | t20);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    *((unsigned int *)t5) = (t21 | t22);
    goto LAB50;

LAB54:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB55;

LAB56:    *((unsigned int *)t25) = 1;
    goto LAB59;

LAB58:    t10 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB59;

LAB60:    t27 = (t0 + 4024);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t0 + 4184);
    t31 = (t30 + 56U);
    t44 = *((char **)t31);
    memset(t45, 0, 8);
    t46 = (t29 + 4);
    t47 = (t44 + 4);
    t48 = *((unsigned int *)t29);
    t49 = *((unsigned int *)t44);
    t50 = (t48 ^ t49);
    t51 = *((unsigned int *)t46);
    t52 = *((unsigned int *)t47);
    t53 = (t51 ^ t52);
    t54 = (t50 | t53);
    t55 = *((unsigned int *)t46);
    t56 = *((unsigned int *)t47);
    t57 = (t55 | t56);
    t58 = (~(t57));
    t59 = (t54 & t58);
    if (t59 != 0)
        goto LAB66;

LAB63:    if (t57 != 0)
        goto LAB65;

LAB64:    *((unsigned int *)t45) = 1;

LAB66:    memset(t61, 0, 8);
    t62 = (t45 + 4);
    t63 = *((unsigned int *)t62);
    t64 = (~(t63));
    t65 = *((unsigned int *)t45);
    t66 = (t65 & t64);
    t67 = (t66 & 1U);
    if (t67 != 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t62) != 0)
        goto LAB69;

LAB70:    t70 = *((unsigned int *)t25);
    t71 = *((unsigned int *)t61);
    t72 = (t70 | t71);
    *((unsigned int *)t69) = t72;
    t73 = (t25 + 4);
    t74 = (t61 + 4);
    t75 = (t69 + 4);
    t76 = *((unsigned int *)t73);
    t77 = *((unsigned int *)t74);
    t78 = (t76 | t77);
    *((unsigned int *)t75) = t78;
    t79 = *((unsigned int *)t75);
    t80 = (t79 != 0);
    if (t80 == 1)
        goto LAB71;

LAB72:
LAB73:    goto LAB62;

LAB65:    t60 = (t45 + 4);
    *((unsigned int *)t45) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB66;

LAB67:    *((unsigned int *)t61) = 1;
    goto LAB70;

LAB69:    t68 = (t61 + 4);
    *((unsigned int *)t61) = 1;
    *((unsigned int *)t68) = 1;
    goto LAB70;

LAB71:    t81 = *((unsigned int *)t69);
    t82 = *((unsigned int *)t75);
    *((unsigned int *)t69) = (t81 | t82);
    t83 = (t25 + 4);
    t84 = (t61 + 4);
    t85 = *((unsigned int *)t83);
    t86 = (~(t85));
    t87 = *((unsigned int *)t25);
    t8 = (t87 & t86);
    t88 = *((unsigned int *)t84);
    t89 = (~(t88));
    t90 = *((unsigned int *)t61);
    t32 = (t90 & t89);
    t91 = (~(t8));
    t92 = (~(t32));
    t93 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t93 & t91);
    t94 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t94 & t92);
    goto LAB73;

LAB74:    xsi_set_current_line(172, ng0);

LAB77:    xsi_set_current_line(173, ng0);
    t101 = ((char*)((ng3)));
    t102 = (t0 + 4824);
    xsi_vlogvar_wait_assign_value(t102, t101, 0, 0, 1, 0LL);
    goto LAB76;

}

static void Always_196_8(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 8048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(196, ng0);
    t2 = (t0 + 8496);
    *((int *)t2) = 1;
    t3 = (t0 + 8080);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(196, ng0);

LAB5:    xsi_set_current_line(197, ng0);
    t4 = (t0 + 3704);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 3544);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 3, 0LL);
    goto LAB2;

}


extern void work_m_00000000004054073719_4157750947_init()
{
	static char *pe[] = {(void *)Cont_56_0,(void *)Cont_57_1,(void *)Cont_58_2,(void *)Cont_59_3,(void *)Cont_60_4,(void *)Cont_61_5,(void *)Always_63_6,(void *)Always_108_7,(void *)Always_196_8};
	xsi_register_didat("work_m_00000000004054073719_4157750947", "isim/usb_isim_beh.exe.sim/work/m_00000000004054073719_4157750947.didat");
	xsi_register_executes(pe);
}
