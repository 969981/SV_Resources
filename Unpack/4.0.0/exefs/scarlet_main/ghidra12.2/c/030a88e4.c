/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030a88e4; name: FUN_030a88e4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_030a88e4(long param_1,long param_2,undefined1 (*param_3) [16])

{
  byte bVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  long lVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined *local_80;
  long lStack_78;
  long local_70;
  uint local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_70 = *(long *)(param_1 + 0x20);
  if ((*(uint *)(param_2 + 8) >> (ulong)(*(uint *)(*(long *)(local_70 + 0x20) + 0x98) & 0x1f) & 1)
      == 0) {
    uVar4 = *(undefined8 *)(param_2 + 0x30);
    uVar9 = 0xffffffff;
    *(undefined8 *)(*param_3 + 8) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)*param_3 = uVar4;
  }
  else {
    local_60._0_4_ = (float)*(undefined8 *)(param_2 + 0x30);
    local_60._4_4_ = (float)((ulong)*(undefined8 *)(param_2 + 0x30) >> 0x20);
    uStack_58._0_4_ = (float)*(undefined8 *)(param_2 + 0x38);
    uStack_58._4_4_ = (float)((ulong)*(undefined8 *)(param_2 + 0x38) >> 0x20);
    auVar18 = *(undefined1 (*) [16])(local_70 + 0x50);
    auVar10._0_8_ = CONCAT44(local_60._4_4_ - auVar18._4_4_,(float)local_60 - auVar18._0_4_);
    auVar10._8_4_ = (float)uStack_58 - auVar18._8_4_;
    auVar10._12_4_ = uStack_58._4_4_ - auVar18._12_4_;
    uStack_58 = auVar10._8_8_;
    local_60 = auVar10._0_8_;
    if ((ulong)*(byte *)(local_70 + 0x40) != 0) {
      auVar25._8_8_ = _UNK_03cab238;
      auVar25._0_8_ = _DAT_03cab230;
      bVar1 = PTR_DAT_047e5050[*(byte *)(local_70 + 0x40)];
      auVar23._8_8_ = _UNK_03cabbd8;
      auVar23._0_8_ = _DAT_03cabbd0;
      auVar22._1_3_ = 0;
      auVar22[0] = bVar1;
      auVar22[4] = bVar1;
      auVar22._5_3_ = 0;
      auVar22[8] = bVar1;
      auVar22._9_3_ = 0;
      auVar22[0xc] = bVar1;
      auVar22._13_3_ = 0;
      auVar17._8_8_ = _UNK_03cabbc8;
      auVar17._0_8_ = _DAT_03cabbc0;
      auVar26 = NEON_ushl(auVar25,auVar22,4);
      auVar12 = a64_TBL(ZEXT816(0),auVar10,auVar23);
      auVar18._8_4_ = (int)_UNK_03cac2d8;
      auVar18._0_8_ = _DAT_03cac2d0;
      auVar18._12_4_ = (int)((ulong)_UNK_03cac2d8 >> 0x20);
      auVar23 = NEON_ushl(auVar18,auVar22,4);
      auVar18 = a64_TBL(ZEXT816(0),auVar10,auVar17);
      auVar27._0_4_ = -(uint)(-1 < auVar26._0_4_);
      auVar27._4_4_ = -(uint)(-1 < auVar26._4_4_);
      auVar27._8_4_ = -(uint)(-1 < auVar26._8_4_);
      auVar27._12_4_ = -(uint)(-1 < auVar26._8_8_);
      auVar10 = auVar10 ^ (auVar10 ^ auVar12) & ~auVar27;
      auVar26._0_4_ = -(uint)(-1 < auVar23._0_4_);
      auVar26._4_4_ = -(uint)(-1 < auVar23._4_4_);
      auVar26._8_4_ = -(uint)(-1 < auVar23._8_4_);
      auVar26._12_4_ = -(uint)(-1 < auVar23._12_4_);
      iVar2 = -(uint)bVar1;
      auVar10 = auVar10 ^ (auVar10 ^ auVar18) & ~auVar26;
      auVar19._8_8_ = _UNK_03cabec8;
      auVar19._0_8_ = _DAT_03cabec0;
      auVar13._4_4_ = iVar2;
      auVar13._0_4_ = iVar2;
      auVar13._8_4_ = iVar2;
      auVar13._12_4_ = iVar2;
      auVar18 = NEON_ushl(auVar19,auVar13,4);
      auVar12._0_8_ =
           CONCAT17((byte)((uint)(auVar18._4_4_ << 0x1f) >> 0x18) ^ auVar10[7],
                    CONCAT16(auVar10[6],
                             CONCAT15(auVar10[5],
                                      CONCAT14(auVar10[4],
                                               CONCAT13((byte)((uint)(auVar18._0_4_ << 0x1f) >> 0x18
                                                              ) ^ auVar10[3],auVar10._0_3_)))));
      auVar12[8] = auVar10[8];
      auVar12[9] = auVar10[9];
      auVar12[10] = auVar10[10];
      auVar12[0xb] = (byte)((uint)(auVar18._8_4_ << 0x1f) >> 0x18) ^ auVar10[0xb];
      auVar12[0xc] = auVar10[0xc];
      auVar12[0xd] = auVar10[0xd];
      auVar12[0xe] = auVar10[0xe];
      auVar12[0xf] = (byte)((uint)(auVar18._12_4_ << 0x1f) >> 0x18) ^ auVar10[0xf];
      uStack_58 = auVar12._8_8_;
      local_60 = auVar12._0_8_;
    }
    uVar9 = 0xffffffff;
    local_80 = &DAT_0464d1b0;
    local_68 = 0xffffffff;
    lStack_78 = param_2;
    (**(code **)(**(long **)(param_1 + 0x18) + 0x20))
              (*(long **)(param_1 + 0x18),&local_60,param_2 + 0x40,&local_80,param_3);
    if (local_68 != 0xffffffff) {
      lVar8 = *(long *)(param_1 + 0x20);
      bVar1 = *(byte *)(lVar8 + 0x40);
      if (CONCAT31(0,bVar1) == 0) {
        auVar11 = *param_3;
      }
      else {
        auVar24[4] = bVar1;
        auVar24._0_4_ = CONCAT31(0,bVar1);
        auVar24._5_3_ = 0;
        auVar24[8] = bVar1;
        auVar24._9_3_ = 0;
        auVar24[0xc] = bVar1;
        auVar24._13_3_ = 0;
        auVar28._8_8_ = _UNK_03cab238;
        auVar28._0_8_ = _DAT_03cab230;
        auVar26 = NEON_ushl(auVar28,auVar24,4);
        auVar18 = *param_3;
        auVar14._8_8_ = _UNK_03cabbd8;
        auVar14._0_8_ = _DAT_03cabbd0;
        auVar20._8_8_ = _UNK_03cabbc8;
        auVar20._0_8_ = _DAT_03cabbc0;
        auVar10 = a64_TBL(ZEXT816(0),auVar18,auVar14);
        auVar3._8_4_ = (int)_UNK_03cac2d8;
        auVar3._0_8_ = _DAT_03cac2d0;
        auVar3._12_4_ = (int)((ulong)_UNK_03cac2d8 >> 0x20);
        auVar23 = NEON_ushl(auVar3,auVar24,4);
        auVar12 = a64_TBL(ZEXT816(0),auVar18,auVar20);
        auVar29._0_4_ = -(uint)(-1 < auVar26._0_4_);
        auVar29._4_4_ = -(uint)(-1 < auVar26._4_4_);
        auVar29._8_4_ = -(uint)(-1 < auVar26._8_4_);
        auVar29._12_4_ = -(uint)(-1 < auVar26._8_8_);
        auVar18 = auVar18 ^ (auVar18 ^ auVar10) & ~auVar29;
        auVar15._0_4_ = -(uint)(-1 < auVar23._0_4_);
        auVar15._4_4_ = -(uint)(-1 < auVar23._4_4_);
        auVar15._8_4_ = -(uint)(-1 < auVar23._8_4_);
        auVar15._12_4_ = -(uint)(-1 < auVar23._12_4_);
        auVar18 = auVar18 ^ (auVar18 ^ auVar12) & ~auVar15;
        auVar21._8_8_ = _UNK_03cabec8;
        auVar21._0_8_ = _DAT_03cabec0;
        *(long *)(*param_3 + 8) = auVar18._8_8_;
        *(long *)*param_3 = auVar18._0_8_;
        iVar2 = -(uint)*(byte *)(lVar8 + 0x40);
        auVar16._4_4_ = iVar2;
        auVar16._0_4_ = iVar2;
        auVar16._8_4_ = iVar2;
        auVar16._12_4_ = iVar2;
        auVar10 = NEON_ushl(auVar21,auVar16,4);
        auVar11._0_8_ =
             CONCAT17((byte)((uint)(auVar10._4_4_ << 0x1f) >> 0x18) ^ auVar18[7],
                      CONCAT16(auVar18[6],
                               CONCAT15(auVar18[5],
                                        CONCAT14(auVar18[4],
                                                 CONCAT13((byte)((uint)(auVar10._0_4_ << 0x1f) >>
                                                                0x18) ^ auVar18[3],auVar18._0_3_))))
                     );
        auVar11[8] = auVar18[8];
        auVar11[9] = auVar18[9];
        auVar11[10] = auVar18[10];
        auVar11[0xb] = (byte)((uint)(auVar10._8_4_ << 0x1f) >> 0x18) ^ auVar18[0xb];
        auVar11[0xc] = auVar18[0xc];
        auVar11[0xd] = auVar18[0xd];
        auVar11[0xe] = auVar18[0xe];
        auVar11[0xf] = (byte)((uint)(auVar10._12_4_ << 0x1f) >> 0x18) ^ auVar18[0xf];
        *(long *)(*param_3 + 8) = auVar11._8_8_;
        *(undefined8 *)*param_3 = auVar11._0_8_;
      }
      fVar5 = *(float *)(lVar8 + 0x50);
      fVar6 = *(float *)(lVar8 + 0x54);
      fVar7 = *(float *)(lVar8 + 0x5c);
      *(float *)(*param_3 + 8) = auVar11._8_4_ + *(float *)(lVar8 + 0x58);
      *(float *)(*param_3 + 0xc) = auVar11._12_4_ + fVar7;
      *(float *)*param_3 = auVar11._0_4_ + fVar5;
      *(float *)(*param_3 + 4) = auVar11._4_4_ + fVar6;
      uVar9 = local_68 | *(int *)(*(long *)(*(long *)(param_1 + 0x20) + 0x20) + 0x94) << 0x16;
    }
  }
  return uVar9;
}


