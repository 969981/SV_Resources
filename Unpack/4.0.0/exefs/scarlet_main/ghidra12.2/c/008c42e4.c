/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008c42e4; name: FUN_008c42e4
 */


void FUN_008c42e4(long param_1,long *param_2,long *param_3,float *param_4,undefined8 *param_5,
                 undefined8 *param_6,uint param_7)

{
  float *pfVar1;
  undefined4 uVar2;
  float fVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  
  *(int *)*param_3 = *(int *)(param_1 + 0xe8) + -1;
  *param_3 = *param_3 + 4;
  *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 1;
  *(undefined4 *)*param_3 = *(undefined4 *)(param_1 + 0xe8);
  *param_3 = *param_3 + 4;
  uVar2 = *(undefined4 *)(param_1 + 0xe8);
  *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 1;
  fVar15 = *param_4;
  fVar3 = param_4[1];
  *(int *)*param_2 = (int)*param_5;
  *(int *)(*param_2 + 4) = (int)((ulong)*param_5 >> 0x20);
  *param_2 = *param_2 + 8;
  *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
  fVar11 = (float)*param_6;
  fVar12 = (float)((ulong)*param_6 >> 0x20);
  fVar7 = acosf(fVar11 * (float)DAT_03cb5410 + fVar12 * (float)((ulong)DAT_03cb5410 >> 0x20));
  puVar4 = PTR_SinCosSampleTable_047d2398;
  if (-1 < (int)fVar3) {
    fVar9 = *(float *)PTR_FloatPi_047d2460;
    fVar10 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_047d2388);
    fVar8 = fVar9 + (fVar9 - fVar7);
    if (0.0 <= fVar11 * (float)DAT_03cb5600 * (float)DAT_03cb54a0 +
               fVar12 * (float)((ulong)DAT_03cb5600 >> 0x20) * (float)((ulong)DAT_03cb54a0 >> 0x20))
    {
      fVar8 = fVar7;
    }
    fVar7 = *(float *)PTR_FloatPi_047d23a0;
    iVar5 = (int)fVar3 + 1;
    do {
      fVar11 = (fVar10 / fVar7) * fVar8;
      fVar8 = fVar9 / (float)(int)fVar3 + fVar8;
      uVar17 = *param_5;
      uVar6 = (ulong)fVar11;
      pfVar1 = (float *)(puVar4 + (uVar6 >> 0x18 & 0xff) * 0x10);
      fVar13 = *pfVar1;
      fVar12 = pfVar1[1];
      iVar5 = iVar5 + -1;
      fVar16 = pfVar1[2];
      fVar14 = pfVar1[3];
      *(undefined4 *)*param_3 = uVar2;
      fVar11 = (float)((uint)uVar6 & 0xffffff) * 5.9604645e-08;
      *param_3 = *param_3 + 4;
      *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 1;
      *(undefined4 *)*param_3 = *(undefined4 *)(param_1 + 0xe8);
      *param_3 = *param_3 + 4;
      *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 1;
      *(float *)*param_2 = (float)uVar17 + fVar15 * (fVar13 + fVar16 * fVar11);
      *(float *)(*param_2 + 4) =
           (float)((ulong)uVar17 >> 0x20) - fVar15 * (fVar12 + fVar14 * fVar11);
      *param_2 = *param_2 + 8;
      *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
    } while (iVar5 != 0);
  }
  if ((param_7 & 1) != 0) {
    *(int *)*param_3 = *(int *)(param_1 + 0xe8) + -1;
    *param_3 = *param_3 + 4;
    *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 1;
    *(undefined4 *)*param_3 = *(undefined4 *)(param_1 + 0xe8);
    *param_3 = *param_3 + 4;
    *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 1;
  }
  return;
}


