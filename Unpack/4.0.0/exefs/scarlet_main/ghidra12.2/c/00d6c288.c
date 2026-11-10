/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d6c288; name: FUN_00d6c288
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00d6c288(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float *param_4,
                 long param_5,float param_6,float param_7,float param_8,float param_9,float param_10
                 )

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar17;
  float fVar18;
  
  fVar11 = *param_4 - param_1._0_4_;
  fVar14 = param_4[1] - param_1._4_4_;
  fVar15 = param_4[2] - param_1._8_4_;
  fVar11 = fVar11 * fVar11;
  fVar14 = fVar14 * fVar14;
  fVar15 = fVar15 * fVar15;
  bVar6 = *(char *)((long)param_4 + 0x86) != '\x01';
  auVar12._0_4_ = fVar11 + fVar14;
  auVar12._4_4_ = fVar15 + 0.0;
  auVar12._8_4_ = fVar11 + fVar14;
  auVar12._12_4_ = fVar15 + 0.0;
  auVar12 = NEON_ext(auVar12,auVar12,4,1);
  *(undefined1 *)((long)param_4 + 0x86) = 1;
  if (auVar12._0_4_ + auVar12._4_4_ <= 0.0001) goto LAB_00d6c384;
  *(long *)(param_4 + 2) = param_1._8_8_;
  *(long *)param_4 = param_1._0_8_;
  *(long *)(param_4 + 6) = param_1._8_8_;
  *(long *)(param_4 + 4) = param_1._0_8_;
  FUN_00d6ced0(param_5,param_4 + 0xc,param_4 + 0xd,0,0);
  fVar14 = param_4[5];
  fVar15 = param_4[0xc];
  fVar11 = param_4[0xd];
  if (param_10 == 4.76441e-44) {
    fVar14 = fVar11 + *(float *)(param_5 + 0xf8);
    iVar2 = *(int *)(param_5 + (ulong)(fVar15 < fVar11 && fVar15 < fVar14) * 0xc +
                     (long)(int)param_9 * 4 + 0x124);
    if (iVar2 == 1) {
      fVar14 = fVar15 + *(float *)(param_5 + 0xf4);
      goto LAB_00d6c350;
    }
    if (iVar2 == 3) {
      fVar14 = fVar15;
      if (fVar15 < fVar11) {
        fVar14 = fVar11;
      }
      fVar14 = fVar14 + *(float *)(param_5 + 0xfc);
    }
    else if (iVar2 == 2) {
      if ((fVar11 <= fVar15) || (fVar14 <= fVar15)) {
        fVar14 = fVar15 + *(float *)(param_5 + 0xf4);
      }
    }
    else {
      fVar14 = fVar15;
      if (iVar2 == 4) {
        fVar14 = fVar11;
      }
    }
  }
  else if (fVar15 < fVar11) {
    if (*(char *)(param_5 + 0x11a) == '\0') {
      fVar16 = fVar11 + *(float *)(param_5 + 0xf8);
      if (fVar16 <= fVar15) {
        fVar16 = fVar15;
      }
      if (fVar14 <= fVar16) {
        fVar16 = fVar14;
      }
      fVar14 = fVar16;
    }
  }
  else {
LAB_00d6c350:
  }
  param_4[6] = param_4[6];
  param_4[7] = param_4[7];
  *(ulong *)(param_4 + 4) = CONCAT44(fVar14,param_4[4]);
  if (fVar11 <= fVar15) {
    fVar11 = fVar15;
  }
  if (*(char *)(param_5 + 0x11a) == '\0') {
    if (*(char *)(param_5 + 0x119) == '\0') {
      fVar14 = 0.0;
    }
    else {
      fVar14 = (float)(*(byte *)(param_5 + 0x118) ^ 1);
      if (fVar15 - fVar11 < *(float *)(param_5 + 0xf8)) {
        fVar14 = 1.4013e-45;
      }
    }
  }
  else if (*(float *)(param_5 + 0xfc) <= fVar14 - fVar11) {
LAB_00d6c5c4:
    fVar14 = 2.8026e-45;
  }
  else {
    if (fVar14 - fVar11 < *(float *)(param_5 + 0xf8)) {
      if (*(char *)(param_5 + 0x119) != '\0') {
        fVar14 = 1.4013e-45;
        goto LAB_00d6c37c;
      }
      if (*(float *)(param_5 + 0xfc) <= fVar14 - fVar15) goto LAB_00d6c5c4;
    }
    fVar14 = (float)((uint)(*(byte *)(param_5 + 0x118) == 0) << 1);
  }
LAB_00d6c37c:
  bVar6 = true;
  param_4[0xe] = fVar14;
