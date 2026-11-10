/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01acc8f0; name: FUN_01acc8f0
 */


undefined4
FUN_01acc8f0(long param_1,byte param_2,byte param_3,byte param_4,byte param_5,byte param_6,
            byte param_7,byte param_8,byte param_9,byte param_10,byte param_11,byte param_12,
            char param_13,undefined4 param_14)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong *puVar7;
  ushort uVar8;
  undefined8 uVar9;
  
  *(undefined1 *)(param_1 + 0x46) = 1;
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  FUN_01acd274(param_1,param_14);
  if ((param_13 != '\0') || (*(char *)(param_1 + 0x50) != '\0')) {
    if (*(long *)(param_1 + 0x48) == 0) {
      *(undefined8 *)(param_1 + 0x48) = 1;
    }
    lVar6 = *(long *)(param_1 + 0x30);
    if (lVar6 == *(long *)(param_1 + 0x38)) {
      FUN_0157184c(param_1,1);
      lVar6 = *(long *)(param_1 + 0x30);
    }
    *(long *)(param_1 + 0x30) = lVar6 + -1;
    *(char *)(lVar6 + -1) = param_13;
    lVar6 = *(long *)(param_1 + 0x20);
    lVar2 = *(long *)(param_1 + 0x28);
    lVar1 = *(long *)(param_1 + 0x30);
    puVar7 = *(ulong **)(param_1 + 0x38);
    if ((ulong)(lVar1 - (long)puVar7) < 8) {
      FUN_0157184c(param_1,8);
      puVar7 = *(ulong **)(param_1 + 0x38);
    }
    *puVar7 = (lVar6 - lVar1) + lVar2 & 0xffffffffU | 0x1a00000000;
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
    uVar8 = *(ushort *)(param_1 + 0x44);
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    if (uVar8 < 0x1b) {
      uVar8 = 0x1a;
    }
    *(ushort *)(param_1 + 0x44) = uVar8;
  }
  if (((param_12 & 1) != 0) || (*(char *)(param_1 + 0x50) != '\0')) {
    if (*(long *)(param_1 + 0x48) == 0) {
      *(undefined8 *)(param_1 + 0x48) = 1;
    }
    lVar6 = *(long *)(param_1 + 0x30);
    if (lVar6 == *(long *)(param_1 + 0x38)) {
      FUN_0157184c(param_1,1);
      lVar6 = *(long *)(param_1 + 0x30);
    }
    *(long *)(param_1 + 0x30) = lVar6 + -1;
    *(byte *)(lVar6 + -1) = param_12 & 1;
    lVar6 = *(long *)(param_1 + 0x20);
    lVar2 = *(long *)(param_1 + 0x28);
    lVar1 = *(long *)(param_1 + 0x30);
    puVar7 = *(ulong **)(param_1 + 0x38);
    if ((ulong)(lVar1 - (long)puVar7) < 8) {
      FUN_0157184c(param_1,8);
      puVar7 = *(ulong **)(param_1 + 0x38);
    }
    *puVar7 = (lVar6 - lVar1) + lVar2 & 0xffffffffU | 0x1800000000;
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
    uVar8 = *(ushort *)(param_1 + 0x44);
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    if (uVar8 < 0x19) {
      uVar8 = 0x18;
    }
    *(ushort *)(param_1 + 0x44) = uVar8;
  }
  if (((param_11 & 1) != 0) || (*(char *)(param_1 + 0x50) != '\0')) {
    if (*(long *)(param_1 + 0x48) == 0) {
      *(undefined8 *)(param_1 + 0x48) = 1;
    }
    lVar6 = *(long *)(param_1 + 0x30);
    if (lVar6 == *(long *)(param_1 + 0x38)) {
      FUN_0157184c(param_1,1);
      lVar6 = *(long *)(param_1 + 0x30);
    }
    *(long *)(param_1 + 0x30) = lVar6 + -1;
    *(byte *)(lVar6 + -1) = param_11 & 1;
    lVar6 = *(long *)(param_1 + 0x20);
    lVar2 = *(long *)(param_1 + 0x28);
    lVar1 = *(long *)(param_1 + 0x30);
    puVar7 = *(ulong **)(param_1 + 0x38);
    if ((ulong)(lVar1 - (long)puVar7) < 8) {
      FUN_0157184c(param_1,8);
      puVar7 = *(ulong **)(param_1 + 0x38);
    }
    *puVar7 = (lVar6 - lVar1) + lVar2 & 0xffffffffU | 0x1600000000;
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
    uVar8 = *(ushort *)(param_1 + 0x44);
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    if (uVar8 < 0x17) {
      uVar8 = 0x16;
    }
    *(ushort *)(param_1 + 0x44) = uVar8;
  }
  if (((param_10 & 1) != 0) || (*(char *)(param_1 + 0x50) != '\0')) {
    if (*(long *)(param_1 + 0x48) == 0) {
      *(undefined8 *)(param_1 + 0x48) = 1;
    }
    lVar6 = *(long *)(param_1 + 0x30);
    if (lVar6 == *(long *)(param_1 + 0x38)) {
      FUN_0157184c(param_1,1);
      lVar6 = *(long *)(param_1 + 0x30);
    }
    *(long *)(param_1 + 0x30) = lVar6 + -1;
    *(byte *)(lVar6 + -1) = param_10 & 1;
    lVar6 = *(long *)(param_1 + 0x20);
    lVar2 = *(long *)(param_1 + 0x28);
    lVar1 = *(long *)(param_1 + 0x30);
    puVar7 = *(ulong **)(param_1 + 0x38);
    if ((ulong)(lVar1 - (long)puVar7) < 8) {
      FUN_0157184c(param_1,8);
      puVar7 = *(ulong **)(param_1 + 0x38);
    }
    *puVar7 = (lVar6 - lVar1) + lVar2 & 0xffffffffU | 0x1400000000;
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
    uVar8 = *(ushort *)(param_1 + 0x44);
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    if (uVar8 < 0x15) {
      uVar8 = 0x14;
    }
    *(ushort *)(param_1 + 0x44) = uVar8;
  }
  if (((param_9 & 1) != 0) || (*(char *)(param_1 + 0x50) != '\0')) {
    if (*(long *)(param_1 + 0x48) == 0) {
      *(undefined8 *)(param_1 + 0x48) = 1;
    }
    lVar6 = *(long *)(param_1 + 0x30);
    if (lVar6 == *(long *)(param_1 + 0x38)) {
      FUN_0157184c(param_1,1);
      lVar6 = *(long *)(param_1 + 0x30);
    }
    *(long *)(param_1 + 0x30) = lVar6 + -1;
    *(byte *)(lVar6 + -1) = param_9 & 1;
    lVar6 = *(long *)(param_1 + 0x20);
    lVar2 = *(long *)(param_1 + 0x28);
    lVar1 = *(long *)(param_1 + 0x30);
    puVar7 = *(ulong **)(param_1 + 0x38);
    if ((ulong)(lVar1 - (long)puVar7) < 8) {
      FUN_0157184c(param_1,8);
      puVar7 = *(ulong **)(param_1 + 0x38);
    }
    *puVar7 = (lVar6 - lVar1) + lVar2 & 0xffffffffU | 0x1200000000;
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
    uVar8 = *(ushort *)(param_1 + 0x44);
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    if (uVar8 < 0x13) {
      uVar8 = 0x12;
    }
    *(ushort *)(param_1 + 0x44) = uVar8;
  }
  if (((param_8 & 1) != 0) || (*(char *)(param_1 + 0x50) != '\0')) {
    if (*(long *)(param_1 + 0x48) == 0) {
      *(undefined8 *)(param_1 + 0x48) = 1;
    }
    lVar6 = *(long *)(param_1 + 0x30);
    if (lVar6 == *(long *)(param_1 + 0x38)) {
      FUN_0157184c(param_1,1);
      lVar6 = *(long *)(param_1 + 0x30);
    }
    *(long *)(param_1 + 0x30) = lVar6 + -1;
    *(byte *)(lVar6 + -1) = param_8 & 1;
    lVar6 = *(long *)(param_1 + 0x20);
    lVar2 = *(long *)(param_1 + 0x28);
    lVar1 = *(long *)(param_1 + 0x30);
    puVar7 = *(ulong **)(param_1 + 0x38);
    if ((ulong)(lVar1 - (long)puVar7) < 8) {
      FUN_0157184c(param_1,8);
      puVar7 = *(ulong **)(param_1 + 0x38);
    }
    *puVar7 = (lVar6 - lVar1) + lVar2 & 0xffffffffU | 0x1000000000;
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
    uVar8 = *(ushort *)(param_1 + 0x44);
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    if (uVar8 < 0x11) {
      uVar8 = 0x10;
    }
    *(ushort *)(param_1 + 0x44) = uVar8;
  }
  if (((param_7 & 1) != 0) || (*(char *)(param_1 + 0x50) != '\0')) {
    if (*(long *)(param_1 + 0x48) == 0) {
      *(undefined8 *)(param_1 + 0x48) = 1;
    }
    lVar6 = *(long *)(param_1 + 0x30);
    if (lVar6 == *(long *)(param_1 + 0x38)) {
      FUN_0157184c(param_1,1);
      lVar6 = *(long *)(param_1 + 0x30);
    }
    *(long *)(param_1 + 0x30) = lVar6 + -1;
    *(byte *)(lVar6 + -1) = param_7 & 1;
    lVar6 = *(long *)(param_1 + 0x20);
    lVar2 = *(long *)(param_1 + 0x28);
    lVar1 = *(long *)(param_1 + 0x30);
    puVar7 = *(ulong **)(param_1 + 0x38);
    if ((ulong)(lVar1 - (long)puVar7) < 8) {
      FUN_0157184c(param_1,8);
      puVar7 = *(ulong **)(param_1 + 0x38);
    }
    *puVar7 = (lVar6 - lVar1) + lVar2 & 0xffffffffU | 0xe00000000;
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
    uVar8 = *(ushort *)(param_1 + 0x44);
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    if (uVar8 < 0xf) {
      uVar8 = 0xe;
    }
    *(ushort *)(param_1 + 0x44) = uVar8;
  }
  if (((param_6 & 1) != 0) || (*(char *)(param_1 + 0x50) != '\0')) {
    if (*(long *)(param_1 + 0x48) == 0) {
      *(undefined8 *)(param_1 + 0x48) = 1;
    }
    lVar6 = *(long *)(param_1 + 0x30);
    if (lVar6 == *(long *)(param_1 + 0x38)) {
      FUN_0157184c(param_1,1);
      lVar6 = *(long *)(param_1 + 0x30);
    }
    *(long *)(param_1 + 0x30) = lVar6 + -1;
    *(byte *)(lVar6 + -1) = param_6 & 1;
    lVar6 = *(long *)(param_1 + 0x20);
    lVar2 = *(long *)(param_1 + 0x28);
    lVar1 = *(long *)(param_1 + 0x30);
    puVar7 = *(ulong **)(param_1 + 0x38);
    if ((ulong)(lVar1 - (long)puVar7) < 8) {
      FUN_0157184c(param_1,8);
      puVar7 = *(ulong **)(param_1 + 0x38);
    }
    *puVar7 = (lVar6 - lVar1) + lVar2 & 0xffffffffU | 0xc00000000;
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
    uVar8 = *(ushort *)(param_1 + 0x44);
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    if (uVar8 < 0xd) {
      uVar8 = 0xc;
    }
    *(ushort *)(param_1 + 0x44) = uVar8;
  }
  if (((param_5 & 1) != 0) || (*(char *)(param_1 + 0x50) != '\0')) {
    if (*(long *)(param_1 + 0x48) == 0) {
      *(undefined8 *)(param_1 + 0x48) = 1;
    }
    lVar6 = *(long *)(param_1 + 0x30);
    if (lVar6 == *(long *)(param_1 + 0x38)) {
      FUN_0157184c(param_1,1);
      lVar6 = *(long *)(param_1 + 0x30);
    }
    *(long *)(param_1 + 0x30) = lVar6 + -1;
    *(byte *)(lVar6 + -1) = param_5 & 1;
    lVar6 = *(long *)(param_1 + 0x20);
    lVar2 = *(long *)(param_1 + 0x28);
    lVar1 = *(long *)(param_1 + 0x30);
    puVar7 = *(ulong **)(param_1 + 0x38);
    if ((ulong)(lVar1 - (long)puVar7) < 8) {
      FUN_0157184c(param_1,8);
      puVar7 = *(ulong **)(param_1 + 0x38);
    }
    *puVar7 = (lVar6 - lVar1) + lVar2 & 0xffffffffU | 0xa00000000;
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
    uVar8 = *(ushort *)(param_1 + 0x44);
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    if (uVar8 < 0xb) {
      uVar8 = 10;
    }
    *(ushort *)(param_1 + 0x44) = uVar8;
  }
  if (((param_4 & 1) != 0) || (*(char *)(param_1 + 0x50) != '\0')) {
    if (*(long *)(param_1 + 0x48) == 0) {
      *(undefined8 *)(param_1 + 0x48) = 1;
    }
    lVar6 = *(long *)(param_1 + 0x30);
    if (lVar6 == *(long *)(param_1 + 0x38)) {
      FUN_0157184c(param_1,1);
      lVar6 = *(long *)(param_1 + 0x30);
    }
    *(long *)(param_1 + 0x30) = lVar6 + -1;
    *(byte *)(lVar6 + -1) = param_4 & 1;
    lVar6 = *(long *)(param_1 + 0x20);
    lVar2 = *(long *)(param_1 + 0x28);
    lVar1 = *(long *)(param_1 + 0x30);
    puVar7 = *(ulong **)(param_1 + 0x38);
    if ((ulong)(lVar1 - (long)puVar7) < 8) {
      FUN_0157184c(param_1,8);
      puVar7 = *(ulong **)(param_1 + 0x38);
    }
    *puVar7 = (lVar6 - lVar1) + lVar2 & 0xffffffffU | 0x800000000;
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
    uVar8 = *(ushort *)(param_1 + 0x44);
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    if (uVar8 < 9) {
      uVar8 = 8;
    }
    *(ushort *)(param_1 + 0x44) = uVar8;
  }
  if (((param_3 & 1) != 0) || (*(char *)(param_1 + 0x50) != '\0')) {
    if (*(long *)(param_1 + 0x48) == 0) {
      *(undefined8 *)(param_1 + 0x48) = 1;
    }
    lVar6 = *(long *)(param_1 + 0x30);
    if (lVar6 == *(long *)(param_1 + 0x38)) {
      FUN_0157184c(param_1,1);
      lVar6 = *(long *)(param_1 + 0x30);
    }
    *(long *)(param_1 + 0x30) = lVar6 + -1;
    *(byte *)(lVar6 + -1) = param_3 & 1;
    lVar6 = *(long *)(param_1 + 0x20);
    lVar2 = *(long *)(param_1 + 0x28);
    lVar1 = *(long *)(param_1 + 0x30);
    puVar7 = *(ulong **)(param_1 + 0x38);
    if ((ulong)(lVar1 - (long)puVar7) < 8) {
      FUN_0157184c(param_1,8);
      puVar7 = *(ulong **)(param_1 + 0x38);
    }
    *puVar7 = (lVar6 - lVar1) + lVar2 & 0xffffffffU | 0x600000000;
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
    uVar8 = *(ushort *)(param_1 + 0x44);
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    if (uVar8 < 7) {
      uVar8 = 6;
    }
    *(ushort *)(param_1 + 0x44) = uVar8;
  }
  if (((param_2 & 1) != 0) || (*(char *)(param_1 + 0x50) != '\0')) {
    if (*(long *)(param_1 + 0x48) == 0) {
      *(undefined8 *)(param_1 + 0x48) = 1;
    }
    lVar6 = *(long *)(param_1 + 0x30);
    if (lVar6 == *(long *)(param_1 + 0x38)) {
      FUN_0157184c(param_1,1);
      lVar6 = *(long *)(param_1 + 0x30);
    }
    *(long *)(param_1 + 0x30) = lVar6 + -1;
    *(byte *)(lVar6 + -1) = param_2 & 1;
    lVar6 = *(long *)(param_1 + 0x20);
    lVar2 = *(long *)(param_1 + 0x28);
    lVar1 = *(long *)(param_1 + 0x30);
    puVar7 = *(ulong **)(param_1 + 0x38);
    if ((ulong)(lVar1 - (long)puVar7) < 8) {
      FUN_0157184c(param_1,8);
      puVar7 = *(ulong **)(param_1 + 0x38);
    }
    *puVar7 = (lVar6 - lVar1) + lVar2 & 0xffffffffU | 0x400000000;
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
    uVar8 = *(ushort *)(param_1 + 0x44);
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    if (uVar8 < 5) {
      uVar8 = 4;
    }
    *(ushort *)(param_1 + 0x44) = uVar8;
  }
  uVar3 = FUN_01571a80(param_1,((int)uVar4 - (int)uVar9) + (int)uVar5);
  return uVar3;
}


