/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031cc228; name: FUN_031cc228
 */


void FUN_031cc228(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar11;
  float fVar12;
  undefined8 uVar10;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  fVar11 = (float)((ulong)param_3[6] >> 0x20);
  fVar1 = (float)param_2[2];
  fVar3 = (float)((ulong)param_2[2] >> 0x20);
  fVar5 = (float)param_2[3];
  fVar7 = (float)((ulong)param_2[3] >> 0x20);
  fVar15 = (float)param_3[6];
  fVar2 = (float)*param_2;
  fVar4 = (float)((ulong)*param_2 >> 0x20);
  fVar6 = (float)param_2[1];
  fVar8 = (float)((ulong)param_2[1] >> 0x20);
  fVar13 = (float)param_3[7];
  fVar17 = (float)param_2[4];
  fVar18 = (float)((ulong)param_2[4] >> 0x20);
  fVar19 = (float)param_2[5];
  fVar20 = (float)((ulong)param_2[5] >> 0x20);
  fVar9 = fVar17 * fVar13 + fVar2 * fVar15 + fVar1 * fVar11;
  fVar12 = fVar18 * fVar13 + fVar4 * fVar15 + fVar3 * fVar11;
  fVar14 = fVar19 * fVar13 + fVar6 * fVar15 + fVar5 * fVar11;
  fVar15 = fVar20 * fVar13 + fVar8 * fVar15 + fVar7 * fVar11;
  param_1[7] = CONCAT44(fVar15,fVar14);
  param_1[6] = CONCAT44(fVar12,fVar9);
  fVar11 = (float)param_3[4];
  fVar13 = (float)((ulong)param_3[4] >> 0x20);
  fVar16 = (float)param_3[5];
  param_1[5] = CONCAT44(fVar20 * fVar16 + fVar8 * fVar11 + fVar7 * fVar13,
                        fVar19 * fVar16 + fVar6 * fVar11 + fVar5 * fVar13);
  param_1[4] = CONCAT44(fVar18 * fVar16 + fVar4 * fVar11 + fVar3 * fVar13,
                        fVar17 * fVar16 + fVar2 * fVar11 + fVar1 * fVar13);
  fVar11 = (float)param_3[2];
  fVar13 = (float)((ulong)param_3[2] >> 0x20);
  fVar16 = (float)param_3[3];
  param_1[3] = CONCAT44(fVar20 * fVar16 + fVar8 * fVar11 + fVar7 * fVar13,
                        fVar19 * fVar16 + fVar6 * fVar11 + fVar5 * fVar13);
  param_1[2] = CONCAT44(fVar18 * fVar16 + fVar4 * fVar11 + fVar3 * fVar13,
                        fVar17 * fVar16 + fVar2 * fVar11 + fVar1 * fVar13);
  fVar11 = (float)*param_3;
  fVar13 = (float)((ulong)*param_3 >> 0x20);
  fVar16 = (float)param_3[1];
  param_1[1] = CONCAT44(fVar20 * fVar16 + fVar8 * fVar11 + fVar7 * fVar13,
                        fVar19 * fVar16 + fVar6 * fVar11 + fVar5 * fVar13);
  *param_1 = CONCAT44(fVar18 * fVar16 + fVar4 * fVar11 + fVar3 * fVar13,
                      fVar17 * fVar16 + fVar2 * fVar11 + fVar1 * fVar13);
  fVar9 = fVar9 + (float)param_2[8];
  fVar12 = fVar12 + (float)((ulong)param_2[8] >> 0x20);
  fVar14 = fVar14 + (float)param_2[9];
  fVar15 = fVar15 + (float)((ulong)param_2[9] >> 0x20);
  fVar2 = (float)param_2[6] + fVar9;
  fVar4 = (float)((ulong)param_2[6] >> 0x20) + fVar12;
  fVar6 = (float)param_2[7] + fVar14;
  fVar8 = (float)((ulong)param_2[7] >> 0x20) + fVar15;
  param_1[7] = CONCAT44(fVar8,fVar6);
  param_1[6] = CONCAT44(fVar4,fVar2);
  uVar10 = param_2[6];
  param_1[9] = CONCAT44(fVar15 - (fVar8 - (float)((ulong)param_2[7] >> 0x20)),
                        fVar14 - (fVar6 - (float)param_2[7]));
  param_1[8] = CONCAT44(fVar12 - (fVar4 - (float)((ulong)uVar10 >> 0x20)),
                        fVar9 - (fVar2 - (float)uVar10));
  return;
}


