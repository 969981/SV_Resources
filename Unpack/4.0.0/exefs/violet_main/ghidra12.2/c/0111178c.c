/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0111178c; name: FUN_0111178c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0111178c(undefined1 param_1 [16],undefined1 (*param_2) [16],undefined8 *param_3)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  int iVar12;
  float fVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  int iVar18;
  float fVar19;
  float fVar24;
  float fVar25;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar26;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar27;
  float fVar28;
  float fVar34;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar35;
  undefined1 auVar33 [16];
  undefined8 uVar36;
  float fStack_1fc;
  float fStack_1f4;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined2 local_190;
  undefined1 local_18e;
  float local_18c;
  undefined8 local_158;
  undefined2 local_150;
  undefined1 uStack_14e;
  undefined1 uStack_14d;
  float fStack_14c;
  undefined8 local_148;
  undefined8 local_118;
  undefined2 local_110;
  undefined1 local_10e;
  float local_10c;
  undefined8 local_d8;
  undefined1 local_d0 [56];
  undefined8 local_98 [3];
  undefined2 local_78;
  undefined1 local_76;
  
  if (((*PTR_DAT_047d8c00 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c00);
  }
  lVar9 = *(long *)PTR_DAT_047d8c08;
  *(long *)PTR_DAT_047d8c10 = lVar9;
  uVar6 = _UNK_03cab8e8;
  uVar5 = _DAT_03cab8e0;
  uVar4 = _DAT_03cab2e0;
  lVar9 = *(long *)(lVar9 + 0x70);
  if (lVar9 == 0) {
    uVar10 = 0;
  }
  else {
    fVar19 = param_1._0_4_;
    fVar24 = param_1._4_4_;
    fVar25 = param_1._8_4_;
    fVar26 = param_1._12_4_;
    auVar30._0_4_ = fVar19 * fVar19 + fVar24 * fVar24;
    auVar30._4_4_ = fVar25 * fVar25 + fVar26 * fVar26;
    auVar30._8_4_ = fVar19 * fVar19 + fVar24 * fVar24;
    auVar30._12_4_ = fVar25 * fVar25 + fVar26 * fVar26;
    auVar20 = NEON_ext(auVar30,auVar30,4,1);
    auVar11._0_4_ = auVar20._0_4_ + auVar20._4_4_;
    auVar11._4_4_ = auVar20._8_4_ + auVar20._12_4_;
    auVar11._8_4_ = auVar20._0_4_ + auVar20._4_4_;
    auVar11._12_4_ = auVar20._8_4_ + auVar20._12_4_;
    auVar20 = NEON_frsqrte(auVar11,4);
    auVar29._0_4_ = auVar11._0_4_ * auVar20._0_4_;
    auVar29._4_4_ = auVar11._4_4_ * auVar20._4_4_;
    auVar29._8_4_ = auVar11._8_4_ * auVar20._8_4_;
    auVar29._12_4_ = auVar11._12_4_ * auVar20._12_4_;
    auVar30 = NEON_frsqrts(auVar20,auVar29,4);
    auVar21._0_4_ = auVar20._0_4_ * auVar30._0_4_;
    auVar21._4_4_ = auVar20._4_4_ * auVar30._4_4_;
    auVar21._8_4_ = auVar20._8_4_ * auVar30._8_4_;
    auVar21._12_4_ = auVar20._12_4_ * auVar30._12_4_;
    auVar31._0_4_ = auVar11._0_4_ * auVar21._0_4_;
    auVar31._4_4_ = auVar11._4_4_ * auVar21._4_4_;
    auVar31._8_4_ = auVar11._8_4_ * auVar21._8_4_;
    auVar31._12_4_ = auVar11._12_4_ * auVar21._12_4_;
    auVar30 = NEON_frsqrts(auVar21,auVar31,4);
    auVar20 = *param_2;
    fVar19 = fVar19 * auVar21._0_4_ * auVar30._0_4_;
    fVar24 = fVar24 * auVar21._4_4_ * auVar30._4_4_;
    fVar25 = fVar25 * auVar21._8_4_ * auVar30._8_4_;
    fVar26 = fVar26 * auVar21._12_4_ * auVar30._12_4_;
    iVar12 = -(uint)(auVar11._0_4_ == 0.0);
    iVar14 = -(uint)(auVar11._4_4_ == 0.0);
    iVar17 = -(uint)(auVar11._8_4_ == 0.0);
    iVar18 = -(uint)(auVar11._12_4_ == 0.0);
    fVar19 = (float)CONCAT13((byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar12 >> 0x18),
                             CONCAT12((byte)((uint)fVar19 >> 0x10) & ~(byte)((uint)iVar12 >> 0x10),
                                      CONCAT11((byte)((uint)fVar19 >> 8) &
                                               ~(byte)((uint)iVar12 >> 8),
                                               SUB41(fVar19,0) & ~(byte)iVar12)));
    fVar25 = (float)CONCAT13((byte)((uint)fVar25 >> 0x18) & ~(byte)((uint)iVar17 >> 0x18),
                             CONCAT12((byte)((uint)fVar25 >> 0x10) & ~(byte)((uint)iVar17 >> 0x10),
                                      CONCAT11((byte)((uint)fVar25 >> 8) &
                                               ~(byte)((uint)iVar17 >> 8),
                                               SUB41(fVar25,0) & ~(byte)iVar17)));
    if ((char)param_2[1][0] < '\0') {
      auVar30 = NEON_ext(auVar20,auVar20,8,1);
      auVar20._4_4_ = *(undefined4 *)param_2[2];
      auVar20._8_4_ = auVar30._0_4_;
      auVar20._12_4_ = 0;
    }
    fStack_1fc = (float)(CONCAT17((byte)((uint)fVar24 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                                  CONCAT16((byte)((uint)fVar24 >> 0x10) &
                                           ~(byte)((uint)iVar14 >> 0x10),
                                           CONCAT15((byte)((uint)fVar24 >> 8) &
                                                    ~(byte)((uint)iVar14 >> 8),
                                                    CONCAT14(SUB41(fVar24,0) & ~(byte)iVar14,fVar19)
                                                   ))) >> 0x20);
    fStack_1f4 = (float)(CONCAT17((byte)((uint)fVar26 >> 0x18) & ~(byte)((uint)iVar18 >> 0x18),
                                  CONCAT16((byte)((uint)fVar26 >> 0x10) &
                                           ~(byte)((uint)iVar18 >> 0x10),
                                           CONCAT15((byte)((uint)fVar26 >> 8) &
                                                    ~(byte)((uint)iVar18 >> 8),
                                                    CONCAT14(SUB41(fVar26,0) & ~(byte)iVar18,fVar25)
                                                   ))) >> 0x20);
    fVar24 = 0.5;
    uVar10 = 0;
    do {
      fVar27 = fVar19 * 0.5 + auVar20._0_4_;
      fVar34 = fStack_1fc * 0.5 + auVar20._4_4_;
      auVar32._0_8_ = CONCAT44(fVar34,fVar27);
      auVar32._8_4_ = fVar25 * 0.5 + auVar20._8_4_;
      auVar32._12_4_ = fStack_1f4 * 0.5 + auVar20._12_4_;
      fVar26 = (float)uVar4;
      fVar15 = (float)((ulong)uVar4 >> 0x20);
      uVar36 = CONCAT44(fVar34 + fVar15,fVar27 + fVar26);
      fVar13 = (float)uVar5;
      fVar16 = (float)((ulong)uVar5 >> 0x20);
      auVar22._0_8_ = CONCAT44(fVar34 + fVar16,fVar27 + fVar13);
      fVar27 = (float)uVar6;
      auVar22._8_4_ = auVar32._8_4_ + fVar27;
      fVar34 = (float)((ulong)uVar6 >> 0x20);
      auVar22._12_4_ = auVar32._12_4_ + fVar34;
      uStack_198 = auVar32._8_8_;
      local_98[0] = 0;
      local_10e = 0;
      local_110 = 0;
      uVar7 = FUN_00d6fedc(uVar36,lVar9,0x60042,local_d0,1,&local_110);
      auVar2._8_8_ = auVar22._8_8_;
      auVar2._0_8_ = auVar22._0_8_;
      local_d8 = 0;
      uStack_14e = 0;
      local_150 = 0;
      uVar8 = FUN_00c7a0cc(uVar36,auVar2,lVar9,2,&local_110,1,&local_150);
      local_1a0 = auVar32._0_8_;
      if ((uVar7 & 1) == 0) {
LAB_011119d8:
        bVar1 = false;
      }
      else {
        if (((uVar8 & 1) == 0) || (local_10c <= local_d0._4_4_)) {
          fVar28 = fVar19 + local_d0._0_4_;
          fVar35 = fStack_1fc + local_d0._4_4_;
          auVar33._0_8_ = CONCAT44(fVar35,fVar28);
          auVar33._8_4_ = fVar25 + local_d0._8_4_;
          auVar33._12_4_ = fStack_1f4 + local_d0._12_4_;
          auVar23._0_8_ = CONCAT44(fVar35 + fVar16,fVar28 + fVar13);
          auVar23._8_4_ = auVar33._8_4_ + fVar27;
          auVar23._12_4_ = auVar33._12_4_ + fVar34;
          local_118 = 0;
          uStack_198 = auVar33._8_8_;
          local_18e = 0;
          local_190 = 0;
          uVar7 = FUN_00d6fedc(lVar9,0x60042,&local_150,1,&local_190);
          auVar3._8_8_ = auVar23._8_8_;
          auVar3._0_8_ = auVar23._0_8_;
          local_158 = 0;
          local_76 = 0;
          local_78 = 0;
          uVar8 = FUN_00c7a0cc(CONCAT44(fVar35 + fVar15,fVar28 + fVar26),auVar3,lVar9,2,&local_190,1
                               ,&local_78);
          if (((uVar7 & 1) != 0) && (((uVar8 & 1) == 0 || (local_18c <= fStack_14c)))) {
            uVar10 = 1;
            *param_3 = CONCAT44(fStack_14c,CONCAT13(uStack_14d,CONCAT12(uStack_14e,local_150)));
            param_3[1] = local_148;
          }
          FUN_012c7df0(&local_158);
          FUN_012c7df0(&local_118);
          local_1a0 = auVar33._0_8_;
          goto LAB_011119d8;
        }
        bVar1 = true;
      }
      FUN_012c7df0(&local_d8);
      FUN_012c7df0(local_98);
      auVar20._8_8_ = uStack_198;
      auVar20._0_8_ = local_1a0;
    } while ((bVar1) && (fVar24 = fVar24 + 0.5, fVar24 < 5.0));
  }
  return uVar10;
}


