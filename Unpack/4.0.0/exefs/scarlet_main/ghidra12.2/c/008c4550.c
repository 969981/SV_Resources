/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008c4550; name: FUN_008c4550
 */


void FUN_008c4550(long param_1,long *param_2,long *param_3,float *param_4,undefined8 *param_5,
                 ulong *param_6,ulong *param_7,uint param_8)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  
  if (*(int *)(*(long *)(param_4 + 2) + 4) == 2) {
    *(undefined4 *)*param_3 = *(undefined4 *)(param_1 + 0xe8);
    *param_3 = *param_3 + 4;
    *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 1;
    *(int *)*param_3 = *(int *)(param_1 + 0xe8) + 1;
    *param_3 = *param_3 + 4;
    *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 1;
    uVar8 = *param_7;
    iVar4 = -(uint)((param_8 & 1) != 0);
    uVar8 = uVar8 ^ (uVar8 ^ CONCAT44(0.0 - (float)(uVar8 >> 0x20),0.0 - (float)uVar8)) &
                    CONCAT44(iVar4,iVar4);
    fVar15 = *param_4;
    fVar7 = (float)*param_5 + (float)uVar8 * fVar15;
    fVar5 = (float)((ulong)*param_5 >> 0x20) + (float)(uVar8 >> 0x20) * fVar15;
    fVar11 = (float)*param_6 * fVar15;
    fVar15 = (float)(*param_6 >> 0x20) * fVar15;
    *(float *)*param_2 = fVar11 + fVar7;
    *(float *)(*param_2 + 4) = fVar15 + fVar5;
    *param_2 = *param_2 + 8;
    *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
    *(float *)*param_2 = fVar7 - fVar11;
    *(float *)(*param_2 + 4) = fVar5 - fVar15;
    *param_2 = *param_2 + 8;
    *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
  }
  else if (*(int *)(*(long *)(param_4 + 2) + 4) == 1) {
    iVar4 = -(uint)((param_8 & 1) != 0);
    uVar8 = *param_6;
    uVar8 = uVar8 ^ (uVar8 ^ CONCAT44(0.0 - (float)(uVar8 >> 0x20),0.0 - (float)uVar8)) &
                    CONCAT44(iVar4,iVar4);
    fVar15 = *param_4;
    fVar7 = param_4[1];
    uVar2 = *(undefined4 *)(param_1 + 0xe8);
    *(undefined4 *)*param_2 = *(undefined4 *)param_5;
    *(undefined4 *)(*param_2 + 4) = *(undefined4 *)((long)param_5 + 4);
    *param_2 = *param_2 + 8;
    *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
    fVar11 = (float)uVar8;
    fVar12 = (float)(uVar8 >> 0x20);
    fVar5 = acosf(fVar11 * (float)DAT_03cb5410 + fVar12 * (float)((ulong)DAT_03cb5410 >> 0x20));
    puVar3 = PTR_SinCosSampleTable_047d2398;
    if (-1 < (int)fVar7) {
      fVar9 = *(float *)PTR_FloatPi_047d2460;
      fVar10 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_047d2388);
      fVar6 = fVar9 + (fVar9 - fVar5);
      if (0.0 <= fVar11 * (float)DAT_03cb5600 * (float)DAT_03cb54a0 +
                 fVar12 * (float)((ulong)DAT_03cb5600 >> 0x20) *
                 (float)((ulong)DAT_03cb54a0 >> 0x20)) {
        fVar6 = fVar5;
      }
      fVar5 = *(float *)PTR_FloatPi_047d23a0;
      iVar4 = (int)fVar7 + 1;
      do {
        fVar11 = (fVar10 / fVar5) * fVar6;
        fVar6 = fVar9 / (float)(int)fVar7 + fVar6;
        uVar17 = *param_5;
        uVar8 = (ulong)fVar11;
        pfVar1 = (float *)(puVar3 + (uVar8 >> 0x18 & 0xff) * 0x10);
        fVar13 = *pfVar1;
        fVar12 = pfVar1[1];
        iVar4 = iVar4 + -1;
        fVar16 = pfVar1[2];
        fVar14 = pfVar1[3];
        *(undefined4 *)*param_3 = uVar2;
        fVar11 = (float)((uint)uVar8 & 0xffffff) * 5.9604645e-08;
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
      } while (iVar4 != 0);
    }
  }
  return;
}


