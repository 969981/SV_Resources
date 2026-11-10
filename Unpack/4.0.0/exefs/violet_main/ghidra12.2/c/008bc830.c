/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008bc830; name: FUN_008bc830
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008bc830(float param_1,undefined1 param_2 [16],float param_3,float param_4,float *param_5,
                 undefined8 param_6,undefined8 *param_7)

{
  float fVar1;
  float extraout_s0;
  float extraout_var;
  float extraout_var_00;
  float extraout_var_01;
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
  
  fVar5 = param_2._12_4_;
  fVar4 = param_2._8_4_;
  fVar3 = param_2._4_4_;
  fVar2 = param_2._0_4_;
  fVar6 = 0.5;
  fVar7 = 0.0;
  fVar9 = 0.0;
  fVar11 = 0.0;
  param_1 = param_1 * 0.5;
  fVar1 = fVar2 * 0.5;
  FUN_008bc150(param_6);
  fVar8 = extraout_s0;
  fVar10 = extraout_var;
  fVar12 = extraout_var_00;
  fVar14 = extraout_var_01;
  if (param_7 != (undefined8 *)0x0) {
    fVar16 = (float)param_7[1];
    fVar14 = (float)*param_7;
    fVar13 = (float)((ulong)*param_7 >> 0x20);
    fVar18 = (float)param_7[2];
    fVar15 = (float)((ulong)param_7[2] >> 0x20);
    fVar17 = (float)param_7[3];
    fVar8 = extraout_s0 * fVar14 + fVar2 * fVar13 + fVar6 * fVar16 + 0.0;
    fVar10 = extraout_var * fVar14 + fVar3 * fVar13 + fVar7 * fVar16 + 0.0;
    fVar12 = extraout_var_00 * fVar14 + fVar4 * fVar13 + fVar9 * fVar16 + 0.0;
    fVar14 = (float)((ulong)param_7[1] >> 0x20) +
             extraout_var_01 * fVar14 + fVar5 * fVar13 + fVar11 * fVar16;
    fVar2 = extraout_s0 * fVar18 + fVar2 * fVar15 + fVar6 * fVar17 + 0.0;
    fVar3 = extraout_var * fVar18 + fVar3 * fVar15 + fVar7 * fVar17 + 0.0;
    fVar4 = extraout_var_00 * fVar18 + fVar4 * fVar15 + fVar9 * fVar17 + 0.0;
    fVar5 = (float)((ulong)param_7[3] >> 0x20) +
            extraout_var_01 * fVar18 + fVar5 * fVar15 + fVar11 * fVar17;
  }
  fVar6 = (float)((ulong)_DAT_03caa5b0 >> 0x20);
  fVar16 = (float)((ulong)_UNK_03caa5b8 >> 0x20);
  fVar9 = fVar8 * 1.0 + fVar10 * 0.0 + (float)_DAT_03caa5b0 * fVar12 + 0.0;
  fVar11 = fVar8 * 0.0 + fVar10 * 1.0 + fVar6 * fVar12 + 0.0;
  fVar13 = fVar8 * 0.0 + fVar10 * 0.0 + (float)_UNK_03caa5b8 * fVar12 + 0.0;
  fVar14 = fVar14 + (param_1 + param_3) * fVar8 + (param_4 - fVar1) * fVar10 + fVar16 * fVar12;
  fVar12 = fVar2 * 1.0 + fVar3 * 0.0 + (float)_DAT_03caa5b0 * fVar4 + 0.0;
  fVar6 = fVar2 * 0.0 + fVar3 * 1.0 + fVar6 * fVar4 + 0.0;
  fVar7 = fVar2 * 0.0 + fVar3 * 0.0 + (float)_UNK_03caa5b8 * fVar4 + 0.0;
  fVar5 = fVar5 + (param_1 + param_3) * fVar2 + (param_4 - fVar1) * fVar3 + fVar16 * fVar4;
  fVar2 = fVar9 * -param_1;
  fVar3 = fVar12 * -param_1;
  fVar9 = fVar9 * param_1;
  fVar12 = fVar12 * param_1;
  fVar4 = fVar14 + (fVar9 - fVar11 * fVar1) + fVar13 * 0.0;
  fVar16 = fVar5 + (fVar12 - fVar6 * fVar1) + fVar7 * 0.0;
  fVar8 = fVar14 + fVar2 + fVar11 * fVar1 + fVar13 * 0.0;
  fVar10 = fVar5 + fVar3 + fVar6 * fVar1 + fVar7 * 0.0;
  fVar9 = fVar14 + fVar9 + fVar11 * fVar1 + fVar13 * 0.0;
  fVar18 = fVar5 + fVar12 + fVar6 * fVar1 + fVar7 * 0.0;
  fVar14 = fVar14 + (fVar2 - fVar11 * fVar1) + fVar13 * 0.0;
  fVar5 = fVar5 + (fVar3 - fVar6 * fVar1) + fVar7 * 0.0;
  fVar12 = fVar8;
  if (fVar8 <= -3.4028235e+38) {
    fVar12 = -3.4028235e+38;
  }
  if (3.4028235e+38 < fVar8) {
    fVar8 = 3.4028235e+38;
  }
  fVar1 = fVar10;
  if (3.4028235e+38 < fVar10) {
    fVar1 = 3.4028235e+38;
  }
  if (fVar12 <= fVar9) {
    fVar12 = fVar9;
  }
  if (fVar10 <= fVar18) {
    fVar10 = fVar18;
  }
  if (fVar9 <= fVar8) {
    fVar8 = fVar9;
  }
  if (fVar18 <= fVar1) {
    fVar1 = fVar18;
  }
  if (fVar12 <= fVar4) {
    fVar12 = fVar4;
  }
  if (fVar10 <= fVar16) {
    fVar10 = fVar16;
  }
  if (fVar4 <= fVar8) {
    fVar8 = fVar4;
  }
  if (fVar16 <= fVar1) {
    fVar1 = fVar16;
  }
  if (fVar12 <= fVar14) {
    fVar12 = fVar14;
  }
  if (fVar10 <= fVar5) {
    fVar10 = fVar5;
  }
  if (fVar14 <= fVar8) {
    fVar8 = fVar14;
  }
  if (fVar5 <= fVar1) {
    fVar1 = fVar5;
  }
  param_5[2] = fVar12;
  param_5[3] = fVar1;
  *param_5 = fVar8;
  param_5[1] = fVar10;
  return;
}


