/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008c3e18; name: FUN_008c3e18
 */


void FUN_008c3e18(long param_1,long *param_2,long *param_3,float *param_4,undefined8 *param_5,
                 uint param_6,int param_7)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  uVar19 = NEON_rev64(param_5[6],4);
  fVar16 = (float)param_5[3];
  fVar18 = (float)uVar19;
  fVar17 = (float)((ulong)param_5[3] >> 0x20);
  fVar20 = (float)((ulong)uVar19 >> 0x20);
  fVar21 = (float)DAT_03cb54a0;
  fVar22 = (float)((ulong)DAT_03cb54a0 >> 0x20);
  fVar4 = fVar16 * fVar18 * fVar21 + fVar17 * fVar20 * fVar22;
  if (fVar4 != 0.0) {
    uVar19 = param_5[2];
    uVar15 = param_5[5];
    fVar5 = (float)param_5[4];
    fVar8 = (float)((ulong)param_5[4] >> 0x20);
    fVar12 = (float)param_5[1];
    fVar13 = (float)((ulong)param_5[1] >> 0x20);
    fVar6 = (fVar18 * (fVar5 - fVar12) * fVar21 + fVar20 * (fVar8 - fVar13) * fVar22) / fVar4;
    fVar7 = fVar12 + fVar16 * fVar6;
    fVar9 = fVar13 + fVar17 * fVar6;
    fVar10 = (float)*param_5;
    fVar23 = fVar7 - fVar10;
    fVar11 = (float)((ulong)*param_5 >> 0x20);
    fVar24 = fVar9 - fVar11;
    fVar6 = (float)FUN_008bea60(*(long *)(param_4 + 2) + 0x20);
    if (fVar6 * *param_4 <= SQRT(fVar23 * fVar23 + fVar24 * fVar24)) {
      if ((param_6 & 1) != 0) {
        *(int *)*param_3 = param_7;
        *param_3 = *param_3 + 4;
        *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 1;
        *(int *)*param_3 = param_7 + 1;
        *param_3 = *param_3 + 4;
        *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 1;
      }
    }
    else {
      fVar6 = (float)uVar19;
      fVar24 = (float)uVar15;
      fVar23 = (float)((ulong)uVar19 >> 0x20);
      fVar14 = (float)((ulong)uVar15 >> 0x20);
      piVar2 = (int *)(param_1 + 0xe8);
      *(int *)*param_3 = *piVar2 + -1;
      *param_3 = *param_3 + 4;
      piVar3 = (int *)(param_1 + 0xec);
      *piVar3 = *piVar3 + 1;
      *(int *)*param_3 = *piVar2;
      *param_3 = *param_3 + 4;
      *piVar3 = *piVar3 + 1;
      *(int *)*param_3 = *piVar2;
      *param_3 = *param_3 + 4;
      *piVar3 = *piVar3 + 1;
      *(int *)*param_3 = *piVar2 + 1;
      *param_3 = *param_3 + 4;
      fVar4 = ((fVar24 - fVar6) * fVar18 * fVar21 + (fVar14 - fVar23) * fVar20 * fVar22) / fVar4;
      *piVar3 = *piVar3 + 1;
      *(float *)*param_2 = fVar12;
      *(float *)(*param_2 + 4) = fVar13;
      *param_2 = *param_2 + 8;
      *piVar2 = *piVar2 + 1;
      *(float *)*param_2 = fVar10;
      *(float *)(*param_2 + 4) = fVar11;
      *param_2 = *param_2 + 8;
      iVar1 = *piVar2;
      *piVar2 = iVar1 + 1;
      *(int *)*param_3 = iVar1 + 1;
      *param_3 = *param_3 + 4;
      *piVar3 = *piVar3 + 1;
      *(int *)*param_3 = *piVar2 + 1;
      *param_3 = *param_3 + 4;
      *piVar3 = *piVar3 + 1;
      *(float *)*param_2 = fVar7;
      *(float *)(*param_2 + 4) = fVar9;
      *param_2 = *param_2 + 8;
      *piVar2 = *piVar2 + 1;
      *(float *)*param_2 = fVar5;
      *(float *)(*param_2 + 4) = fVar8;
      *param_2 = *param_2 + 8;
      iVar1 = *piVar2;
      *piVar2 = iVar1 + 1;
      *(int *)*param_3 = iVar1;
      *param_3 = *param_3 + 4;
      *piVar3 = *piVar3 + 1;
      *(int *)*param_3 = *piVar2;
      *param_3 = *param_3 + 4;
      *piVar3 = *piVar3 + 1;
      *(int *)*param_3 = *piVar2;
      *param_3 = *param_3 + 4;
      *piVar3 = *piVar3 + 1;
      *(int *)*param_3 = *piVar2 + 1;
      *param_3 = *param_3 + 4;
      *piVar3 = *piVar3 + 1;
      *(float *)*param_2 = fVar24;
      *(float *)(*param_2 + 4) = fVar14;
      *param_2 = *param_2 + 8;
      *piVar2 = *piVar2 + 1;
      *(float *)*param_2 = fVar6 + fVar16 * fVar4;
      *(float *)(*param_2 + 4) = fVar23 + fVar17 * fVar4;
      *param_2 = *param_2 + 8;
      iVar1 = *piVar2;
      *piVar2 = iVar1 + 1;
      *(int *)*param_3 = iVar1 + 1;
      *param_3 = *param_3 + 4;
      *piVar3 = *piVar3 + 1;
      *(int *)*param_3 = *piVar2 + 1;
      *param_3 = *param_3 + 4;
      *piVar3 = *piVar3 + 1;
      *(float *)*param_2 = fVar10;
      *(float *)(*param_2 + 4) = fVar11;
      *param_2 = *param_2 + 8;
      *piVar2 = *piVar2 + 1;
      *(float *)*param_2 = fVar6;
      *(float *)(*param_2 + 4) = fVar23;
      *param_2 = *param_2 + 8;
      iVar1 = *piVar2;
      *piVar2 = iVar1 + 1;
      if ((param_6 & 1) == 0) {
        *(int *)*param_3 = iVar1;
        *param_3 = *param_3 + 4;
        *piVar3 = *piVar3 + 1;
        *(int *)*param_3 = *piVar2;
        *param_3 = *param_3 + 4;
        *piVar3 = *piVar3 + 1;
      }
    }
  }
  return;
}


