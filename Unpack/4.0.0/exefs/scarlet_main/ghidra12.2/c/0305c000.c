/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0305c000; name: FUN_0305c000
 */


undefined4 FUN_0305c000(long param_1,uint *param_2,uint *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  
  uVar4 = *param_2;
  uVar3 = (ulong)uVar4 & 0x3fffff;
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + ((ulong)(uVar4 >> 0xe) & 0x3ff00)) + 0x20)
  ;
  if ((int)uVar3 < *(int *)(lVar5 + 0x30)) {
    uVar10 = uVar3;
    if ((*(int *)(lVar5 + 0x78) == 0) ||
       (uVar9 = *(uint *)(*(long *)(lVar5 + 0x70) + uVar3 * 4), uVar10 = (ulong)uVar9,
       uVar9 != 0xffffffff)) {
      lVar5 = *(long *)(lVar5 + 0xc0) + (long)(int)uVar10 * 0x14;
    }
    else {
      lVar5 = *(long *)(lVar5 + 0x28) + uVar3 * 0x14;
    }
  }
  else {
    lVar5 = *(long *)(lVar5 + 0xe0) + (long)((int)uVar3 - *(int *)(lVar5 + 0x30)) * 0x14;
  }
  if ((*(int *)(lVar5 + 8) == -1) || ((*(byte *)(lVar5 + 0x10) >> 5 & 1) != 0)) {
    *param_2 = 0xffffffff;
    *param_3 = 0xffffffff;
    uVar1 = 1;
    if ((*(byte *)(lVar5 + 0x10) & 0x40) != 0) {
      uVar1 = 2;
    }
    return uVar1;
  }
  uVar3 = FUN_030657e8(param_4,(ulong)uVar4,6);
  if ((uVar3 & 1) == 0) {
    *param_2 = 0xffffffff;
    *param_3 = 0xffffffff;
    return 1;
  }
  uVar3 = (ulong)*param_2 & 0x3fffff;
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + ((ulong)(*param_2 >> 0xe) & 0x3ff00)) +
                   0x20);
  iVar2 = (int)uVar3;
  iVar8 = iVar2 - *(int *)(lVar5 + 0x30);
  if (iVar2 < *(int *)(lVar5 + 0x30)) {
    iVar8 = iVar2;
    if ((*(int *)(lVar5 + 0x78) == 0) ||
       (iVar8 = *(int *)(*(long *)(lVar5 + 0x70) + uVar3 * 4), iVar8 != -1)) {
      lVar6 = *(long *)(lVar5 + 0xc0);
      goto LAB_0305c140;
    }
    lVar6 = *(long *)(lVar5 + 0x28) + uVar3 * 0x14;
  }
  else {
    lVar6 = *(long *)(lVar5 + 0xe0);
LAB_0305c140:
    lVar6 = lVar6 + (long)iVar8 * 0x14;
  }
  uVar4 = *(uint *)(lVar6 + 0xc);
  if (((*(byte *)(lVar6 + 0x10) >> 6 & 1) == 0) && (uVar4 != 0xffffffff)) {
    uVar4 = uVar4 & 0x3fffff | *(int *)(lVar5 + 0x17c) << 0x16;
  }
  *param_3 = uVar4;
  uVar3 = (ulong)*param_2 & 0x3fffff;
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + ((ulong)(*param_2 >> 0xe) & 0x3ff00)) +
                   0x20);
  iVar2 = (int)uVar3;
  iVar8 = iVar2 - *(int *)(lVar5 + 0x30);
  if (iVar2 < *(int *)(lVar5 + 0x30)) {
    iVar8 = iVar2;
    if ((*(int *)(lVar5 + 0x78) == 0) ||
       (iVar8 = *(int *)(*(long *)(lVar5 + 0x70) + uVar3 * 4), iVar8 != -1)) {
      lVar6 = *(long *)(lVar5 + 0xc0);
      goto LAB_0305c1b8;
    }
    lVar6 = *(long *)(lVar5 + 0x28) + uVar3 * 0x14;
  }
  else {
    lVar6 = *(long *)(lVar5 + 0xe0);
LAB_0305c1b8:
    lVar6 = lVar6 + (long)iVar8 * 0x14;
  }
  uVar4 = *(uint *)(lVar6 + 8);
  if (((*(byte *)(lVar6 + 0x10) >> 6 & 1) == 0) && (uVar4 != 0xffffffff)) {
    uVar4 = uVar4 & 0x3fffff | *(int *)(lVar5 + 0x17c) << 0x16;
  }
  *param_2 = uVar4;
  uVar3 = (ulong)*param_3 & 0x3fffff;
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + ((ulong)(*param_3 >> 0xe) & 0x3ff00)) +
                   0x20);
  iVar2 = (int)uVar3;
  iVar8 = iVar2 - *(int *)(lVar5 + 0x20);
  if (iVar2 < *(int *)(lVar5 + 0x20)) {
    iVar8 = iVar2;
    if ((*(int *)(lVar5 + 0x98) != 0) &&
       (iVar8 = *(int *)(*(long *)(lVar5 + 0x90) + uVar3 * 4), iVar8 == -1)) {
      puVar7 = (uint *)(*(long *)(lVar5 + 0x18) + uVar3 * 0x10);
      goto LAB_0305c234;
    }
    lVar5 = *(long *)(lVar5 + 0xb0);
  }
  else {
    lVar5 = *(long *)(lVar5 + 0xd0);
  }
  puVar7 = (uint *)(lVar5 + (long)iVar8 * 0x10);
LAB_0305c234:
  uVar9 = uVar4 & 0x3fffff;
  if (uVar9 == *puVar7) {
    uVar9 = uVar9 + (int)(short)puVar7[2];
  }
  *param_2 = uVar9 - 1 | uVar4 & 0xffc00000;
  return 0;
}


