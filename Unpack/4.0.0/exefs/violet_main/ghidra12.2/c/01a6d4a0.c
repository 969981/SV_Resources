/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a6d4a0; name: FUN_01a6d4a0
 */


undefined4
FUN_01a6d4a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5,
            char param_6,char param_7,undefined4 param_8,undefined4 param_9,char param_10,
            char param_11,char param_12,char param_13,char param_14,undefined4 param_15,
            byte param_16,byte param_17,byte param_18,undefined2 param_19,undefined2 param_20,
            undefined2 param_21,undefined2 param_22,byte param_23,undefined4 param_24,char param_25,
            char param_26,int param_27,int param_28,int param_29,int param_30,byte param_31,
            byte param_32,byte param_33,byte param_34,byte param_35,byte param_36,byte param_37,
            char param_38,char param_39,undefined4 param_40,undefined4 param_41,undefined4 param_42,
            undefined4 param_43,char param_44,undefined8 param_45,undefined4 param_46,
            undefined4 param_47,undefined4 param_48,undefined4 param_49,undefined4 param_50,
            undefined2 param_51,undefined4 param_52,undefined4 param_53,undefined4 param_54)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong *puVar8;
  ushort uVar9;
  undefined8 uVar10;
  
  uVar10 = *(undefined8 *)(param_4 + 0x30);
  *(undefined1 *)(param_4 + 0x46) = 1;
  uVar5 = *(undefined8 *)(param_4 + 0x20);
  uVar6 = *(undefined8 *)(param_4 + 0x28);
  FUN_018df678(param_4,0x58,param_45,0);
  FUN_0187a518(param_4,0x6e,param_54);
  FUN_0187a518(param_4,0x6c,param_53);
  FUN_0187a518(param_4,0x6a,param_52);
  FUN_0169d290(param_4,0x66,param_50);
  FUN_0187a518(param_4,100,param_49);
  FUN_01a6ec74(param_4,param_48);
  FUN_015c8088(param_3,0,param_4,0x60);
  FUN_015c8088(param_2,0,param_4,0x5e);
  FUN_01a6edd4(param_4,param_47);
  FUN_01a6ef34(param_4,param_46);
  FUN_01914954(param_4,0x54,param_43);
  FUN_01914954(param_4,0x52,param_42);
  FUN_01a6f094(param_4,param_41);
  FUN_0187a518(param_4,0x4e,param_40);
  if ((param_30 != 0) || (*(char *)(param_4 + 0x50) != '\0')) {
    uVar4 = FUN_015713f8(param_4,param_30);
    puVar8 = *(ulong **)(param_4 + 0x38);
    if ((ulong)(*(long *)(param_4 + 0x30) - (long)puVar8) < 8) {
      FUN_0157184c(param_4,8);
      puVar8 = *(ulong **)(param_4 + 0x38);
    }
    *puVar8 = uVar4 & 0xffffffff | 0x3800000000;
    *(long *)(param_4 + 0x38) = *(long *)(param_4 + 0x38) + 8;
    uVar9 = *(ushort *)(param_4 + 0x44);
    *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
    if (uVar9 < 0x39) {
      uVar9 = 0x38;
    }
    *(ushort *)(param_4 + 0x44) = uVar9;
  }
  if ((param_29 != 0) || (*(char *)(param_4 + 0x50) != '\0')) {
    uVar4 = FUN_015713f8(param_4);
    puVar8 = *(ulong **)(param_4 + 0x38);
    if ((ulong)(*(long *)(param_4 + 0x30) - (long)puVar8) < 8) {
      FUN_0157184c(param_4,8);
      puVar8 = *(ulong **)(param_4 + 0x38);
    }
    *puVar8 = uVar4 & 0xffffffff | 0x3600000000;
    *(long *)(param_4 + 0x38) = *(long *)(param_4 + 0x38) + 8;
    uVar9 = *(ushort *)(param_4 + 0x44);
    *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
    if (uVar9 < 0x37) {
      uVar9 = 0x36;
    }
    *(ushort *)(param_4 + 0x44) = uVar9;
  }
  if ((param_28 != 0) || (*(char *)(param_4 + 0x50) != '\0')) {
    uVar4 = FUN_015713f8(param_4,param_28);
    puVar8 = *(ulong **)(param_4 + 0x38);
    if ((ulong)(*(long *)(param_4 + 0x30) - (long)puVar8) < 8) {
      FUN_0157184c(param_4,8);
      puVar8 = *(ulong **)(param_4 + 0x38);
    }
    *puVar8 = uVar4 & 0xffffffff | 0x3400000000;
    *(long *)(param_4 + 0x38) = *(long *)(param_4 + 0x38) + 8;
    uVar9 = *(ushort *)(param_4 + 0x44);
    *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
    if (uVar9 < 0x35) {
      uVar9 = 0x34;
    }
    *(ushort *)(param_4 + 0x44) = uVar9;
  }
  if ((param_27 != 0) || (*(char *)(param_4 + 0x50) != '\0')) {
    uVar4 = FUN_015713f8(param_4,param_27);
    puVar8 = *(ulong **)(param_4 + 0x38);
    if ((ulong)(*(long *)(param_4 + 0x30) - (long)puVar8) < 8) {
      FUN_0157184c(param_4,8);
      puVar8 = *(ulong **)(param_4 + 0x38);
    }
    *puVar8 = uVar4 & 0xffffffff | 0x3200000000;
    *(long *)(param_4 + 0x38) = *(long *)(param_4 + 0x38) + 8;
    uVar9 = *(ushort *)(param_4 + 0x44);
    *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
    if (uVar9 < 0x33) {
      uVar9 = 0x32;
    }
    *(ushort *)(param_4 + 0x44) = uVar9;
  }
  FUN_015c8088(param_1,0,param_4,0x2c);
  FUN_0187a518(param_4,0x2a,param_24);
  FUN_0187a518(param_4,0x18,param_15);
  FUN_01a6eb18(param_4,param_9);
  FUN_01a6f1f4(param_4,param_8);
  if ((param_5 != 0) || (*(char *)(param_4 + 0x50) != '\0')) {
    uVar4 = FUN_015713f8(param_4);
    puVar8 = *(ulong **)(param_4 + 0x38);
    if ((ulong)(*(long *)(param_4 + 0x30) - (long)puVar8) < 8) {
      FUN_0157184c(param_4,8);
      puVar8 = *(ulong **)(param_4 + 0x38);
    }
    *puVar8 = uVar4 & 0xffffffff | 0x400000000;
    *(long *)(param_4 + 0x38) = *(long *)(param_4 + 0x38) + 8;
    uVar9 = *(ushort *)(param_4 + 0x44);
    *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
    if (uVar9 < 5) {
      uVar9 = 4;
    }
    *(ushort *)(param_4 + 0x44) = uVar9;
  }
  FUN_0187a314(param_4,0x68,param_51,0);
  FUN_0187a314(param_4,0x26,param_22,0);
  FUN_0187a314(param_4,0x24,param_21,0);
  FUN_0187a314(param_4,0x22,param_20,0);
  FUN_0187a314(param_4,0x20,param_19,0);
  if ((param_44 != '\0') || (*(char *)(param_4 + 0x50) != '\0')) {
    if (*(long *)(param_4 + 0x48) == 0) {
      *(undefined8 *)(param_4 + 0x48) = 1;
    }
    lVar7 = *(long *)(param_4 + 0x30);
    if (lVar7 == *(long *)(param_4 + 0x38)) {
      FUN_0157184c(param_4,1);
      lVar7 = *(long *)(param_4 + 0x30);
    }
    *(long *)(param_4 + 0x30) = lVar7 + -1;
    *(char *)(lVar7 + -1) = param_44;
    lVar7 = *(long *)(param_4 + 0x20);
    lVar2 = *(long *)(param_4 + 0x28);
    lVar1 = *(long *)(param_4 + 0x30);
    puVar8 = *(ulong **)(param_4 + 0x38);
    if ((ulong)(lVar1 - (long)puVar8) < 8) {
      FUN_0157184c(param_4,8);
      puVar8 = *(ulong **)(param_4 + 0x38);
    }
    *puVar8 = (lVar7 - lVar1) + lVar2 & 0xffffffffU | 0x5600000000;
    *(long *)(param_4 + 0x38) = *(long *)(param_4 + 0x38) + 8;
    uVar9 = *(ushort *)(param_4 + 0x44);
    *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
    if (uVar9 < 0x57) {
      uVar9 = 0x56;
    }
    *(ushort *)(param_4 + 0x44) = uVar9;
  }
  if ((param_39 != '\0') || (*(char *)(param_4 + 0x50) != '\0')) {
    if (*(long *)(param_4 + 0x48) == 0) {
      *(undefined8 *)(param_4 + 0x48) = 1;
    }
    lVar7 = *(long *)(param_4 + 0x30);
    if (lVar7 == *(long *)(param_4 + 0x38)) {
      FUN_0157184c(param_4,1);
      lVar7 = *(long *)(param_4 + 0x30);
    }
    *(long *)(param_4 + 0x30) = lVar7 + -1;
    *(char *)(lVar7 + -1) = param_39;
    lVar7 = *(long *)(param_4 + 0x20);
    lVar2 = *(long *)(param_4 + 0x28);
    lVar1 = *(long *)(param_4 + 0x30);
    puVar8 = *(ulong **)(param_4 + 0x38);
    if ((ulong)(lVar1 - (long)puVar8) < 8) {
      FUN_0157184c(param_4,8);
      puVar8 = *(ulong **)(param_4 + 0x38);
    }
    *puVar8 = (lVar7 - lVar1) + lVar2 & 0xffffffffU | 0x4c00000000;
    *(long *)(param_4 + 0x38) = *(long *)(param_4 + 0x38) + 8;
    uVar9 = *(ushort *)(param_4 + 0x44);
    *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
    if (uVar9 < 0x4d) {
      uVar9 = 0x4c;
    }
    *(ushort *)(param_4 + 0x44) = uVar9;
  }
  if ((param_38 != '\0') || (*(char *)(param_4 + 0x50) != '\0')) {
    if (*(long *)(param_4 + 0x48) == 0) {
      *(undefined8 *)(param_4 + 0x48) = 1;
    }
    lVar7 = *(long *)(param_4 + 0x30);
    if (lVar7 == *(long *)(param_4 + 0x38)) {
      FUN_0157184c(param_4,1);
      lVar7 = *(long *)(param_4 + 0x30);
    }
    *(long *)(param_4 + 0x30) = lVar7 + -1;
    *(char *)(lVar7 + -1) = param_38;
    lVar7 = *(long *)(param_4 + 0x20);
    lVar2 = *(long *)(param_4 + 0x28);
    lVar1 = *(long *)(param_4 + 0x30);
    puVar8 = *(ulong **)(param_4 + 0x38);
    if ((ulong)(lVar1 - (long)puVar8) < 8) {
      FUN_0157184c(param_4,8);
      puVar8 = *(ulong **)(param_4 + 0x38);
    }
    *puVar8 = (lVar7 - lVar1) + lVar2 & 0xffffffffU | 0x4a00000000;
    *(long *)(param_4 + 0x38) = *(long *)(param_4 + 0x38) + 8;
    uVar9 = *(ushort *)(param_4 + 0x44);
    *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
    if (uVar9 < 0x4b) {
      uVar9 = 0x4a;
    }
    *(ushort *)(param_4 + 0x44) = uVar9;
  }
  if (((param_37 & 1) != 0) || (*(char *)(param_4 + 0x50) != '\0')) {
    if (*(long *)(param_4 + 0x48) == 0) {
      *(undefined8 *)(param_4 + 0x48) = 1;
    }
    lVar7 = *(long *)(param_4 + 0x30);
    if (lVar7 == *(long *)(param_4 + 0x38)) {
      FUN_0157184c(param_4,1);
      lVar7 = *(long *)(param_4 + 0x30);
    }
    *(long *)(param_4 + 0x30) = lVar7 + -1;
    *(byte *)(lVar7 + -1) = param_37 & 1;
    lVar7 = *(long *)(param_4 + 0x20);
    lVar2 = *(long *)(param_4 + 0x28);
    lVar1 = *(long *)(param_4 + 0x30);
    puVar8 = *(ulong **)(param_4 + 0x38);
    if ((ulong)(lVar1 - (long)puVar8) < 8) {
      FUN_0157184c(param_4,8);
      puVar8 = *(ulong **)(param_4 + 0x38);
    }
    *puVar8 = (lVar7 - lVar1) + lVar2 & 0xffffffffU | 0x4800000000;
    *(long *)(param_4 + 0x38) = *(long *)(param_4 + 0x38) + 8;
    uVar9 = *(ushort *)(param_4 + 0x44);
    *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
    if (uVar9 < 0x49) {
      uVar9 = 0x48;
    }
    *(ushort *)(param_4 + 0x44) = uVar9;
  }
  if (((param_36 & 1) != 0) || (*(char *)(param_4 + 0x50) != '\0')) {
    if (*(long *)(param_4 + 0x48) == 0) {
      *(undefined8 *)(param_4 + 0x48) = 1;
    }
    lVar7 = *(long *)(param_4 + 0x30);
    if (lVar7 == *(long *)(param_4 + 0x38)) {
      FUN_0157184c(param_4,1);
      lVar7 = *(long *)(param_4 + 0x30);
    }
    *(long *)(param_4 + 0x30) = lVar7 + -1;
    *(byte *)(lVar7 + -1) = param_36 & 1;
    lVar7 = *(long *)(param_4 + 0x20);
    lVar2 = *(long *)(param_4 + 0x28);
    lVar1 = *(long *)(param_4 + 0x30);
    puVar8 = *(ulong **)(param_4 + 0x38);
    if ((ulong)(lVar1 - (long)puVar8) < 8) {
      FUN_0157184c(param_4,8);
      puVar8 = *(ulong **)(param_4 + 0x38);
    }
    *puVar8 = (lVar7 - lVar1) + lVar2 & 0xffffffffU | 0x4600000000;
    *(long *)(param_4 + 0x38) = *(long *)(param_4 + 0x38) + 8;
    uVar9 = *(ushort *)(param_4 + 0x44);
    *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
    if (uVar9 < 0x47) {
      uVar9 = 0x46;
    }
    *(ushort *)(param_4 + 0x44) = uVar9;
  }
  if (((param_35 & 1) != 0) || (*(char *)(param_4 + 0x50) != '\0')) {
    if (*(long *)(param_4 + 0x48) == 0) {
      *(undefined8 *)(param_4 + 0x48) = 1;
    }
    lVar7 = *(long *)(param_4 + 0x30);
    if (lVar7 == *(long *)(param_4 + 0x38)) {
      FUN_0157184c(param_4,1);
      lVar7 = *(long *)(param_4 + 0x30);
    }
    *(long *)(param_4 + 0x30) = lVar7 + -1;
    *(byte *)(lVar7 + -1) = param_35 & 1;
    lVar7 = *(long *)(param_4 + 0x20);
    lVar2 = *(long *)(param_4 + 0x28);
    lVar1 = *(long *)(param_4 + 0x30);
    puVar8 = *(ulong **)(param_4 + 0x38);
    if ((ulong)(lVar1 - (long)puVar8) < 8) {
      FUN_0157184c(param_4,8);
      puVar8 = *(ulong **)(param_4 + 0x38);
    }
    *puVar8 = (lVar7 - lVar1) + lVar2 & 0xffffffffU | 0x4200000000;
    *(long *)(param_4 + 0x38) = *(long *)(param_4 + 0x38) + 8;
    uVar9 = *(ushort *)(param_4 + 0x44);
    *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
    if (uVar9 < 0x43) {
      uVar9 = 0x42;
    }
    *(ushort *)(param_4 + 0x44) = uVar9;
  }
  if (((param_34 & 1) != 0) || (*(char *)(param_4 + 0x50) != '\0')) {
    if (*(long *)(param_4 + 0x48) == 0) {
      *(undefined8 *)(param_4 + 0x48) = 1;
    }
    lVar7 = *(long *)(param_4 + 0x30);
    if (lVar7 == *(long *)(param_4 + 0x38)) {
      FUN_0157184c(param_4,1);
      lVar7 = *(long *)(param_4 + 0x30);
    }
    *(long *)(param_4 + 0x30) = lVar7 + -1;
    *(byte *)(lVar7 + -1) = param_34 & 1;
    lVar7 = *(long *)(param_4 + 0x20);
    lVar2 = *(long *)(param_4 + 0x28);
    lVar1 = *(long *)(param_4 + 0x30);
    puVar8 = *(ulong **)(param_4 + 0x38);
    if ((ulong)(lVar1 - (long)puVar8) < 8) {
      FUN_0157184c(param_4,8);
      puVar8 = *(ulong **)(param_4 + 0x38);
    }
    *puVar8 = (lVar7 - lVar1) + lVar2 & 0xffffffffU | 0x4000000000;
    *(long *)(param_4 + 0x38) = *(long *)(param_4 + 0x38) + 8;
    uVar9 = *(ushort *)(param_4 + 0x44);
    *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
    if (uVar9 < 0x41) {
      uVar9 = 0x40;
    }
    *(ushort *)(param_4 + 0x44) = uVar9;
  }
  if (((param_33 & 1) != 0) || (*(char *)(param_4 + 0x50) != '\0')) {
    if (*(long *)(param_4 + 0x48) == 0) {
      *(undefined8 *)(param_4 + 0x48) = 1;
    }
    lVar7 = *(long *)(param_4 + 0x30);
    if (lVar7 == *(long *)(param_4 + 0x38)) {
      FUN_0157184c(param_4,1);
      lVar7 = *(long *)(param_4 + 0x30);
    }
    *(long *)(param_4 + 0x30) = lVar7 + -1;
    *(byte *)(lVar7 + -1) = param_33 & 1;
    lVar7 = *(long *)(param_4 + 0x20);
    lVar2 = *(long *)(param_4 + 0x28);
    lVar1 = *(long *)(param_4 + 0x30);
    puVar8 = *(ulong **)(param_4 + 0x38);
    if ((ulong)(lVar1 - (long)puVar8) < 8) {
      FUN_0157184c(param_4,8);
      puVar8 = *(ulong **)(param_4 + 0x38);
    }
    *puVar8 = (lVar7 - lVar1) + lVar2 & 0xffffffffU | 0x3e00000000;
    *(long *)(param_4 + 0x38) = *(long *)(param_4 + 0x38) + 8;
    uVar9 = *(ushort *)(param_4 + 0x44);
    *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
    if (uVar9 < 0x3f) {
      uVar9 = 0x3e;
    }
    *(ushort *)(param_4 + 0x44) = uVar9;
  }
  if (((param_32 & 1) != 0) || (*(char *)(param_4 + 0x50) != '\0')) {
    if (*(long *)(param_4 + 0x48) == 0) {
      *(undefined8 *)(param_4 + 0x48) = 1;
    }
    lVar7 = *(long *)(param_4 + 0x30);
    if (lVar7 == *(long *)(param_4 + 0x38)) {
      FUN_0157184c(param_4,1);
      lVar7 = *(long *)(param_4 + 0x30);
    }
    *(long *)(param_4 + 0x30) = lVar7 + -1;
    *(byte *)(lVar7 + -1) = param_32 & 1;
    lVar7 = *(long *)(param_4 + 0x20);
    lVar2 = *(long *)(param_4 + 0x28);
    lVar1 = *(long *)(param_4 + 0x30);
    puVar8 = *(ulong **)(param_4 + 0x38);
    if ((ulong)(lVar1 - (long)puVar8) < 8) {
      FUN_0157184c(param_4,8);
      puVar8 = *(ulong **)(param_4 + 0x38);
    }
    *puVar8 = (lVar7 - lVar1) + lVar2 & 0xffffffffU | 0x3c00000000;
    *(long *)(param_4 + 0x38) = *(long *)(param_4 + 0x38) + 8;
    uVar9 = *(ushort *)(param_4 + 0x44);
    *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
    if (uVar9 < 0x3d) {
      uVar9 = 0x3c;
    }
    *(ushort *)(param_4 + 0x44) = uVar9;
  }
  if (((param_31 & 1) != 0) || (*(char *)(param_4 + 0x50) != '\0')) {
    if (*(long *)(param_4 + 0x48) == 0) {
      *(undefined8 *)(param_4 + 0x48) = 1;
    }
    lVar7 = *(long *)(param_4 + 0x30);
    if (lVar7 == *(long *)(param_4 + 0x38)) {
      FUN_0157184c(param_4,1);
      lVar7 = *(long *)(param_4 + 0x30);
    }
    *(long *)(param_4 + 0x30) = lVar7 + -1;
    *(byte *)(lVar7 + -1) = param_31 & 1;
    lVar7 = *(long *)(param_4 + 0x20);
    lVar2 = *(long *)(param_4 + 0x28);
    lVar1 = *(long *)(param_4 + 0x30);
    puVar8 = *(ulong **)(param_4 + 0x38);
    if ((ulong)(lVar1 - (long)puVar8) < 8) {
      FUN_0157184c(param_4,8);
      puVar8 = *(ulong **)(param_4 + 0x38);
    }
    *puVar8 = (lVar7 - lVar1) + lVar2 & 0xffffffffU | 0x3a00000000;
    *(long *)(param_4 + 0x38) = *(long *)(param_4 + 0x38) + 8;
    uVar9 = *(ushort *)(param_4 + 0x44);
    *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
    if (uVar9 < 0x3b) {
      uVar9 = 0x3a;
    }
    *(ushort *)(param_4 + 0x44) = uVar9;
  }
  if ((param_26 != '\0') || (*(char *)(param_4 + 0x50) != '\0')) {
    if (*(long *)(param_4 + 0x48) == 0) {
      *(undefined8 *)(param_4 + 0x48) = 1;
    }
    lVar7 = *(long *)(param_4 + 0x30);
    if (lVar7 == *(long *)(param_4 + 0x38)) {
      FUN_0157184c(param_4,1);
      lVar7 = *(long *)(param_4 + 0x30);
    }
    *(long *)(param_4 + 0x30) = lVar7 + -1;
    *(char *)(lVar7 + -1) = param_26;
    lVar7 = *(long *)(param_4 + 0x20);
    lVar2 = *(long *)(param_4 + 0x28);
    lVar1 = *(long *)(param_4 + 0x30);
    puVar8 = *(ulong **)(param_4 + 0x38);
    if ((ulong)(lVar1 - (long)puVar8) < 8) {
      FUN_0157184c(param_4,8);
      puVar8 = *(ulong **)(param_4 + 0x38);
    }
    *puVar8 = (lVar7 - lVar1) + lVar2 & 0xffffffffU | 0x3000000000;
    *(long *)(param_4 + 0x38) = *(long *)(param_4 + 0x38) + 8;
    uVar9 = *(ushort *)(param_4 + 0x44);
    *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
    if (uVar9 < 0x31) {
      uVar9 = 0x30;
    }
    *(ushort *)(param_4 + 0x44) = uVar9;
  }
  if ((param_25 != '\0') || (*(char *)(param_4 + 0x50) != '\0')) {
    if (*(long *)(param_4 + 0x48) == 0) {
      *(undefined8 *)(param_4 + 0x48) = 1;
    }
    lVar7 = *(long *)(param_4 + 0x30);
    if (lVar7 == *(long *)(param_4 + 0x38)) {
      FUN_0157184c(param_4,1);
      lVar7 = *(long *)(param_4 + 0x30);
    }
    *(long *)(param_4 + 0x30) = lVar7 + -1;
    *(char *)(lVar7 + -1) = param_25;
    lVar7 = *(long *)(param_4 + 0x20);
    lVar2 = *(long *)(param_4 + 0x28);
    lVar1 = *(long *)(param_4 + 0x30);
    puVar8 = *(ulong **)(param_4 + 0x38);
    if ((ulong)(lVar1 - (long)puVar8) < 8) {
      FUN_0157184c(param_4,8);
      puVar8 = *(ulong **)(param_4 + 0x38);
    }
    *puVar8 = (lVar7 - lVar1) + lVar2 & 0xffffffffU | 0x2e00000000;
    *(long *)(param_4 + 0x38) = *(long *)(param_4 + 0x38) + 8;
    uVar9 = *(ushort *)(param_4 + 0x44);
    *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
    if (uVar9 < 0x2f) {
      uVar9 = 0x2e;
    }
    *(ushort *)(param_4 + 0x44) = uVar9;
  }
  if (((param_23 & 1) != 0) || (*(char *)(param_4 + 0x50) != '\0')) {
    if (*(long *)(param_4 + 0x48) == 0) {
      *(undefined8 *)(param_4 + 0x48) = 1;
    }
    lVar7 = *(long *)(param_4 + 0x30);
    if (lVar7 == *(long *)(param_4 + 0x38)) {
      FUN_0157184c(param_4,1);
      lVar7 = *(long *)(param_4 + 0x30);
    }
    *(long *)(param_4 + 0x30) = lVar7 + -1;
    *(byte *)(lVar7 + -1) = param_23 & 1;
    lVar7 = *(long *)(param_4 + 0x20);
    lVar2 = *(long *)(param_4 + 0x28);
    lVar1 = *(long *)(param_4 + 0x30);
    puVar8 = *(ulong **)(param_4 + 0x38);
    if ((ulong)(lVar1 - (long)puVar8) < 8) {
      FUN_0157184c(param_4,8);
      puVar8 = *(ulong **)(param_4 + 0x38);
    }
    *puVar8 = (lVar7 - lVar1) + lVar2 & 0xffffffffU | 0x2800000000;
    *(long *)(param_4 + 0x38) = *(long *)(param_4 + 0x38) + 8;
    uVar9 = *(ushort *)(param_4 + 0x44);
    *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
    if (uVar9 < 0x29) {
      uVar9 = 0x28;
    }
    *(ushort *)(param_4 + 0x44) = uVar9;
  }
  if (((param_18 & 1) != 0) || (*(char *)(param_4 + 0x50) != '\0')) {
    if (*(long *)(param_4 + 0x48) == 0) {
      *(undefined8 *)(param_4 + 0x48) = 1;
    }
    lVar7 = *(long *)(param_4 + 0x30);
    if (lVar7 == *(long *)(param_4 + 0x38)) {
      FUN_0157184c(param_4,1);
      lVar7 = *(long *)(param_4 + 0x30);
    }
    *(long *)(param_4 + 0x30) = lVar7 + -1;
    *(byte *)(lVar7 + -1) = param_18 & 1;
    lVar7 = *(long *)(param_4 + 0x20);
    lVar2 = *(long *)(param_4 + 0x28);
    lVar1 = *(long *)(param_4 + 0x30);
    puVar8 = *(ulong **)(param_4 + 0x38);
    if ((ulong)(lVar1 - (long)puVar8) < 8) {
      FUN_0157184c(param_4,8);
      puVar8 = *(ulong **)(param_4 + 0x38);
    }
    *puVar8 = (lVar7 - lVar1) + lVar2 & 0xffffffffU | 0x1e00000000;
    *(long *)(param_4 + 0x38) = *(long *)(param_4 + 0x38) + 8;
    uVar9 = *(ushort *)(param_4 + 0x44);
    *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
    if (uVar9 < 0x1f) {
      uVar9 = 0x1e;
    }
    *(ushort *)(param_4 + 0x44) = uVar9;
  }
  if (((param_17 & 1) != 0) || (*(char *)(param_4 + 0x50) != '\0')) {
    if (*(long *)(param_4 + 0x48) == 0) {
      *(undefined8 *)(param_4 + 0x48) = 1;
    }
    lVar7 = *(long *)(param_4 + 0x30);
    if (lVar7 == *(long *)(param_4 + 0x38)) {
      FUN_0157184c(param_4,1);
      lVar7 = *(long *)(param_4 + 0x30);
    }
    *(long *)(param_4 + 0x30) = lVar7 + -1;
    *(byte *)(lVar7 + -1) = param_17 & 1;
    lVar7 = *(long *)(param_4 + 0x20);
    lVar2 = *(long *)(param_4 + 0x28);
    lVar1 = *(long *)(param_4 + 0x30);
    puVar8 = *(ulong **)(param_4 + 0x38);
    if ((ulong)(lVar1 - (long)puVar8) < 8) {
      FUN_0157184c(param_4,8);
      puVar8 = *(ulong **)(param_4 + 0x38);
    }
    *puVar8 = (lVar7 - lVar1) + lVar2 & 0xffffffffU | 0x1c00000000;
    *(long *)(param_4 + 0x38) = *(long *)(param_4 + 0x38) + 8;
    uVar9 = *(ushort *)(param_4 + 0x44);
    *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
    if (uVar9 < 0x1d) {
      uVar9 = 0x1c;
    }
    *(ushort *)(param_4 + 0x44) = uVar9;
  }
  if (((param_16 & 1) != 0) || (*(char *)(param_4 + 0x50) != '\0')) {
    if (*(long *)(param_4 + 0x48) == 0) {
      *(undefined8 *)(param_4 + 0x48) = 1;
    }
    lVar7 = *(long *)(param_4 + 0x30);
    if (lVar7 == *(long *)(param_4 + 0x38)) {
      FUN_0157184c(param_4,1);
      lVar7 = *(long *)(param_4 + 0x30);
    }
    *(long *)(param_4 + 0x30) = lVar7 + -1;
    *(byte *)(lVar7 + -1) = param_16 & 1;
    lVar7 = *(long *)(param_4 + 0x20);
    lVar2 = *(long *)(param_4 + 0x28);
    lVar1 = *(long *)(param_4 + 0x30);
    puVar8 = *(ulong **)(param_4 + 0x38);
    if ((ulong)(lVar1 - (long)puVar8) < 8) {
      FUN_0157184c(param_4,8);
      puVar8 = *(ulong **)(param_4 + 0x38);
    }
    *puVar8 = (lVar7 - lVar1) + lVar2 & 0xffffffffU | 0x1a00000000;
    *(long *)(param_4 + 0x38) = *(long *)(param_4 + 0x38) + 8;
    uVar9 = *(ushort *)(param_4 + 0x44);
    *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
    if (uVar9 < 0x1b) {
      uVar9 = 0x1a;
    }
    *(ushort *)(param_4 + 0x44) = uVar9;
  }
  if ((param_14 != '\0') || (*(char *)(param_4 + 0x50) != '\0')) {
    if (*(long *)(param_4 + 0x48) == 0) {
      *(undefined8 *)(param_4 + 0x48) = 1;
    }
    lVar7 = *(long *)(param_4 + 0x30);
    if (lVar7 == *(long *)(param_4 + 0x38)) {
      FUN_0157184c(param_4,1);
      lVar7 = *(long *)(param_4 + 0x30);
    }
    *(long *)(param_4 + 0x30) = lVar7 + -1;
    *(char *)(lVar7 + -1) = param_14;
    lVar7 = *(long *)(param_4 + 0x20);
    lVar2 = *(long *)(param_4 + 0x28);
    lVar1 = *(long *)(param_4 + 0x30);
    puVar8 = *(ulong **)(param_4 + 0x38);
    if ((ulong)(lVar1 - (long)puVar8) < 8) {
      FUN_0157184c(param_4,8);
      puVar8 = *(ulong **)(param_4 + 0x38);
    }
    *puVar8 = (lVar7 - lVar1) + lVar2 & 0xffffffffU | 0x1600000000;
    *(long *)(param_4 + 0x38) = *(long *)(param_4 + 0x38) + 8;
    uVar9 = *(ushort *)(param_4 + 0x44);
    *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
    if (uVar9 < 0x17) {
      uVar9 = 0x16;
    }
    *(ushort *)(param_4 + 0x44) = uVar9;
  }
  if ((param_13 != '\0') || (*(char *)(param_4 + 0x50) != '\0')) {
    if (*(long *)(param_4 + 0x48) == 0) {
      *(undefined8 *)(param_4 + 0x48) = 1;
    }
    lVar7 = *(long *)(param_4 + 0x30);
    if (lVar7 == *(long *)(param_4 + 0x38)) {
      FUN_0157184c(param_4,1);
      lVar7 = *(long *)(param_4 + 0x30);
    }
    *(long *)(param_4 + 0x30) = lVar7 + -1;
    *(char *)(lVar7 + -1) = param_13;
    lVar7 = *(long *)(param_4 + 0x20);
    lVar2 = *(long *)(param_4 + 0x28);
    lVar1 = *(long *)(param_4 + 0x30);
    puVar8 = *(ulong **)(param_4 + 0x38);
    if ((ulong)(lVar1 - (long)puVar8) < 8) {
      FUN_0157184c(param_4,8);
      puVar8 = *(ulong **)(param_4 + 0x38);
    }
    *puVar8 = (lVar7 - lVar1) + lVar2 & 0xffffffffU | 0x1400000000;
    *(long *)(param_4 + 0x38) = *(long *)(param_4 + 0x38) + 8;
    uVar9 = *(ushort *)(param_4 + 0x44);
    *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
    if (uVar9 < 0x15) {
      uVar9 = 0x14;
    }
    *(ushort *)(param_4 + 0x44) = uVar9;
  }
  if ((param_12 != '\0') || (*(char *)(param_4 + 0x50) != '\0')) {
    if (*(long *)(param_4 + 0x48) == 0) {
      *(undefined8 *)(param_4 + 0x48) = 1;
    }
    lVar7 = *(long *)(param_4 + 0x30);
    if (lVar7 == *(long *)(param_4 + 0x38)) {
      FUN_0157184c(param_4,1);
      lVar7 = *(long *)(param_4 + 0x30);
    }
    *(long *)(param_4 + 0x30) = lVar7 + -1;
    *(char *)(lVar7 + -1) = param_12;
    lVar7 = *(long *)(param_4 + 0x20);
    lVar2 = *(long *)(param_4 + 0x28);
    lVar1 = *(long *)(param_4 + 0x30);
    puVar8 = *(ulong **)(param_4 + 0x38);
    if ((ulong)(lVar1 - (long)puVar8) < 8) {
      FUN_0157184c(param_4,8);
      puVar8 = *(ulong **)(param_4 + 0x38);
    }
    *puVar8 = (lVar7 - lVar1) + lVar2 & 0xffffffffU | 0x1200000000;
    *(long *)(param_4 + 0x38) = *(long *)(param_4 + 0x38) + 8;
    uVar9 = *(ushort *)(param_4 + 0x44);
    *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
    if (uVar9 < 0x13) {
      uVar9 = 0x12;
    }
    *(ushort *)(param_4 + 0x44) = uVar9;
  }
  if ((param_11 != '\0') || (*(char *)(param_4 + 0x50) != '\0')) {
    if (*(long *)(param_4 + 0x48) == 0) {
      *(undefined8 *)(param_4 + 0x48) = 1;
    }
    lVar7 = *(long *)(param_4 + 0x30);
    if (lVar7 == *(long *)(param_4 + 0x38)) {
      FUN_0157184c(param_4,1);
      lVar7 = *(long *)(param_4 + 0x30);
    }
    *(long *)(param_4 + 0x30) = lVar7 + -1;
    *(char *)(lVar7 + -1) = param_11;
    lVar7 = *(long *)(param_4 + 0x20);
    lVar2 = *(long *)(param_4 + 0x28);
    lVar1 = *(long *)(param_4 + 0x30);
    puVar8 = *(ulong **)(param_4 + 0x38);
    if ((ulong)(lVar1 - (long)puVar8) < 8) {
      FUN_0157184c(param_4,8);
      puVar8 = *(ulong **)(param_4 + 0x38);
    }
    *puVar8 = (lVar7 - lVar1) + lVar2 & 0xffffffffU | 0x1000000000;
    *(long *)(param_4 + 0x38) = *(long *)(param_4 + 0x38) + 8;
    uVar9 = *(ushort *)(param_4 + 0x44);
    *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
    if (uVar9 < 0x11) {
      uVar9 = 0x10;
    }
    *(ushort *)(param_4 + 0x44) = uVar9;
  }
  if ((param_10 != '\0') || (*(char *)(param_4 + 0x50) != '\0')) {
    if (*(long *)(param_4 + 0x48) == 0) {
      *(undefined8 *)(param_4 + 0x48) = 1;
    }
    lVar7 = *(long *)(param_4 + 0x30);
    if (lVar7 == *(long *)(param_4 + 0x38)) {
      FUN_0157184c(param_4,1);
      lVar7 = *(long *)(param_4 + 0x30);
    }
    *(long *)(param_4 + 0x30) = lVar7 + -1;
    *(char *)(lVar7 + -1) = param_10;
    lVar7 = *(long *)(param_4 + 0x20);
    lVar2 = *(long *)(param_4 + 0x28);
    lVar1 = *(long *)(param_4 + 0x30);
    puVar8 = *(ulong **)(param_4 + 0x38);
    if ((ulong)(lVar1 - (long)puVar8) < 8) {
      FUN_0157184c(param_4,8);
      puVar8 = *(ulong **)(param_4 + 0x38);
    }
    *puVar8 = (lVar7 - lVar1) + lVar2 & 0xffffffffU | 0xe00000000;
    *(long *)(param_4 + 0x38) = *(long *)(param_4 + 0x38) + 8;
    uVar9 = *(ushort *)(param_4 + 0x44);
    *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
    if (uVar9 < 0xf) {
      uVar9 = 0xe;
    }
    *(ushort *)(param_4 + 0x44) = uVar9;
  }
  if ((param_7 != '\0') || (*(char *)(param_4 + 0x50) != '\0')) {
    if (*(long *)(param_4 + 0x48) == 0) {
      *(undefined8 *)(param_4 + 0x48) = 1;
    }
    lVar7 = *(long *)(param_4 + 0x30);
    if (lVar7 == *(long *)(param_4 + 0x38)) {
      FUN_0157184c(param_4,1);
      lVar7 = *(long *)(param_4 + 0x30);
    }
    *(long *)(param_4 + 0x30) = lVar7 + -1;
    *(char *)(lVar7 + -1) = param_7;
    lVar7 = *(long *)(param_4 + 0x20);
    lVar2 = *(long *)(param_4 + 0x28);
    lVar1 = *(long *)(param_4 + 0x30);
    puVar8 = *(ulong **)(param_4 + 0x38);
    if ((ulong)(lVar1 - (long)puVar8) < 8) {
      FUN_0157184c(param_4,8);
      puVar8 = *(ulong **)(param_4 + 0x38);
    }
    *puVar8 = (lVar7 - lVar1) + lVar2 & 0xffffffffU | 0x800000000;
    *(long *)(param_4 + 0x38) = *(long *)(param_4 + 0x38) + 8;
    uVar9 = *(ushort *)(param_4 + 0x44);
    *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
    if (uVar9 < 9) {
      uVar9 = 8;
    }
    *(ushort *)(param_4 + 0x44) = uVar9;
  }
  if ((param_6 != '\0') || (*(char *)(param_4 + 0x50) != '\0')) {
    if (*(long *)(param_4 + 0x48) == 0) {
      *(undefined8 *)(param_4 + 0x48) = 1;
    }
    lVar7 = *(long *)(param_4 + 0x30);
    if (lVar7 == *(long *)(param_4 + 0x38)) {
      FUN_0157184c(param_4,1);
      lVar7 = *(long *)(param_4 + 0x30);
    }
    *(long *)(param_4 + 0x30) = lVar7 + -1;
    *(char *)(lVar7 + -1) = param_6;
    lVar7 = *(long *)(param_4 + 0x20);
    lVar2 = *(long *)(param_4 + 0x28);
    lVar1 = *(long *)(param_4 + 0x30);
    puVar8 = *(ulong **)(param_4 + 0x38);
    if ((ulong)(lVar1 - (long)puVar8) < 8) {
      FUN_0157184c(param_4,8);
      puVar8 = *(ulong **)(param_4 + 0x38);
    }
    *puVar8 = (lVar7 - lVar1) + lVar2 & 0xffffffffU | 0x600000000;
    *(long *)(param_4 + 0x38) = *(long *)(param_4 + 0x38) + 8;
    uVar9 = *(ushort *)(param_4 + 0x44);
    *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
    if (uVar9 < 7) {
      uVar9 = 6;
    }
    *(ushort *)(param_4 + 0x44) = uVar9;
  }
  uVar3 = FUN_01571a80(param_4,((int)uVar5 - (int)uVar10) + (int)uVar6);
  return uVar3;
}


