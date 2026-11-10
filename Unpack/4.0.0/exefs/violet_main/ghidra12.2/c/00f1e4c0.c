/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f1e4c0; name: FUN_00f1e4c0
 */


undefined1  [16]
FUN_00f1e4c0(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],long param_4,
            ulong param_5,long param_6)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined8 uVar15;
  float fVar16;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar17 [16];
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar15 = param_3._8_8_;
  uVar13 = param_3._0_8_;
  if ((param_5 & 1) == 0) {
    lVar2 = *(long *)(param_4 + 8);
    *(undefined1 *)(param_4 + 0xa1) = 1;
    if (*(char *)(lVar2 + param_6 * 0x60 + 0x51) == '\0') {
      *(undefined1 *)(param_4 + 0x91) = 1;
      *(undefined8 *)(param_4 + 0x60) = 0;
      *(undefined8 *)(param_4 + 0x68) = 0;
      *(undefined8 *)(param_4 + 0x70) = 0;
      *(undefined8 *)(param_4 + 0x78) = 0;
      *(undefined8 *)(param_4 + 0x80) = 0;
      *(undefined8 *)(param_4 + 0x88) = 0;
      if (*(char *)(param_4 + 0x90) != '\0') {
        return ZEXT816(0);
      }
      auVar14 = NEON_ext(ZEXT816(0),ZEXT816(0),4,1);
      *(undefined8 *)(param_4 + 0x48) = 0;
      *(undefined8 *)(param_4 + 0x40) = 0;
      fVar16 = SQRT(auVar14._0_4_ + auVar14._4_4_) * 0.5;
      fVar18 = 1.0;
      if (fVar16 < 0.0) {
        fVar18 = 0.0;
      }
      *(float *)(param_4 + 0x50) = fVar16 * fVar18 - fVar16 * 0.0;
      return ZEXT816(0);
    }
    if (*(char *)(param_4 + 0x91) == '\0') {
      *(undefined1 *)(param_4 + 0x91) = 1;
      memcpy((void *)(param_4 + 0x60),(void *)(lVar2 + param_6 * 0x60 + 0x20),0x30);
      if (*(char *)(param_4 + 0x90) != '\0') {
        return *(undefined1 (*) [16])(param_4 + 0x60);
      }
      uVar13 = *(undefined8 *)*(undefined1 (*) [16])(param_4 + 0x60);
      fVar16 = (float)uVar13;
      fVar16 = fVar16 * fVar16;
      fVar18 = (float)((ulong)uVar13 >> 0x20);
      fVar18 = fVar18 * fVar18;
      fVar19 = (float)*(undefined8 *)(param_4 + 0x68);
      fVar19 = fVar19 * fVar19;
      fVar20 = (float)((ulong)*(undefined8 *)(param_4 + 0x68) >> 0x20);
      fVar20 = fVar20 * fVar20;
      auVar14._0_4_ = fVar16 + fVar18;
      auVar14._4_4_ = fVar19 + fVar20;
      auVar14._8_4_ = fVar16 + fVar18;
      auVar14._12_4_ = fVar19 + fVar20;
      auVar14 = NEON_ext(auVar14,auVar14,4,1);
      fVar16 = SQRT(auVar14._0_4_ + auVar14._4_4_) * 0.5;
      fVar18 = 1.0;
      if (fVar16 < 0.0) {
        fVar18 = 0.0;
      }
      *(undefined8 *)(param_4 + 0x48) = *(undefined8 *)(param_4 + 0x88);
      *(undefined8 *)(param_4 + 0x40) = *(undefined8 *)(param_4 + 0x80);
      *(float *)(param_4 + 0x50) = fVar16 * fVar18 - fVar16 * 0.0;
      return *(undefined1 (*) [16])(param_4 + 0x60);
    }
    auVar14 = FUN_00f1e9b4(param_4 + 0x60,lVar2 + param_6 * 0x60 + 0x20);
    *(undefined1 *)(param_4 + 0x91) = 1;
    *(undefined1 (*) [16])(param_4 + 0x60) = auVar14;
    *(long *)(param_4 + 0x78) = param_2._8_8_;
    *(long *)(param_4 + 0x70) = param_2._0_8_;
    *(undefined8 *)(param_4 + 0x88) = uVar15;
    *(undefined8 *)(param_4 + 0x80) = uVar13;
    if (*(char *)(param_4 + 0x90) != '\0') {
      return auVar14;
    }
    fVar16 = auVar14._0_4_ * auVar14._0_4_;
    fVar18 = auVar14._4_4_ * auVar14._4_4_;
    fVar19 = auVar14._8_4_ * auVar14._8_4_;
    fVar20 = auVar14._12_4_ * auVar14._12_4_;
    *(undefined8 *)(param_4 + 0x48) = uVar15;
    *(undefined8 *)(param_4 + 0x40) = uVar13;
    auVar17._0_4_ = fVar16 + fVar18;
    auVar17._4_4_ = fVar19 + fVar20;
    auVar17._8_4_ = fVar16 + fVar18;
    auVar17._12_4_ = fVar19 + fVar20;
    auVar17 = NEON_ext(auVar17,auVar17,4,1);
    fVar16 = SQRT(auVar17._0_4_ + auVar17._4_4_) * 0.5;
    fVar18 = 1.0;
    if (fVar16 < 0.0) {
      fVar18 = 0.0;
    }
    *(float *)(param_4 + 0x50) = fVar16 * fVar18 - fVar16 * 0.0;
    return auVar14;
  }
  if (*(char *)(param_4 + 0x91) == '\0') {
    uVar25 = 0;
    uVar26 = 0;
    uVar24 = 0;
    uVar23 = 0;
    uStack_68 = 0;
    local_70 = 0;
  }
  else {
    uStack_68 = *(undefined8 *)(param_4 + 0x68);
    local_70 = *(undefined8 *)(param_4 + 0x60);
    uVar24 = *(undefined8 *)(param_4 + 0x78);
    uVar23 = *(undefined8 *)(param_4 + 0x70);
    uVar26 = *(undefined8 *)(param_4 + 0x88);
    uVar25 = *(undefined8 *)(param_4 + 0x80);
  }
  puVar3 = (undefined8 *)(param_4 + 0x60);
  *puVar3 = 0;
  *(undefined1 *)(param_4 + 0x91) = 1;
  *(undefined8 *)(param_4 + 0x88) = 0;
  *(undefined8 *)(param_4 + 0x68) = 0;
  *(undefined8 *)(param_4 + 0x70) = 0;
  *(undefined8 *)(param_4 + 0x78) = 0;
  *(undefined8 *)(param_4 + 0x80) = 0;
  if (*(char *)(param_4 + 0x90) == '\0') {
    auVar14 = NEON_ext(ZEXT816(0),ZEXT816(0),4,1);
    *(undefined8 *)(param_4 + 0x48) = 0;
    *(undefined8 *)(param_4 + 0x40) = 0;
    fVar16 = SQRT(auVar14._0_4_ + auVar14._4_4_) * 0.5;
    param_2 = ZEXT416((uint)fVar16);
    uVar13 = 0;
    uVar15 = 0;
    fVar18 = 1.0;
    if (fVar16 < 0.0) {
      fVar18 = 0.0;
    }
    *(float *)(param_4 + 0x50) = fVar16 * fVar18 - fVar16 * 0.0;
  }
  lVar2 = *(long *)(param_4 + 8);
  if (*(long *)(param_4 + 0x10) == lVar2) {
    uVar13 = 0;
    param_2 = ZEXT816(0);
    auVar14 = ZEXT816(0);
    uVar15 = 0;
  }
  else {
    if (*(char *)(lVar2 + 0x51) == '\0') {
      uVar13 = 0;
      param_2 = ZEXT816(0);
      auVar14 = ZEXT816(0);
      uVar15 = 0;
    }
    else {
      auVar14 = FUN_00f1e9b4(puVar3,lVar2 + 0x20);
      *(undefined1 *)(param_4 + 0x91) = 1;
      *(undefined1 (*) [16])(param_4 + 0x60) = auVar14;
      *(long *)(param_4 + 0x78) = param_2._8_8_;
      *(long *)(param_4 + 0x70) = param_2._0_8_;
      *(undefined8 *)(param_4 + 0x88) = uVar15;
      *(undefined8 *)(param_4 + 0x80) = uVar13;
      if (*(char *)(param_4 + 0x90) == '\0') {
        fVar16 = auVar14._0_4_ * auVar14._0_4_;
        fVar18 = auVar14._4_4_ * auVar14._4_4_;
        fVar19 = auVar14._8_4_ * auVar14._8_4_;
        fVar20 = auVar14._12_4_ * auVar14._12_4_;
        *(undefined8 *)(param_4 + 0x48) = uVar15;
        *(undefined8 *)(param_4 + 0x40) = uVar13;
        auVar10._0_4_ = fVar16 + fVar18;
        auVar10._4_4_ = fVar19 + fVar20;
        auVar10._8_4_ = fVar16 + fVar18;
        auVar10._12_4_ = fVar19 + fVar20;
        auVar17 = NEON_ext(auVar10,auVar10,4,1);
        fVar16 = SQRT(auVar17._0_4_ + auVar17._4_4_) * 0.5;
        fVar18 = 1.0;
        if (fVar16 < 0.0) {
          fVar18 = 0.0;
        }
        *(float *)(param_4 + 0x50) = fVar16 * fVar18 - fVar16 * 0.0;
      }
    }
    lVar2 = *(long *)(param_4 + 8);
    if (1 < (ulong)((*(long *)(param_4 + 0x10) - lVar2 >> 5) * -0x5555555555555555)) {
      if (*(char *)(lVar2 + 0xb1) != '\0') {
        auVar14 = FUN_00f1e9b4(puVar3,lVar2 + 0x80);
        *(undefined1 *)(param_4 + 0x91) = 1;
        *(undefined1 (*) [16])(param_4 + 0x60) = auVar14;
        *(long *)(param_4 + 0x78) = param_2._8_8_;
        *(long *)(param_4 + 0x70) = param_2._0_8_;
        *(undefined8 *)(param_4 + 0x88) = uVar15;
        *(undefined8 *)(param_4 + 0x80) = uVar13;
        if (*(char *)(param_4 + 0x90) == '\0') {
          fVar16 = auVar14._0_4_ * auVar14._0_4_;
          fVar18 = auVar14._4_4_ * auVar14._4_4_;
          fVar19 = auVar14._8_4_ * auVar14._8_4_;
          fVar20 = auVar14._12_4_ * auVar14._12_4_;
          *(undefined8 *)(param_4 + 0x48) = uVar15;
          *(undefined8 *)(param_4 + 0x40) = uVar13;
          auVar11._0_4_ = fVar16 + fVar18;
          auVar11._4_4_ = fVar19 + fVar20;
          auVar11._8_4_ = fVar16 + fVar18;
          auVar11._12_4_ = fVar19 + fVar20;
          auVar17 = NEON_ext(auVar11,auVar11,4,1);
          fVar16 = SQRT(auVar17._0_4_ + auVar17._4_4_) * 0.5;
          fVar18 = 1.0;
          if (fVar16 < 0.0) {
            fVar18 = 0.0;
          }
          *(float *)(param_4 + 0x50) = fVar16 * fVar18 - fVar16 * 0.0;
        }
      }
      lVar2 = *(long *)(param_4 + 8);
      if (2 < (ulong)((*(long *)(param_4 + 0x10) - lVar2 >> 5) * -0x5555555555555555)) {
        uVar4 = 2;
        lVar5 = 0x111;
        do {
          if (*(char *)(lVar2 + lVar5) != '\0') {
            auVar14 = FUN_00f1e9b4(puVar3,lVar2 + lVar5 + -0x31);
            *(undefined1 *)(param_4 + 0x91) = 1;
            *(undefined1 (*) [16])(param_4 + 0x60) = auVar14;
            *(long *)(param_4 + 0x78) = param_2._8_8_;
            *(long *)(param_4 + 0x70) = param_2._0_8_;
            *(undefined8 *)(param_4 + 0x88) = uVar15;
            *(undefined8 *)(param_4 + 0x80) = uVar13;
            if (*(char *)(param_4 + 0x90) == '\0') {
              fVar16 = auVar14._0_4_ * auVar14._0_4_;
              fVar18 = auVar14._4_4_ * auVar14._4_4_;
              fVar19 = auVar14._8_4_ * auVar14._8_4_;
              fVar20 = auVar14._12_4_ * auVar14._12_4_;
              *(undefined8 *)(param_4 + 0x48) = uVar15;
              *(undefined8 *)(param_4 + 0x40) = uVar13;
              auVar12._0_4_ = fVar16 + fVar18;
              auVar12._4_4_ = fVar19 + fVar20;
              auVar12._8_4_ = fVar16 + fVar18;
              auVar12._12_4_ = fVar19 + fVar20;
              auVar17 = NEON_ext(auVar12,auVar12,4,1);
              fVar16 = SQRT(auVar17._0_4_ + auVar17._4_4_) * 0.5;
              fVar18 = 1.0;
              if (fVar16 < 0.0) {
                fVar18 = 0.0;
              }
              *(float *)(param_4 + 0x50) = fVar16 * fVar18 - fVar16 * 0.0;
            }
          }
          lVar2 = *(long *)(param_4 + 8);
          uVar4 = uVar4 + 1;
          lVar5 = lVar5 + 0x60;
        } while (uVar4 < (ulong)((*(long *)(param_4 + 0x10) - lVar2 >> 5) * -0x5555555555555555));
      }
    }
  }
  if ((*(char *)(param_4 + 0xa1) == '\0') &&
     (fVar16 = (float)uVar25 - (float)uVar13,
     fVar18 = (float)((ulong)uVar25 >> 0x20) - (float)((ulong)uVar13 >> 0x20),
     fVar19 = (float)uVar26 - (float)uVar15,
     fVar20 = (float)((ulong)uVar26 >> 0x20) - (float)((ulong)uVar15 >> 0x20),
     fVar16 = fVar16 * fVar16, fVar18 = fVar18 * fVar18, fVar19 = fVar19 * fVar19,
     fVar20 = fVar20 * fVar20, auVar6._0_4_ = fVar16 + fVar18, auVar6._4_4_ = fVar19 + fVar20,
     auVar6._8_4_ = fVar16 + fVar18, auVar6._12_4_ = fVar19 + fVar20,
     auVar17 = NEON_ext(auVar6,auVar6,4,1), auVar17._0_4_ + auVar17._4_4_ <= 1.1920929e-07)) {
    local_70._0_4_ = (float)local_70 - auVar14._0_4_;
    local_70._4_4_ = local_70._4_4_ - auVar14._4_4_;
    uStack_68._0_4_ = (float)uStack_68 - auVar14._8_4_;
    uStack_68._4_4_ = uStack_68._4_4_ - auVar14._12_4_;
    local_70._0_4_ = (float)local_70 * (float)local_70;
    local_70._4_4_ = local_70._4_4_ * local_70._4_4_;
    uStack_68._0_4_ = (float)uStack_68 * (float)uStack_68;
    uStack_68._4_4_ = uStack_68._4_4_ * uStack_68._4_4_;
    auVar7._0_4_ = (float)local_70 + local_70._4_4_;
    auVar7._4_4_ = (float)uStack_68 + uStack_68._4_4_;
    auVar7._8_4_ = (float)local_70 + local_70._4_4_;
    auVar7._12_4_ = (float)uStack_68 + uStack_68._4_4_;
    auVar17 = NEON_ext(auVar7,auVar7,4,1);
    if (auVar17._0_4_ + auVar17._4_4_ <= 1.1920929e-07) {
      fVar16 = (float)uVar23 - param_2._0_4_;
      fVar19 = (float)((ulong)uVar23 >> 0x20);
      fVar18 = fVar19 - param_2._4_4_;
      fVar20 = (float)uVar24 - param_2._8_4_;
      fVar22 = (float)((ulong)uVar24 >> 0x20);
      fVar21 = fVar22 - param_2._12_4_;
      fVar16 = fVar16 * fVar16;
      fVar18 = fVar18 * fVar18;
      fVar20 = fVar20 * fVar20;
      fVar21 = fVar21 * fVar21;
      auVar8._0_4_ = fVar16 + fVar18;
      auVar8._4_4_ = fVar20 + fVar21;
      auVar8._8_4_ = fVar16 + fVar18;
      auVar8._12_4_ = fVar20 + fVar21;
      auVar17 = NEON_ext(auVar8,auVar8,4,1);
      if (auVar17._0_4_ + auVar17._4_4_ <= 1.1920929e-07) {
        fVar16 = (float)uVar23 + param_2._0_4_;
        fVar19 = fVar19 + param_2._4_4_;
        fVar18 = (float)uVar24 + param_2._8_4_;
        fVar22 = fVar22 + param_2._12_4_;
        fVar16 = fVar16 * fVar16;
        fVar19 = fVar19 * fVar19;
        fVar18 = fVar18 * fVar18;
        fVar22 = fVar22 * fVar22;
        auVar9._0_4_ = fVar16 + fVar19;
        auVar9._4_4_ = fVar18 + fVar22;
        auVar9._8_4_ = fVar16 + fVar19;
        auVar9._12_4_ = fVar18 + fVar22;
        auVar17 = NEON_ext(auVar9,auVar9,4,1);
        bVar1 = 1.1920929e-07 < auVar17._0_4_ + auVar17._4_4_;
        goto LAB_00f1e6ec;
      }
    }
  }
  bVar1 = true;
LAB_00f1e6ec:
  *(bool *)(param_4 + 0xa1) = bVar1;
  return auVar14;
}


