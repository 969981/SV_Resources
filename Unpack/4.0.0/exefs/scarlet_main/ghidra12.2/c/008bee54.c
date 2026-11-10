/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008bee54; name: FUN_008bee54
 */


void FUN_008bee54(long *param_1,float *param_2,int *param_3,long param_4,uint *param_5)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  int iVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  fVar21 = *(float *)(param_1 + 1);
  fVar22 = *(float *)((long)param_1 + 0xc);
  iVar3 = *param_3;
  uVar5 = (**(code **)(*param_1 + 0x50))();
  fVar14 = *(float *)(param_1 + 2);
  uVar5 = iVar3 - (~uVar5 & 1);
  if (fVar14 == 0.0 && 0 < (int)uVar5) {
    uVar7 = (ulong)uVar5;
    pfVar2 = param_2;
    do {
      fVar14 = *pfVar2 - pfVar2[2];
      fVar18 = fVar14 * fVar14 + (pfVar2[1] - pfVar2[3]) * (pfVar2[1] - pfVar2[3]);
      fVar14 = SQRT(fVar18);
      if (NAN(fVar14)) {
        fVar14 = sqrtf(fVar18);
      }
      fVar14 = fVar14 + *(float *)(param_1 + 2);
      uVar7 = uVar7 - 1;
      *(float *)(param_1 + 2) = fVar14;
      pfVar2 = pfVar2 + 2;
    } while (uVar7 != 0);
  }
  fVar20 = 0.0;
  fVar22 = fVar22 * fVar14;
  uVar7 = 0xffffffff;
  lVar13 = 0;
  lVar9 = 0;
  uVar8 = 0;
  fVar18 = 0.0;
  do {
    if ((uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU)) == uVar8) {
      return;
    }
    pfVar2 = (float *)((long)param_2 + lVar13);
    fVar16 = (*pfVar2 - pfVar2[2]) * (*pfVar2 - pfVar2[2]) +
             (pfVar2[1] - pfVar2[3]) * (pfVar2[1] - pfVar2[3]);
    fVar15 = SQRT(fVar16);
    if (NAN(fVar15)) {
      fVar15 = sqrtf(fVar16);
    }
    fVar16 = fVar18 + fVar15;
    if (((int)uVar7 < 0) && (fVar21 * fVar14 <= fVar16)) {
      fVar20 = (fVar21 * fVar14 - fVar18) / fVar15;
      uVar7 = uVar8 & 0xffffffff;
    }
    uVar8 = uVar8 + 1;
    lVar9 = lVar9 + 0x100000000;
    lVar13 = lVar13 + 8;
    fVar18 = fVar16;
  } while (fVar16 < fVar22);
  fVar15 = (fVar22 - (fVar16 - fVar15)) / fVar15;
  iVar6 = (int)uVar7;
  pfVar2 = param_2 + (long)iVar6 * 2;
  iVar3 = (int)uVar8;
  lVar10 = (long)iVar6;
  fVar14 = (float)*(undefined8 *)pfVar2;
  fVar22 = (float)((ulong)*(undefined8 *)pfVar2 >> 0x20);
  if (iVar3 + -1 == iVar6) {
    uVar8 = lVar9 >> 0x20;
    uVar17 = *(undefined8 *)((long)param_2 + (lVar9 >> 0x1d));
    fVar21 = (float)uVar17 - fVar14;
    fVar18 = (float)((ulong)uVar17 >> 0x20) - fVar22;
    uVar17 = CONCAT44(fVar18 * fVar15 + fVar22,fVar21 * fVar15 + fVar14);
    *pfVar2 = fVar21 * fVar20 + fVar14;
    param_2[lVar10 * 2 + 1] = fVar18 * fVar20 + fVar22;
  }
  else {
    uVar17 = *(undefined8 *)(param_2 + uVar8 * 2 + -2);
    uVar19 = *(undefined8 *)(param_2 + lVar10 * 2 + 2);
    *pfVar2 = ((float)uVar19 - fVar14) * fVar20 + fVar14;
    param_2[lVar10 * 2 + 1] = ((float)((ulong)uVar19 >> 0x20) - fVar22) * fVar20 + fVar22;
    fVar14 = (float)uVar17;
    fVar22 = (float)((ulong)uVar17 >> 0x20);
    uVar17 = CONCAT44(fVar22 + ((float)((ulong)*(undefined8 *)((long)param_2 + lVar13) >> 0x20) -
                               fVar22) * fVar15,
                      fVar14 + ((float)*(undefined8 *)((long)param_2 + lVar13) - fVar14) * fVar15);
  }
  *(undefined8 *)(param_2 + uVar8 * 2) = uVar17;
  *param_3 = iVar3;
  uVar5 = *param_5;
  if (0 < (int)uVar5) {
    uVar7 = 0;
    piVar11 = (int *)(param_4 + 0x10);
    iVar12 = 0;
    do {
      iVar4 = *piVar11;
      iVar1 = iVar4 + iVar12;
      if ((iVar12 <= iVar6) && (iVar6 < iVar1)) {
        uVar17 = *(undefined8 *)pfVar2;
        *piVar11 = iVar4 - (iVar6 - iVar12);
        *(undefined8 *)(piVar11 + -4) = uVar17;
        *(long *)(piVar11 + -2) = *(long *)(piVar11 + -2) + (long)(iVar6 - iVar12) * 8;
      }
      if (iVar1 <= iVar6) {
        *(undefined1 *)(piVar11 + 1) = 1;
      }
      if (iVar3 + -1 < iVar1) {
        *piVar11 = ((*piVar11 - iVar12) - iVar4) + iVar3;
        uVar5 = (int)uVar7 + 1;
        break;
      }
      uVar7 = uVar7 + 1;
      piVar11 = piVar11 + 6;
      iVar12 = iVar1;
    } while (uVar5 != uVar7);
  }
  *param_5 = uVar5;
  return;
}


