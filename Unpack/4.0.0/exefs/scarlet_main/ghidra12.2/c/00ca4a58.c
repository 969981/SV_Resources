/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ca4a58; name: FUN_00ca4a58
 */


/* WARNING: Removing unreachable block (ram,0x00ca4bc0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_00ca4a58(undefined8 *param_1,undefined1 (*param_2) [16],undefined8 *param_3,float *param_4)

{
  ulong uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar13;
  ulong uVar12;
  float fVar15;
  undefined1 auVar14 [16];
  undefined1 auVar16 [16];
  float fVar17;
  
  fVar7 = *(float *)(param_1 + 4);
  fVar8 = (float)param_1[2] * fVar7;
  fVar9 = (float)((ulong)param_1[2] >> 0x20) * fVar7;
  fVar10 = (float)param_1[3] * fVar7;
  auVar14 = *param_2;
  auVar16 = param_2[1];
  bVar2 = false;
  bVar3 = true;
  bVar4 = false;
  if (fVar8 < 1.1920929e-07) {
    bVar2 = false;
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar8)) {
      bVar2 = fVar8 < -1.1920929e-07;
      bVar3 = fVar8 == -1.1920929e-07;
      bVar4 = false;
    }
  }
  fVar5 = (float)*param_1;
  if (bVar3 || bVar2 != bVar4) {
    fVar11 = (auVar14._0_4_ - fVar5) * (1.0 / fVar8);
    fVar13 = (auVar16._0_4_ - fVar5) * (1.0 / fVar8);
    fVar6 = fVar13;
    if (fVar11 <= fVar13) {
      fVar6 = fVar11;
      fVar11 = fVar13;
    }
    fVar11 = (float)NEON_fminnm(fVar11,0x7f7fffff);
    if (fVar11 <= fVar6) {
      return 0;
    }
    uVar12 = CONCAT44(fVar11,fVar6);
  }
  else {
    if (fVar5 < auVar14._0_4_ || auVar16._0_4_ < fVar5) {
      return 0;
    }
    uVar12 = _DAT_03cabb40;
  }
  bVar2 = false;
  bVar3 = true;
  bVar4 = false;
  if (fVar9 < 1.1920929e-07) {
    bVar2 = false;
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar9)) {
      bVar2 = fVar9 < -1.1920929e-07;
      bVar3 = fVar9 == -1.1920929e-07;
      bVar4 = false;
    }
  }
  fVar6 = (float)((ulong)*param_1 >> 0x20);
  if (bVar3 || bVar2 != bVar4) {
    fVar11 = (auVar14._4_4_ - fVar6) * (1.0 / fVar9);
    fVar17 = (auVar16._4_4_ - fVar6) * (1.0 / fVar9);
    fVar13 = fVar17;
    if (fVar11 <= fVar17) {
      fVar13 = fVar11;
      fVar11 = fVar17;
    }
    fVar17 = (float)(uVar12 >> 0x20);
    if (fVar13 <= (float)uVar12) {
      fVar13 = (float)uVar12;
    }
    if (fVar17 <= fVar11) {
      fVar11 = fVar17;
    }
    if (fVar11 <= fVar13) {
      return 0;
    }
    uVar12 = CONCAT44(fVar11,fVar13);
  }
  else if (fVar6 < auVar14._4_4_ || auVar16._4_4_ < fVar6) {
    return 0;
  }
  fVar11 = (float)param_1[1];
  if ((1.1920929e-07 <= fVar10) || (fVar10 <= -1.1920929e-07)) {
    auVar16 = NEON_ext(auVar16,auVar16,8,1);
    auVar14 = NEON_ext(auVar14,auVar14,8,1);
    fVar13 = (auVar14._0_4_ - fVar11) * (1.0 / fVar10);
    fVar15 = (auVar16._0_4_ - fVar11) * (1.0 / fVar10);
    fVar17 = fVar15;
    if (fVar13 <= fVar15) {
      fVar17 = fVar13;
      fVar13 = fVar15;
    }
    fVar15 = (float)(uVar12 >> 0x20);
    uVar1 = (ulong)(uint)fVar17;
    if (fVar17 <= (float)uVar12) {
      uVar1 = uVar12;
    }
    if (fVar15 <= fVar13) {
      fVar13 = fVar15;
    }
    if (fVar13 <= (float)uVar1) {
      return 0;
    }
    uVar12 = CONCAT44(fVar13,(float)uVar1);
  }
  fVar13 = (float)(uVar12 >> 0x20);
  if (0.0 <= (float)uVar12) {
    if ((1.0 < (float)uVar12) && (uVar12 = uVar12 >> 0x20, 1.0 < fVar13)) {
      return 0;
    }
  }
  else {
    uVar12 = uVar12 >> 0x20;
    if (fVar13 < 0.0) {
      return 0;
    }
  }
  fVar13 = (float)uVar12;
  if (param_3 != (undefined8 *)0x0) {
    param_3[1] = CONCAT44((float)((ulong)param_1[1] >> 0x20) +
                          (float)((ulong)param_1[3] >> 0x20) * fVar7 * fVar13,
                          fVar11 + fVar10 * fVar13);
    *param_3 = CONCAT44(fVar6 + fVar9 * fVar13,fVar5 + fVar8 * fVar13);
  }
  if (param_4 != (float *)0x0) {
    *param_4 = fVar13;
  }
  return 1;
}


