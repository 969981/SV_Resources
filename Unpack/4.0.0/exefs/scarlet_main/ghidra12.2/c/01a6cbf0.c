/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a6cbf0; name: FUN_01a6cbf0
 */


undefined4
FUN_01a6cbf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined1 param_12,
            undefined1 param_13,undefined1 param_14,undefined8 *param_15,byte param_16,byte param_17
            ,byte param_18,undefined2 param_19,undefined2 param_20,undefined2 param_21,
            undefined2 param_22,byte param_23,undefined8 *param_24,undefined1 param_25,
            undefined1 param_26,undefined4 param_27,undefined4 param_28,undefined4 param_29,
            undefined4 param_30,byte param_31,byte param_32,byte param_33,byte param_34,
            byte param_35,byte param_36,byte param_37,undefined1 param_38,undefined1 param_39,
            undefined8 *param_40,undefined8 *param_41,undefined8 *param_42,undefined8 *param_43,
            undefined1 param_44,undefined8 param_45,undefined8 *param_46,undefined8 *param_47,
            undefined8 *param_48,undefined8 *param_49,long param_50,undefined2 param_51,
            undefined8 *param_52,undefined8 *param_53,undefined8 *param_54)

{
  undefined *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  if (param_15 == (undefined8 *)0x0) {
    uVar11 = 0;
  }
  else {
    lVar2 = param_15[1] - (long)*param_15;
    puVar1 = &DAT_047ecd80;
    if (lVar2 != 0) {
      puVar1 = (undefined *)*param_15;
    }
    uVar11 = FUN_01a6d1bc(param_4,puVar1,lVar2);
  }
  if (param_24 == (undefined8 *)0x0) {
    uVar12 = 0;
  }
  else {
    lVar2 = param_24[1] - (long)*param_24;
    puVar1 = &DAT_047ecd80;
    if (lVar2 != 0) {
      puVar1 = (undefined *)*param_24;
    }
    uVar12 = FUN_01a6d1bc(param_4,puVar1,lVar2);
  }
  if (param_40 == (undefined8 *)0x0) {
    uVar13 = 0;
  }
  else {
    lVar2 = param_40[1] - (long)*param_40;
    puVar1 = &DAT_047ecd80;
    if (lVar2 != 0) {
      puVar1 = (undefined *)*param_40;
    }
    uVar13 = FUN_01a6d1bc(param_4,puVar1,lVar2);
  }
  if (param_41 == (undefined8 *)0x0) {
    uVar3 = 0;
  }
  else {
    lVar2 = param_41[1] - (long)*param_41;
    puVar1 = &DAT_0486a1d1;
    if (lVar2 != 0) {
      puVar1 = (undefined *)*param_41;
    }
    uVar3 = FUN_01a6d2d0(param_4,puVar1,lVar2 >> 2);
  }
  if (param_42 == (undefined8 *)0x0) {
    uVar4 = 0;
  }
  else {
    lVar2 = param_42[1] - (long)*param_42;
    puVar1 = &DAT_0486a1d5;
    if (lVar2 != 0) {
      puVar1 = (undefined *)*param_42;
    }
    uVar4 = FUN_01a6d244(param_4,puVar1,lVar2 >> 2);
  }
  if (param_43 == (undefined8 *)0x0) {
    uVar5 = 0;
  }
  else {
    lVar2 = param_43[1] - (long)*param_43;
    puVar1 = &DAT_0486a1d5;
    if (lVar2 != 0) {
      puVar1 = (undefined *)*param_43;
    }
    uVar5 = FUN_01a6d244(param_4,puVar1,lVar2 >> 2);
  }
  if (param_46 == (undefined8 *)0x0) {
    uVar14 = 0;
  }
  else {
    lVar2 = param_46[1] - (long)*param_46;
    puVar1 = &DAT_0486a1d2;
    if (lVar2 != 0) {
      puVar1 = (undefined *)*param_46;
    }
    uVar14 = FUN_0298f31c(param_4,puVar1,lVar2 >> 2);
  }
  if (param_47 == (undefined8 *)0x0) {
    uVar6 = 0;
  }
  else {
    lVar2 = param_47[1] - (long)*param_47;
    puVar1 = &DAT_0486a1d3;
    if (lVar2 != 0) {
      puVar1 = (undefined *)*param_47;
    }
    uVar6 = FUN_01a6d35c(param_4,puVar1,lVar2 >> 2);
  }
  if (param_48 == (undefined8 *)0x0) {
    uVar15 = 0;
  }
  else {
    lVar2 = param_48[1] - (long)*param_48;
    puVar1 = &DAT_0486a1d4;
    if (lVar2 != 0) {
      puVar1 = (undefined *)*param_48;
    }
    uVar15 = FUN_0298f454(param_4,puVar1,lVar2 >> 2);
  }
  if (param_49 == (undefined8 *)0x0) {
    uVar7 = 0;
  }
  else {
    lVar2 = param_49[1] - (long)*param_49;
    puVar1 = &DAT_047ecd80;
    if (lVar2 != 0) {
      puVar1 = (undefined *)*param_49;
    }
    uVar7 = FUN_01a6d1bc(param_4,puVar1,lVar2);
  }
  if (param_50 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_01a6d180(param_4,param_50);
  }
  if (param_52 == (undefined8 *)0x0) {
    uVar16 = 0;
  }
  else {
    lVar2 = param_52[1] - (long)*param_52;
    puVar1 = &DAT_047ecd80;
    if (lVar2 != 0) {
      puVar1 = (undefined *)*param_52;
    }
    uVar16 = FUN_01a6d1bc(param_4,puVar1,lVar2);
  }
  if (param_53 == (undefined8 *)0x0) {
    uVar9 = 0;
  }
  else {
    lVar2 = param_53[1] - (long)*param_53;
    puVar1 = &DAT_047ecd80;
    if (lVar2 != 0) {
      puVar1 = (undefined *)*param_53;
    }
    uVar9 = FUN_01a6d1bc(param_4,puVar1,lVar2);
  }
  if (param_54 == (undefined8 *)0x0) {
    uVar10 = 0;
  }
  else {
    lVar2 = param_54[1] - (long)*param_54;
    puVar1 = &DAT_047ecd80;
    if (lVar2 != 0) {
      puVar1 = (undefined *)*param_54;
    }
    uVar10 = FUN_01a6d1bc(param_4,puVar1,lVar2);
  }
  uVar11 = FUN_01a6d4a0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                        param_10,param_11,param_12,param_13,param_14,uVar11,param_16 & 1,
                        param_17 & 1,param_18 & 1,param_19,param_20,param_21,param_22,param_23 & 1,
                        uVar12,param_25,param_26,param_27,param_28,param_29,param_30,param_31 & 1,
                        param_32 & 1,param_33 & 1,param_34 & 1,param_35 & 1,param_36 & 1,
                        param_37 & 1,param_38,param_39,uVar13,uVar3,uVar4,uVar5,param_44,param_45,
                        uVar14,uVar6,uVar15,uVar7,uVar8,param_51,uVar16,uVar9,uVar10);
  return uVar11;
}


