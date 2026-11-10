/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008c0208; name: FUN_008c0208
 */


int FUN_008c0208(long *param_1,long *param_2,int *param_3,long *param_4,int *param_5,float *param_6)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  float *pfVar11;
  float *pfVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int local_48;
  int local_44;
  
  iVar3 = *param_3;
  pfVar12 = (float *)*param_2;
  local_44 = 0;
  fVar14 = *(float *)(param_1 + 7);
  if (fVar14 <= 0.0) {
    fVar19 = *(float *)((long)param_1 + 0x34) * 0.5;
    fVar16 = *(float *)(param_1 + 6) * 0.5;
    fVar15 = fVar16;
    if (fVar14 <= fVar16) {
      fVar15 = fVar14;
    }
    fVar14 = fVar19;
    if (fVar15 <= fVar19) {
      fVar14 = fVar15;
    }
    fVar17 = *(float *)(param_1 + 5) + (fVar16 - fVar14);
    fVar15 = *(float *)((long)param_1 + 0x2c) - (fVar19 - fVar14);
    *pfVar12 = fVar17;
    *(float *)(*param_2 + 4) = fVar15;
    *param_2 = *param_2 + 8;
    *param_3 = *param_3 + 1;
    fVar16 = *(float *)(param_1 + 6) * 0.5;
    fVar19 = *(float *)((long)param_1 + 0x34) * 0.5;
    fVar14 = fVar16;
    if (*(float *)(param_1 + 7) <= fVar16) {
      fVar14 = *(float *)(param_1 + 7);
    }
    fVar20 = fVar19;
    if (fVar14 <= fVar19) {
      fVar20 = fVar14;
    }
    fVar14 = *(float *)(param_1 + 5) - (fVar16 - fVar20);
    pfVar9 = (float *)*param_2;
    fVar16 = *(float *)((long)param_1 + 0x2c) - (fVar19 - fVar20);
    *pfVar9 = fVar14;
    *(float *)(*param_2 + 4) = fVar16;
    *param_2 = *param_2 + 8;
    *param_3 = *param_3 + 1;
    bVar2 = (*(byte *)(param_1[4] + 4) >> 1 & 1) != 0;
    if (bVar2) {
      *(float **)(param_6 + 2) = pfVar9;
      *param_6 = fVar17;
      param_6[1] = fVar15;
      param_6[4] = 1.4013e-45;
      *(undefined1 *)(param_6 + 5) = 0;
    }
    uVar7 = (ulong)bVar2;
    fVar17 = *(float *)((long)param_1 + 0x34) * 0.5;
    fVar19 = *(float *)(param_1 + 6) * 0.5;
    fVar15 = fVar19;
    if (*(float *)(param_1 + 7) <= fVar19) {
      fVar15 = *(float *)(param_1 + 7);
    }
    fVar20 = fVar17;
    if (fVar15 <= fVar17) {
      fVar20 = fVar15;
    }
    fVar15 = *(float *)(param_1 + 5) - (fVar19 - fVar20);
    pfVar9 = (float *)*param_2;
    fVar19 = *(float *)((long)param_1 + 0x2c) + (fVar17 - fVar20);
    *pfVar9 = fVar15;
    *(float *)(*param_2 + 4) = fVar19;
    *param_2 = *param_2 + 8;
    *param_3 = *param_3 + 1;
    if ((*(byte *)(param_1[4] + 4) >> 1 & 1) != 0) {
      pfVar11 = param_6 + uVar7 * 6;
      uVar7 = (ulong)(bVar2 + 1);
      *pfVar11 = fVar14;
      pfVar11[1] = fVar16;
      *(float **)(pfVar11 + 2) = pfVar9;
      pfVar11[4] = 1.4013e-45;
      *(undefined1 *)(pfVar11 + 5) = 0;
    }
    fVar17 = *(float *)((long)param_1 + 0x34) * 0.5;
    fVar16 = *(float *)(param_1 + 6) * 0.5;
    fVar14 = fVar16;
    if (*(float *)(param_1 + 7) <= fVar16) {
      fVar14 = *(float *)(param_1 + 7);
    }
    fVar20 = fVar17;
    if (fVar14 <= fVar17) {
      fVar20 = fVar14;
    }
    fVar14 = *(float *)(param_1 + 5) + (fVar16 - fVar20);
    pfVar9 = (float *)*param_2;
    fVar16 = *(float *)((long)param_1 + 0x2c) + (fVar17 - fVar20);
    *pfVar9 = fVar14;
    *(float *)(*param_2 + 4) = fVar16;
    *param_2 = *param_2 + 8;
    *param_3 = *param_3 + 1;
    if ((*(byte *)(param_1[4] + 4) >> 1 & 1) != 0) {
      pfVar11 = param_6 + uVar7 * 6;
      uVar7 = (ulong)((int)uVar7 + 1);
      *pfVar11 = fVar15;
      pfVar11[1] = fVar19;
      *(float **)(pfVar11 + 2) = pfVar9;
      pfVar11[4] = 1.4013e-45;
      *(undefined1 *)(pfVar11 + 5) = 0;
    }
    local_44 = (int)uVar7;
    fVar17 = *(float *)(param_1 + 6) * 0.5;
    fVar19 = *(float *)((long)param_1 + 0x34) * 0.5;
    fVar20 = *(float *)((long)param_1 + 0x2c);
    fVar15 = fVar17;
    if (*(float *)(param_1 + 7) <= fVar17) {
      fVar15 = *(float *)(param_1 + 7);
    }
    fVar18 = fVar19;
    if (fVar15 <= fVar19) {
      fVar18 = fVar15;
    }
    pfVar9 = (float *)*param_2;
    *pfVar9 = *(float *)(param_1 + 5) + (fVar17 - fVar18);
    *(float *)(*param_2 + 4) = fVar20 - (fVar19 - fVar18);
    *param_2 = *param_2 + 8;
    iVar8 = *param_3 + 1;
    *param_3 = iVar8;
    if ((*(byte *)(param_1[4] + 4) >> 1 & 1) != 0) {
      pfVar11 = param_6 + uVar7 * 6;
      local_44 = local_44 + 1;
      *(float **)(pfVar11 + 2) = pfVar9;
      *pfVar11 = fVar14;
      pfVar11[1] = fVar16;
      pfVar11[4] = 1.4013e-45;
      *(undefined1 *)(pfVar11 + 5) = 0;
      iVar8 = *param_3;
    }
    iVar8 = iVar8 - iVar3;
  }
  else {
    FUN_008bff34(param_1,param_2,param_3);
    iVar8 = *param_3 - iVar3;
    if ((*(byte *)(param_1[4] + 4) >> 1 & 1) != 0) {
      uVar13 = *(undefined8 *)pfVar12;
      param_6[4] = (float)(iVar8 + -1);
      *(float **)(param_6 + 2) = pfVar12 + 2;
      *(undefined8 *)param_6 = uVar13;
      *(undefined1 *)(param_6 + 5) = 0;
      local_44 = 1;
    }
  }
  iVar8 = iVar8 + -1;
  local_48 = iVar8;
  uVar7 = (**(code **)(*param_1 + 0x58))(param_1);
  iVar4 = iVar3;
  iVar5 = iVar8;
  if ((uVar7 & 1) != 0) {
    uVar6 = FUN_008bee54(param_1,pfVar12,&local_48,param_6,&local_44);
    uVar6 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
    iVar8 = local_48 - uVar6;
    iVar4 = uVar6 + iVar3;
    iVar5 = local_48;
  }
  if ((0 < iVar8) && ((*(ushort *)(param_1[4] + 4) & 1) != 0)) {
    iVar10 = 0;
    do {
      *(int *)*param_4 = iVar4;
      *param_4 = *param_4 + 4;
      *param_5 = *param_5 + 1;
      iVar1 = iVar4 + iVar10;
      iVar10 = iVar10 + 1;
      *(int *)*param_4 = iVar1;
      *param_4 = *param_4 + 4;
      *param_5 = *param_5 + 1;
      *(int *)*param_4 = iVar1 + 1;
      *param_4 = *param_4 + 4;
      *param_5 = *param_5 + 1;
    } while (iVar8 != iVar10);
  }
  *param_2 = (long)(pfVar12 + (long)(iVar5 + 1) * 2);
  *param_3 = iVar5 + 1 + iVar3;
  return local_44;
}


