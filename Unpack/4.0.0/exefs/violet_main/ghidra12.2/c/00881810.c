/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00881810; name: FUN_00881810
 */


/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_00881810(long param_1,long param_2,long param_3,long param_4,uint param_5,uint param_6,
            int param_7,int param_8)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  undefined8 *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulong uVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  undefined4 *puVar18;
  long lVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined4 uVar22;
  float fVar29;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar31;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 uVar30;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar32;
  float fVar33;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  long local_1d0 [12];
  float local_170 [12];
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 local_110 [6];
  undefined8 local_e0 [6];
  undefined8 local_b0 [6];
  undefined8 local_80 [6];
  
  lVar11 = *(long *)(param_2 + 0x18);
  if (lVar11 == 0) {
    local_1d0[10] = 0;
    local_1d0[0xb] = 0;
    local_1d0[8] = 0;
    local_1d0[9] = 0;
    local_1d0[6] = 0;
    local_1d0[7] = 0;
    local_1d0[4] = 0;
    local_1d0[5] = 0;
    local_1d0[2] = 0;
    local_1d0[3] = 0;
    local_1d0[0] = 0;
    local_1d0[1] = 0;
    auVar21 = NEON_fmov(0x3f800000,4);
  }
  else {
    local_1d0[0] = lVar11;
    if (*(long *)(param_1 + 0x338) != 0) {
      local_1d0[0] = *(long *)(param_1 + 0x338);
    }
    local_1d0[1] = lVar11;
    if (*(long *)(param_1 + 0x340) != 0) {
      local_1d0[1] = *(long *)(param_1 + 0x340);
    }
    local_1d0[2] = lVar11;
    if (*(long *)(param_1 + 0x348) != 0) {
      local_1d0[2] = *(long *)(param_1 + 0x348);
    }
    local_1d0[3] = lVar11;
    if (*(long *)(param_1 + 0x350) != 0) {
      local_1d0[3] = *(long *)(param_1 + 0x350);
    }
    local_1d0[4] = lVar11;
    if (*(long *)(param_1 + 0x358) != 0) {
      local_1d0[4] = *(long *)(param_1 + 0x358);
    }
    local_1d0[5] = lVar11;
    if (*(long *)(param_1 + 0x360) != 0) {
      local_1d0[5] = *(long *)(param_1 + 0x360);
    }
    local_1d0[6] = lVar11;
    if (*(long *)(param_1 + 0x368) != 0) {
      local_1d0[6] = *(long *)(param_1 + 0x368);
    }
    local_1d0[7] = lVar11;
    if (*(long *)(param_1 + 0x370) != 0) {
      local_1d0[7] = *(long *)(param_1 + 0x370);
    }
    local_1d0[8] = lVar11;
    if (*(long *)(param_1 + 0x378) != 0) {
      local_1d0[8] = *(long *)(param_1 + 0x378);
    }
    local_1d0[9] = lVar11;
    if (*(long *)(param_1 + 0x380) != 0) {
      local_1d0[9] = *(long *)(param_1 + 0x380);
    }
    local_1d0[10] = lVar11;
    if (*(long *)(param_1 + 0x388) != 0) {
      local_1d0[10] = *(long *)(param_1 + 0x388);
    }
    local_1d0[0xb] = lVar11;
    if (*(long *)(param_1 + 0x390) != 0) {
      local_1d0[0xb] = *(long *)(param_1 + 0x390);
    }
    auVar21 = NEON_fmov(0x3f800000,4);
  }
  if (param_6 != 0) {
    uVar13 = 0;
    do {
      puVar7 = (undefined8 *)(param_1 + uVar13 * 4);
      uVar20 = *puVar7;
      uVar17 = uVar13 >> 2;
      uVar14 = (int)uVar13 + 4;
      uVar13 = (ulong)uVar14;
      local_b0[uVar17 * 2 + 1] = puVar7[1];
      local_b0[uVar17 * 2] = uVar20;
      uVar20 = puVar7[6];
      local_e0[uVar17 * 2 + 1] = puVar7[7];
      local_e0[uVar17 * 2] = uVar20;
      uVar20 = puVar7[0xc];
      local_110[uVar17 * 2 + 1] =
           CONCAT44(auVar21._12_4_ - (float)((ulong)puVar7[0xd] >> 0x20),
                    auVar21._8_4_ - (float)puVar7[0xd]);
      local_110[uVar17 * 2] =
           CONCAT44(auVar21._4_4_ - (float)((ulong)uVar20 >> 0x20),auVar21._0_4_ - (float)uVar20);
      uVar20 = puVar7[0x18];
      local_80[uVar17 * 2 + 1] = puVar7[0x19];
      local_80[uVar17 * 2] = uVar20;
    } while (uVar14 < param_6);
  }
  if (param_5 != 0) {
    iVar12 = 0;
    uVar13 = 0;
    do {
      if (param_6 == 0) {
        uStack_138._0_4_ = 0x3f800000;
        if (param_8 == 1) goto LAB_00881b24;
      }
      else {
        uVar14 = 0;
        do {
          pfVar6 = (float *)(param_3 + (ulong)(iVar12 + uVar14) * 4);
          fVar32 = *pfVar6;
          fVar37 = pfVar6[1];
          fVar29 = pfVar6[3];
          uVar17 = (ulong)(uVar14 >> 2);
          uVar14 = uVar14 + 4;
          fVar49 = ABS(fVar32);
          fVar50 = ABS(fVar37);
          fVar51 = ABS(pfVar6[2]);
          fVar53 = ABS(fVar29);
          fVar33 = (float)((ulong)local_80[uVar17 * 2] >> 0x20);
          fVar38 = (float)local_80[uVar17 * 2 + 1];
          iVar15 = -(uint)(fVar50 <= fVar33);
          fVar31 = (float)local_80[uVar17 * 2];
          fVar39 = (float)((ulong)local_80[uVar17 * 2 + 1] >> 0x20);
          iVar2 = -(uint)(fVar49 <= fVar31);
          fVar49 = fVar49 - fVar31;
          fVar50 = fVar50 - fVar33;
          fVar52 = fVar51 - fVar38;
          fVar54 = fVar53 - fVar39;
          local_170[uVar17 * 4 + 2] = pfVar6[2];
          local_170[uVar17 * 4 + 3] = fVar29;
          local_170[uVar17 * 4] = fVar32;
          local_170[uVar17 * 4 + 1] = fVar37;
          iVar3 = -(uint)(fVar51 <= fVar38);
          iVar4 = -(uint)(fVar53 <= fVar39);
          fVar32 = (float)local_110[uVar17 * 2] * fVar31 +
                   (float)CONCAT13((byte)((uint)fVar49 >> 0x18) & ~(byte)((uint)iVar2 >> 0x18),
                                   CONCAT12((byte)((uint)fVar49 >> 0x10) &
                                            ~(byte)((uint)iVar2 >> 0x10),
                                            CONCAT11((byte)((uint)fVar49 >> 8) &
                                                     ~(byte)((uint)iVar2 >> 8),
                                                     SUB41(fVar49,0) & ~(byte)iVar2))) *
                   (float)local_e0[uVar17 * 2];
          fVar37 = (float)((ulong)local_110[uVar17 * 2] >> 0x20) * fVar33 +
                   (float)CONCAT13((byte)((uint)fVar50 >> 0x18) & ~(byte)((uint)iVar15 >> 0x18),
                                   CONCAT12((byte)((uint)fVar50 >> 0x10) &
                                            ~(byte)((uint)iVar15 >> 0x10),
                                            CONCAT11((byte)((uint)fVar50 >> 8) &
                                                     ~(byte)((uint)iVar15 >> 8),
                                                     SUB41(fVar50,0) & ~(byte)iVar15))) *
                   (float)((ulong)local_e0[uVar17 * 2] >> 0x20);
          auVar34._0_8_ = CONCAT44(fVar37,fVar32);
          auVar34._8_4_ =
               (float)local_110[uVar17 * 2 + 1] * fVar38 +
               (float)CONCAT13((byte)((uint)fVar52 >> 0x18) & ~(byte)((uint)iVar3 >> 0x18),
                               CONCAT12((byte)((uint)fVar52 >> 0x10) & ~(byte)((uint)iVar3 >> 0x10),
                                        CONCAT11((byte)((uint)fVar52 >> 8) &
                                                 ~(byte)((uint)iVar3 >> 8),
                                                 SUB41(fVar52,0) & ~(byte)iVar3))) *
               (float)local_e0[uVar17 * 2 + 1];
          auVar34._12_4_ =
               (float)((ulong)local_110[uVar17 * 2 + 1] >> 0x20) * fVar39 +
               (float)CONCAT13((byte)((uint)fVar54 >> 0x18) & ~(byte)((uint)iVar4 >> 0x18),
                               CONCAT12((byte)((uint)fVar54 >> 0x10) & ~(byte)((uint)iVar4 >> 0x10),
                                        CONCAT11((byte)((uint)fVar54 >> 8) &
                                                 ~(byte)((uint)iVar4 >> 8),
                                                 SUB41(fVar54,0) & ~(byte)iVar4))) *
               (float)((ulong)local_e0[uVar17 * 2 + 1] >> 0x20);
          fVar31 = (float)((ulong)local_b0[uVar17 * 2] >> 0x20);
          fVar38 = (float)((ulong)local_b0[uVar17 * 2 + 1] >> 0x20);
          fVar33 = (float)local_b0[uVar17 * 2 + 1];
          fVar29 = (float)local_b0[uVar17 * 2];
          auVar23 = NEON_frecpe(auVar34,4);
          auVar24._0_4_ = auVar23._0_4_ * fVar29;
          auVar24._4_4_ = auVar23._4_4_ * fVar31;
          auVar24._8_4_ = auVar23._8_4_ * fVar33;
          auVar24._12_4_ = auVar23._12_4_ * fVar38;
          local_80[uVar17 * 2 + 1] = auVar34._8_8_;
          local_80[uVar17 * 2] = auVar34._0_8_;
          auVar23._4_4_ = -(uint)(fVar37 <= fVar31);
          auVar23._0_4_ = -(uint)(fVar32 <= fVar29);
          auVar23._8_4_ = -(uint)(auVar34._8_4_ <= fVar33);
          auVar23._12_4_ = -(uint)(auVar34._12_4_ <= fVar38);
          auVar24 = auVar24 ^ (auVar24 ^ auVar21) & auVar23;
          local_110[uVar17 * 2 + -5] = auVar24._8_8_;
          *(long *)((long)&local_140 + uVar17 * 2 * 8) = auVar24._0_8_;
        } while (uVar14 < param_6);
        if (param_8 == 1) {
          if (param_6 - 1 < 3) {
            uStack_138._0_4_ = 0x3f800000;
            uVar14 = 0;
          }
          else {
            uStack_138._0_4_ = 0x3f800000;
            uVar14 = 0;
            puVar18 = (undefined4 *)((ulong)&local_140 | 8);
            do {
              uVar22 = NEON_fminnm(puVar18[-2],(undefined4)uStack_138);
              uVar22 = NEON_fminnm(puVar18[-1],uVar22);
              uVar14 = uVar14 + 4;
              uVar22 = NEON_fminnm(*puVar18,uVar22);
              uStack_138._0_4_ = NEON_fminnm(puVar18[1],uVar22);
              puVar18 = puVar18 + 4;
            } while ((param_6 & 0xfffffffc) != uVar14);
          }
          if ((param_6 & 3) != 0) {
            uVar16 = param_6 & 3;
            do {
              uVar5 = uVar14 >> 2;
              uVar1 = uVar14 & 3;
              uVar14 = uVar14 + 1;
              uStack_138._0_4_ =
                   NEON_fminnm(*(undefined4 *)
                                ((ulong)((long)&local_140 + (ulong)uVar5 * 2 * 8) |
                                (ulong)uVar1 << 2),(undefined4)uStack_138);
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
LAB_00881b24:
          uStack_138._4_4_ = (undefined4)uStack_138;
          local_140 = (undefined4)uStack_138;
          uStack_13c = (undefined4)uStack_138;
          uStack_128 = (undefined4)uStack_138;
          uStack_124 = (undefined4)uStack_138;
          uStack_130 = (undefined4)uStack_138;
          uStack_12c = (undefined4)uStack_138;
          uStack_118 = (undefined4)uStack_138;
          uStack_114 = (undefined4)uStack_138;
          local_120 = (undefined4)uStack_138;
          uStack_11c = (undefined4)uStack_138;
        }
        if (param_6 != 0) {
          uVar17 = 0;
          if (lVar11 == 0) {
            do {
              uVar10 = uVar17 >> 2;
              uVar20 = *(undefined8 *)((long)&local_140 + uVar10 * 2 * 8);
              fVar32 = (float)*(undefined8 *)(local_170 + uVar10 * 4) * (float)uVar20;
              fVar37 = (float)((ulong)*(undefined8 *)(local_170 + uVar10 * 4) >> 0x20) *
                       (float)((ulong)uVar20 >> 0x20);
              fVar29 = (float)*(undefined8 *)(local_170 + uVar10 * 4 + 2) *
                       (float)local_110[uVar10 * 2 + -5];
              fVar31 = (float)((ulong)*(undefined8 *)(local_170 + uVar10 * 4 + 2) >> 0x20) *
                       (float)((ulong)local_110[uVar10 * 2 + -5] >> 0x20);
              auVar36._0_4_ = ABS(fVar32);
              auVar36._4_4_ = ABS(fVar37);
              auVar36._8_4_ = ABS(fVar29);
              auVar36._12_4_ = ABS(fVar31);
              auVar27._0_4_ = -(uint)(0.0 <= fVar32);
              auVar27._4_4_ = -(uint)(0.0 <= fVar37);
              auVar27._8_4_ = -(uint)(0.0 <= fVar29);
              auVar27._12_4_ = -(uint)(0.0 <= fVar31);
              auVar23 = NEON_fminnm(auVar36,auVar21,4);
              fVar32 = -auVar23._4_4_;
              uVar40 = (undefined1)((uint)fVar32 >> 8);
              uVar41 = (undefined1)((uint)fVar32 >> 0x10);
              uVar42 = (undefined1)((uint)fVar32 >> 0x18);
              fVar37 = -auVar23._8_4_;
              uVar43 = (undefined1)((uint)fVar37 >> 8);
              uVar44 = (undefined1)((uint)fVar37 >> 0x10);
              uVar45 = (undefined1)((uint)fVar37 >> 0x18);
              fVar29 = -auVar23._12_4_;
              uVar46 = (undefined1)((uint)fVar29 >> 8);
              uVar47 = (undefined1)((uint)fVar29 >> 0x10);
              uVar48 = (undefined1)((uint)fVar29 >> 0x18);
              auVar9[4] = SUB41(fVar32,0);
              auVar9._0_4_ = -auVar23._0_4_;
              auVar9[5] = uVar40;
              auVar9[6] = uVar41;
              auVar9[7] = uVar42;
              auVar9[8] = SUB41(fVar37,0);
              auVar9[9] = uVar43;
              auVar9[10] = uVar44;
              auVar9[0xb] = uVar45;
              auVar9[0xc] = SUB41(fVar29,0);
              auVar9[0xd] = uVar46;
              auVar9[0xe] = uVar47;
              auVar9[0xf] = uVar48;
              auVar28[4] = SUB41(fVar32,0);
              auVar28._0_4_ = -auVar23._0_4_;
              auVar28[5] = uVar40;
              auVar28[6] = uVar41;
              auVar28[7] = uVar42;
              auVar28[8] = SUB41(fVar37,0);
              auVar28[9] = uVar43;
              auVar28[10] = uVar44;
              auVar28[0xb] = uVar45;
              auVar28[0xc] = SUB41(fVar29,0);
              auVar28[0xd] = uVar46;
              auVar28[0xe] = uVar47;
              auVar28[0xf] = uVar48;
              auVar28 = auVar28 ^ (auVar9 ^ auVar23) & auVar27;
              uVar30 = auVar28._8_8_;
              *(undefined8 *)(local_170 + uVar10 * 4 + 2) = uVar30;
              uVar20 = auVar28._0_8_;
              *(undefined8 *)(local_170 + uVar10 * 4) = uVar20;
              iVar15 = (int)uVar17;
              uVar14 = iVar15 + 4;
              uVar17 = (ulong)uVar14;
              puVar7 = (undefined8 *)(param_4 + (ulong)(uint)(iVar12 + iVar15) * 4);
              puVar7[1] = uVar30;
              *puVar7 = uVar20;
            } while (uVar14 < param_6);
          }
          else {
            do {
              uVar10 = uVar17 >> 2;
              lVar19 = uVar13 * 4;
              uVar20 = *(undefined8 *)((long)&local_140 + uVar10 * 2 * 8);
              fVar33 = (float)uVar20;
              fVar32 = (float)*(undefined8 *)(local_170 + uVar10 * 4) * fVar33;
              fVar37 = (float)((ulong)*(undefined8 *)(local_170 + uVar10 * 4) >> 0x20) *
                       (float)((ulong)uVar20 >> 0x20);
              fVar29 = (float)*(undefined8 *)(local_170 + uVar10 * 4 + 2) *
                       (float)local_110[uVar10 * 2 + -5];
              fVar31 = (float)((ulong)*(undefined8 *)(local_170 + uVar10 * 4 + 2) >> 0x20) *
                       (float)((ulong)local_110[uVar10 * 2 + -5] >> 0x20);
              *(float *)(local_1d0[uVar17] + lVar19) = fVar33;
              iVar15 = (int)uVar17;
              auVar35._0_4_ = ABS(fVar32);
              auVar35._4_4_ = ABS(fVar37);
              auVar35._8_4_ = ABS(fVar29);
              auVar35._12_4_ = ABS(fVar31);
              auVar25._0_4_ = -(uint)(0.0 <= fVar32);
              auVar25._4_4_ = -(uint)(0.0 <= fVar37);
              auVar25._8_4_ = -(uint)(0.0 <= fVar29);
              auVar25._12_4_ = -(uint)(0.0 <= fVar31);
              auVar23 = NEON_fminnm(auVar35,auVar21,4);
              fVar32 = -auVar23._4_4_;
              uVar40 = (undefined1)((uint)fVar32 >> 8);
              uVar41 = (undefined1)((uint)fVar32 >> 0x10);
              uVar42 = (undefined1)((uint)fVar32 >> 0x18);
              fVar37 = -auVar23._8_4_;
              uVar43 = (undefined1)((uint)fVar37 >> 8);
              uVar44 = (undefined1)((uint)fVar37 >> 0x10);
              uVar45 = (undefined1)((uint)fVar37 >> 0x18);
              fVar29 = -auVar23._12_4_;
              uVar46 = (undefined1)((uint)fVar29 >> 8);
              uVar47 = (undefined1)((uint)fVar29 >> 0x10);
              uVar48 = (undefined1)((uint)fVar29 >> 0x18);
              *(undefined4 *)(local_1d0[iVar15 + 1] + lVar19) =
                   *(undefined4 *)((long)local_110 + uVar10 * 0x10 + -0x2c);
              uVar22 = *(undefined4 *)((long)local_110 + uVar10 * 0x10 + -0x24);
              *(undefined4 *)(local_1d0[iVar15 + 2] + lVar19) =
                   *(undefined4 *)(local_110 + uVar10 * 2 + -5);
              auVar8[4] = SUB41(fVar32,0);
              auVar8._0_4_ = -auVar23._0_4_;
              auVar8[5] = uVar40;
              auVar8[6] = uVar41;
              auVar8[7] = uVar42;
              auVar8[8] = SUB41(fVar37,0);
              auVar8[9] = uVar43;
              auVar8[10] = uVar44;
              auVar8[0xb] = uVar45;
              auVar8[0xc] = SUB41(fVar29,0);
              auVar8[0xd] = uVar46;
              auVar8[0xe] = uVar47;
              auVar8[0xf] = uVar48;
              auVar26[4] = SUB41(fVar32,0);
              auVar26._0_4_ = -auVar23._0_4_;
              auVar26[5] = uVar40;
              auVar26[6] = uVar41;
              auVar26[7] = uVar42;
              auVar26[8] = SUB41(fVar37,0);
              auVar26[9] = uVar43;
              auVar26[10] = uVar44;
              auVar26[0xb] = uVar45;
              auVar26[0xc] = SUB41(fVar29,0);
              auVar26[0xd] = uVar46;
              auVar26[0xe] = uVar47;
              auVar26[0xf] = uVar48;
              auVar26 = auVar26 ^ (auVar8 ^ auVar23) & auVar25;
              uVar17 = (ulong)(iVar15 + 4U);
              *(undefined4 *)(local_1d0[iVar15 + 3] + lVar19) = uVar22;
              uVar30 = auVar26._8_8_;
              *(undefined8 *)(local_170 + uVar10 * 4 + 2) = uVar30;
              uVar20 = auVar26._0_8_;
              *(undefined8 *)(local_170 + uVar10 * 4) = uVar20;
              puVar7 = (undefined8 *)(param_4 + (ulong)(uint)(iVar12 + iVar15) * 4);
              puVar7[1] = uVar30;
              *puVar7 = uVar20;
            } while (iVar15 + 4U < param_6);
          }
        }
      }
      uVar13 = uVar13 + 1;
      iVar12 = iVar12 + param_7;
    } while (uVar13 != param_5);
  }
  if (param_6 != 0) {
    uVar13 = 0;
    do {
      uVar17 = uVar13 >> 2;
      uVar20 = local_80[uVar17 * 2];
      lVar11 = param_1 + uVar13 * 4;
      uVar14 = (int)uVar13 + 4;
      uVar13 = (ulong)uVar14;
      *(undefined8 *)(lVar11 + 200) = local_80[uVar17 * 2 + 1];
      *(undefined8 *)(lVar11 + 0xc0) = uVar20;
    } while (uVar14 < param_6);
  }
  return 0;
}