LAB_00d6c384:
  fVar15 = param_2._0_4_;
  fVar16 = param_2._4_4_;
  fVar17 = param_2._8_4_;
  fVar18 = param_2._12_4_;
  auVar8._0_4_ = fVar15 * fVar15 + fVar16 * fVar16;
  auVar8._4_4_ = fVar17 * fVar17 + fVar18 * fVar18;
  auVar8._8_4_ = fVar15 * fVar15 + fVar16 * fVar16;
  auVar8._12_4_ = fVar17 * fVar17 + fVar18 * fVar18;
  auVar12 = NEON_ext(auVar8,auVar8,4,1);
  fVar14 = auVar12._0_4_ + auVar12._4_4_;
  fVar11 = (float)(0x5f1ffff9 - ((uint)fVar14 >> 1));
  iVar2 = -(uint)(fVar14 == 0.0);
  iVar3 = -(uint)(auVar12._8_4_ + auVar12._12_4_ == 0.0);
  iVar4 = -(uint)(auVar12._0_4_ + auVar12._4_4_ == 0.0);
  iVar5 = -(uint)(auVar12._8_4_ + auVar12._12_4_ == 0.0);
  fVar11 = (fVar14 * -0.70395225 * fVar11 * fVar11 + 1.6819141) * fVar11;
  auVar13[0] = ~(byte)iVar2;
  auVar13[1] = ~(byte)((uint)iVar2 >> 8);
  auVar13[2] = ~(byte)((uint)iVar2 >> 0x10);
  auVar13[3] = ~(byte)((uint)iVar2 >> 0x18);
  auVar13[4] = ~(byte)iVar3;
  auVar13[5] = ~(byte)((uint)iVar3 >> 8);
  auVar13[6] = ~(byte)((uint)iVar3 >> 0x10);
  auVar13[7] = ~(byte)((uint)iVar3 >> 0x18);
  auVar13[8] = ~(byte)iVar4;
  auVar13[9] = ~(byte)((uint)iVar4 >> 8);
  auVar13[10] = ~(byte)((uint)iVar4 >> 0x10);
  auVar13[0xb] = ~(byte)((uint)iVar4 >> 0x18);
  auVar13[0xc] = ~(byte)iVar5;
  auVar13[0xd] = ~(byte)((uint)iVar5 >> 8);
  auVar13[0xe] = ~(byte)((uint)iVar5 >> 0x10);
  auVar13[0xf] = ~(byte)((uint)iVar5 >> 0x18);
  auVar10._0_4_ = fVar15 * fVar11;
  auVar10._4_4_ = fVar16 * fVar11;
  auVar10._8_4_ = fVar17 * fVar11;
  auVar10._12_4_ = fVar18 * fVar11;
  auVar1[8] = (char)_UNK_03caa5b8;
  auVar1._0_8_ = _DAT_03caa5b0;
  auVar1[9] = (char)((ulong)_UNK_03caa5b8 >> 8);
  auVar1[10] = (char)((ulong)_UNK_03caa5b8 >> 0x10);
  auVar1[0xb] = (char)((ulong)_UNK_03caa5b8 >> 0x18);
  auVar1[0xc] = (char)((ulong)_UNK_03caa5b8 >> 0x20);
  auVar1[0xd] = (char)((ulong)_UNK_03caa5b8 >> 0x28);
  auVar1[0xe] = (char)((ulong)_UNK_03caa5b8 >> 0x30);
  auVar1[0xf] = (char)((ulong)_UNK_03caa5b8 >> 0x38);
  auVar10 = auVar10 ^ (auVar10 ^ auVar1) & ~auVar13;
  fVar11 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_047d2388);
  fVar14 = param_4[8] * auVar10._0_4_;
  fVar15 = param_4[9] * auVar10._4_4_;
  fVar16 = param_4[10] * auVar10._8_4_;
  fVar17 = param_4[0xb] * auVar10._12_4_;
  uVar7 = (ulong)((fVar11 / *(float *)PTR_FloatDegree180_047d2390) * 0.5);
  auVar9._0_4_ = fVar14 + fVar15;
  auVar9._4_4_ = fVar16 + fVar17;
  auVar9._8_4_ = fVar14 + fVar15;
  auVar9._12_4_ = fVar16 + fVar17;
  auVar12 = NEON_ext(auVar9,auVar9,4,1);
  if (auVar12._0_4_ + auVar12._4_4_ <
      *(float *)(PTR_SinCosSampleTable_047d2398 + (uVar7 >> 0x18 & 0xff) * 0x10) +
      *(float *)((long)(PTR_SinCosSampleTable_047d2398 + (uVar7 >> 0x18 & 0xff) * 0x10) + 8) *
      (float)((uint)uVar7 & 0xffffff) * 5.9604645e-08) {
    bVar6 = true;
    *(long *)(param_4 + 10) = auVar10._8_8_;
    *(long *)(param_4 + 8) = auVar10._0_8_;
  }
  if (param_4[0xf] != param_6) {
    bVar6 = true;
    param_4[0xf] = param_6;
  }
  fVar11 = 4.2039e-45;
  if (param_10 != 5.74532e-44) {
    fVar11 = param_7;
  }
  if (param_4[0x10] != fVar11) {
    bVar6 = true;
    param_4[0x10] = fVar11;
  }
  if (param_4[0x11] != param_8) {
    bVar6 = true;
    param_4[0x11] = param_8;
  }
  if (param_4[0x12] != param_9) {
    bVar6 = true;
    param_4[0x12] = param_9;
  }
  if (param_4[0x13] != param_10) {
    bVar6 = true;
    param_4[0x13] = param_10;
  }
  if (param_4[0x14] != param_3) {
    bVar6 = true;
    param_4[0x14] = param_3;
  }
  param_4[0x20] = 0.0;
  return bVar6;
}


