/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00881c50; name: FUN_00881c50
 */


undefined8
FUN_00881c50(long param_1,long param_2,long param_3,long param_4,uint param_5,uint param_6,
            int param_7)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined1 auVar15 [16];
  float fVar16;
  int iVar17;
  float fVar19;
  int iVar20;
  float fVar21;
  int iVar22;
  float fVar23;
  int iVar24;
  undefined1 auVar18 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  long local_c0 [12];
  float local_60 [2];
  undefined8 uStack_58;
  undefined8 local_30 [6];
  
  lVar10 = *(long *)(param_2 + 0x18);
  if (lVar10 == 0) {
    local_c0[10] = 0;
    local_c0[0xb] = 0;
    local_c0[8] = 0;
    local_c0[9] = 0;
    local_c0[6] = 0;
    local_c0[7] = 0;
    local_c0[4] = 0;
    local_c0[5] = 0;
    local_c0[2] = 0;
    local_c0[3] = 0;
    local_c0[0] = 0;
    local_c0[1] = 0;
  }
  else {
    local_c0[0] = lVar10;
    if (*(long *)(param_1 + 0x338) != 0) {
      local_c0[0] = *(long *)(param_1 + 0x338);
    }
    local_c0[1] = lVar10;
    if (*(long *)(param_1 + 0x340) != 0) {
      local_c0[1] = *(long *)(param_1 + 0x340);
    }
    local_c0[2] = lVar10;
    if (*(long *)(param_1 + 0x348) != 0) {
      local_c0[2] = *(long *)(param_1 + 0x348);
    }
    local_c0[3] = lVar10;
    if (*(long *)(param_1 + 0x350) != 0) {
      local_c0[3] = *(long *)(param_1 + 0x350);
    }
    local_c0[4] = lVar10;
    if (*(long *)(param_1 + 0x358) != 0) {
      local_c0[4] = *(long *)(param_1 + 0x358);
    }
    local_c0[5] = lVar10;
    if (*(long *)(param_1 + 0x360) != 0) {
      local_c0[5] = *(long *)(param_1 + 0x360);
    }
    local_c0[6] = lVar10;
    if (*(long *)(param_1 + 0x368) != 0) {
      local_c0[6] = *(long *)(param_1 + 0x368);
    }
    local_c0[7] = lVar10;
    if (*(long *)(param_1 + 0x370) != 0) {
      local_c0[7] = *(long *)(param_1 + 0x370);
    }
    local_c0[8] = lVar10;
    if (*(long *)(param_1 + 0x378) != 0) {
      local_c0[8] = *(long *)(param_1 + 0x378);
    }
    local_c0[9] = lVar10;
    if (*(long *)(param_1 + 0x380) != 0) {
      local_c0[9] = *(long *)(param_1 + 0x380);
    }
    local_c0[10] = lVar10;
    if (*(long *)(param_1 + 0x388) != 0) {
      local_c0[10] = *(long *)(param_1 + 0x388);
    }
    local_c0[0xb] = lVar10;
    if (*(long *)(param_1 + 0x390) != 0) {
      local_c0[0xb] = *(long *)(param_1 + 0x390);
    }
  }
  if (param_6 != 0) {
    uVar8 = 0;
    do {
      puVar2 = (undefined8 *)(param_1 + uVar8 * 4);
      uVar7 = *puVar2;
      uVar12 = uVar8 >> 2;
      uVar11 = (int)uVar8 + 4;
      uVar8 = (ulong)uVar11;
      local_30[uVar12 * 2 + 1] = puVar2[1];
      local_30[uVar12 * 2] = uVar7;
    } while (uVar11 < param_6);
    if (param_5 != 0) {
      if (lVar10 == 0) {
        uVar8 = 0;
        iVar9 = 0;
        do {
          uVar11 = 0;
          do {
            lVar10 = (ulong)(iVar9 + uVar11) * 4;
            uVar12 = (ulong)(uVar11 >> 2);
            auVar15 = *(undefined1 (*) [16])(param_3 + lVar10);
            auVar28._8_8_ = local_30[uVar12 * 2 + 1];
            auVar28._0_8_ = local_30[uVar12 * 2];
            auVar26._0_4_ = ABS(auVar15._0_4_);
            auVar26._4_4_ = ABS(auVar15._4_4_);
            auVar26._8_4_ = ABS(auVar15._8_4_);
            auVar26._12_4_ = ABS(auVar15._12_4_);
            auVar26 = NEON_fminnm(auVar26,auVar28,4);
            auVar27._0_4_ = -(uint)(0.0 <= auVar15._0_4_);
            auVar27._4_4_ = -(uint)(0.0 <= auVar15._4_4_);
            auVar27._8_4_ = -(uint)(0.0 <= auVar15._8_4_);
            auVar27._12_4_ = -(uint)(0.0 <= auVar15._12_4_);
            uVar11 = uVar11 + 4;
            auVar28 = NEON_frecpe(auVar15,4);
            auVar15._4_4_ = -auVar26._4_4_;
            auVar15._0_4_ = -auVar26._0_4_;
            auVar15._8_4_ = -auVar26._8_4_;
            auVar15._12_4_ = -auVar26._12_4_;
            auVar26 = auVar26 ^ (auVar26 ^ auVar15) & ~auVar27;
            local_60[uVar12 * 4 + 2] = auVar26._8_4_ * auVar28._8_4_;
            local_60[uVar12 * 4 + 3] = auVar26._12_4_ * auVar28._12_4_;
            local_60[uVar12 * 4] = auVar26._0_4_ * auVar28._0_4_;
            local_60[uVar12 * 4 + 1] = auVar26._4_4_ * auVar28._4_4_;
            puVar2 = (undefined8 *)(param_4 + lVar10);
            puVar2[1] = auVar26._8_8_;
            *puVar2 = auVar26._0_8_;
          } while (uVar11 < param_6);
          uVar8 = uVar8 + 1;
          iVar9 = iVar9 + param_7;
        } while (uVar8 != param_5);
      }
      else {
        auVar15 = NEON_fmov(0x3f800000,4);
        iVar9 = 0;
        uVar8 = 0;
        do {
          uVar11 = 0;
          do {
            lVar10 = (ulong)(iVar9 + uVar11) * 4;
            uVar12 = (ulong)(uVar11 >> 2);
            lVar13 = local_c0[uVar11];
            auVar28 = *(undefined1 (*) [16])(param_3 + lVar10);
            fVar16 = auVar28._0_4_;
            fVar19 = auVar28._4_4_;
            fVar21 = auVar28._8_4_;
            fVar23 = auVar28._12_4_;
            auVar25._8_8_ = local_30[uVar12 * 2 + 1];
            auVar25._0_8_ = local_30[uVar12 * 2];
            auVar28 = NEON_frecpe(auVar28,4);
            lVar14 = uVar8 * 4;
            auVar3._4_4_ = ABS(fVar19);
            auVar3._0_4_ = ABS(fVar16);
            auVar3._8_4_ = ABS(fVar21);
            auVar3._12_4_ = ABS(fVar23);
            auVar26 = NEON_fminnm(auVar3,auVar25,4);
            iVar17 = -(uint)(fVar16 == 0.0);
            iVar20 = -(uint)(fVar19 == 0.0);
            iVar22 = -(uint)(fVar21 == 0.0);
            iVar24 = -(uint)(fVar23 == 0.0);
            auVar18[0] = ~(byte)iVar17;
            auVar18[1] = ~(byte)((uint)iVar17 >> 8);
            auVar18[2] = ~(byte)((uint)iVar17 >> 0x10);
            auVar18[3] = ~(byte)((uint)iVar17 >> 0x18);
            auVar18[4] = ~(byte)iVar20;
            auVar18[5] = ~(byte)((uint)iVar20 >> 8);
            auVar18[6] = ~(byte)((uint)iVar20 >> 0x10);
            auVar18[7] = ~(byte)((uint)iVar20 >> 0x18);
            auVar18[8] = ~(byte)iVar22;
            auVar18[9] = ~(byte)((uint)iVar22 >> 8);
            auVar18[10] = ~(byte)((uint)iVar22 >> 0x10);
            auVar18[0xb] = ~(byte)((uint)iVar22 >> 0x18);
            auVar18[0xc] = ~(byte)iVar24;
            auVar18[0xd] = ~(byte)((uint)iVar24 >> 8);
            auVar18[0xe] = ~(byte)((uint)iVar24 >> 0x10);
            auVar18[0xf] = ~(byte)((uint)iVar24 >> 0x18);
            auVar6._4_4_ = -auVar26._4_4_;
            auVar6._0_4_ = -auVar26._0_4_;
            auVar6._8_4_ = -auVar26._8_4_;
            auVar6._12_4_ = -auVar26._12_4_;
            auVar4._4_4_ = -(uint)(0.0 <= fVar19);
            auVar4._0_4_ = -(uint)(0.0 <= fVar16);
            auVar4._8_4_ = -(uint)(0.0 <= fVar21);
            auVar4._12_4_ = -(uint)(0.0 <= fVar23);
            auVar26 = auVar26 ^ (auVar26 ^ auVar6) & ~auVar4;
            auVar5._4_4_ = auVar26._4_4_ * auVar28._4_4_;
            auVar5._0_4_ = auVar26._0_4_ * auVar28._0_4_;
            auVar5._8_4_ = auVar26._8_4_ * auVar28._8_4_;
            auVar5._12_4_ = auVar26._12_4_ * auVar28._12_4_;
            auVar28 = auVar15 ^ (auVar15 ^ auVar5) & auVar18;
            *(long *)(local_60 + uVar12 * 4 + 2) = auVar28._8_8_;
            *(long *)(local_60 + uVar12 * 4) = auVar28._0_8_;
            *(int *)(lVar13 + lVar14) = auVar28._0_4_;
            *(float *)(local_c0[uVar11 + 1] + lVar14) = local_60[uVar12 * 4 + 1];
            fVar16 = local_60[uVar12 * 4 + 3];
            *(float *)(local_c0[uVar11 + 2] + lVar14) = local_60[uVar12 * 4 + 2];
            uVar1 = uVar11 + 3;
            uVar11 = uVar11 + 4;
            *(float *)(local_c0[uVar1] + lVar14) = fVar16;
            puVar2 = (undefined8 *)(param_4 + lVar10);
            puVar2[1] = auVar26._8_8_;
            *puVar2 = auVar26._0_8_;
          } while (uVar11 < param_6);
          uVar8 = uVar8 + 1;
          iVar9 = iVar9 + param_7;
        } while (uVar8 != param_5);
      }
    }
  }
  return 0;
}


