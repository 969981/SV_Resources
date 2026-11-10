/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f1e9b4; name: FUN_00f1e9b4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_00f1e9b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  float fVar2;
  undefined8 uVar3;
  undefined1 auVar4 [12];
  float fVar6;
  float fVar7;
  ulong uVar8;
  undefined1 auVar5 [16];
  float fVar10;
  undefined1 auVar9 [16];
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  ulong uVar16;
  undefined1 local_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulong uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 local_30;
  ulong uStack_28;
  undefined8 uStack_20;
  ulong uStack_18;
  
  uVar8 = param_2[1];
  uVar3 = *param_2;
  fVar2 = (float)uVar3;
  fVar6 = (float)((ulong)uVar3 >> 0x20);
  fVar7 = (float)uVar8;
  fVar10 = (float)(uVar8 >> 0x20);
  fVar10 = fVar10 * fVar10;
  auVar9._0_4_ = fVar2 * fVar2 + fVar6 * fVar6;
  auVar9._4_4_ = fVar7 * fVar7 + fVar10;
  auVar9._8_4_ = fVar2 * fVar2 + fVar6 * fVar6;
  auVar9._12_4_ = fVar7 * fVar7 + fVar10;
  auVar9 = NEON_ext(auVar9,auVar9,4,1);
  uVar16 = param_1[1];
  uVar13 = *param_1;
  if (1.1920929e-07 <= auVar9._0_4_ + auVar9._4_4_) {
    fVar12 = (float)uVar13;
    fVar14 = (float)((ulong)uVar13 >> 0x20);
    fVar15 = (float)uVar16;
    fVar10 = (float)(uVar16 >> 0x20);
    fVar10 = fVar10 * fVar10;
    auVar1._0_4_ = fVar12 * fVar12 + fVar14 * fVar14;
    auVar1._4_4_ = fVar15 * fVar15 + fVar10;
    auVar1._8_4_ = fVar12 * fVar12 + fVar14 * fVar14;
    auVar1._12_4_ = fVar15 * fVar15 + fVar10;
    auVar9 = NEON_ext(auVar1,auVar1,4,1);
    if (1.1920929e-07 <= auVar9._0_4_ + auVar9._4_4_) {
      fVar10 = (float)param_1[4];
      fVar11 = (float)((ulong)param_1[4] >> 0x20);
      local_30 = CONCAT44(fVar11 - ABS(fVar14 * 0.5),fVar10 - ABS(fVar12 * 0.5));
      uStack_20 = CONCAT44(ABS(fVar14 * 0.5) + fVar11,ABS(fVar12 * 0.5) + fVar10);
      uStack_28 = (ulong)(uint)((float)param_1[5] - ABS(fVar15 * 0.5));
      uStack_18 = (ulong)(uint)(ABS(fVar15 * 0.5) + (float)param_1[5]);
      auVar9 = *(undefined1 (*) [16])(param_2 + 4);
      local_50 = CONCAT44(auVar9._4_4_ - ABS(fVar6 * 0.5),auVar9._0_4_ - ABS(fVar2 * 0.5));
      uStack_40 = CONCAT44(ABS(fVar6 * 0.5) + auVar9._4_4_,ABS(fVar2 * 0.5) + auVar9._0_4_);
      uStack_48 = (ulong)(uint)(auVar9._8_4_ - ABS(fVar7 * 0.5));
      uStack_38 = (ulong)(uint)(ABS(fVar7 * 0.5) + auVar9._8_4_);
      local_70 = FUN_00f1eae4(&local_30,&local_50);
      uStack_58 = auVar9._8_8_;
      uStack_60 = auVar9._0_8_;
      auVar4 = FUN_00f1eac4(local_70);
      uVar13 = CONCAT44(auVar4._4_4_ * 0.5,auVar4._0_4_ * 0.5);
      uVar16 = (ulong)(uint)(auVar4._8_4_ * 0.5);
      FUN_00f1ead0(local_70);
    }
    else {
      uVar13 = uVar3;
      uVar16 = uVar8;
    }
  }
  auVar5._8_8_ = uVar16;
  auVar5._0_8_ = uVar13;
  return auVar5;
}


