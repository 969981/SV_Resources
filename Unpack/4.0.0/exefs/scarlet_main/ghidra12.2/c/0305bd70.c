/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0305bd70; name: FUN_0305bd70
 */


undefined4 FUN_0305bd70(long param_1,uint *param_2,uint *param_3,undefined8 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  uint *puVar8;
  int iVar9;
  ulong uVar10;
  
  uVar5 = *param_2;
  uVar4 = (ulong)uVar5 & 0x3fffff;
  lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + ((ulong)(uVar5 >> 0xe) & 0x3ff00)) + 0x20)
  ;
  if ((int)uVar4 < *(int *)(lVar6 + 0x30)) {
    uVar10 = uVar4;
    if ((*(int *)(lVar6 + 0x78) == 0) ||
       (uVar1 = *(uint *)(*(long *)(lVar6 + 0x70) + uVar4 * 4), uVar10 = (ulong)uVar1,
       uVar1 != 0xffffffff)) {
      lVar6 = *(long *)(lVar6 + 0xc0) + (long)(int)uVar10 * 0x14;
    }
    else {
      lVar6 = *(long *)(lVar6 + 0x28) + uVar4 * 0x14;
    }
  }
  else {
    lVar6 = *(long *)(lVar6 + 0xe0) + (long)((int)uVar4 - *(int *)(lVar6 + 0x30)) * 0x14;
  }
  if ((*(int *)(lVar6 + 8) == -1) || ((*(byte *)(lVar6 + 0x10) >> 5 & 1) != 0)) {
    *param_2 = 0xffffffff;
    *param_3 = 0xffffffff;
    uVar2 = 1;
    if ((*(byte *)(lVar6 + 0x10) & 0x40) != 0) {
      uVar2 = 2;
    }
    return uVar2;
  }
  uVar4 = FUN_030657e8(param_4,(ulong)uVar5,6);
  if ((uVar4 & 1) == 0) {
    *param_2 = 0xffffffff;
    *param_3 = 0xffffffff;
    return 1;
  }
  uVar4 = (ulong)*param_2 & 0x3fffff;
  lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + ((ulong)(*param_2 >> 0xe) & 0x3ff00)) +
                   0x20);
  iVar3 = (int)uVar4;
  iVar9 = iVar3 - *(int *)(lVar6 + 0x30);
  if (iVar3 < *(int *)(lVar6 + 0x30)) {
    iVar9 = iVar3;
    if ((*(int *)(lVar6 + 0x78) == 0) ||
       (iVar9 = *(int *)(*(long *)(lVar6 + 0x70) + uVar4 * 4), iVar9 != -1)) {
      lVar7 = *(long *)(lVar6 + 0xc0);
      goto LAB_0305beb0;
    }
    lVar7 = *(long *)(lVar6 + 0x28) + uVar4 * 0x14;
  }
  else {
    lVar7 = *(long *)(lVar6 + 0xe0);
LAB_0305beb0:
    lVar7 = lVar7 + (long)iVar9 * 0x14;
  }
  uVar5 = *(uint *)(lVar7 + 0xc);
  if (((*(byte *)(lVar7 + 0x10) >> 6 & 1) == 0) && (uVar5 != 0xffffffff)) {
    uVar5 = uVar5 & 0x3fffff | *(int *)(lVar6 + 0x17c) << 0x16;
  }
  *param_3 = uVar5;
  uVar4 = (ulong)*param_2 & 0x3fffff;
  lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + ((ulong)(*param_2 >> 0xe) & 0x3ff00)) +
                   0x20);
  iVar3 = (int)uVar4;
  iVar9 = iVar3 - *(int *)(lVar6 + 0x30);
  if (iVar3 < *(int *)(lVar6 + 0x30)) {
    iVar9 = iVar3;
    if ((*(int *)(lVar6 + 0x78) == 0) ||
       (iVar9 = *(int *)(*(long *)(lVar6 + 0x70) + uVar4 * 4), iVar9 != -1)) {
      lVar7 = *(long *)(lVar6 + 0xc0);
      goto LAB_0305bf28;
    }
    lVar7 = *(long *)(lVar6 + 0x28) + uVar4 * 0x14;
  }
  else {
    lVar7 = *(long *)(lVar6 + 0xe0);
LAB_0305bf28:
    lVar7 = lVar7 + (long)iVar9 * 0x14;
  }
  uVar5 = *(uint *)(lVar7 + 8);
  if (((*(byte *)(lVar7 + 0x10) >> 6 & 1) == 0) && (uVar5 != 0xffffffff)) {
    uVar5 = uVar5 & 0x3fffff | *(int *)(lVar6 + 0x17c) << 0x16;
  }
  *param_2 = uVar5;
  uVar4 = (ulong)*param_3 & 0x3fffff;
  lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + ((ulong)(*param_3 >> 0xe) & 0x3ff00)) +
                   0x20);
  iVar3 = (int)uVar4;
  iVar9 = iVar3 - *(int *)(lVar6 + 0x20);
  if (iVar3 < *(int *)(lVar6 + 0x20)) {
    iVar9 = iVar3;
    if ((*(int *)(lVar6 + 0x98) != 0) &&
       (iVar9 = *(int *)(*(long *)(lVar6 + 0x90) + uVar4 * 4), iVar9 == -1)) {
      puVar8 = (uint *)(*(long *)(lVar6 + 0x18) + uVar4 * 0x10);
      goto LAB_0305bfa4;
    }
    lVar6 = *(long *)(lVar6 + 0xb0);
  }
  else {
    lVar6 = *(long *)(lVar6 + 0xd0);
  }
  puVar8 = (uint *)(lVar6 + (long)iVar9 * 0x10);
LAB_0305bfa4:
  uVar1 = *puVar8;
  if ((uVar5 & 0x3fffff) != ((int)(short)puVar8[2] + uVar1) - 1) {
    uVar1 = (uVar5 & 0x3fffff) + 1;
  }
  *param_2 = uVar1 | uVar5 & 0xffc00000;
  return 0;
}


