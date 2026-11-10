/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029aa4a4; name: FUN_029aa4a4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029aa4a4(long param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  int iVar16;
  int iVar17;
  undefined1 auVar15 [16];
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int iVar23;
  int iVar25;
  int iVar26;
  undefined1 auVar24 [16];
  int iVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined8 *local_90 [3];
  long *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  byte local_60;
  byte bStack_5f;
  byte bStack_5e;
  byte bStack_5d;
  byte bStack_5c;
  byte bStack_5b;
  byte bStack_5a;
  byte bStack_59;
  byte bStack_58;
  byte bStack_57;
  byte bStack_56;
  byte bStack_55;
  byte bStack_54;
  byte bStack_53;
  byte bStack_52;
  byte bStack_51;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 *local_40;
  byte *local_38;
  
  puVar3 = PTR_DAT_047d8280;
  if (*(char *)(param_1 + 0x11e) == '\0') {
    if (((*PTR_DAT_047d8280 & 1) == 0) &&
       (iVar14 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar14 != 0)) {
      FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8280);
    }
    puVar5 = PTR_DAT_047d8290;
    puVar4 = PTR_DAT_047d8288;
    lVar6 = *(long *)PTR_DAT_047d8288;
    *(long *)PTR_DAT_047d8290 = lVar6;
    if (*(char *)(lVar6 + 0x38) != '\0') {
      bStack_58 = (byte)_UNK_03cac228;
      bStack_57 = (byte)((ulong)_UNK_03cac228 >> 8);
      bStack_56 = (byte)((ulong)_UNK_03cac228 >> 0x10);
      bStack_55 = (byte)((ulong)_UNK_03cac228 >> 0x18);
      bStack_54 = (byte)((ulong)_UNK_03cac228 >> 0x20);
      bStack_53 = (byte)((ulong)_UNK_03cac228 >> 0x28);
      bStack_52 = (byte)((ulong)_UNK_03cac228 >> 0x30);
      bStack_51 = (byte)((ulong)_UNK_03cac228 >> 0x38);
      local_60 = (byte)_DAT_03cac220;
      bStack_5f = (byte)((ulong)_DAT_03cac220 >> 8);
      bStack_5e = (byte)((ulong)_DAT_03cac220 >> 0x10);
      bStack_5d = (byte)((ulong)_DAT_03cac220 >> 0x18);
      bStack_5c = (byte)((ulong)_DAT_03cac220 >> 0x20);
      bStack_5b = (byte)((ulong)_DAT_03cac220 >> 0x28);
      bStack_5a = (byte)((ulong)_DAT_03cac220 >> 0x30);
      bStack_59 = (byte)((ulong)_DAT_03cac220 >> 0x38);
      uStack_48 = 0;
      local_50 = 0;
      uStack_68 = _UNK_03cabe68;
      local_70 = _DAT_03cabe60;
      if (*(code **)(param_1 + 0x120) != (code *)0x0) {
        local_90[0] = &local_50;
        local_38 = &local_60;
        local_40 = &local_70;
        (**(code **)(param_1 + 0x120))(param_1 + 0x140,local_90,&local_38,&local_40);
        fVar12 = (float)CONCAT13(bStack_55,CONCAT12(bStack_56,CONCAT11(bStack_57,bStack_58)));
        fVar10 = (float)CONCAT13(bStack_5d,CONCAT12(bStack_5e,CONCAT11(bStack_5f,local_60)));
        fVar11 = (float)(CONCAT17(bStack_59,
                                  CONCAT16(bStack_5a,CONCAT15(bStack_5b,CONCAT14(bStack_5c,fVar10)))
                                 ) >> 0x20);
        fVar13 = (float)(CONCAT17(bStack_51,
                                  CONCAT16(bStack_52,CONCAT15(bStack_53,CONCAT14(bStack_54,fVar12)))
                                 ) >> 0x20);
        fVar19 = (float)local_70;
        fVar20 = (float)((ulong)local_70 >> 0x20);
        fVar21 = (float)uStack_68;
        fVar22 = (float)((ulong)uStack_68 >> 0x20);
        auVar15._0_4_ = fVar10 * fVar10 + fVar11 * fVar11;
        auVar15._4_4_ = fVar12 * fVar12 + fVar13 * fVar13;
        auVar15._8_4_ = fVar10 * fVar10 + fVar11 * fVar11;
        auVar15._12_4_ = fVar12 * fVar12 + fVar13 * fVar13;
        auVar24._0_4_ = fVar19 * fVar19 + fVar20 * fVar20;
        auVar24._4_4_ = fVar21 * fVar21 + fVar22 * fVar22;
        auVar24._8_4_ = fVar19 * fVar19 + fVar20 * fVar20;
        auVar24._12_4_ = fVar21 * fVar21 + fVar22 * fVar22;
        auVar15 = NEON_ext(auVar15,auVar15,4,1);
        auVar24 = NEON_ext(auVar24,auVar24,4,1);
        auVar8._0_4_ = auVar15._0_4_ + auVar15._4_4_;
        auVar8._4_4_ = auVar15._8_4_ + auVar15._12_4_;
        auVar8._8_4_ = auVar15._0_4_ + auVar15._4_4_;
        auVar8._12_4_ = auVar15._8_4_ + auVar15._12_4_;
        auVar9._0_4_ = auVar24._0_4_ + auVar24._4_4_;
        auVar9._4_4_ = auVar24._8_4_ + auVar24._12_4_;
        auVar9._8_4_ = auVar24._0_4_ + auVar24._4_4_;
        auVar9._12_4_ = auVar24._8_4_ + auVar24._12_4_;
        auVar15 = NEON_frsqrte(auVar8,4);
        auVar24 = NEON_frsqrte(auVar9,4);
        auVar29._0_4_ = auVar8._0_4_ * auVar15._0_4_;
        auVar29._4_4_ = auVar8._4_4_ * auVar15._4_4_;
        auVar29._8_4_ = auVar8._8_4_ * auVar15._8_4_;
        auVar29._12_4_ = auVar8._12_4_ * auVar15._12_4_;
        auVar30 = NEON_frsqrts(auVar15,auVar29,4);
        auVar28._0_4_ = auVar15._0_4_ * auVar30._0_4_;
        auVar28._4_4_ = auVar15._4_4_ * auVar30._4_4_;
        auVar28._8_4_ = auVar15._8_4_ * auVar30._8_4_;
        auVar28._12_4_ = auVar15._12_4_ * auVar30._12_4_;
        auVar31._0_4_ = auVar9._0_4_ * auVar24._0_4_;
        auVar31._4_4_ = auVar9._4_4_ * auVar24._4_4_;
        auVar31._8_4_ = auVar9._8_4_ * auVar24._8_4_;
        auVar31._12_4_ = auVar9._12_4_ * auVar24._12_4_;
        auVar15 = NEON_frsqrts(auVar24,auVar31,4);
        auVar30._0_4_ = auVar24._0_4_ * auVar15._0_4_;
        auVar30._4_4_ = auVar24._4_4_ * auVar15._4_4_;
        auVar30._8_4_ = auVar24._8_4_ * auVar15._8_4_;
        auVar30._12_4_ = auVar24._12_4_ * auVar15._12_4_;
        auVar32._0_4_ = auVar8._0_4_ * auVar28._0_4_;
        auVar32._4_4_ = auVar8._4_4_ * auVar28._4_4_;
        auVar32._8_4_ = auVar8._8_4_ * auVar28._8_4_;
        auVar32._12_4_ = auVar8._12_4_ * auVar28._12_4_;
        iVar14 = -(uint)(auVar8._0_4_ == 0.0);
        iVar16 = -(uint)(auVar8._4_4_ == 0.0);
        iVar17 = -(uint)(auVar8._8_4_ == 0.0);
        iVar18 = -(uint)(auVar8._12_4_ == 0.0);
        auVar15 = NEON_frsqrts(auVar28,auVar32,4);
        auVar33._0_4_ = auVar9._0_4_ * auVar30._0_4_;
        auVar33._4_4_ = auVar9._4_4_ * auVar30._4_4_;
        auVar33._8_4_ = auVar9._8_4_ * auVar30._8_4_;
        auVar33._12_4_ = auVar9._12_4_ * auVar30._12_4_;
        iVar23 = -(uint)(auVar9._0_4_ == 0.0);
        iVar25 = -(uint)(auVar9._4_4_ == 0.0);
        iVar26 = -(uint)(auVar9._8_4_ == 0.0);
        iVar27 = -(uint)(auVar9._12_4_ == 0.0);
        auVar24 = NEON_frsqrts(auVar30,auVar33,4);
        fVar10 = fVar10 * auVar28._0_4_ * auVar15._0_4_;
        fVar11 = fVar11 * auVar28._4_4_ * auVar15._4_4_;
        fVar12 = fVar12 * auVar28._8_4_ * auVar15._8_4_;
        fVar13 = fVar13 * auVar28._12_4_ * auVar15._12_4_;
        local_60 = SUB41(fVar10,0) & ~(byte)iVar14;
        bStack_5f = (byte)((uint)fVar10 >> 8) & ~(byte)((uint)iVar14 >> 8);
        bStack_5e = (byte)((uint)fVar10 >> 0x10) & ~(byte)((uint)iVar14 >> 0x10);
        bStack_5d = (byte)((uint)fVar10 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18);
        bStack_5c = SUB41(fVar11,0) & ~(byte)iVar16;
        bStack_5b = (byte)((uint)fVar11 >> 8) & ~(byte)((uint)iVar16 >> 8);
        bStack_5a = (byte)((uint)fVar11 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10);
        bStack_59 = (byte)((uint)fVar11 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18);
        bStack_58 = SUB41(fVar12,0) & ~(byte)iVar17;
        bStack_57 = (byte)((uint)fVar12 >> 8) & ~(byte)((uint)iVar17 >> 8);
        bStack_56 = (byte)((uint)fVar12 >> 0x10) & ~(byte)((uint)iVar17 >> 0x10);
        bStack_55 = (byte)((uint)fVar12 >> 0x18) & ~(byte)((uint)iVar17 >> 0x18);
        bStack_54 = SUB41(fVar13,0) & ~(byte)iVar18;
        bStack_53 = (byte)((uint)fVar13 >> 8) & ~(byte)((uint)iVar18 >> 8);
        bStack_52 = (byte)((uint)fVar13 >> 0x10) & ~(byte)((uint)iVar18 >> 0x10);
        bStack_51 = (byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar18 >> 0x18);
        fVar19 = fVar19 * auVar30._0_4_ * auVar24._0_4_;
        fVar20 = fVar20 * auVar30._4_4_ * auVar24._4_4_;
        fVar21 = fVar21 * auVar30._8_4_ * auVar24._8_4_;
        fVar22 = fVar22 * auVar30._12_4_ * auVar24._12_4_;
        local_70 = CONCAT17((byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18),
                            CONCAT16((byte)((uint)fVar20 >> 0x10) & ~(byte)((uint)iVar25 >> 0x10),
                                     CONCAT15((byte)((uint)fVar20 >> 8) & ~(byte)((uint)iVar25 >> 8)
                                              ,CONCAT14(SUB41(fVar20,0) & ~(byte)iVar25,
                                                        CONCAT13((byte)((uint)fVar19 >> 0x18) &
                                                                 ~(byte)((uint)iVar23 >> 0x18),
                                                                 CONCAT12((byte)((uint)fVar19 >>
                                                                                0x10) &
                                                                          ~(byte)((uint)iVar23 >>
                                                                                 0x10),
                                                                          CONCAT11((byte)((uint)
                                                  fVar19 >> 8) & ~(byte)((uint)iVar23 >> 8),
                                                  SUB41(fVar19,0) & ~(byte)iVar23)))))));
        uStack_68 = CONCAT17((byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18),
                             CONCAT16((byte)((uint)fVar22 >> 0x10) & ~(byte)((uint)iVar27 >> 0x10),
                                      CONCAT15((byte)((uint)fVar22 >> 8) &
                                               ~(byte)((uint)iVar27 >> 8),
                                               CONCAT14(SUB41(fVar22,0) & ~(byte)iVar27,
                                                        CONCAT13((byte)((uint)fVar21 >> 0x18) &
                                                                 ~(byte)((uint)iVar26 >> 0x18),
                                                                 CONCAT12((byte)((uint)fVar21 >>
                                                                                0x10) &
                                                                          ~(byte)((uint)iVar26 >>
                                                                                 0x10),
                                                                          CONCAT11((byte)((uint)
                                                  fVar21 >> 8) & ~(byte)((uint)iVar26 >> 8),
                                                  SUB41(fVar21,0) & ~(byte)iVar26)))))));
      }
      lVar6 = *(long *)(param_1 + 0x1a8);
      if (((*puVar3 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar14 != 0)) {
        FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8280);
      }
      uVar7 = *(undefined8 *)puVar4;
      *(undefined8 *)puVar5 = uVar7;
      if (lVar6 == -1) {
        auVar2[1] = bStack_5f;
        auVar2[0] = local_60;
        auVar2[2] = bStack_5e;
        auVar2[3] = bStack_5d;
        auVar2[4] = bStack_5c;
        auVar2[5] = bStack_5b;
        auVar2[6] = bStack_5a;
        auVar2[7] = bStack_59;
        auVar2[8] = bStack_58;
        auVar2[9] = bStack_57;
        auVar2[10] = bStack_56;
        auVar2[0xb] = bStack_55;
        auVar2[0xc] = bStack_54;
        auVar2[0xd] = bStack_53;
        auVar2[0xe] = bStack_52;
        auVar2[0xf] = bStack_51;
        FUN_0299ce20(local_50,auVar2,local_70,uVar7);
      }
      else {
        FUN_0135d26c(local_90,param_1 + 0x1a0);
        auVar1[1] = bStack_5f;
        auVar1[0] = local_60;
        auVar1[2] = bStack_5e;
        auVar1[3] = bStack_5d;
        auVar1[4] = bStack_5c;
        auVar1[5] = bStack_5b;
        auVar1[6] = bStack_5a;
        auVar1[7] = bStack_59;
        auVar1[8] = bStack_58;
        auVar1[9] = bStack_57;
        auVar1[10] = bStack_56;
        auVar1[0xb] = bStack_55;
        auVar1[0xc] = bStack_54;
        auVar1[0xd] = bStack_53;
        auVar1[0xe] = bStack_52;
        auVar1[0xf] = bStack_51;
        FUN_0299db74(local_50,auVar1,local_70,uVar7,local_90);
        if (local_78 != (long *)0x0) {
          (**(code **)(*local_78 + 0x20))();
        }
      }
    }
  }
  return;
}


