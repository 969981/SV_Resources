/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00150cd0; name: FUN_00150cd0
 */


void FUN_00150cd0(uint *param_1,long param_2,uint param_3,float *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  long lVar13;
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
  float fVar25;
  float local_c;
  float fStack_8;
  float local_4;
  
  if ((param_3 ^ param_3 << 2) < 4) {
    fVar17 = *param_4;
    fVar18 = param_4[1];
    fVar19 = param_4[2];
    fVar14 = fVar19;
    fVar15 = fVar17;
    fVar16 = fVar18;
  }
  else {
    fVar15 = 0.0;
    fVar16 = 0.0;
    fVar17 = 0.0;
    fVar18 = 0.0;
    fVar14 = 0.0;
    lVar13 = 0;
    do {
      uVar1 = param_3 & 3;
      param_3 = param_3 >> 2;
      fVar19 = (float)uVar1;
      pfVar7 = (float *)(param_2 + lVar13);
      lVar13 = lVar13 + 4;
      fVar21 = 3.0 - fVar19;
      fVar17 = fVar17 + fVar21 * *pfVar7;
      fVar16 = fVar16 + fVar21 * pfVar7[0x10];
      fVar14 = fVar14 + fVar19 * fVar19;
      fVar15 = fVar15 + fVar21 * pfVar7[0x20];
      fVar18 = fVar18 + fVar19;
    } while (lVar13 != 0x40);
    fVar22 = fVar18 * 3.0 - fVar14;
    fVar24 = *param_4 * 16.0 * 3.0 - fVar17;
    fVar20 = fVar14 + fVar18 * -6.0 + 144.0;
    fVar25 = param_4[1] * 16.0 * 3.0 - fVar16;
    local_c = 255.0;
    fStack_8 = 0.0;
    fVar19 = (1.0 / (fVar14 * fVar20 - fVar22 * fVar22)) * 3.0;
    fVar18 = param_4[2] * 16.0 * 3.0 - fVar15;
    fVar21 = fVar19 * (fVar20 * fVar24 - fVar22 * fVar17);
    fVar23 = fVar19 * (fVar14 * fVar16 - fVar22 * fVar25);
    local_4 = fVar19 * (fVar14 * fVar17 - fVar22 * fVar24);
    fVar16 = fVar19 * (fVar20 * fVar25 - fVar22 * fVar16);
    pfVar7 = &local_c;
    if (local_4 <= 255.0) {
      pfVar7 = &local_4;
    }
    pfVar12 = &fStack_8;
    if (0.0 <= local_4) {
      pfVar12 = pfVar7;
    }
    pfVar7 = &local_c;
    if (fVar21 <= 255.0) {
      pfVar7 = &local_4;
    }
    pfVar8 = &fStack_8;
    if (0.0 <= fVar21) {
      pfVar8 = pfVar7;
    }
    pfVar7 = &local_c;
    if (fVar23 <= 255.0) {
      pfVar7 = &local_4;
    }
    pfVar9 = &fStack_8;
    if (0.0 <= fVar23) {
      pfVar9 = pfVar7;
    }
    fVar14 = fVar19 * (fVar14 * fVar15 - fVar22 * fVar18);
    fVar19 = fVar19 * (fVar20 * fVar18 - fVar22 * fVar15);
    pfVar7 = &local_c;
    if (fVar16 <= 255.0) {
      pfVar7 = &local_4;
    }
    pfVar10 = &fStack_8;
    if (0.0 <= fVar16) {
      pfVar10 = pfVar7;
    }
    pfVar7 = &local_c;
    if (fVar14 <= 255.0) {
      pfVar7 = &local_4;
    }
    pfVar11 = &fStack_8;
    if (0.0 <= fVar14) {
      pfVar11 = pfVar7;
    }
    pfVar7 = &local_c;
    if (fVar19 <= 255.0) {
      pfVar7 = &local_4;
    }
    fVar17 = *pfVar12;
    local_4 = fVar21;
    local_c = 255.0;
    fStack_8 = 0.0;
    fVar15 = *pfVar8;
    local_4 = fVar23;
    local_c = 255.0;
    fStack_8 = 0.0;
    fVar18 = *pfVar9;
    local_4 = fVar16;
    local_c = 255.0;
    fStack_8 = 0.0;
    fVar16 = *pfVar10;
    local_c = 255.0;
    fStack_8 = 0.0;
    local_4 = fVar14;
    fVar14 = *pfVar11;
    local_c = 255.0;
    fStack_8 = 0.0;
    local_4 = fVar19;
    pfVar12 = &fStack_8;
    if (0.0 <= fVar19) {
      pfVar12 = pfVar7;
    }
    fVar19 = *pfVar12;
  }
  uVar1 = (int)fVar17 * 0x1f + 0x80;
  uVar2 = (int)fVar18 * 0x3f + 0x80;
  uVar3 = (int)fVar15 * 0x1f + 0x80;
  uVar4 = (int)fVar16 * 0x3f + 0x80;
  uVar5 = (int)fVar14 * 0x1f + 0x80;
  uVar6 = (int)fVar19 * 0x1f + 0x80;
  *param_1 = (uVar2 + (uVar2 >> 8) >> 3 & 0xffe0) + ((uVar1 + (uVar1 >> 8)) * 8 & 0xf800) +
             (uVar5 + (uVar5 >> 8) >> 8) & 0xffff;
  param_1[1] = (uVar4 + (uVar4 >> 8) >> 3 & 0xffe0) + ((uVar3 + (uVar3 >> 8)) * 8 & 0xf800) +
               (uVar6 + (uVar6 >> 8) >> 8) & 0xffff;
  return;
}


