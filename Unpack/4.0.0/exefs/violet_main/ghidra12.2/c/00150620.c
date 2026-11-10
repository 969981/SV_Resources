/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00150620; name: FUN_00150620
 */


void FUN_00150620(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float *pfVar1;
  float *pfVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_c;
  float fStack_8;
  float local_4;
  
  local_4 = *param_5;
  fVar8 = param_5[1];
  fVar4 = *param_4;
  fVar5 = param_4[1];
  fVar7 = param_5[2];
  fVar6 = param_4[2];
  fVar9 = (param_3[1] - local_4) * fVar4 + 0.0 + (param_3[0x11] - fVar8) * fVar5 +
          (param_3[0x21] - fVar7) * fVar6;
  fVar10 = (*param_3 - local_4) * fVar4 + 0.0 + (param_3[0x10] - fVar8) * fVar5 +
           (param_3[0x20] - fVar7) * fVar6;
  fVar11 = (float)NEON_fminnm(fVar10,0x47800000);
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  fVar12 = fVar9;
  if (fVar11 <= fVar9) {
    fVar12 = fVar11;
  }
  if (fVar9 <= fVar10) {
    fVar9 = fVar10;
  }
  fVar10 = (param_3[2] - local_4) * fVar4 + 0.0 + (param_3[0x12] - fVar8) * fVar5 +
           (param_3[0x22] - fVar7) * fVar6;
  fVar11 = fVar10;
  if (fVar12 <= fVar10) {
    fVar11 = fVar12;
  }
  if (fVar10 <= fVar9) {
    fVar10 = fVar9;
  }
  fVar9 = (param_3[3] - local_4) * fVar4 + 0.0 + (param_3[0x13] - fVar8) * fVar5 +
          (param_3[0x23] - fVar7) * fVar6;
  fVar12 = fVar9;
  if (fVar11 <= fVar9) {
    fVar12 = fVar11;
  }
  if (fVar9 <= fVar10) {
    fVar9 = fVar10;
  }
  fVar10 = (param_3[4] - local_4) * fVar4 + 0.0 + (param_3[0x14] - fVar8) * fVar5 +
           (param_3[0x24] - fVar7) * fVar6;
  fVar11 = fVar10;
  if (fVar12 <= fVar10) {
    fVar11 = fVar12;
  }
  if (fVar10 <= fVar9) {
    fVar10 = fVar9;
  }
  fVar9 = (param_3[5] - local_4) * fVar4 + 0.0 + (param_3[0x15] - fVar8) * fVar5 +
          (param_3[0x25] - fVar7) * fVar6;
  fVar12 = fVar9;
  if (fVar11 <= fVar9) {
    fVar12 = fVar11;
  }
  if (fVar9 <= fVar10) {
    fVar9 = fVar10;
  }
  fVar10 = (param_3[6] - local_4) * fVar4 + 0.0 + (param_3[0x16] - fVar8) * fVar5 +
           (param_3[0x26] - fVar7) * fVar6;
  fVar11 = fVar10;
  if (fVar12 <= fVar10) {
    fVar11 = fVar12;
  }
  if (fVar10 <= fVar9) {
    fVar10 = fVar9;
  }
  fVar9 = (param_3[7] - local_4) * fVar4 + 0.0 + (param_3[0x17] - fVar8) * fVar5 +
          (param_3[0x27] - fVar7) * fVar6;
  fVar12 = fVar9;
  if (fVar11 <= fVar9) {
    fVar12 = fVar11;
  }
  if (fVar9 <= fVar10) {
    fVar9 = fVar10;
  }
  fVar10 = (param_3[8] - local_4) * fVar4 + 0.0 + (param_3[0x18] - fVar8) * fVar5 +
           (param_3[0x28] - fVar7) * fVar6;
  fVar11 = fVar10;
  if (fVar12 <= fVar10) {
    fVar11 = fVar12;
  }
  if (fVar10 <= fVar9) {
    fVar10 = fVar9;
  }
  fVar9 = (param_3[9] - local_4) * fVar4 + 0.0 + (param_3[0x19] - fVar8) * fVar5 +
          (param_3[0x29] - fVar7) * fVar6;
  fVar12 = fVar9;
  if (fVar11 <= fVar9) {
    fVar12 = fVar11;
  }
  if (fVar9 <= fVar10) {
    fVar9 = fVar10;
  }
  fVar10 = (param_3[10] - local_4) * fVar4 + 0.0 + (param_3[0x1a] - fVar8) * fVar5 +
           (param_3[0x2a] - fVar7) * fVar6;
  fVar11 = fVar10;
  if (fVar12 <= fVar10) {
    fVar11 = fVar12;
  }
  if (fVar10 <= fVar9) {
    fVar10 = fVar9;
  }
  fVar9 = (param_3[0xb] - local_4) * fVar4 + 0.0 + (param_3[0x1b] - fVar8) * fVar5 +
          (param_3[0x2b] - fVar7) * fVar6;
  fVar12 = fVar9;
  if (fVar11 <= fVar9) {
    fVar12 = fVar11;
  }
  if (fVar9 <= fVar10) {
    fVar9 = fVar10;
  }
  fVar10 = (param_3[0xc] - local_4) * fVar4 + 0.0 + (param_3[0x1c] - fVar8) * fVar5 +
           (param_3[0x2c] - fVar7) * fVar6;
  fVar11 = fVar10;
  if (fVar12 <= fVar10) {
    fVar11 = fVar12;
  }
  if (fVar10 <= fVar9) {
    fVar10 = fVar9;
  }
  fVar9 = (param_3[0xd] - local_4) * fVar4 + 0.0 + (param_3[0x1d] - fVar8) * fVar5 +
          (param_3[0x2d] - fVar7) * fVar6;
  fVar12 = fVar9;
  if (fVar11 <= fVar9) {
    fVar12 = fVar11;
  }
  if (fVar9 <= fVar10) {
    fVar9 = fVar10;
  }
  local_c = 255.0;
  fStack_8 = 0.0;
  fVar10 = (param_3[0xe] - local_4) * fVar4 + 0.0 + (param_3[0x1e] - fVar8) * fVar5 +
           (param_3[0x2e] - fVar7) * fVar6;
  fVar11 = fVar10;
  if (fVar12 <= fVar10) {
    fVar11 = fVar12;
  }
  if (fVar10 <= fVar9) {
    fVar10 = fVar9;
  }
  fVar9 = (param_3[0xf] - local_4) * fVar4 + 0.0 + (param_3[0x1f] - fVar8) * fVar5 +
          (param_3[0x2f] - fVar7) * fVar6;
  fVar7 = fVar9;
  if (fVar11 <= fVar9) {
    fVar7 = fVar11;
  }
  if (fVar9 <= fVar10) {
    fVar9 = fVar10;
  }
  bVar3 = 1.0 <= fVar9 - fVar7;
  fVar6 = 1.0 / (fVar4 * fVar4 + 0.0 + fVar5 * fVar5 + fVar6 * fVar6);
  fVar5 = fVar7 + -0.5;
  if (bVar3) {
    fVar5 = fVar7;
  }
  fVar5 = fVar6 * fVar5;
  fVar7 = fVar9 + 0.5;
  if (bVar3) {
    fVar7 = fVar9;
  }
  fVar6 = fVar6 * fVar7;
  local_4 = local_4 + fVar5 * fVar4;
  pfVar1 = &local_c;
  if (local_4 <= 255.0) {
    pfVar1 = &local_4;
  }
  pfVar2 = &fStack_8;
  if (0.0 <= local_4) {
    pfVar2 = pfVar1;
  }
  *param_1 = *pfVar2;
  local_c = 255.0;
  fStack_8 = 0.0;
  local_4 = *param_5 + fVar6 * *param_4;
  pfVar1 = &local_c;
  if (local_4 <= 255.0) {
    pfVar1 = &local_4;
  }
  pfVar2 = &fStack_8;
  if (0.0 <= local_4) {
    pfVar2 = pfVar1;
  }
  *param_2 = *pfVar2;
  local_c = 255.0;
  fStack_8 = 0.0;
  local_4 = param_5[1] + fVar5 * param_4[1];
  pfVar1 = &local_c;
  if (local_4 <= 255.0) {
    pfVar1 = &local_4;
  }
  pfVar2 = &fStack_8;
  if (0.0 <= local_4) {
    pfVar2 = pfVar1;
  }
  param_1[1] = *pfVar2;
  local_c = 255.0;
  fStack_8 = 0.0;
  local_4 = param_5[1] + fVar6 * param_4[1];
  pfVar1 = &local_c;
  if (local_4 <= 255.0) {
    pfVar1 = &local_4;
  }
  pfVar2 = &fStack_8;
  if (0.0 <= local_4) {
    pfVar2 = pfVar1;
  }
  param_2[1] = *pfVar2;
  local_c = 255.0;
  fStack_8 = 0.0;
  local_4 = param_5[2] + fVar5 * param_4[2];
  pfVar1 = &local_c;
  if (local_4 <= 255.0) {
    pfVar1 = &local_4;
  }
  pfVar2 = &fStack_8;
  if (0.0 <= local_4) {
    pfVar2 = pfVar1;
  }
  param_1[2] = *pfVar2;
  local_c = 255.0;
  fStack_8 = 0.0;
  local_4 = param_5[2] + fVar6 * param_4[2];
  pfVar1 = &local_c;
  if (local_4 <= 255.0) {
    pfVar1 = &local_4;
  }
  pfVar2 = &fStack_8;
  if (0.0 <= local_4) {
    pfVar2 = pfVar1;
  }
  param_2[2] = *pfVar2;
  return;
}


