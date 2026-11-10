/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03078628; name: FUN_03078628
 */


void FUN_03078628(uint *param_1,long param_2,uint param_3,uint param_4)

{
  uint uVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  ulong uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  
  if (param_2 == 0) {
    *(undefined2 *)(param_1 + 1) = 0xffff;
    uVar5 = (ulong)(param_4 & 0x3fffff);
    *param_1 = param_4;
  }
  else {
    uVar5 = (ulong)(param_4 & 0x3fffff);
    lVar9 = *(long *)(*(long *)(*(long *)(param_2 + 0x38) + (ulong)(param_4 >> 0x16) * 0x100) + 0x20
                     );
    iVar7 = *(int *)(lVar9 + 0x20);
    if ((int)(param_4 & 0x3fffff) < iVar7) {
      *param_1 = param_4;
      *(undefined2 *)(param_1 + 1) = 0xffff;
    }
    else {
      lVar9 = *(long *)(lVar9 + 0x168);
      uVar1 = *(uint *)(lVar9 + uVar5 * 4);
      iVar4 = *(int *)(lVar9 + (long)(int)uVar1 * 4);
      sVar2 = (short)iVar7;
      sVar3 = sVar2 - (short)iVar4;
      if (iVar4 == -2) {
        sVar3 = 1;
      }
      *(short *)(param_1 + 1) = ((short)param_4 - sVar2) + sVar3;
      *param_1 = uVar1 | param_4 & 0xffc00000;
    }
  }
  lVar9 = *(long *)(*(long *)(*(long *)(param_2 + 0x38) + (ulong)(param_4 >> 0x16) * 0x100) + 0x20);
  iVar4 = (int)uVar5;
  iVar7 = iVar4 - *(int *)(lVar9 + 0x20);
  if (iVar4 < *(int *)(lVar9 + 0x20)) {
    if (*(int *)(lVar9 + 0x98) == 0) {
      iVar7 = iVar4;
LAB_030786f8:
      lVar9 = *(long *)(lVar9 + 0xb0);
      goto LAB_030786fc;
    }
    iVar7 = *(int *)(*(long *)(lVar9 + 0x90) + uVar5 * 4);
    if (iVar7 != -1) goto LAB_030786f8;
    puVar6 = (undefined4 *)(*(long *)(lVar9 + 0x18) + uVar5 * 0x10);
  }
  else {
    lVar9 = *(long *)(lVar9 + 0xd0);
LAB_030786fc:
    puVar6 = (undefined4 *)(lVar9 + (long)iVar7 * 0x10);
  }
  uVar1 = param_3 & 0x3fffff;
  lVar9 = *(long *)(*(long *)(*(long *)(param_2 + 0x38) + (ulong)(param_3 >> 0x16) * 0x100) + 0x20);
  uVar8 = uVar1 - *(int *)(lVar9 + 0x30);
  if ((int)uVar1 < *(int *)(lVar9 + 0x30)) {
    if (*(int *)(lVar9 + 0x78) == 0) {
      uVar8 = uVar1;
    }
    else {
      uVar8 = *(uint *)(*(long *)(lVar9 + 0x70) + (ulong)uVar1 * 4);
      if (uVar8 == 0xffffffff) {
        lVar9 = *(long *)(lVar9 + 0x28) + (ulong)uVar1 * 0x14;
        goto LAB_03078760;
      }
    }
    lVar9 = *(long *)(lVar9 + 0xc0);
  }
  else {
    lVar9 = *(long *)(lVar9 + 0xe0);
  }
  lVar9 = lVar9 + (long)(int)uVar8 * 0x14;
LAB_03078760:
  if ((*(byte *)(lVar9 + 0x10) >> 4 & 1) == 0) {
    sVar3 = (short)uVar1 - (short)*puVar6;
  }
  else {
    sVar3 = ((short)uVar1 - (short)puVar6[1]) + *(short *)(puVar6 + 2);
  }
  *(short *)(param_1 + 2) = sVar3;
  return;
}


