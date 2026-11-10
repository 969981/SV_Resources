/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ca6670; name: FUN_00ca6670
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ca6670(float param_1,float param_2,float param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int iVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar22 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  
  uVar14 = _UNK_03caba58;
  uVar13 = _DAT_03caba50;
  iVar10 = (int)param_1 - (uint)(param_1 < 0.0);
  iVar11 = (int)param_2 - (uint)(param_2 < 0.0);
  iVar12 = (int)param_3 - (uint)(param_3 < 0.0);
  param_1 = param_1 - (float)iVar10;
  param_2 = param_2 - (float)iVar11;
  uVar30 = CONCAT44(param_2,param_1);
  param_3 = param_3 - (float)iVar12;
  auVar27._8_4_ = param_3;
  auVar27._0_8_ = uVar30;
  auVar27._12_4_ = 0;
  if ((DAT_048417c0 & 1) == 0) {
    iVar15 = __cxa_guard_acquire(&DAT_048417c0);
    auVar27._12_4_ = 0;
    if (iVar15 != 0) {
      uRam00000000048417b8 = _UNK_03caa668;
      _DAT_048417b0 = _DAT_03caa660;
      __cxa_guard_release(&DAT_048417c0);
      auVar27._12_4_ = 0;
    }
  }
  fVar16 = auVar27._0_4_;
  fVar31 = fVar16 + (float)uVar13;
  fVar32 = auVar27._4_4_ + (float)((ulong)uVar13 >> 0x20);
  fVar33 = auVar27._8_4_ + (float)uVar14;
  if (((DAT_048417e0 & 1) == 0) && (iVar15 = __cxa_guard_acquire(&DAT_048417e0), iVar15 != 0)) {
    uRam00000000048417d8 = _UNK_03caa848;
    _DAT_048417d0 = _DAT_03caa840;
    __cxa_guard_release(&DAT_048417e0);
  }
  uVar4 = iVar10 * 0x1dde90c9;
  uVar5 = iVar11 * 0x43c42e4d;
  uVar6 = iVar12 * 0x668b6e2f;
  uVar3 = uVar4 ^ 0x539;
  uVar7 = (uVar5 ^ uVar3 ^ uVar6) * 0x27d4eb2d;
  uVar1 = (uVar7 ^ uVar7 >> 0xf) & 0xfc;
  uVar7 = uVar5 + 0x43c42e4d;
  uVar8 = (uVar7 ^ uVar6 ^ uVar3) * 0x27d4eb2d;
  uVar2 = (uVar8 ^ uVar8 >> 0xf) & 0xfc;
  uVar8 = uVar6 + 0x668b6e2f;
  uVar9 = (uVar8 ^ uVar5 ^ uVar3) * 0x27d4eb2d;
  uVar9 = (uVar9 ^ uVar9 >> 0xf) & 0xfc;
  fVar23 = auVar27._4_4_ * *(float *)(&DAT_03d620f8 + (ulong)(uVar1 | 1) * 4);
  fVar24 = auVar27._8_4_ * *(float *)(&DAT_03d620f8 + (ulong)(uVar1 | 2) * 4);
  fVar25 = auVar27._12_4_ * 0.0;
  auVar22._0_4_ = fVar16 * *(float *)(&DAT_03d620f8 + (ulong)uVar1 * 4) + fVar23;
  auVar22._4_4_ = fVar24 + fVar25;
  auVar22._8_4_ = fVar16 * *(float *)(&DAT_03d620f8 + (ulong)uVar1 * 4) + fVar23;
  auVar22._12_4_ = fVar24 + fVar25;
  auVar29 = NEON_fmov(0x40c00000,4);
  auVar17._0_4_ =
       param_1 * *(float *)(&DAT_03d620f8 + (ulong)uVar2 * 4) +
       fVar32 * *(float *)(&DAT_03d620f8 + (ulong)(uVar2 | 1) * 4);
  auVar17._4_4_ = param_3 * *(float *)(&DAT_03d620f8 + (ulong)(uVar2 | 2) * 4) + 0.0;
  auVar17._8_4_ =
       param_1 * *(float *)(&DAT_03d620f8 + (ulong)uVar2 * 4) +
       fVar32 * *(float *)(&DAT_03d620f8 + (ulong)(uVar2 | 1) * 4);
  auVar17._12_4_ = param_3 * *(float *)(&DAT_03d620f8 + (ulong)(uVar2 | 2) * 4) + 0.0;
  auVar28._0_4_ =
       param_1 * *(float *)(&DAT_03d620f8 + (ulong)uVar9 * 4) +
       param_2 * *(float *)(&DAT_03d620f8 + (ulong)(uVar9 | 1) * 4);
  auVar28._4_4_ = *(float *)(&DAT_03d620f8 + (ulong)(uVar9 | 2) * 4) * fVar33 + 0.0;
  auVar28._8_4_ =
       param_1 * *(float *)(&DAT_03d620f8 + (ulong)uVar9 * 4) +
       param_2 * *(float *)(&DAT_03d620f8 + (ulong)(uVar9 | 1) * 4);
  auVar28._12_4_ = *(float *)(&DAT_03d620f8 + (ulong)(uVar9 | 2) * 4) * fVar33 + 0.0;
  uVar1 = (uVar8 ^ uVar7 ^ uVar3) * 0x27d4eb2d;
  uVar1 = (uVar1 ^ uVar1 >> 0xf) & 0xfc;
  auVar28 = NEON_ext(auVar28,auVar28,4,1);
  uVar9 = uVar4 + 0x1dde90c9 ^ 0x539;
  fVar23 = auVar28._0_4_ + auVar28._4_4_;
  uVar2 = (uVar9 ^ uVar5 ^ uVar6) * 0x27d4eb2d;
  uVar2 = (uVar2 ^ uVar2 >> 0xf) & 0xfc;
  auVar18._0_4_ =
       param_1 * *(float *)(&DAT_03d620f8 + (ulong)uVar1 * 4) +
       fVar32 * *(float *)(&DAT_03d620f8 + (ulong)(uVar1 | 1) * 4);
  auVar18._4_4_ = *(float *)(&DAT_03d620f8 + (ulong)(uVar1 | 2) * 4) * fVar33 + 0.0;
  auVar18._8_4_ =
       param_1 * *(float *)(&DAT_03d620f8 + (ulong)uVar1 * 4) +
       fVar32 * *(float *)(&DAT_03d620f8 + (ulong)(uVar1 | 1) * 4);
  auVar18._12_4_ = *(float *)(&DAT_03d620f8 + (ulong)(uVar1 | 2) * 4) * fVar33 + 0.0;
  NEON_ext(auVar18,auVar18,4,1);
  uVar1 = (uVar7 ^ uVar6 ^ uVar9) * 0x27d4eb2d;
  uVar1 = (uVar1 ^ uVar1 >> 0xf) & 0xfc;
  auVar19._0_4_ =
       fVar31 * *(float *)(&DAT_03d620f8 + (ulong)uVar2 * 4) +
       param_2 * *(float *)(&DAT_03d620f8 + (ulong)(uVar2 | 1) * 4);
  auVar19._4_4_ = param_3 * *(float *)(&DAT_03d620f8 + (ulong)(uVar2 | 2) * 4) + 0.0;
  auVar19._8_4_ =
       fVar31 * *(float *)(&DAT_03d620f8 + (ulong)uVar2 * 4) +
       param_2 * *(float *)(&DAT_03d620f8 + (ulong)(uVar2 | 1) * 4);
  auVar19._12_4_ = param_3 * *(float *)(&DAT_03d620f8 + (ulong)(uVar2 | 2) * 4) + 0.0;
  auVar28 = NEON_ext(auVar19,auVar19,4,1);
  uVar2 = (uVar9 ^ uVar5 ^ uVar8) * 0x27d4eb2d;
  uVar2 = (uVar2 ^ uVar2 >> 0xf) & 0xfc;
  fVar24 = fVar16 * fVar16 * fVar16 *
           ((float)_DAT_048417d0 + fVar16 * (fVar16 * auVar29._0_4_ - (float)_DAT_048417b0));
  auVar29._0_4_ =
       fVar31 * *(float *)(&DAT_03d620f8 + (ulong)uVar1 * 4) +
       fVar32 * *(float *)(&DAT_03d620f8 + (ulong)(uVar1 | 1) * 4);
  auVar29._4_4_ = param_3 * *(float *)(&DAT_03d620f8 + (ulong)(uVar1 | 2) * 4) + 0.0;
  auVar29._8_4_ =
       fVar31 * *(float *)(&DAT_03d620f8 + (ulong)uVar1 * 4) +
       fVar32 * *(float *)(&DAT_03d620f8 + (ulong)(uVar1 | 1) * 4);
  auVar29._12_4_ = param_3 * *(float *)(&DAT_03d620f8 + (ulong)(uVar1 | 2) * 4) + 0.0;
  uVar7 = (uVar8 ^ uVar9 ^ uVar7) * 0x27d4eb2d;
  uVar7 = (uVar7 ^ uVar7 >> 0xf) & 0xfc;
  auVar22 = NEON_ext(auVar22,auVar22,4,1);
  NEON_ext(auVar17,auVar17,4,1);
  NEON_ext(auVar29,auVar29,4,1);
  fVar16 = auVar22._0_4_ + auVar22._4_4_;
  auVar20._0_4_ =
       fVar31 * *(float *)(&DAT_03d620f8 + (ulong)uVar2 * 4) +
       param_2 * *(float *)(&DAT_03d620f8 + (ulong)(uVar2 | 1) * 4);
  auVar20._4_4_ = *(float *)(&DAT_03d620f8 + (ulong)(uVar2 | 2) * 4) * fVar33 + 0.0;
  auVar20._8_4_ =
       fVar31 * *(float *)(&DAT_03d620f8 + (ulong)uVar2 * 4) +
       param_2 * *(float *)(&DAT_03d620f8 + (ulong)(uVar2 | 1) * 4);
  auVar20._12_4_ = *(float *)(&DAT_03d620f8 + (ulong)(uVar2 | 2) * 4) * fVar33 + 0.0;
  auVar22 = NEON_ext(auVar20,auVar20,4,1);
  fVar25 = (auVar27._12_4_ + (float)((ulong)uVar14 >> 0x20)) * 0.0;
  auVar21._0_4_ =
       fVar31 * *(float *)(&DAT_03d620f8 + (ulong)uVar7 * 4) +
       fVar32 * *(float *)(&DAT_03d620f8 + (ulong)(uVar7 | 1) * 4);
  auVar21._4_4_ = fVar33 * *(float *)(&DAT_03d620f8 + (ulong)(uVar7 | 2) * 4) + fVar25;
  auVar21._8_4_ =
       fVar31 * *(float *)(&DAT_03d620f8 + (ulong)uVar7 * 4) +
       fVar32 * *(float *)(&DAT_03d620f8 + (ulong)(uVar7 | 1) * 4);
  auVar21._12_4_ = fVar33 * *(float *)(&DAT_03d620f8 + (ulong)(uVar7 | 2) * 4) + fVar25;
  NEON_ext(auVar21,auVar21,4,1);
  fVar16 = fVar16 + ((auVar28._0_4_ + auVar28._4_4_) - fVar16) * fVar24;
  fVar23 = fVar23 + ((auVar22._0_4_ + auVar22._4_4_) - fVar23) * fVar24;
  auVar26._4_4_ = fVar23;
  auVar26._0_4_ = fVar16;
  auVar26._8_4_ = fVar16;
  auVar26._12_4_ = fVar23;
  auVar27 = NEON_ext(ZEXT816(0),auVar26,8,1);
  NEON_ext(auVar27,auVar27,8,1);
  return;
}


