/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02517f18; name: FUN_02517f18
 */


undefined1  [16] FUN_02517f18(undefined1 param_1 [16],undefined1 param_2 [16])

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar9;
  int iVar10;
  undefined1 auVar7 [16];
  int iVar11;
  undefined1 auVar8 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  fVar5 = param_1._12_4_;
  fVar4 = param_1._8_4_;
  fVar3 = param_1._4_4_;
  fVar2 = param_1._0_4_;
  auVar7._0_4_ = fVar2 * fVar2 + fVar3 * fVar3;
  auVar7._4_4_ = fVar4 * fVar4 + fVar5 * fVar5;
  auVar7._8_4_ = fVar2 * fVar2 + fVar3 * fVar3;
  auVar7._12_4_ = fVar4 * fVar4 + fVar5 * fVar5;
  auVar7 = NEON_ext(auVar7,auVar7,4,1);
  auVar1._0_4_ = auVar7._0_4_ + auVar7._4_4_;
  auVar1._4_4_ = auVar7._8_4_ + auVar7._12_4_;
  auVar1._8_4_ = auVar7._0_4_ + auVar7._4_4_;
  auVar1._12_4_ = auVar7._8_4_ + auVar7._12_4_;
  auVar7 = NEON_frsqrte(auVar1,4);
  auVar13._0_4_ = auVar1._0_4_ * auVar7._0_4_;
  auVar13._4_4_ = auVar1._4_4_ * auVar7._4_4_;
  auVar13._8_4_ = auVar1._8_4_ * auVar7._8_4_;
  auVar13._12_4_ = auVar1._12_4_ * auVar7._12_4_;
  auVar14 = NEON_frsqrts(auVar7,auVar13,4);
  auVar12._0_4_ = auVar7._0_4_ * auVar14._0_4_;
  auVar12._4_4_ = auVar7._4_4_ * auVar14._4_4_;
  auVar12._8_4_ = auVar7._8_4_ * auVar14._8_4_;
  auVar12._12_4_ = auVar7._12_4_ * auVar14._12_4_;
  auVar15._0_4_ = auVar1._0_4_ * auVar12._0_4_;
  auVar15._4_4_ = auVar1._4_4_ * auVar12._4_4_;
  auVar15._8_4_ = auVar1._8_4_ * auVar12._8_4_;
  auVar15._12_4_ = auVar1._12_4_ * auVar12._12_4_;
  iVar6 = -(uint)(auVar1._0_4_ == 0.0);
  iVar9 = -(uint)(auVar1._4_4_ == 0.0);
  iVar10 = -(uint)(auVar1._8_4_ == 0.0);
  iVar11 = -(uint)(auVar1._12_4_ == 0.0);
  auVar8[0] = ~(byte)iVar6;
  auVar8[1] = ~(byte)((uint)iVar6 >> 8);
  auVar8[2] = ~(byte)((uint)iVar6 >> 0x10);
  auVar8[3] = ~(byte)((uint)iVar6 >> 0x18);
  auVar8[4] = ~(byte)iVar9;
  auVar8[5] = ~(byte)((uint)iVar9 >> 8);
  auVar8[6] = ~(byte)((uint)iVar9 >> 0x10);
  auVar8[7] = ~(byte)((uint)iVar9 >> 0x18);
  auVar8[8] = ~(byte)iVar10;
  auVar8[9] = ~(byte)((uint)iVar10 >> 8);
  auVar8[10] = ~(byte)((uint)iVar10 >> 0x10);
  auVar8[0xb] = ~(byte)((uint)iVar10 >> 0x18);
  auVar8[0xc] = ~(byte)iVar11;
  auVar8[0xd] = ~(byte)((uint)iVar11 >> 8);
  auVar8[0xe] = ~(byte)((uint)iVar11 >> 0x10);
  auVar8[0xf] = ~(byte)((uint)iVar11 >> 0x18);
  auVar7 = NEON_frsqrts(auVar12,auVar15,4);
  auVar14._0_4_ = fVar2 * auVar12._0_4_ * auVar7._0_4_;
  auVar14._4_4_ = fVar3 * auVar12._4_4_ * auVar7._4_4_;
  auVar14._8_4_ = fVar4 * auVar12._8_4_ * auVar7._8_4_;
  auVar14._12_4_ = fVar5 * auVar12._12_4_ * auVar7._12_4_;
  return auVar14 ^ (auVar14 ^ param_2) & ~auVar8;
}


