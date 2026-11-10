/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e9c3c8; name: FUN_00e9c3c8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e9c3c8(long *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  undefined1 extraout_var_13;
  undefined1 extraout_var_14;
  undefined1 extraout_var_15;
  undefined1 extraout_var_16;
  undefined1 extraout_var_17;
  undefined1 extraout_var_18;
  undefined1 extraout_var_19;
  undefined1 extraout_var_20;
  undefined1 extraout_var_21;
  undefined1 extraout_var_22;
  undefined1 extraout_var_23;
  undefined1 extraout_var_24;
  undefined1 extraout_var_25;
  undefined1 extraout_var_26;
  undefined1 extraout_var_27;
  undefined1 extraout_var_28;
  undefined1 auVar14 [16];
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar24 [16];
  undefined1 auVar23 [16];
  undefined1 auVar22 [16];
  undefined1 auVar21 [16];
  undefined1 auVar28 [16];
  undefined1 auVar27 [16];
  undefined1 auVar26 [16];
  undefined1 auVar25 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  int local_48 [6];
  
  (**(code **)(*param_1 + 0xa0))(local_48);
  if (param_1[0x1c] == 0) {
    bVar6 = false;
  }
  else {
    bVar6 = false;
    if ((local_48[0] != -1) && ((short)param_1[0x1d] != -1)) {
      FUN_00c8eb50(param_2,local_48[0]);
      bVar6 = true;
      fStack_58 = (float)CONCAT13(extraout_var_19,
                                  CONCAT12(extraout_var_17,CONCAT11(extraout_var_15,extraout_var_13)
                                          ));
      fStack_54 = (float)(CONCAT17(extraout_var_27,
                                   CONCAT16(extraout_var_25,
                                            CONCAT15(extraout_var_23,
                                                     CONCAT14(extraout_var_21,fStack_58)))) >> 0x20)
      ;
      local_60 = (float)CONCAT13(extraout_var_03,
                                 CONCAT12(extraout_var_01,CONCAT11(extraout_var,extraout_b0)));
      fStack_5c = (float)(CONCAT17(extraout_var_11,
                                   CONCAT16(extraout_var_09,
                                            CONCAT15(extraout_var_07,
                                                     CONCAT14(extraout_var_05,local_60)))) >> 0x20);
    }
  }
  if (((long *)param_1[0xe] != (long *)0x0) &&
     (uVar7 = (**(code **)(*(long *)param_1[0xe] + 0x70))(), (uVar7 & 1) != 0)) {
    (**(code **)(*(long *)param_1[0xe] + 0xa8))((long *)param_1[0xe],param_2,param_1);
  }
  if (((long *)param_1[0xf] != (long *)0x0) &&
     (uVar7 = (**(code **)(*(long *)param_1[0xf] + 0x70))(), (uVar7 & 1) != 0)) {
    (**(code **)(*(long *)param_1[0xf] + 0xa8))((long *)param_1[0xf],param_2,param_1);
  }
  if (bVar6) {
    auVar30._0_4_ = local_60 * local_60 + fStack_5c * fStack_5c;
    auVar30._4_4_ = fStack_58 * fStack_58 + fStack_54 * fStack_54;
    auVar30._8_4_ = local_60 * local_60 + fStack_5c * fStack_5c;
    auVar30._12_4_ = fStack_58 * fStack_58 + fStack_54 * fStack_54;
    auVar14 = NEON_ext(auVar30,auVar30,4,1);
    fVar8 = auVar14._0_4_ + auVar14._4_4_;
    fVar10 = auVar14._8_4_ + auVar14._12_4_;
    fVar12 = auVar14._0_4_ + auVar14._4_4_;
    fVar13 = auVar14._8_4_ + auVar14._12_4_;
    fVar3 = -local_60 / fVar8;
    fVar9 = -fStack_5c / fVar10;
    fVar4 = -fStack_58 / fVar12;
    fVar5 = fStack_54 / fVar13;
    iVar15 = -(uint)(fVar8 == 0.0);
    iVar16 = -(uint)(fVar10 == 0.0);
    iVar17 = -(uint)(fVar12 == 0.0);
    iVar18 = -(uint)(fVar13 == 0.0);
    uVar1 = CONCAT13((byte)((uint)fVar4 >> 0x18) & ~(byte)((uint)iVar17 >> 0x18),
                     CONCAT12((byte)((uint)fVar4 >> 0x10) & ~(byte)((uint)iVar17 >> 0x10),
                              CONCAT11((byte)((uint)fVar4 >> 8) & ~(byte)((uint)iVar17 >> 8),
                                       SUB41(fVar4,0) & ~(byte)iVar17)));
    fStack_54 = (float)(CONCAT17((byte)((uint)fVar5 >> 0x18) & ~(byte)((uint)iVar18 >> 0x18),
                                 CONCAT16((byte)((uint)fVar5 >> 0x10) &
                                          ~(byte)((uint)iVar18 >> 0x10),
                                          CONCAT15((byte)((uint)fVar5 >> 8) &
                                                   ~(byte)((uint)iVar18 >> 8),
                                                   CONCAT14(SUB41(fVar5,0) & ~(byte)iVar18,uVar1))))
                       >> 0x20);
    fVar3 = (float)CONCAT13((byte)((uint)fVar3 >> 0x18) & ~(byte)((uint)iVar15 >> 0x18),
                            CONCAT12((byte)((uint)fVar3 >> 0x10) & ~(byte)((uint)iVar15 >> 0x10),
                                     CONCAT11((byte)((uint)fVar3 >> 8) & ~(byte)((uint)iVar15 >> 8),
                                              SUB41(fVar3,0) & ~(byte)iVar15)));
    fStack_5c = (float)(CONCAT17((byte)((uint)fVar9 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                                 CONCAT16((byte)((uint)fVar9 >> 0x10) &
                                          ~(byte)((uint)iVar16 >> 0x10),
                                          CONCAT15((byte)((uint)fVar9 >> 8) &
                                                   ~(byte)((uint)iVar16 >> 8),
                                                   CONCAT14(SUB41(fVar9,0) & ~(byte)iVar16,fVar3))))
                       >> 0x20);
    FUN_00c8eb50(param_2,local_48[0]);
    auVar14._4_4_ = fStack_5c;
    auVar14._0_4_ = fVar3;
    auVar14._8_4_ = uVar1;
    auVar29._4_4_ = uVar1;
    auVar29._0_4_ = uVar1;
    auVar29._8_4_ = uVar1;
    auVar29._12_4_ = uVar1;
    uVar2 = CONCAT13(extraout_var_20,
                     CONCAT12(extraout_var_18,CONCAT11(extraout_var_16,extraout_var_14)));
    auVar20._4_4_ = uVar2;
    auVar20._0_4_ = uVar2;
    auVar20._8_4_ = uVar2;
    auVar20._12_4_ = uVar2;
    auVar14._12_4_ = fStack_54;
    auVar14 = NEON_ext(auVar29,auVar14,0xc,1);
    auVar19._4_4_ = fStack_5c;
    auVar19._0_4_ = fStack_5c;
    auVar19._8_4_ = fStack_5c;
    auVar19._12_4_ = fStack_5c;
    uVar1 = CONCAT13(extraout_var_04,
                     CONCAT12(extraout_var_02,CONCAT11(extraout_var_00,extraout_b0_00)));
    auVar21._4_12_ = auVar20._4_12_;
    auVar21._0_4_ = uVar1;
    uVar11 = (undefined4)
             (CONCAT17(extraout_var_12,
                       CONCAT16(extraout_var_10,
                                CONCAT15(extraout_var_08,CONCAT14(extraout_var_06,uVar1)))) >> 0x20)
    ;
    auVar23._0_8_ = auVar21._0_8_;
    auVar23._8_4_ = uVar11;
    auVar23._12_4_ = uVar2;
    auVar22._8_8_ = auVar23._8_8_;
    auVar22._4_4_ = uVar2;
    auVar22._0_4_ = uVar1;
    auVar24._0_12_ = auVar22._0_12_;
    auVar24._12_4_ = uVar2;
    auVar30 = NEON_ext(auVar24,auVar24,8,1);
    fVar9 = auVar30._0_4_;
    auVar25._4_12_ = auVar24._4_12_;
    auVar25._0_4_ = fVar9;
    auVar27._0_8_ = auVar25._0_8_;
    auVar27._8_4_ = auVar30._8_4_;
    auVar27._12_4_ = uVar2;
    auVar26._8_8_ = auVar27._8_8_;
    auVar26._4_4_ = uVar1;
    auVar26._0_4_ = fVar9;
    auVar28._0_12_ = auVar26._0_12_;
    auVar28._12_4_ = uVar11;
    auVar29 = NEON_ext(auVar28,auVar30,8,1);
    auVar30 = NEON_ext(auVar19,auVar14,0xc,1);
    auVar29 = NEON_ext(auVar29,auVar29,0xc,1);
    FUN_00c9dd4c(SUB41(((float)CONCAT13(extraout_var_04,
                                        CONCAT12(extraout_var_02,
                                                 CONCAT11(extraout_var_00,extraout_b0_00))) *
                        fStack_54 +
                        (float)CONCAT13(extraout_var_28,
                                        CONCAT12(extraout_var_26,
                                                 CONCAT11(extraout_var_24,extraout_var_22))) *
                        fVar3 * (float)_DAT_03cab640 +
                       auVar29._0_4_ * auVar30._0_4_ * (float)_DAT_03cab640) - auVar14._0_4_ * fVar9
                       ,0),param_1[0x1c],(short)param_1[0x1d]);
  }
  return;
}


