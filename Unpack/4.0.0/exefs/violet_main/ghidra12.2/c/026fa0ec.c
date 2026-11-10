/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026fa0ec; name: FUN_026fa0ec
 */


undefined8 FUN_026fa0ec(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,float *param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar11 [16];
  float fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  
  FUN_0250aaf4(&local_50);
  fVar15 = *(float *)(param_1 + 4);
  uVar8 = param_1[1];
  uVar6 = *param_1;
  fVar17 = *(float *)((long)param_1 + 0x14) * fVar15;
  fVar18 = *(float *)((long)param_1 + 0x1c) * fVar15;
  fVar10 = local_50 * *(float *)(param_1 + 2) * fVar15;
  fVar12 = fStack_4c * fVar17;
  fVar13 = fStack_48 * *(float *)(param_1 + 3) * fVar15;
  fVar14 = fStack_44 * fVar18;
  local_50 = local_50 * (float)uVar6;
  fVar7 = (float)((ulong)uVar6 >> 0x20);
  fStack_4c = fStack_4c * fVar7;
  fStack_48 = fStack_48 * (float)uVar8;
  fVar9 = (float)((ulong)uVar8 >> 0x20);
  fStack_44 = fStack_44 * fVar9;
  auVar11._0_4_ = fVar10 + fVar12;
  auVar11._4_4_ = fVar13 + fVar14;
  auVar11._8_4_ = fVar10 + fVar12;
  auVar11._12_4_ = fVar13 + fVar14;
  auVar16._0_4_ = local_50 + fStack_4c;
  auVar16._4_4_ = fStack_48 + fStack_44;
  auVar16._8_4_ = local_50 + fStack_4c;
  auVar16._12_4_ = fStack_48 + fStack_44;
  auVar11 = NEON_ext(auVar11,auVar11,4,1);
  auVar16 = NEON_ext(auVar16,auVar16,4,1);
  fVar10 = auVar11._0_4_ + auVar11._4_4_;
  fVar12 = auVar16._0_4_ + auVar16._4_4_;
  bVar1 = false;
  if ((fVar10 < *(float *)PTR_DAT_047d41b0) &&
     (bVar1 = false, !NAN(*(float *)PTR_DAT_047d41c0) && !NAN(fVar10))) {
    bVar1 = *(float *)PTR_DAT_047d41c0 < fVar10;
  }
  if (bVar1) {
    fVar12 = fVar12 + local_40;
    fVar10 = 1.0;
    if (*(float *)PTR_DAT_047d4180 <= fVar12) {
      fVar10 = 0.0;
    }
    fVar7 = 1.0;
    if (*(float *)PTR_DAT_047d4180 > fVar12) {
      fVar7 = 0.0;
    }
    fVar10 = fVar12 * fVar7 + fVar12 * *(float *)PTR_DAT_047d41a0 * fVar10;
    bVar1 = false;
    bVar2 = true;
    bVar3 = false;
    if (fVar10 < 1.1920929e-07) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar10)) {
        bVar1 = fVar10 < -1.1920929e-07;
        bVar2 = fVar10 == -1.1920929e-07;
        bVar3 = false;
      }
    }
    fVar10 = 0.0;
    if (bVar2 || bVar1 != bVar3) {
      return 0;
    }
  }
  else {
    fVar10 = -(fVar12 + local_40) / fVar10;
    uVar6 = CONCAT44(fVar7 + fVar17 * fVar10,
                     (float)uVar6 + *(float *)(param_1 + 2) * fVar15 * fVar10);
    uVar8 = CONCAT44(fVar9 + fVar18 * fVar10,
                     (float)uVar8 + *(float *)(param_1 + 3) * fVar15 * fVar10);
  }
  FUN_026fdb14(param_2,0);
  uVar4 = FUN_025205f8();
  uVar5 = 0;
  if ((uVar4 & 1) != 0) {
    if (param_4 != (float *)0x0) {
      *param_4 = fVar10;
    }
    uVar5 = 1;
    if (param_3 != (undefined8 *)0x0) {
      param_3[1] = uVar8;
      *param_3 = uVar6;
    }
  }
  return uVar5;
}


