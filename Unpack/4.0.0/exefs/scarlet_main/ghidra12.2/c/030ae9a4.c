/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030ae9a4; name: FUN_030ae9a4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_030ae9a4(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],long param_4,
            undefined1 (*param_5) [16],undefined8 *param_6,undefined8 *param_7,undefined8 *param_8)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined1 auVar10 [12];
  undefined1 auVar14 [16];
  undefined1 auVar13 [16];
  undefined1 auVar12 [16];
  undefined1 auVar11 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar19 [12];
  int iVar18;
  int iVar22;
  int iVar23;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  int iVar24;
  int iVar36;
  int iVar37;
  undefined1 auVar35 [14];
  undefined1 auVar32 [16];
  undefined1 auVar31 [16];
  undefined1 auVar30 [16];
  undefined1 auVar29 [16];
  undefined1 auVar28 [16];
  undefined1 auVar27 [16];
  undefined1 auVar26 [16];
  undefined1 auVar25 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  byte bVar42;
  byte bVar43;
  byte bVar44;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  byte bVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_58;
  
  lVar9 = tpidr_el0;
  lVar6 = *(long *)(lVar9 + 0x1000b8);
  if (lVar6 == 0) {
    lVar6 = FUN_00e5d3b4();
    *(long *)(lVar9 + 0x1000b8) = lVar6;
  }
  auVar35 = param_3._2_14_;
  plVar8 = *(long **)(lVar6 + 0x3e0);
  if (plVar8 != (long *)0x0) {
    lVar9 = *plVar8;
    if (*(code **)(lVar9 + 0x18) != (code *)0x0) {
      (**(code **)(lVar9 + 0x18))("getCellForPathfinding",0x15,*(undefined8 *)(lVar9 + 0x28));
    }
    auVar35 = param_3._2_14_;
    puVar1 = (undefined8 *)plVar8[2];
    uVar7 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar7 <= (ulong)plVar8[3]) && (plVar8[2] = uVar7, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = "TtgetCellForPathfinding";
      uVar5 = nn::os::GetSystemTick();
      auVar35 = param_3._2_14_;
      puVar1[1] = uVar5;
    }
    if (((*(byte *)(lVar9 + 0x38) & 1) != 0) && (plVar8[6] != 0)) {
      puVar1 = (undefined8 *)plVar8[2];
      uVar7 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
      if ((uVar7 <= (ulong)plVar8[3]) && (plVar8[2] = uVar7, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = &DAT_03c4e575;
        puVar1[1] = *(undefined8 *)(plVar8[6] + 8);
      }
    }
  }
  local_58 = plVar8;
  if (((*(char *)(param_7 + 1) != '\0') &&
      (uVar2 = *(uint *)((long)param_7 + 0xc), uVar2 != 0xffffffff)) &&
     (lVar9 = *(long *)(*(long *)(param_4 + 0x38) + ((ulong)(uVar2 >> 0xe) & 0x3ff00) + 8),
     lVar9 != 0)) {
    lVar6 = *(long *)(lVar9 + 0x20);
    if ((int)(uVar2 & 0x3fffff) < *(int *)(lVar6 + 0x20)) {
      auVar15 = *(undefined1 (*) [16])(*(long *)(lVar6 + 0x18) + (ulong)(uVar2 & 0x3fffff) * 0x18);
      auVar25._2_14_ = auVar35;
      auVar25._0_2_ = auVar15._0_2_;
      auVar27._6_10_ = auVar35._4_10_;
      auVar27._0_4_ = auVar25._0_4_;
      auVar27._4_2_ = auVar15._2_2_;
      auVar29._10_6_ = auVar35._8_6_;
      auVar29._0_8_ = auVar27._0_8_;
      auVar29._8_2_ = auVar15._4_2_;
      auVar31._14_2_ = auVar35._12_2_;
      auVar31._0_12_ = auVar29._0_12_;
      auVar31._12_2_ = auVar15._6_2_;
      auVar26._4_12_ = auVar31._4_12_;
      auVar26._0_4_ = auVar27._0_4_ & 0xffff;
      auVar28._8_8_ = auVar31._8_8_;
      auVar28._0_6_ = auVar26._0_6_;
      auVar28._6_2_ = 0;
      auVar30._12_4_ = auVar31._12_4_;
      auVar30._0_10_ = auVar28._0_10_;
      auVar30._10_2_ = 0;
      auVar32._0_14_ = auVar30._0_14_;
      auVar32._14_2_ = 0;
      auVar11._2_14_ = auVar15._2_14_;
      auVar11._0_2_ = auVar15._8_2_;
      auVar13._6_10_ = auVar15._6_10_;
      auVar13._0_4_ = auVar11._0_4_;
      auVar13._4_2_ = auVar15._10_2_;
      auVar47._10_6_ = auVar15._10_6_;
      auVar47._0_8_ = auVar13._0_8_;
      auVar47._8_2_ = auVar15._12_2_;
      auVar20._0_12_ = auVar47._0_12_;
      auVar20._12_2_ = auVar15._14_2_;
      auVar20._14_2_ = auVar15._14_2_;
      auVar12._4_12_ = auVar20._4_12_;
      auVar12._0_4_ = auVar13._0_4_ & 0xffff;
      auVar14._8_8_ = auVar20._8_8_;
      auVar14._0_6_ = auVar12._0_6_;
      auVar14._6_2_ = 0;
      auVar40._12_4_ = auVar20._12_4_;
      auVar40._0_10_ = auVar14._0_10_;
      auVar40._10_2_ = 0;
      auVar15._0_14_ = auVar40._0_14_;
      auVar15._14_2_ = 0;
      auVar20 = NEON_ucvtf(auVar32,4);
      lVar6 = *(long *)(lVar6 + 0x38);
      auVar15 = NEON_ucvtf(auVar15,4);
      bVar42 = *(byte *)(lVar9 + 0x40);
      auVar19._0_4_ = *(float *)(lVar6 + 0xa0) + *(float *)(lVar6 + 0x90) * auVar20._0_4_;
      auVar19._4_4_ = *(float *)(lVar6 + 0xa4) + *(float *)(lVar6 + 0x94) * auVar20._4_4_;
      auVar19._8_4_ = *(float *)(lVar6 + 0xa8) + *(float *)(lVar6 + 0x98) * auVar20._8_4_;
      auVar21._12_4_ = *(float *)(lVar6 + 0xac) + *(float *)(lVar6 + 0x9c) * auVar20._12_4_;
      auVar21._0_12_ = auVar19;
      auVar10._0_4_ = *(float *)(lVar6 + 0xa0) + *(float *)(lVar6 + 0x90) * auVar15._0_4_;
      auVar10._4_4_ = *(float *)(lVar6 + 0xa4) + *(float *)(lVar6 + 0x94) * auVar15._4_4_;
      auVar10._8_4_ = *(float *)(lVar6 + 0xa8) + *(float *)(lVar6 + 0x98) * auVar15._8_4_;
      auVar16._12_4_ = *(float *)(lVar6 + 0xac) + *(float *)(lVar6 + 0x9c) * auVar15._12_4_;
      auVar16._0_12_ = auVar10;
      if (CONCAT31(0,bVar42) != 0) {
        auVar46[4] = bVar42;
        auVar46._0_4_ = CONCAT31(0,bVar42);
        auVar46._5_3_ = 0;
        auVar46[8] = bVar42;
        auVar46._9_3_ = 0;
        auVar46[0xc] = bVar42;
        auVar46._13_3_ = 0;
        auVar33._8_8_ = _UNK_03cabbd8;
        auVar33._0_8_ = _DAT_03cabbd0;
        iVar18 = -(uint)bVar42;
        auVar39._8_8_ = _UNK_03cabbc8;
        auVar39._0_8_ = _DAT_03cabbc0;
        auVar49._8_8_ = _UNK_03cab238;
        auVar49._0_8_ = _DAT_03cab230;
        auVar20 = NEON_ushl(auVar49,auVar46,4);
        auVar3._8_4_ = (int)_UNK_03cac2d8;
        auVar3._0_8_ = _DAT_03cac2d0;
        auVar3._12_4_ = (int)((ulong)_UNK_03cac2d8 >> 0x20);
        auVar47 = NEON_ushl(auVar3,auVar46,4);
        auVar15 = a64_TBL(ZEXT816(0),auVar21,auVar33);
        auVar50._0_4_ = -(uint)(-1 < auVar20._0_4_);
        auVar50._4_4_ = -(uint)(-1 < auVar20._4_4_);
        auVar50._8_4_ = -(uint)(-1 < auVar20._8_4_);
        auVar50._12_4_ = -(uint)(-1 < auVar20._8_8_);
        auVar40 = a64_TBL(ZEXT816(0),auVar21,auVar39);
        auVar20 = a64_TBL(ZEXT816(0),auVar16,auVar39);
        auVar21 = auVar21 ^ (auVar21 ^ auVar15) & ~auVar50;
        auVar38._0_4_ = -(uint)(-1 < auVar47._0_4_);
        auVar38._4_4_ = -(uint)(-1 < auVar47._4_4_);
        auVar38._8_4_ = -(uint)(-1 < auVar47._8_4_);
        auVar38._12_4_ = -(uint)(-1 < auVar47._12_4_);
        auVar15 = a64_TBL(ZEXT816(0),auVar16,auVar33);
        auVar16 = auVar16 ^ (auVar16 ^ auVar15) & ~auVar50;
        auVar21 = auVar21 ^ (auVar21 ^ auVar40) & ~auVar38;
        auVar41._4_4_ = iVar18;
        auVar41._0_4_ = iVar18;
        auVar41._8_4_ = iVar18;
        auVar41._12_4_ = iVar18;
        auVar16 = auVar16 ^ (auVar16 ^ auVar20) & ~auVar38;
        auVar48._8_8_ = _UNK_03cabec8;
        auVar48._0_8_ = _DAT_03cabec0;
        auVar15 = NEON_ushl(auVar48,auVar41,4);
        auVar34._0_3_ = auVar21._0_3_;
        bVar42 = (byte)((uint)(auVar15._0_4_ << 0x1f) >> 0x18);
        auVar34[3] = bVar42 ^ auVar21[3];
        auVar34[4] = auVar21[4];
        auVar34[5] = auVar21[5];
        auVar34[6] = auVar21[6];
        bVar43 = (byte)((uint)(auVar15._4_4_ << 0x1f) >> 0x18);
        auVar34[7] = bVar43 ^ auVar21[7];
        auVar34[8] = auVar21[8];
        auVar34[9] = auVar21[9];
        auVar34[10] = auVar21[10];
        bVar44 = (byte)((uint)(auVar15._8_4_ << 0x1f) >> 0x18);
        auVar34[0xb] = bVar44 ^ auVar21[0xb];
        auVar34[0xc] = auVar21[0xc];
        auVar34[0xd] = auVar21[0xd];
        auVar34[0xe] = auVar21[0xe];
        bVar45 = (byte)((uint)(auVar15._12_4_ << 0x1f) >> 0x18);
        auVar34[0xf] = bVar45 ^ auVar21[0xf];
        auVar17._0_3_ = auVar16._0_3_;
        auVar17[3] = auVar16[3] ^ bVar42;
        auVar17[4] = auVar16[4];
        auVar17[5] = auVar16[5];
        auVar17[6] = auVar16[6];
        auVar17[7] = auVar16[7] ^ bVar43;
        auVar17[8] = auVar16[8];
        auVar17[9] = auVar16[9];
        auVar17[10] = auVar16[10];
        auVar17[0xb] = auVar16[0xb] ^ bVar44;
        auVar17[0xc] = auVar16[0xc];
        auVar17[0xd] = auVar16[0xd];
        auVar17[0xe] = auVar16[0xe];
        auVar17[0xf] = auVar16[0xf] ^ bVar45;
        auVar15 = NEON_fmin(auVar34,auVar17,4);
        auVar19 = auVar15._0_12_;
        auVar15 = NEON_fmax(auVar34,auVar17,4);
        auVar10 = auVar15._0_12_;
      }
      auVar15 = *param_5;
      iVar18 = -(uint)(auVar19._0_4_ + *(float *)(lVar9 + 0x50) <= auVar15._0_4_);
      iVar22 = -(uint)(auVar19._4_4_ + *(float *)(lVar9 + 0x54) <= auVar15._4_4_);
      iVar23 = -(uint)(auVar19._8_4_ + *(float *)(lVar9 + 0x58) <= auVar15._8_4_);
      iVar24 = -(uint)(auVar15._0_4_ <= auVar10._0_4_ + *(float *)(lVar9 + 0x50));
      iVar36 = -(uint)(auVar15._4_4_ <= auVar10._4_4_ + *(float *)(lVar9 + 0x54));
      iVar37 = -(uint)(auVar15._8_4_ <= auVar10._8_4_ + *(float *)(lVar9 + 0x58));
      if (CONCAT13((byte)((uint)iVar36 >> 0x18) & (byte)((uint)iVar22 >> 0x18) &
                   (byte)((uint)iVar24 >> 0x18) & (byte)((uint)iVar18 >> 0x18) &
                   (byte)((uint)iVar37 >> 0x18) & (byte)((uint)iVar23 >> 0x18),
                   CONCAT12((byte)((uint)iVar36 >> 0x10) & (byte)((uint)iVar22 >> 0x10) &
                            (byte)((uint)iVar24 >> 0x10) & (byte)((uint)iVar18 >> 0x10) &
                            (byte)((uint)iVar37 >> 0x10) & (byte)((uint)iVar23 >> 0x10),
                            CONCAT11((byte)((uint)iVar36 >> 8) & (byte)((uint)iVar22 >> 8) &
                                     (byte)((uint)iVar24 >> 8) & (byte)((uint)iVar18 >> 8) &
                                     (byte)((uint)iVar37 >> 8) & (byte)((uint)iVar23 >> 8),
                                     (byte)iVar36 & (byte)iVar22 & (byte)iVar24 & (byte)iVar18 &
                                     (byte)iVar37 & (byte)iVar23))) != 0) {
        param_8[1] = auVar15._8_8_;
        *param_8 = auVar15._0_8_;
        uVar4 = *(undefined4 *)((long)param_7 + 0xc);
        goto LAB_030aec20;
      }
    }
  }
  local_b0 = PTR_DAT_047e4fb8 + 0x10;
  uStack_a8 = *param_6;
  local_a0 = param_6[1];
  local_98 = param_6[2];
  uStack_90 = param_6[3];
  uStack_78 = SUB168(*param_5,8);
  local_80 = SUB168(*param_5,0);
  local_70 = *param_7;
  uVar4 = (**(code **)(**(long **)(param_4 + 0xe8) + 0x20))
                    (*(long **)(param_4 + 0xe8),&local_b0,param_8);
LAB_030aec20:
  if (plVar8 != (long *)0x0) {
    lVar9 = *plVar8;
    if (((*(byte *)(lVar9 + 0x38) & 1) != 0) && (plVar8[6] != 0)) {
      puVar1 = (undefined8 *)plVar8[2];
      uVar7 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
      if ((uVar7 <= (ulong)plVar8[3]) && (plVar8[2] = uVar7, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = &DAT_03c4e575;
        puVar1[1] = *(undefined8 *)(plVar8[6] + 8);
      }
    }
    puVar1 = (undefined8 *)plVar8[2];
    uVar7 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar7 <= (ulong)plVar8[3]) && (plVar8[2] = uVar7, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = &DAT_03c2d363;
      uVar5 = nn::os::GetSystemTick();
      puVar1[1] = uVar5;
    }
    if (*(code **)(lVar9 + 0x20) != (code *)0x0) {
      (**(code **)(lVar9 + 0x20))(*(undefined8 *)(lVar9 + 0x28));
    }
  }
  return uVar4;
}


