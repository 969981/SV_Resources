/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031cb71c; name: FUN_031cb71c
 */


void FUN_031cb71c(undefined8 *param_1,undefined8 *param_2)

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
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  fVar7 = (float)param_2[3];
  fVar9 = (float)param_1[2];
  fVar10 = (float)((ulong)param_1[2] >> 0x20);
  fVar14 = (float)param_1[3];
  fVar6 = (float)((ulong)param_2[2] >> 0x20);
  fVar3 = (float)param_2[1];
  fVar4 = (float)*param_1;
  fVar8 = (float)((ulong)*param_1 >> 0x20);
  fVar11 = (float)param_1[1];
  fVar2 = (float)((ulong)*param_2 >> 0x20);
  fVar1 = (float)*param_2;
  fVar5 = (float)param_2[2];
  fVar23 = (float)((ulong)param_2[4] >> 0x20);
  fVar19 = (float)param_1[4];
  fVar20 = (float)((ulong)param_1[4] >> 0x20);
  fVar21 = (float)param_1[5];
  fVar24 = (float)param_2[5];
  fVar22 = (float)param_2[4];
  fVar12 = fVar19 * fVar24 + fVar4 * fVar3 + fVar9 * fVar7;
  fVar13 = fVar20 * fVar24 + fVar8 * fVar3 + fVar10 * fVar7;
  fVar15 = fVar21 * fVar24 + fVar11 * fVar3 + fVar14 * fVar7;
  fVar16 = fVar19 * fVar23 + fVar4 * fVar2 + fVar9 * fVar6;
  fVar17 = fVar20 * fVar23 + fVar8 * fVar2 + fVar10 * fVar6;
  fVar18 = fVar21 * fVar23 + fVar11 * fVar2 + fVar14 * fVar6;
  fVar9 = fVar19 * fVar22 + fVar4 * fVar1 + fVar9 * fVar5;
  fVar10 = fVar20 * fVar22 + fVar8 * fVar1 + fVar10 * fVar5;
  fVar11 = fVar21 * fVar22 + fVar11 * fVar1 + fVar14 * fVar5;
  fVar4 = (float)((ulong)param_2[1] >> 0x20);
  fVar8 = (float)((ulong)param_2[3] >> 0x20);
  fVar14 = (float)((ulong)param_2[5] >> 0x20);
  param_1[1] = CONCAT44(fVar14 * fVar11 + fVar4 * fVar9 + fVar8 * fVar10,
                        fVar24 * fVar11 + fVar3 * fVar9 + fVar7 * fVar10);
  *param_1 = CONCAT44(fVar23 * fVar11 + fVar2 * fVar9 + fVar6 * fVar10,
                      fVar22 * fVar11 + fVar1 * fVar9 + fVar5 * fVar10);
  param_1[3] = CONCAT44(fVar14 * fVar18 + fVar4 * fVar16 + fVar8 * fVar17,
                        fVar24 * fVar18 + fVar3 * fVar16 + fVar7 * fVar17);
  param_1[2] = CONCAT44(fVar23 * fVar18 + fVar2 * fVar16 + fVar6 * fVar17,
                        fVar22 * fVar18 + fVar1 * fVar16 + fVar5 * fVar17);
  param_1[5] = CONCAT44(fVar14 * fVar15 + fVar4 * fVar12 + fVar8 * fVar13,
                        fVar24 * fVar15 + fVar3 * fVar12 + fVar7 * fVar13);
  param_1[4] = CONCAT44(fVar23 * fVar15 + fVar2 * fVar12 + fVar6 * fVar13,
                        fVar22 * fVar15 + fVar1 * fVar12 + fVar5 * fVar13);
  return;
}


