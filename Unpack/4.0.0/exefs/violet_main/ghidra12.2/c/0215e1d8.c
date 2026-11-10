/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0215e1d8; name: FUN_0215e1d8
 */


void FUN_0215e1d8(long param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  long lVar10;
  int local_78 [30];
  
  iVar1 = *(int *)(param_1 + 0xf0);
  if (4 < iVar1) {
    iVar1 = 5;
  }
  uVar6 = (ulong)(iVar1 - 1U);
  uVar2 = iVar1 - 2;
  if (1 < iVar1) {
    lVar10 = uVar6 + 1;
    piVar8 = (int *)(param_1 + uVar6 * 8);
    do {
      lVar10 = lVar10 + -1;
      local_78[uVar2] = *(int *)(param_1 + (ulong)uVar2 * 8) - *piVar8;
      uVar2 = uVar2 - 1;
      piVar8 = piVar8 + -2;
    } while (1 < lVar10);
  }
  lVar10 = (long)(int)(iVar1 - 1U);
  do {
    uVar4 = uVar6;
    if ((int)uVar4 < 1) {
      *param_2 = 0;
      goto LAB_0215e28c;
    }
    lVar10 = lVar10 + -1;
    iVar1 = iVar1 + -1;
    uVar6 = uVar4 - 1;
  } while (local_78[(int)uVar4 - 1] == 0);
  iVar3 = local_78[0];
  if (iVar1 != 1) {
    if (iVar1 == 2) {
      if (0 < local_78[0] * local_78[1]) {
        iVar1 = local_78[0] + local_78[1];
        if (iVar1 < 0) {
          iVar1 = iVar1 + 1;
        }
        iVar3 = iVar1 >> 1;
      }
    }
    else {
      iVar1 = 0;
      lVar5 = uVar4 + 1;
      iVar3 = 0;
      do {
        iVar1 = local_78[lVar10] + iVar1;
        if (local_78[(int)lVar10 - 1] * local_78[lVar10] < 1) {
          if (2 < lVar10 + 1) goto LAB_0215e28c;
          iVar7 = iVar3 + 1;
        }
        else {
          iVar7 = iVar3 + 2;
          if (lVar10 == 1) {
            iVar1 = iVar1 + local_78[(int)lVar10 - 1];
          }
          else {
            iVar7 = iVar3 + 1;
          }
        }
        lVar5 = lVar5 + -1;
        lVar10 = lVar10 + -1;
        iVar3 = iVar7;
      } while (2 < lVar5);
      if (iVar7 < 1) goto LAB_0215e28c;
      iVar3 = 0;
      if (iVar7 != 0) {
        iVar3 = iVar1 / iVar7;
      }
    }
  }
  *param_2 = iVar3;
LAB_0215e28c:
  iVar1 = *(int *)(param_1 + 0xf0);
  if (4 < iVar1) {
    iVar1 = 5;
  }
  uVar2 = iVar1 - 1;
  uVar6 = (ulong)uVar2;
  if (uVar2 != 0 && 0 < iVar1) {
    lVar10 = uVar6 + 1;
    uVar9 = iVar1 - 2;
    piVar8 = (int *)(param_1 + uVar6 * 8 + 4);
    do {
      lVar10 = lVar10 + -1;
      local_78[uVar9] = *(int *)(param_1 + (ulong)uVar9 * 8 + 4) - *piVar8;
      uVar9 = uVar9 - 1;
      piVar8 = piVar8 + -2;
    } while (1 < lVar10);
  }
  lVar10 = (long)(int)uVar2;
  do {
    uVar4 = uVar6;
    if ((int)uVar4 < 1) {
      *param_3 = 0;
      return;
    }
    lVar10 = lVar10 + -1;
    iVar1 = iVar1 + -1;
    uVar6 = uVar4 - 1;
  } while (local_78[(int)uVar4 - 1] == 0);
  if (iVar1 != 1) {
    if (iVar1 == 2) {
      iVar1 = local_78[0] + local_78[1];
      if (iVar1 < 0) {
        iVar1 = iVar1 + 1;
      }
      if (0 < local_78[0] * local_78[1]) {
        local_78[0] = iVar1 >> 1;
      }
    }
    else {
      iVar1 = 0;
      lVar5 = uVar4 + 1;
      iVar3 = 0;
      do {
        iVar1 = local_78[lVar10] + iVar1;
        if (local_78[(int)lVar10 - 1] * local_78[lVar10] < 1) {
          if (2 < lVar10 + 1) {
            return;
          }
          iVar7 = iVar3 + 1;
        }
        else {
          iVar7 = iVar3 + 2;
          if (lVar10 == 1) {
            iVar1 = iVar1 + local_78[(int)lVar10 - 1];
          }
          else {
            iVar7 = iVar3 + 1;
          }
        }
        lVar5 = lVar5 + -1;
        lVar10 = lVar10 + -1;
        iVar3 = iVar7;
      } while (2 < lVar5);
      if (iVar7 < 1) {
        return;
      }
      local_78[0] = 0;
      if (iVar7 != 0) {
        local_78[0] = iVar1 / iVar7;
      }
    }
  }
  *param_3 = local_78[0];
  return;
}


