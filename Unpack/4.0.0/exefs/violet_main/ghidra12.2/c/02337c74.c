/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02337c74; name: FUN_02337c74
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02337c74(undefined1 param_1 [16],undefined1 param_2 [16])

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 auVar15 [12];
  undefined4 uVar18;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  int iVar19;
  int iVar21;
  int iVar22;
  int iVar23;
  undefined1 auVar20 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar29 [16];
  undefined1 auVar28 [16];
  undefined1 auVar27 [16];
  undefined1 auVar26 [16];
  undefined1 auVar33 [16];
  undefined1 auVar32 [16];
  undefined1 auVar31 [16];
  undefined1 auVar30 [16];
  
  uVar4 = param_2._4_4_;
  fVar10 = param_1._12_4_;
  fVar9 = param_1._8_4_;
  fVar8 = param_1._4_4_;
  fVar7 = param_1._0_4_;
  auVar20._0_4_ = fVar7 * fVar7 + fVar8 * fVar8;
  auVar20._4_4_ = fVar9 * fVar9 + fVar10 * fVar10;
  auVar20._8_4_ = fVar7 * fVar7 + fVar8 * fVar8;
  auVar20._12_4_ = fVar9 * fVar9 + fVar10 * fVar10;
  auVar16 = NEON_ext(auVar20,auVar20,4,1);
  auVar24._4_4_ = uVar4;
  auVar24._0_4_ = uVar4;
  auVar24._8_4_ = uVar4;
  auVar24._12_4_ = uVar4;
  fVar1 = auVar16._0_4_ + auVar16._4_4_;
  fVar3 = auVar16._8_4_ + auVar16._12_4_;
  fVar5 = auVar16._0_4_ + auVar16._4_4_;
  fVar6 = auVar16._8_4_ + auVar16._12_4_;
  fVar2 = -fVar7 / fVar1;
  fVar8 = -fVar8 / fVar3;
  fVar9 = -fVar9 / fVar5;
  fVar10 = fVar10 / fVar6;
  iVar19 = -(uint)(fVar1 == 0.0);
  iVar21 = -(uint)(fVar3 == 0.0);
  iVar22 = -(uint)(fVar5 == 0.0);
  iVar23 = -(uint)(fVar6 == 0.0);
  fVar1 = (float)CONCAT13((byte)((uint)fVar2 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18),
                          CONCAT12((byte)((uint)fVar2 >> 0x10) & ~(byte)((uint)iVar19 >> 0x10),
                                   CONCAT11((byte)((uint)fVar2 >> 8) & ~(byte)((uint)iVar19 >> 8),
                                            SUB41(fVar2,0) & ~(byte)iVar19)));
  auVar15._0_8_ =
       CONCAT17((byte)((uint)fVar8 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18),
                CONCAT16((byte)((uint)fVar8 >> 0x10) & ~(byte)((uint)iVar21 >> 0x10),
                         CONCAT15((byte)((uint)fVar8 >> 8) & ~(byte)((uint)iVar21 >> 8),
                                  CONCAT14(SUB41(fVar8,0) & ~(byte)iVar21,fVar1))));
  auVar15[8] = SUB41(fVar9,0) & ~(byte)iVar22;
  auVar15[9] = (byte)((uint)fVar9 >> 8) & ~(byte)((uint)iVar22 >> 8);
  auVar15[10] = (byte)((uint)fVar9 >> 0x10) & ~(byte)((uint)iVar22 >> 0x10);
  auVar15[0xb] = (byte)((uint)fVar9 >> 0x18) & ~(byte)((uint)iVar22 >> 0x18);
  auVar17[0xc] = SUB41(fVar10,0) & ~(byte)iVar23;
  auVar17._0_12_ = auVar15;
  auVar17[0xd] = (byte)((uint)fVar10 >> 8) & ~(byte)((uint)iVar23 >> 8);
  auVar17[0xe] = (byte)((uint)fVar10 >> 0x10) & ~(byte)((uint)iVar23 >> 0x10);
  auVar17[0xf] = (byte)((uint)fVar10 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18);
  uVar11 = param_2[8];
  uVar12 = param_2[9];
  uVar13 = param_2[10];
  uVar14 = param_2[0xb];
  uVar18 = auVar15._8_4_;
  auVar25._4_4_ = uVar18;
  auVar25._0_4_ = uVar18;
  auVar25._8_4_ = uVar18;
  auVar25._12_4_ = uVar18;
  auVar16[4] = uVar11;
  auVar16._0_4_ = param_2._8_4_;
  auVar16[5] = uVar12;
  auVar16[6] = uVar13;
  auVar16[7] = uVar14;
  auVar16[8] = uVar11;
  auVar16[9] = uVar12;
  auVar16[10] = uVar13;
  auVar16[0xb] = uVar14;
  auVar16[0xc] = uVar11;
  auVar16[0xd] = uVar12;
  auVar16[0xe] = uVar13;
  auVar16[0xf] = uVar14;
  auVar20 = NEON_ext(auVar16,param_2,0xc,1);
  auVar26._4_12_ = auVar25._4_12_;
  auVar26._0_4_ = fVar1;
  uVar4 = (undefined4)((ulong)auVar15._0_8_ >> 0x20);
  auVar28._0_8_ = auVar26._0_8_;
  auVar28._8_4_ = uVar4;
  auVar28._12_4_ = uVar18;
  auVar27._8_8_ = auVar28._8_8_;
  auVar27._4_4_ = uVar18;
  auVar27._0_4_ = fVar1;
  auVar29._0_12_ = auVar27._0_12_;
  auVar29._12_4_ = uVar18;
  auVar16 = NEON_ext(auVar29,auVar29,8,1);
  fVar2 = auVar16._0_4_;
  auVar30._4_12_ = auVar29._4_12_;
  auVar30._0_4_ = fVar2;
  auVar32._0_8_ = auVar30._0_8_;
  auVar32._8_4_ = auVar16._8_4_;
  auVar32._12_4_ = uVar18;
  auVar31._8_8_ = auVar32._8_8_;
  auVar31._4_4_ = fVar1;
  auVar31._0_4_ = fVar2;
  auVar33._0_12_ = auVar31._0_12_;
  auVar33._12_4_ = uVar4;
  auVar24 = NEON_ext(auVar24,auVar20,0xc,1);
  auVar16 = NEON_ext(auVar33,auVar16,8,1);
  auVar16 = NEON_ext(auVar16,auVar16,0xc,1);
  FUN_023375d8(fVar7,(fVar1 * param_2._12_4_ + auVar17._12_4_ * param_2._0_4_ * (float)_DAT_03cab640
                     + auVar16._0_4_ * auVar24._0_4_ * (float)_DAT_03cab640) - auVar20._0_4_ * fVar2
              );
  return;
}


