/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b9ed1c; name: FUN_02b9ed1c
 */


bool FUN_02b9ed1c(float *param_1)

{
  undefined1 auVar1 [16];
  float fVar2;
  undefined1 auVar3 [12];
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar4 [16];
  int iVar8;
  int iVar10;
  int iVar11;
  undefined1 auVar9 [16];
  int iVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  fVar2 = *param_1;
  fVar5 = param_1[1];
  fVar6 = param_1[2];
  fVar7 = param_1[3];
  auVar9._0_4_ = fVar2 * fVar2 + fVar5 * fVar5;
  auVar9._4_4_ = fVar6 * fVar6 + fVar7 * fVar7;
  auVar9._8_4_ = fVar2 * fVar2 + fVar5 * fVar5;
  auVar9._12_4_ = fVar6 * fVar6 + fVar7 * fVar7;
  auVar9 = NEON_ext(auVar9,auVar9,4,1);
  auVar1._0_4_ = auVar9._0_4_ + auVar9._4_4_;
  auVar1._4_4_ = auVar9._8_4_ + auVar9._12_4_;
  auVar1._8_4_ = auVar9._0_4_ + auVar9._4_4_;
  auVar1._12_4_ = auVar9._8_4_ + auVar9._12_4_;
  auVar9 = NEON_frsqrte(auVar1,4);
  auVar14._0_4_ = auVar1._0_4_ * auVar9._0_4_;
  auVar14._4_4_ = auVar1._4_4_ * auVar9._4_4_;
  auVar14._8_4_ = auVar1._8_4_ * auVar9._8_4_;
  auVar14._12_4_ = auVar1._12_4_ * auVar9._12_4_;
  auVar15 = NEON_frsqrts(auVar9,auVar14,4);
  auVar13._0_4_ = auVar9._0_4_ * auVar15._0_4_;
  auVar13._4_4_ = auVar9._4_4_ * auVar15._4_4_;
  auVar13._8_4_ = auVar9._8_4_ * auVar15._8_4_;
  auVar13._12_4_ = auVar9._12_4_ * auVar15._12_4_;
  auVar16._0_4_ = auVar1._0_4_ * auVar13._0_4_;
  auVar16._4_4_ = auVar1._4_4_ * auVar13._4_4_;
  auVar16._8_4_ = auVar1._8_4_ * auVar13._8_4_;
  auVar16._12_4_ = auVar1._12_4_ * auVar13._12_4_;
  iVar8 = -(uint)(auVar1._0_4_ == 0.0);
  iVar10 = -(uint)(auVar1._4_4_ == 0.0);
  iVar11 = -(uint)(auVar1._8_4_ == 0.0);
  iVar12 = -(uint)(auVar1._12_4_ == 0.0);
  auVar9 = NEON_frsqrts(auVar13,auVar16,4);
  fVar2 = fVar2 * auVar13._0_4_ * auVar9._0_4_;
  fVar5 = fVar5 * auVar13._4_4_ * auVar9._4_4_;
  fVar6 = fVar6 * auVar13._8_4_ * auVar9._8_4_;
  fVar7 = fVar7 * auVar13._12_4_ * auVar9._12_4_;
  fVar2 = (float)CONCAT13((byte)((uint)fVar2 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18),
                          CONCAT12((byte)((uint)fVar2 >> 0x10) & ~(byte)((uint)iVar8 >> 0x10),
                                   CONCAT11((byte)((uint)fVar2 >> 8) & ~(byte)((uint)iVar8 >> 8),
                                            SUB41(fVar2,0) & ~(byte)iVar8)));
  auVar3._0_8_ = CONCAT17((byte)((uint)fVar5 >> 0x18) & ~(byte)((uint)iVar10 >> 0x18),
                          CONCAT16((byte)((uint)fVar5 >> 0x10) & ~(byte)((uint)iVar10 >> 0x10),
                                   CONCAT15((byte)((uint)fVar5 >> 8) & ~(byte)((uint)iVar10 >> 8),
                                            CONCAT14(SUB41(fVar5,0) & ~(byte)iVar10,fVar2))));
  auVar3[8] = SUB41(fVar6,0) & ~(byte)iVar11;
  auVar3[9] = (byte)((uint)fVar6 >> 8) & ~(byte)((uint)iVar11 >> 8);
  auVar3[10] = (byte)((uint)fVar6 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10);
  auVar3[0xb] = (byte)((uint)fVar6 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18);
  auVar4[0xc] = SUB41(fVar7,0) & ~(byte)iVar12;
  auVar4._0_12_ = auVar3;
  auVar4[0xd] = (byte)((uint)fVar7 >> 8) & ~(byte)((uint)iVar12 >> 8);
  auVar4[0xe] = (byte)((uint)fVar7 >> 0x10) & ~(byte)((uint)iVar12 >> 0x10);
  auVar4[0xf] = (byte)((uint)fVar7 >> 0x18) & ~(byte)((uint)iVar12 >> 0x18);
  *(long *)(param_1 + 2) = auVar4._8_8_;
  *(undefined8 *)param_1 = auVar3._0_8_;
  fVar5 = (float)((ulong)auVar3._0_8_ >> 0x20);
  fVar5 = fVar5 * fVar5;
  fVar6 = auVar3._8_4_ * auVar3._8_4_;
  fVar7 = auVar4._12_4_ * auVar4._12_4_;
  auVar15._0_4_ = fVar2 * fVar2 + fVar5;
  auVar15._4_4_ = fVar6 + fVar7;
  auVar15._8_4_ = fVar2 * fVar2 + fVar5;
  auVar15._12_4_ = fVar6 + fVar7;
  auVar9 = NEON_ext(auVar15,auVar15,4,1);
  return 0.0 < auVar9._0_4_ + auVar9._4_4_;
}


