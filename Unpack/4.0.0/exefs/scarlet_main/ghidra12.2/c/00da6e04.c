/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00da6e04; name: FUN_00da6e04
 */


void FUN_00da6e04(long param_1,undefined8 *param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
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
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  if ((param_3 & 1) == 0) {
    lVar2 = FUN_00da75d8();
  }
  else {
    lVar2 = FUN_00d3ccd4();
  }
  if (lVar2 == 0) {
    return;
  }
  lVar1 = lVar2 + 0x20;
  if (*(char *)(lVar2 + 0x48) == '\0') {
    *(undefined4 *)(lVar2 + 0xa0) = 0;
    auVar23 = FUN_00da6fd8(param_1,lVar1);
    *(undefined1 (*) [16])(lVar2 + 0x70) = auVar23;
    uVar5 = *(undefined8 *)(lVar2 + 0x70);
    uVar6 = *(undefined8 *)(lVar2 + 0x78);
    *(undefined8 *)(lVar2 + 0xb0) = 0;
    *(undefined8 *)(lVar2 + 0xb8) = 0;
    *(undefined8 *)(lVar2 + 0x80) = 0;
    *(undefined8 *)(lVar2 + 0x88) = 0;
    *(undefined8 *)(lVar2 + 0x90) = 0;
    *(undefined8 *)(lVar2 + 0x98) = 0;
    *(undefined8 *)(lVar2 + 0x60) = uVar5;
    *(undefined8 *)(lVar2 + 0x68) = uVar6;
LAB_00da6f40:
    *(undefined8 *)(lVar2 + 0x560) = uVar5;
    *(undefined8 *)(lVar2 + 0x568) = uVar6;
  }
  else {
    lVar3 = FUN_00e06b88(param_1);
    lVar4 = (*(code *)**(undefined8 **)*param_2)
                      ((undefined8 *)*param_2,*(undefined4 *)(param_1 + 0x114));
    if (lVar3 == 0) {
      return;
    }
    fVar9 = (float)((double)*(long *)(lVar4 + 8) / 1000000000.0);
    if (fVar9 <= 1.1920929e-07) {
      return;
    }
    auVar8 = FUN_00da6fd8(param_1,lVar1);
    *(undefined1 (*) [16])(lVar2 + 0x60) = auVar8;
    fVar10 = (float)*(undefined8 *)(lVar2 + 0x70);
    fVar14 = auVar8._0_4_ - fVar10;
    fVar11 = (float)((ulong)*(undefined8 *)(lVar2 + 0x70) >> 0x20);
    fVar15 = auVar8._4_4_ - fVar11;
    fVar12 = (float)*(undefined8 *)(lVar2 + 0x78);
    fVar16 = auVar8._8_4_ - fVar12;
    fVar13 = (float)((ulong)*(undefined8 *)(lVar2 + 0x78) >> 0x20);
    fVar17 = auVar8._12_4_ - fVar13;
    fVar18 = (float)*(undefined8 *)(lVar2 + 0x50) * fVar14 * fVar9;
    fVar19 = (float)((ulong)*(undefined8 *)(lVar2 + 0x50) >> 0x20) * fVar15 * fVar9;
    fVar20 = (float)*(undefined8 *)(lVar2 + 0x58) * fVar16 * fVar9;
    fVar21 = (float)((ulong)*(undefined8 *)(lVar2 + 0x58) >> 0x20) * fVar17 * fVar9;
    *(ulong *)(lVar2 + 0x98) = CONCAT44(fVar21,fVar20);
    *(ulong *)(lVar2 + 0x90) = CONCAT44(fVar19,fVar18);
    auVar23._0_4_ = fVar18 * fVar18 + fVar19 * fVar19;
    auVar23._4_4_ = fVar20 * fVar20 + fVar21 * fVar21;
    auVar23._8_4_ = fVar18 * fVar18 + fVar19 * fVar19;
    auVar23._12_4_ = fVar20 * fVar20 + fVar21 * fVar21;
    auVar23 = NEON_ext(auVar23,auVar23,4,1);
    fVar22 = SQRT(auVar23._0_4_ + auVar23._4_4_);
    *(float *)(lVar2 + 0xa0) = fVar22;
    if (fVar22 <= 1.1920929e-07) {
      if ((param_3 & 1) != 0) {
        return;
      }
    }
    else {
      fVar18 = fVar9 * fVar18;
      fVar19 = fVar9 * fVar19;
      fVar20 = fVar9 * fVar20;
      fVar9 = fVar9 * fVar21;
      auVar24._0_4_ = fVar18 * fVar18 + fVar19 * fVar19;
      auVar24._4_4_ = fVar20 * fVar20 + fVar9 * fVar9;
      auVar24._8_4_ = fVar18 * fVar18 + fVar19 * fVar19;
      auVar24._12_4_ = fVar20 * fVar20 + fVar9 * fVar9;
      auVar7._0_4_ = fVar14 * fVar14 + fVar15 * fVar15;
      auVar7._4_4_ = fVar16 * fVar16 + fVar17 * fVar17;
      auVar7._8_4_ = fVar14 * fVar14 + fVar15 * fVar15;
      auVar7._12_4_ = fVar16 * fVar16 + fVar17 * fVar17;
      auVar23 = NEON_ext(auVar7,auVar7,4,1);
      auVar24 = NEON_ext(auVar24,auVar24,4,1);
      *(ulong *)(lVar2 + 0xb8) = CONCAT44(fVar9,fVar20);
      *(ulong *)(lVar2 + 0xb0) = CONCAT44(fVar19,fVar18);
      if ((bool)(~(auVar23._0_4_ + auVar23._4_4_ <= auVar24._0_4_ + auVar24._4_4_) & 1)) {
        fVar10 = fVar10 + fVar18;
        fVar11 = fVar11 + fVar19;
        fVar12 = fVar12 + fVar20;
        fVar13 = fVar13 + fVar9;
        *(ulong *)(lVar2 + 0x78) = CONCAT44(fVar13,fVar12);
        *(ulong *)(lVar2 + 0x70) = CONCAT44(fVar11,fVar10);
        *(ulong *)(lVar2 + 0x88) = CONCAT44(fVar13 - auVar8._12_4_,fVar12 - auVar8._8_4_);
        *(ulong *)(lVar2 + 0x80) = CONCAT44(fVar11 - auVar8._4_4_,fVar10 - auVar8._0_4_);
        uVar5 = *(undefined8 *)(lVar2 + 0x70);
        uVar6 = *(undefined8 *)(lVar2 + 0x78);
        goto LAB_00da6f40;
      }
    }
    *(undefined4 *)(lVar2 + 0xa0) = 0;
    auVar23 = FUN_00da6fd8(param_1,lVar1);
    *(undefined1 (*) [16])(lVar2 + 0x70) = auVar23;
    *(undefined8 *)(lVar2 + 0x68) = *(undefined8 *)(lVar2 + 0x78);
    *(undefined8 *)*(undefined1 (*) [16])(lVar2 + 0x60) = *(undefined8 *)(lVar2 + 0x70);
    *(undefined8 *)(lVar2 + 0xb0) = 0;
    *(undefined8 *)(lVar2 + 0xb8) = 0;
    *(undefined8 *)(lVar2 + 0x568) = *(undefined8 *)(lVar2 + 0x78);
    *(undefined8 *)(lVar2 + 0x80) = 0;
    *(undefined8 *)(lVar2 + 0x88) = 0;
    *(undefined8 *)(lVar2 + 0x560) = *(undefined8 *)(lVar2 + 0x70);
    *(undefined8 *)(lVar2 + 0x90) = 0;
    *(undefined8 *)(lVar2 + 0x98) = 0;
  }
  return;
}


