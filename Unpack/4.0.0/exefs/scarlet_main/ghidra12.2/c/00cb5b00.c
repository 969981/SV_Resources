/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cb5b00; name: FUN_00cb5b00
 */


void FUN_00cb5b00(long *param_1,int param_2,int param_3,long *param_4,long *param_5,long *param_6)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  void *pvVar8;
  long *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  param_1[2] = 1;
  uVar3 = param_3 * param_2;
  *param_1 = (long)(PTR_DAT_047e3488 + 0x10);
  param_1[1] = 0xffffffff;
  plVar9 = param_1 + 3;
  *plVar9 = 0;
  param_1[4] = -0x8000000000000000;
  plVar7 = param_1 + 5;
  *plVar7 = 0;
  param_1[6] = -0x8000000000000000;
  plVar6 = param_1 + 7;
  *plVar6 = 0;
  param_1[8] = -0x8000000000000000;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(int *)((long)param_1 + 0x54) = param_2;
  *(int *)(param_1 + 0xb) = param_3;
  if ((int)uVar3 < 1) {
    uVar4 = 0;
    *(undefined8 *)((long)param_1 + 0x5c) = 0x7f7fffeeff800000;
  }
  else {
    if (uVar3 == 1) {
      fVar11 = -3.40282e+38;
      fVar10 = 3.40282e+38;
      uVar5 = 0;
    }
    else {
      fVar11 = -3.40282e+38;
      fVar10 = 3.40282e+38;
      uVar5 = 0;
      do {
        pfVar1 = (float *)(*param_4 + uVar5 * 4);
        uVar5 = uVar5 + 2;
        fVar12 = *pfVar1;
        fVar14 = pfVar1[1];
        fVar13 = fVar12;
        if (fVar10 <= fVar12) {
          fVar13 = fVar10;
        }
        if (fVar12 <= fVar11) {
          fVar12 = fVar11;
        }
        fVar10 = fVar14;
        if (fVar13 <= fVar14) {
          fVar10 = fVar13;
        }
        fVar11 = fVar14;
        if (fVar14 <= fVar12) {
          fVar11 = fVar12;
        }
      } while (((ulong)uVar3 & 0xfffffffe) != uVar5);
    }
    fVar13 = fVar10;
    fVar12 = fVar11;
    if ((uVar3 & 1) != 0) {
      fVar13 = *(float *)(*param_4 + uVar5 * 4);
      fVar12 = fVar13;
      if (fVar13 <= fVar11) {
        fVar12 = fVar11;
      }
      if (fVar10 <= fVar13) {
        fVar13 = fVar10;
      }
    }
    *(float *)((long)param_1 + 0x5c) = (fVar12 - fVar13) / 65535.0;
    *(float *)(param_1 + 0xc) = fVar13;
    FUN_02e8bb18(plVar9,PTR_PTR_047d1a50);
    uVar4 = *(uint *)(param_1 + 4);
  }
  if (uVar4 != uVar3) {
    *(uint *)(param_1 + 4) = uVar3;
  }
  uVar3 = *(int *)((long)param_1 + 0x54) * (int)param_1[0xb];
  if (0 < (int)uVar3) {
    uVar5 = 0;
    do {
      *(short *)(*plVar9 + uVar5 * 2) =
           (short)(int)((*(float *)(*param_4 + uVar5 * 4) - *(float *)(param_1 + 0xc)) /
                       *(float *)((long)param_1 + 0x5c));
      uVar5 = uVar5 + 1;
    } while (uVar3 != uVar5);
  }
  if ((param_5 != (long *)0x0) && (plVar7 != param_5)) {
    iVar2 = (int)param_5[1];
    pvVar8 = (void *)*param_5;
    if ((int)(*(uint *)((long)param_1 + 0x34) & 0x7fffffff) < iVar2) {
      FUN_02eb2098(plVar7,PTR_PTR_047d1a50,(long)iVar2);
    }
    memcpy((void *)param_1[5],pvVar8,(long)iVar2 << 1);
    *(int *)(param_1 + 6) = iVar2;
  }
  if (param_6 != (long *)0x0) {
    if (plVar6 != param_6) {
      iVar2 = (int)param_6[1];
      pvVar8 = (void *)*param_6;
      if ((int)(*(uint *)((long)param_1 + 0x44) & 0x7fffffff) < iVar2) {
        FUN_02eb1edc(plVar6,PTR_PTR_047d1a50,(long)iVar2);
      }
      memcpy((void *)param_1[7],pvVar8,(long)iVar2 << 2);
      *(int *)(param_1 + 8) = iVar2;
    }
    *(int *)(param_1 + 9) = (int)param_6[2];
  }
  return;
}


