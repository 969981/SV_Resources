/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03423e4c; name: FUN_03423e4c
 */


void FUN_03423e4c(float *param_1,undefined8 *param_2,uint param_3)

{
  undefined8 uVar1;
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
  
  if (param_2[(ulong)param_3 * 0x52 + 0x6a] == 0) {
    uVar1 = *param_2;
    param_1[2] = *(float *)(param_2 + 1);
    *(undefined8 *)param_1 = uVar1;
  }
  else {
    fVar3 = *(float *)((long)param_2 + 0x2c);
    fVar2 = *(float *)(param_2 + 5);
    fVar13 = *(float *)((long)param_2 + (ulong)param_3 * 0x290 + 0x154);
    fVar4 = *(float *)(param_2 + (ulong)param_3 * 0x52 + 0x39) * 0.5;
    fVar16 = *(float *)(param_2 + (ulong)param_3 * 0x52 + 0x2c);
    fVar8 = *(float *)((long)param_2 + (ulong)param_3 * 0x290 + 0x164);
    fVar14 = *(float *)(param_2 + (ulong)param_3 * 0x52 + 0x2b);
    fVar17 = *(float *)(param_2 + (ulong)param_3 * 0x52 + 0x3c);
    fVar15 = *(float *)(param_2 + (ulong)param_3 * 0x52 + 0x49) * 0.5;
    fVar18 = *(float *)((long)param_2 + (ulong)param_3 * 0x290 + 0x1e4);
    fVar19 = *(float *)((long)param_2 + (ulong)param_3 * 0x290 + 0x1d4);
    fVar20 = *(float *)(param_2 + (ulong)param_3 * 0x52 + 0x3b);
    fVar21 = *(float *)(param_2 + (ulong)param_3 * 0x52 + 0x4c);
    fVar11 = *(float *)(param_2 + (ulong)param_3 * 0x52 + 0x59) * 0.5;
    fVar22 = *(float *)((long)param_2 + (ulong)param_3 * 0x290 + 0x264);
    fVar23 = *(float *)((long)param_2 + (ulong)param_3 * 0x290 + 0x254);
    fVar24 = *(float *)(param_2 + (ulong)param_3 * 0x52 + 0x4b);
    fVar9 = *(float *)(param_2 + (ulong)param_3 * 0x52 + 0x5c);
    fVar5 = *(float *)(param_2 + (ulong)param_3 * 0x52 + 0x69) * 0.5;
    fVar10 = *(float *)((long)param_2 + (ulong)param_3 * 0x290 + 0x2e4);
    fVar6 = *(float *)((long)param_2 + (ulong)param_3 * 0x290 + 0x2d4);
    fVar12 = *(float *)(param_2 + (ulong)param_3 * 0x52 + 0x5b);
    fVar7 = *(float *)(&DAT_03cb5668 + (ulong)(param_3 == 0) * 4);
    *param_1 = (*(float *)(param_2 + (ulong)param_3 * 0x52 + 0x2a) +
                fVar4 * *(float *)((long)param_2 + (ulong)param_3 * 0x290 + 0x15c) +
                fVar15 * *(float *)((long)param_2 + (ulong)param_3 * 0x290 + 0x1dc) +
                *(float *)(param_2 + (ulong)param_3 * 0x52 + 0x3a) +
                fVar11 * *(float *)((long)param_2 + (ulong)param_3 * 0x290 + 0x25c) +
                *(float *)(param_2 + (ulong)param_3 * 0x52 + 0x4a) +
                fVar5 * *(float *)((long)param_2 + (ulong)param_3 * 0x290 + 0x2dc) +
               *(float *)(param_2 + (ulong)param_3 * 0x52 + 0x5a)) * 0.25 +
               fVar7 * *(float *)((long)param_2 + 0x24);
    param_1[1] = (fVar13 + fVar4 * fVar16 + fVar15 * fVar17 + fVar19 + fVar11 * fVar21 + fVar23 +
                  fVar5 * fVar9 + fVar6) * 0.25 + fVar7 * fVar2;
    param_1[2] = (fVar14 + fVar4 * fVar8 + fVar15 * fVar18 + fVar20 + fVar11 * fVar22 + fVar24 +
                  fVar5 * fVar10 + fVar12) * 0.25 + fVar7 * fVar3;
  }
  return;
}


