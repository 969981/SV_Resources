/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0087f6a0; name: FUN_0087f6a0
 */


undefined4 FUN_0087f6a0(int *param_1,int *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  float *pfVar6;
  int *piVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  
  if (param_1 == (int *)0x0) {
    return 0x80260201;
  }
  if (param_2 == (int *)0x0) {
    return 0x80260201;
  }
  iVar8 = *param_1;
  if (iVar8 == 0x1020001) {
    if (param_1[1] != 0x90) {
      return 0x80260202;
    }
  }
  else {
    if (iVar8 != 0x1010001) {
      return 0x80260202;
    }
    if (param_1[1] != 0x74) {
      return 0x80260202;
    }
  }
  iVar4 = *param_2;
  iVar2 = iVar8;
  if ((iVar4 != 0x1010001) && (iVar4 != 0x1020001)) {
    *param_2 = iVar8;
    param_2[1] = param_1[1];
    iVar2 = *param_1;
    iVar4 = iVar8;
  }
  if (iVar2 != 0x1020001) {
    if (iVar2 != 0x1010001) {
      return 0x80800008;
    }
    if (iVar4 != 0x1020001) {
      if (iVar4 != 0x1010001) {
        return 0x80800008;
      }
      if (2 < param_1[2] - 1U) {
        return 0x80800008;
      }
      param_2[2] = param_1[2];
      if (7 < (uint)param_1[6]) {
        return 0x80800008;
      }
      param_2[6] = param_1[6];
      uVar3 = param_1[3];
      if (2 < uVar3) {
        return 0x80800008;
      }
      if ((param_3 == 1) && (uVar3 != 1)) {
        return 0x80800008;
      }
      param_2[3] = uVar3;
      if (1 < (uint)param_1[5]) {
        return 0x80800008;
      }
      param_2[5] = param_1[5];
      iVar8 = FUN_00880d60(param_1[4],0,0x42c80000);
      param_2[4] = iVar8;
      if (param_1[7] != 0) {
        return 0x80800008;
      }
      if (param_1[8] != 0) {
        return 0x80800008;
      }
      param_2[7] = 0;
      param_2[8] = param_1[8];
      if (param_2[2] != 1) {
        uVar5 = 0;
        do {
          fVar9 = (float)FUN_00880d60(param_1[uVar5 + 9],0x41200000,0x46bb8000);
          param_2[uVar5 + 9] = (int)fVar9;
          if ((uVar5 != 0) && (fVar9 <= (float)param_2[(ulong)((int)uVar5 - 1) + 9])) {
            return 0x80800008;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < param_2[2] - 1);
        if (param_2[2] == 0) {
          uVar3 = 0;
          goto LAB_0087fde0;
        }
      }
      uVar5 = 0;
      pfVar6 = (float *)(param_2 + 0x10);
      param_1 = param_1 + 0x10;
      do {
        fVar9 = (float)FUN_00880d60(param_1[-5],0xc2700000,0);
        pfVar6[-5] = fVar9;
        fVar9 = (float)FUN_00880d60(param_1[-4],0x3f800000,0x41f00000);
        pfVar6[-4] = fVar9;
        fVar9 = (float)FUN_00880d60(param_1[-3],0,0x3f000000);
        pfVar6[-3] = fVar9;
        fVar9 = (float)FUN_00880d60(param_1[-2],0,0x40a00000);
        pfVar6[-2] = fVar9;
        fVar9 = (float)FUN_00880d60(param_1[-1],0xc1900000,0x41900000);
        pfVar6[-1] = fVar9;
        fVar9 = (float)FUN_00880d60(*param_1,0,0x41a00000);
        fVar10 = ABS(pfVar6[-5] + pfVar6[-5]);
        *pfVar6 = fVar9;
        if (fVar10 < fVar9) {
          *pfVar6 = fVar10;
        }
        uVar3 = param_2[2];
        uVar5 = uVar5 + 1;
        pfVar6 = pfVar6 + 6;
        param_1 = param_1 + 6;
      } while (uVar5 < uVar3);
      if (2 < uVar3) {
        return 0;
      }
LAB_0087fde0:
      iVar8 = uVar3 - 3;
      param_2 = param_2 + (ulong)uVar3 * 6 + 0x10;
      do {
        param_2[-5] = -0x3e600000;
        param_2[-4] = 0x40000000;
        bVar1 = iVar8 != -1;
        iVar8 = iVar8 + 1;
        param_2[-3] = 0;
        param_2[-2] = 0;
        param_2[-1] = 0x3f800000;
        param_2[0] = 0;
        param_2 = param_2 + 6;
      } while (bVar1);
      return 0;
    }
    if (2 < param_1[2] - 1U) {
      return 0x80800008;
    }
    param_2[2] = param_1[2];
    if (0xf < (uint)param_1[6]) {
      return 0x80800008;
    }
    param_2[6] = param_1[6];
    if (2 < (uint)param_1[3]) {
      return 0x80800008;
    }
    param_2[3] = param_1[3];
    if (1 < (uint)param_1[5]) {
      return 0x80800008;
    }
    param_2[5] = param_1[5];
    iVar8 = FUN_00880d60(param_1[4],0,0x42c80000);
    param_2[4] = iVar8;
    if (param_1[7] != 0) {
      return 0x80800008;
    }
    if (param_1[8] != 0) {
      return 0x80800008;
    }
    param_2[7] = 0;
    param_2[8] = param_1[8];
    if (param_1[2] != 1) {
      uVar5 = 0;
      do {
        fVar9 = (float)FUN_00880d60(param_1[uVar5 + 9],0x41200000,0x46bb8000);
        param_2[uVar5 + 9] = (int)fVar9;
        if ((uVar5 != 0) && (fVar9 <= (float)param_2[(ulong)((int)uVar5 - 1) + 9])) {
          return 0x80800008;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < param_1[2] - 1);
      if (param_1[2] == 0) {
        uVar3 = 0;
        goto LAB_0087fd60;
      }
    }
    uVar5 = 0;
    pfVar6 = (float *)(param_2 + 0x11);
    piVar7 = param_1 + 0x10;
    do {
      fVar9 = (float)FUN_00880d60(piVar7[-5],0xc2700000,0);
      pfVar6[-5] = fVar9;
      fVar9 = (float)FUN_00880d60(piVar7[-4],0x3f800000,0x41f00000);
      pfVar6[-4] = fVar9;
      fVar9 = (float)FUN_00880d60(piVar7[-3],0,0x3f000000);
      pfVar6[-3] = fVar9;
      fVar9 = (float)FUN_00880d60(piVar7[-2],0,0x40a00000);
      pfVar6[-2] = fVar9;
      fVar9 = (float)FUN_00880d60(piVar7[-1],0xc1900000,0x41900000);
      pfVar6[-1] = fVar9;
      fVar9 = (float)FUN_00880d60(*piVar7,0,0x41a00000);
      fVar10 = ABS(pfVar6[-5] + pfVar6[-5]);
      *pfVar6 = fVar9;
      if (fVar10 < fVar9) {
        *pfVar6 = fVar10;
      }
      uVar3 = param_1[2];
      uVar5 = uVar5 + 1;
      pfVar6 = pfVar6 + 6;
      piVar7 = piVar7 + 6;
    } while (uVar5 < uVar3);
    if (3 < uVar3) {
      return 0;
    }
LAB_0087fd60:
    iVar8 = uVar3 - 4;
    param_2 = param_2 + (ulong)uVar3 * 6 + 0x11;
    do {
      param_2[-5] = -0x3e600000;
      param_2[-4] = 0x40000000;
      bVar1 = iVar8 != -1;
      iVar8 = iVar8 + 1;
      param_2[-3] = 0;
      param_2[-2] = 0;
      param_2[-1] = 0x3f800000;
      param_2[0] = 0;
      param_2 = param_2 + 6;
    } while (bVar1);
    return 0;
  }
  if (iVar4 != 0x1020001) {
    return 0x80800008;
  }
  if (3 < param_1[2] - 1U) {
    return 0x80800008;
  }
  param_2[2] = param_1[2];
  if (0xf < (uint)param_1[6]) {
    return 0x80800008;
  }
  param_2[6] = param_1[6];
  uVar3 = param_1[3];
  if (2 < uVar3) {
    return 0x80800008;
  }
  if ((param_3 == 1) && (uVar3 != 1)) {
    return 0x80800008;
  }
  param_2[3] = uVar3;
  if (1 < (uint)param_1[5]) {
    return 0x80800008;
  }
  param_2[5] = param_1[5];
  iVar8 = FUN_00880d60(param_1[4],0,0x42c80000);
  param_2[4] = iVar8;
  if (param_1[7] != 0) {
    return 0x80800008;
  }
  if (param_1[8] != 0) {
    return 0x80800008;
  }
  param_2[7] = 0;
  param_2[8] = param_1[8];
  if (param_2[2] != 1) {
    uVar5 = 0;
    do {
      fVar9 = (float)FUN_00880d60(param_1[uVar5 + 9],0x41200000,0x46bb8000);
      param_2[uVar5 + 9] = (int)fVar9;
      if ((uVar5 != 0) && (fVar9 <= (float)param_2[(ulong)((int)uVar5 - 1) + 9])) {
        return 0x80800008;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < param_2[2] - 1);
    if (param_2[2] == 0) {
      uVar3 = 0;
      goto LAB_0087fda0;
    }
  }
  uVar5 = 0;
  pfVar6 = (float *)(param_2 + 0x11);
  param_1 = param_1 + 0x11;
  do {
    fVar9 = (float)FUN_00880d60(param_1[-5],0xc2700000,0);
    pfVar6[-5] = fVar9;
    fVar9 = (float)FUN_00880d60(param_1[-4],0x3f800000,0x41f00000);
    pfVar6[-4] = fVar9;
    fVar9 = (float)FUN_00880d60(param_1[-3],0,0x3f000000);
    pfVar6[-3] = fVar9;
    fVar9 = (float)FUN_00880d60(param_1[-2],0,0x40a00000);
    pfVar6[-2] = fVar9;
    fVar9 = (float)FUN_00880d60(param_1[-1],0xc1900000,0x41900000);
    pfVar6[-1] = fVar9;
    fVar9 = (float)FUN_00880d60(*param_1,0,0x41a00000);
    fVar10 = ABS(pfVar6[-5] + pfVar6[-5]);
    *pfVar6 = fVar9;
    if (fVar10 < fVar9) {
      *pfVar6 = fVar10;
    }
    uVar3 = param_2[2];
    uVar5 = uVar5 + 1;
    pfVar6 = pfVar6 + 6;
    param_1 = param_1 + 6;
  } while (uVar5 < uVar3);
  if (3 < uVar3) {
    return 0;
  }
LAB_0087fda0:
  iVar8 = uVar3 - 4;
  param_2 = param_2 + (ulong)uVar3 * 6 + 0x11;
  do {
    param_2[-5] = -0x3e600000;
    param_2[-4] = 0x40000000;
    bVar1 = iVar8 != -1;
    iVar8 = iVar8 + 1;
    param_2[-3] = 0;
    param_2[-2] = 0;
    param_2[-1] = 0x3f800000;
    param_2[0] = 0;
    param_2 = param_2 + 6;
  } while (bVar1);
  return 0;
}


