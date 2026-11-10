/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c6e280; name: FUN_00c6e280
 */


int FUN_00c6e280(uint *param_1,uint *param_2,uint *param_3,uint *param_4,long *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  
  iVar6 = FUN_00c6e440();
  uVar1 = *param_4;
  uVar2 = *param_3;
  lVar8 = *(long *)(*param_5 + 0x60);
  lVar7 = *(long *)(lVar8 + (ulong)uVar1 * 8);
  iVar3 = *(int *)(lVar7 + 0x20);
  lVar8 = *(long *)(lVar8 + (ulong)uVar2 * 8);
  iVar4 = *(int *)(lVar8 + 0x20);
  if (iVar3 == iVar4) {
    fVar9 = *(float *)(lVar7 + 0x24);
    fVar10 = *(float *)(lVar8 + 0x24);
    if (fVar9 == fVar10) {
      if (uVar2 <= uVar1) {
        return iVar6;
      }
    }
    else if (*(int *)(*param_5 + 0x1e0) == 2) {
      if (fVar10 <= fVar9) {
        return iVar6;
      }
    }
    else if (fVar9 <= fVar10) {
      return iVar6;
    }
  }
  else if (iVar4 <= iVar3) {
    return iVar6;
  }
  *param_3 = uVar1;
  iVar3 = iVar6 + 1;
  *param_4 = uVar2;
  uVar1 = *param_3;
  lVar8 = *(long *)(*param_5 + 0x60);
  uVar2 = *param_2;
  lVar7 = *(long *)(lVar8 + (ulong)uVar1 * 8);
  lVar8 = *(long *)(lVar8 + (ulong)uVar2 * 8);
  iVar4 = *(int *)(lVar7 + 0x20);
  iVar5 = *(int *)(lVar8 + 0x20);
  if (iVar4 == iVar5) {
    fVar9 = *(float *)(lVar7 + 0x24);
    fVar10 = *(float *)(lVar8 + 0x24);
    if (fVar9 == fVar10) {
      if (uVar2 <= uVar1) {
        return iVar3;
      }
    }
    else if (*(int *)(*param_5 + 0x1e0) == 2) {
      if (fVar10 <= fVar9) {
        return iVar3;
      }
    }
    else if (fVar9 <= fVar10) {
      return iVar3;
    }
  }
  else if (iVar5 <= iVar4) {
    return iVar3;
  }
  *param_2 = uVar1;
  iVar3 = iVar6 + 2;
  *param_3 = uVar2;
  uVar1 = *param_2;
  lVar8 = *(long *)(*param_5 + 0x60);
  uVar2 = *param_1;
  lVar7 = *(long *)(lVar8 + (ulong)uVar1 * 8);
  lVar8 = *(long *)(lVar8 + (ulong)uVar2 * 8);
  iVar4 = *(int *)(lVar7 + 0x20);
  iVar5 = *(int *)(lVar8 + 0x20);
  if (iVar4 == iVar5) {
    fVar9 = *(float *)(lVar7 + 0x24);
    fVar10 = *(float *)(lVar8 + 0x24);
    if (fVar9 == fVar10) {
      if (uVar2 <= uVar1) {
        return iVar3;
      }
    }
    else if (*(int *)(*param_5 + 0x1e0) == 2) {
      if (fVar10 <= fVar9) {
        return iVar3;
      }
    }
    else if (fVar9 <= fVar10) {
      return iVar3;
    }
  }
  else if (iVar5 <= iVar4) {
    return iVar3;
  }
  *param_1 = uVar1;
  *param_2 = uVar2;
  return iVar6 + 3;
}


