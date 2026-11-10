/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026f9db4; name: FUN_026f9db4
 */


undefined8 FUN_026f9db4(undefined8 *param_1,float *param_2,undefined8 *param_3,float *param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar9;
  float fVar10;
  undefined1 auVar8 [16];
  float fVar11;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar12 [16];
  
  fVar6 = *(float *)(param_1 + 4);
  uVar5 = param_1[1];
  uVar4 = *param_1;
  fVar7 = *param_2 * *(float *)(param_1 + 2) * fVar6;
  fVar9 = param_2[1] * *(float *)((long)param_1 + 0x14) * fVar6;
  fVar10 = param_2[2] * *(float *)(param_1 + 3) * fVar6;
  fVar6 = param_2[3] * *(float *)((long)param_1 + 0x1c) * fVar6;
  fVar11 = *param_2 * (float)uVar4;
  fVar13 = param_2[1] * (float)((ulong)uVar4 >> 0x20);
  fVar14 = param_2[2] * (float)uVar5;
  fVar15 = param_2[3] * (float)((ulong)uVar5 >> 0x20);
  auVar8._0_4_ = fVar7 + fVar9;
  auVar8._4_4_ = fVar10 + fVar6;
  auVar8._8_4_ = fVar7 + fVar9;
  auVar8._12_4_ = fVar10 + fVar6;
  auVar12._0_4_ = fVar11 + fVar13;
  auVar12._4_4_ = fVar14 + fVar15;
  auVar12._8_4_ = fVar11 + fVar13;
  auVar12._12_4_ = fVar14 + fVar15;
  auVar8 = NEON_ext(auVar8,auVar8,4,1);
  auVar12 = NEON_ext(auVar12,auVar12,4,1);
  fVar6 = auVar8._0_4_ + auVar8._4_4_;
  fVar7 = auVar12._0_4_ + auVar12._4_4_;
  bVar1 = false;
  if ((fVar6 < *(float *)PTR_DAT_047d41b0) &&
     (bVar1 = false, !NAN(*(float *)PTR_DAT_047d41c0) && !NAN(fVar6))) {
    bVar1 = *(float *)PTR_DAT_047d41c0 < fVar6;
  }
  if (bVar1) {
    fVar7 = fVar7 + param_2[4];
    fVar6 = 1.0;
    if (*(float *)PTR_DAT_047d4180 <= fVar7) {
      fVar6 = 0.0;
    }
    fVar9 = 1.0;
    if (*(float *)PTR_DAT_047d4180 > fVar7) {
      fVar9 = 0.0;
    }
    fVar6 = fVar7 * fVar9 + fVar7 * *(float *)PTR_DAT_047d41a0 * fVar6;
    bVar1 = false;
    bVar2 = true;
    bVar3 = false;
    if (fVar6 < 1.1920929e-07) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar6)) {
        bVar1 = fVar6 < -1.1920929e-07;
        bVar2 = fVar6 == -1.1920929e-07;
        bVar3 = false;
      }
    }
    if (bVar2 || bVar1 != bVar3) {
      return 0;
    }
    if (param_4 != (float *)0x0) {
      *param_4 = 0.0;
    }
    if (param_3 != (undefined8 *)0x0) {
      param_3[1] = uVar5;
      *param_3 = uVar4;
      return 1;
    }
  }
  else {
    fVar6 = -(fVar7 + param_2[4]) / fVar6;
    if (param_4 != (float *)0x0) {
      *param_4 = fVar6;
    }
    if (param_3 != (undefined8 *)0x0) {
      fVar10 = *(float *)(param_1 + 4);
      uVar4 = *param_1;
      fVar7 = *(float *)(param_1 + 2);
      fVar9 = *(float *)((long)param_1 + 0x14);
      param_3[1] = CONCAT44((float)((ulong)param_1[1] >> 0x20) +
                            *(float *)((long)param_1 + 0x1c) * fVar10 * fVar6,
                            (float)param_1[1] + *(float *)(param_1 + 3) * fVar10 * fVar6);
      *param_3 = CONCAT44((float)((ulong)uVar4 >> 0x20) + fVar9 * fVar10 * fVar6,
                          (float)uVar4 + fVar7 * fVar10 * fVar6);
    }
  }
  return 1;
}


