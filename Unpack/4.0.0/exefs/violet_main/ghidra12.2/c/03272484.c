/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03272484; name: FUN_03272484
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03272484(long *param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  undefined1 auVar10 [12];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  byte bVar16;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  long lVar17;
  long lVar18;
  ulong uVar19;
  double dVar20;
  int iVar23;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined4 uVar27;
  int iVar28;
  int iVar30;
  int iVar31;
  undefined8 uVar29;
  double dVar32;
  
  lVar18 = param_1[1];
  lVar17 = *param_1;
  auVar13 = *(undefined1 (*) [16])(param_1 + 2);
  uVar19 = auVar13._0_8_;
  auVar11._0_8_ = (long)uVar19 >> 0x3f;
  uVar8 = auVar13._8_8_;
  auVar11._8_8_ = (long)uVar8 >> 0x3f;
  uVar27 = (undefined4)((long)uVar19 >> 0xe);
  iVar28 = auVar13._4_4_ >> 0xe;
  auVar14._0_8_ = lVar17 >> 0x3f;
  auVar14._8_8_ = lVar18 >> 0x3f;
  iVar23 = (int)(lVar17 >> 0x3f);
  iVar30 = (int)(lVar18 >> 0x3f);
  auVar25._0_8_ = lVar17 >> 0xe;
  auVar25._8_8_ = lVar18 >> 0xe;
  auVar26._0_8_ = -auVar25._0_8_;
  auVar26._8_8_ = -auVar25._8_8_;
  uVar6 = (long)(uVar19 << 0x35) >> 0x3f;
  auVar15._4_4_ = iVar23;
  auVar15._0_4_ = iVar23;
  auVar15._8_4_ = iVar30;
  auVar15._12_4_ = iVar30;
  auVar25 = auVar25 ^ (auVar25 ^ auVar26) & auVar15;
  uVar1 = (uVar8 ^ uVar6) - uVar6;
  iVar31 = auVar13._4_4_ >> 0x1f;
  iVar23 = auVar13._12_4_ >> 0x1f;
  uVar6 = (((long)(uVar19 << 0x35) >> 0x35 ^ uVar6) + ((uVar19 & 0x7ff) >> 10)) -
          (ulong)((uVar8 ^ uVar6) < uVar6);
  auVar22._12_4_ = iVar23;
  auVar22._8_4_ = iVar23;
  iVar23 = LZCOUNT(auVar25._4_4_);
  iVar30 = LZCOUNT(auVar25._12_4_);
  auVar21._0_8_ = -CONCAT44(iVar28,uVar27);
  auVar21._8_8_ = -((long)uVar8 >> 0xe);
  auVar12._4_4_ = iVar28;
  auVar12._0_4_ = uVar27;
  auVar12._8_8_ = (long)uVar8 >> 0xe;
  auVar22._4_4_ = iVar31;
  auVar22._0_4_ = iVar31;
  auVar21 = auVar21 ^ (auVar21 ^ auVar12) & ~auVar22;
  if (iVar23 == 0x20) {
    iVar23 = LZCOUNT(auVar25._0_4_) + iVar23;
  }
  iVar31 = LZCOUNT(auVar21._4_4_);
  if (iVar30 == 0x20) {
    iVar30 = LZCOUNT(auVar25._8_4_) + iVar30;
  }
  if (iVar31 == 0x20) {
    iVar31 = LZCOUNT(auVar21._0_4_) + iVar31;
  }
  iVar28 = LZCOUNT((int)(uVar6 >> 0x20));
  uVar29 = NEON_sminp(CONCAT44(iVar30,iVar23),CONCAT44(iVar30,iVar23),4);
  uVar29 = NEON_smin(uVar29,CONCAT44(iVar31,iVar31),4);
  if (iVar28 == 0x20) {
    iVar28 = LZCOUNT((int)uVar6) + 0x20;
    if (iVar28 != 0x40) goto LAB_032725ac;
    iVar28 = LZCOUNT((int)(uVar1 >> 0x20));
    iVar23 = 0x40;
    if (iVar28 == 0x20) {
      iVar28 = LZCOUNT((int)uVar1) + 0x20;
    }
  }
  else {
    iVar23 = 0;
  }
  iVar28 = iVar28 + iVar23;
LAB_032725ac:
  uVar9 = (int)uVar29 - 0xf;
  if ((int)(iVar28 - 0x36U) <= (int)uVar9) {
    uVar9 = iVar28 - 0x36U;
  }
  uVar8 = (ulong)uVar9;
  if (uVar9 < 0x40) {
    if (uVar9 != 0) {
      uVar6 = uVar1 >> ((ulong)-uVar9 & 0x3f) | uVar6 << (uVar8 & 0x3f);
    }
    uVar7 = uVar1 << (uVar8 & 0x3f);
  }
  else {
    uVar7 = 0;
    uVar6 = uVar1 << (uVar8 & 0x3f);
  }
  auVar2._8_8_ = (long)(int)uVar9;
  auVar2._0_8_ = (long)(int)uVar9;
  auVar22 = NEON_sshl(auVar21,auVar2,8);
  auVar3._8_8_ = (long)(int)uVar9;
  auVar3._0_8_ = (long)(int)uVar9;
  auVar26 = NEON_sshl(auVar25,auVar3,8);
  auVar15 = NEON_ext(auVar14,auVar14,8,1);
  auVar12 = NEON_ext(auVar11,auVar11,8,1);
  dVar20 = (double)(long)(uVar6 << 0x2b | uVar7 >> 0x15 & 0xffffff8000000000 |
                         uVar7 >> 0x15 & 0x7fffffffff);
  dVar4 = (double)(auVar22._0_8_ << 4);
  uVar9 = (uint)(byte)((byte)(lVar17 >> 0x3f) & (byte)_DAT_03cab270);
  auVar10._0_8_ =
       CONCAT17(auVar15[3] & (byte)((ulong)_DAT_03cab270 >> 0x38),
                (uint7)CONCAT14(auVar15[0] & (byte)((ulong)_DAT_03cab270 >> 0x20),uVar9));
  bVar16 = auVar13[7] >> 7;
  auVar10[8] = bVar16 & (byte)_UNK_03cab278;
  auVar10[9] = bVar16 & (byte)((ulong)_UNK_03cab278 >> 8);
  auVar10[10] = bVar16 & (byte)((ulong)_UNK_03cab278 >> 0x10);
  auVar10[0xb] = bVar16 & (byte)((ulong)_UNK_03cab278 >> 0x18);
  auVar13[0xc] = auVar12[0] & (byte)((ulong)_UNK_03cab278 >> 0x20);
  auVar13._0_12_ = auVar10;
  auVar13[0xd] = auVar12[1] & (byte)((ulong)_UNK_03cab278 >> 0x28);
  auVar13[0xe] = auVar12[2] & (byte)((ulong)_UNK_03cab278 >> 0x30);
  auVar13[0xf] = auVar12[3] & (byte)((ulong)_UNK_03cab278 >> 0x38);
  dVar24 = (double)(auVar26._0_8_ << 4);
  dVar32 = (double)(auVar26._8_8_ << 4);
  uVar9 = uVar9 + (int)((ulong)auVar10._0_8_ >> 0x20) + auVar10._8_4_ + auVar13._12_4_;
  dVar5 = dVar20 * 3.725290298461914e-09;
  if ((uVar19 & 0x400) != 0) {
    dVar5 = dVar20 * -3.725290298461914e-09;
  }
  dVar20 = dVar24 * 1.1102230246251565e-16;
  if ((uVar9 & 1) != 0) {
    dVar20 = dVar24 * -1.1102230246251565e-16;
  }
  dVar24 = dVar32 * 1.1102230246251565e-16;
  if ((uVar9 & 2) != 0) {
    dVar24 = dVar32 * -1.1102230246251565e-16;
  }
  param_1[4] = (long)dVar20;
  param_1[5] = (long)dVar24;
  dVar20 = dVar4 * 1.1102230246251565e-16;
  if ((uVar9 & 4) != 0) {
    dVar20 = dVar4 * -1.1102230246251565e-16;
  }
  param_1[6] = (long)dVar20;
  param_1[7] = (long)dVar5;
  return;
}


