/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02024e74; name: FUN_02024e74
 */


void FUN_02024e74(undefined8 *param_1,undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined8 param_4,undefined4 param_5)

{
  long lVar1;
  undefined1 auVar2 [16];
  int iVar3;
  int iVar5;
  int iVar6;
  undefined1 auVar4 [16];
  int iVar7;
  undefined1 auVar8 [12];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  fVar14 = param_3._0_4_ - param_2._0_4_;
  fVar15 = param_3._4_4_ - param_2._4_4_;
  fVar16 = param_3._8_4_ - param_2._8_4_;
  fVar17 = param_3._12_4_ - param_2._12_4_;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  auVar4._0_4_ = fVar14 * fVar14 + fVar15 * fVar15;
  auVar4._4_4_ = fVar16 * fVar16 + fVar17 * fVar17;
  auVar4._8_4_ = fVar14 * fVar14 + fVar15 * fVar15;
  auVar4._12_4_ = fVar16 * fVar16 + fVar17 * fVar17;
  auVar4 = NEON_ext(auVar4,auVar4,4,1);
  auVar2._0_4_ = auVar4._0_4_ + auVar4._4_4_;
  auVar2._4_4_ = auVar4._8_4_ + auVar4._12_4_;
  auVar2._8_4_ = auVar4._0_4_ + auVar4._4_4_;
  auVar2._12_4_ = auVar4._8_4_ + auVar4._12_4_;
  auVar4 = NEON_frsqrte(auVar2,4);
  auVar11._0_4_ = auVar2._0_4_ * auVar4._0_4_;
  auVar11._4_4_ = auVar2._4_4_ * auVar4._4_4_;
  auVar11._8_4_ = auVar2._8_4_ * auVar4._8_4_;
  auVar11._12_4_ = auVar2._12_4_ * auVar4._12_4_;
  auVar12 = NEON_frsqrts(auVar4,auVar11,4);
  auVar9._0_4_ = auVar4._0_4_ * auVar12._0_4_;
  auVar9._4_4_ = auVar4._4_4_ * auVar12._4_4_;
  auVar9._8_4_ = auVar4._8_4_ * auVar12._8_4_;
  auVar9._12_4_ = auVar4._12_4_ * auVar12._12_4_;
  auVar13._0_4_ = auVar2._0_4_ * auVar9._0_4_;
  auVar13._4_4_ = auVar2._4_4_ * auVar9._4_4_;
  auVar13._8_4_ = auVar2._8_4_ * auVar9._8_4_;
  auVar13._12_4_ = auVar2._12_4_ * auVar9._12_4_;
  iVar3 = -(uint)(auVar2._0_4_ == 0.0);
  iVar5 = -(uint)(auVar2._4_4_ == 0.0);
  iVar6 = -(uint)(auVar2._8_4_ == 0.0);
  iVar7 = -(uint)(auVar2._12_4_ == 0.0);
  auVar4 = NEON_frsqrts(auVar9,auVar13,4);
  fVar14 = fVar14 * auVar9._0_4_ * auVar4._0_4_;
  fVar15 = fVar15 * auVar9._4_4_ * auVar4._4_4_;
  fVar16 = fVar16 * auVar9._8_4_ * auVar4._8_4_;
  fVar17 = fVar17 * auVar9._12_4_ * auVar4._12_4_;
  fVar14 = (float)CONCAT13((byte)((uint)fVar14 >> 0x18) & ~(byte)((uint)iVar3 >> 0x18),
                           CONCAT12((byte)((uint)fVar14 >> 0x10) & ~(byte)((uint)iVar3 >> 0x10),
                                    CONCAT11((byte)((uint)fVar14 >> 8) & ~(byte)((uint)iVar3 >> 8),
                                             SUB41(fVar14,0) & ~(byte)iVar3)));
  auVar8._0_8_ = CONCAT17((byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar5 >> 0x18),
                          CONCAT16((byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar5 >> 0x10),
                                   CONCAT15((byte)((uint)fVar15 >> 8) & ~(byte)((uint)iVar5 >> 8),
                                            CONCAT14(SUB41(fVar15,0) & ~(byte)iVar5,fVar14))));
  auVar8[8] = SUB41(fVar16,0) & ~(byte)iVar6;
  auVar8[9] = (byte)((uint)fVar16 >> 8) & ~(byte)((uint)iVar6 >> 8);
  auVar8[10] = (byte)((uint)fVar16 >> 0x10) & ~(byte)((uint)iVar6 >> 0x10);
  auVar8[0xb] = (byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar6 >> 0x18);
  auVar10[0xc] = SUB41(fVar17,0) & ~(byte)iVar7;
  auVar10._0_12_ = auVar8;
  auVar10[0xd] = (byte)((uint)fVar17 >> 8) & ~(byte)((uint)iVar7 >> 8);
  auVar10[0xe] = (byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar7 >> 0x10);
  auVar10[0xf] = (byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar7 >> 0x18);
  fVar15 = (float)((ulong)auVar8._0_8_ >> 0x20);
  fVar16 = auVar8._8_4_;
  fVar17 = auVar10._12_4_;
  auVar12._0_4_ = fVar14 * fVar14 + fVar15 * fVar15;
  auVar12._4_4_ = fVar16 * fVar16 + fVar17 * fVar17;
  auVar12._8_4_ = fVar14 * fVar14 + fVar15 * fVar15;
  auVar12._12_4_ = fVar16 * fVar16 + fVar17 * fVar17;
  auVar4 = NEON_ext(auVar12,auVar12,4,1);
  if (0.0 < auVar4._0_4_ + auVar4._4_4_) {
    local_40 = 0;
    uStack_38 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    if (((*PTR_DAT_047d8c00 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d8c00,param_4,param_5), iVar3 != 0)) {
      FUN_00100190(param_2._0_8_,PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c00);
    }
    lVar1 = *(long *)PTR_DAT_047d8c08;
    *(long *)PTR_DAT_047d8c10 = lVar1;
    iVar3 = FUN_01fddb34(param_2._0_8_,param_3,*(undefined8 *)(lVar1 + 0x70),param_4,param_5,
                         &local_70,1,0);
    if (iVar3 != 0) {
      *(undefined1 *)param_1 = 1;
      param_1[3] = CONCAT44(param_2._12_4_ + fVar17 * (float)local_50,
                            param_2._8_4_ + fVar16 * (float)local_50);
      param_1[2] = CONCAT44(param_2._4_4_ + fVar15 * (float)local_50,
                            param_2._0_4_ + fVar14 * (float)local_50);
    }
    FUN_012c7df0(&uStack_38);
  }
  return;
}


