/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030cd4bc; name: FUN_030cd4bc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_030cd4bc(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 long param_4,long *param_5,long *param_6,ulong param_7,undefined8 *param_8,
                 undefined8 *param_9,long *param_10,undefined8 *param_11,int param_12)

{
  int *piVar1;
  float *pfVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 (*pauVar10) [16];
  undefined1 *puVar11;
  undefined4 *puVar12;
  long lVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  int iVar17;
  int iVar18;
  uint *puVar19;
  ushort *puVar20;
  int iVar21;
  long lVar22;
  ushort *puVar23;
  uint uVar24;
  int iVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  undefined8 *puVar29;
  int iVar30;
  ulong uVar31;
  long lVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  long lVar36;
  int iVar37;
  ulong uVar38;
  undefined1 (*pauVar39) [16];
  undefined1 (*pauVar40) [16];
  ulong uVar41;
  undefined1 *puVar42;
  undefined4 *puVar43;
  int iVar44;
  undefined1 auVar47 [16];
  undefined1 auVar46 [16];
  undefined1 auVar45 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  unkbyte10 Var62;
  undefined1 auVar57 [16];
  undefined1 auVar56 [16];
  undefined1 auVar55 [16];
  undefined1 auVar54 [16];
  undefined1 auVar53 [16];
  undefined1 auVar52 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float fVar71;
  undefined1 auVar70 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  byte bVar76;
  byte bVar77;
  byte bVar78;
  undefined1 auVar74 [16];
  byte bVar79;
  undefined1 auVar75 [16];
  float fVar80;
  float fVar85;
  float fVar86;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  float fVar87;
  float fVar103;
  float fVar104;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar98 [16];
  undefined1 auVar97 [16];
  undefined1 auVar96 [16];
  undefined1 auVar95 [16];
  undefined1 auVar94 [16];
  undefined1 auVar93 [16];
  undefined1 auVar92 [16];
  undefined1 auVar91 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 in_q17 [16];
  undefined1 auVar105 [16];
  undefined1 auVar111 [16];
  undefined1 auVar110 [16];
  undefined1 auVar109 [16];
  undefined1 auVar108 [16];
  undefined1 auVar107 [16];
  undefined1 auVar106 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar121;
  float fVar122;
  undefined1 auVar117 [16];
  float fVar123;
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  float fVar124;
  float fVar125;
  float fVar132;
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  float fVar133;
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  ulong local_120;
  long local_118;
  ulong local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  uint *local_d0;
  long local_c8;
  uint local_7c;
  ulong local_78;
  ulong local_70 [2];
  
  local_7c = (uint)param_7;
  uVar3 = *(uint *)(param_6 + 1);
  iVar25 = (int)param_5[1];
  if ((int)uVar3 < 1) {
    iVar44 = 0;
  }
  else {
    if (uVar3 == 1) {
      uVar34 = 0;
      iVar44 = 0;
    }
    else {
      uVar34 = 0;
      iVar44 = 0;
      do {
        piVar1 = (int *)(*param_6 + uVar34 * 4);
        uVar34 = uVar34 + 2;
        if (*piVar1 != -1) {
          iVar44 = iVar44 + 1;
        }
        if (piVar1[1] != -1) {
          iVar44 = iVar44 + 1;
        }
      } while (((ulong)uVar3 & 0xfffffffe) != uVar34);
    }
    if (((uVar3 & 1) != 0) && (*(int *)(*param_6 + uVar34 * 4) != -1)) {
      iVar44 = iVar44 + 1;
    }
  }
  lVar36 = tpidr_el0;
  lVar26 = *(long *)(lVar36 + 0x1000b8);
  if (lVar26 == 0) {
    lVar26 = FUN_00e5d3b4();
    *(long *)(lVar36 + 0x1000b8) = lVar26;
  }
  uVar3 = iVar25 + iVar44 + 1;
  uVar34 = (ulong)uVar3;
  local_f8 = *(long *)(*(long *)(lVar26 + 0x3d0) + 0x10);
  if (*(long *)(local_f8 + 8) == 0) {
    local_100 = -(ulong)(uVar3 >> 0x1f) & 0xfffffff000000000 | uVar34 << 4;
    local_78 = local_100;
    if (local_f8 == 0) goto LAB_030cd604;
    local_70[0] = local_100 + 0x3f & 0xffffffffffffffc0;
    if (*(ulong *)(local_f8 + 0x28) < local_70[0]) {
LAB_030cd5e8:
      pauVar10 = (undefined1 (*) [16])FUN_031cf3b4(local_f8,local_70);
    }
    else {
      pauVar10 = *(undefined1 (**) [16])(local_f8 + 0x38);
      if (*(undefined1 **)(local_f8 + 0x40) < *pauVar10 + local_70[0]) goto LAB_030cd5e8;
      *(undefined1 **)(local_f8 + 0x38) = *pauVar10 + local_70[0];
    }
  }
  else {
    local_78 = -(ulong)(uVar3 >> 0x1f) & 0xfffffff000000000 | uVar34 << 4;
LAB_030cd604:
    local_100 = local_78;
    pauVar10 = (undefined1 (*) [16])(**(code **)PTR_DAT_047d1a08)(1,&local_78,0x40);
    local_f8 = 0;
  }
  uVar35 = (ulong)(int)uVar3;
  lVar26 = *(long *)(lVar36 + 0x1000b8);
  if (lVar26 == 0) {
    lVar26 = FUN_00e5d3b4();
    *(long *)(lVar36 + 0x1000b8) = lVar26;
  }
  uVar31 = uVar35 * 4;
  lVar26 = *(long *)(*(long *)(lVar26 + 0x3d0) + 0x10);
  local_78 = uVar31;
  if ((*(long *)(lVar26 + 8) == 0) && (lVar26 != 0)) {
    local_70[0] = uVar31 + 0x3f & 0xffffffffffffffc0;
    if (local_70[0] <= *(ulong *)(lVar26 + 0x28)) {
      local_d0 = *(uint **)(lVar26 + 0x38);
      if (local_70[0] + (long)local_d0 <= *(ulong *)(lVar26 + 0x40)) {
        *(ulong *)(lVar26 + 0x38) = local_70[0] + (long)local_d0;
        goto LAB_030cd738;
      }
    }
    local_d0 = (uint *)FUN_031cf3b4(lVar26,local_70);
  }
  else {
    local_d0 = (uint *)(**(code **)PTR_DAT_047d1a08)(1,&local_78,0x40);
    lVar26 = 0;
  }
LAB_030cd738:
  lVar27 = *(long *)(lVar36 + 0x1000b8);
  if (lVar27 == 0) {
    lVar27 = FUN_00e5d3b4();
    *(long *)(lVar36 + 0x1000b8) = lVar27;
  }
  uVar24 = iVar44 + (iVar25 - 1U);
  local_118 = *(long *)(*(long *)(lVar27 + 0x3d0) + 0x10);
  if (*(long *)(local_118 + 8) == 0) {
    local_120 = -(ulong)(uVar24 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar24 << 5;
    local_78 = local_120;
    if (local_118 == 0) goto LAB_030cd7f0;
    local_70[0] = local_120 + 0x3f & 0xffffffffffffffc0;
    if (*(ulong *)(local_118 + 0x28) < local_70[0]) {
LAB_030cd7ac:
      local_c8 = FUN_031cf3b4(local_118,local_70);
    }
    else {
      local_c8 = *(long *)(local_118 + 0x38);
      if (*(ulong *)(local_118 + 0x40) < local_70[0] + local_c8) goto LAB_030cd7ac;
      *(ulong *)(local_118 + 0x38) = local_70[0] + local_c8;
    }
  }
  else {
    local_78 = -(ulong)(uVar24 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar24 << 5;
LAB_030cd7f0:
    local_120 = local_78;
    local_c8 = (**(code **)PTR_DAT_047d1a08)(1,&local_78,0x40);
    local_118 = 0;
  }
  lVar27 = *(long *)(lVar36 + 0x1000b8);
  if (lVar27 == 0) {
    lVar27 = FUN_00e5d3b4();
    *(long *)(lVar36 + 0x1000b8) = lVar27;
  }
  local_f0 = *(long *)(*(long *)(lVar27 + 0x3d0) + 0x10);
  local_78 = uVar35;
  if ((*(long *)(local_f0 + 8) == 0) && (local_f0 != 0)) {
    local_70[0] = uVar35 + 0x3f & 0xffffffffffffffc0;
    if (local_70[0] <= *(ulong *)(local_f0 + 0x28)) {
      puVar11 = *(undefined1 **)(local_f0 + 0x38);
      if (puVar11 + local_70[0] <= *(undefined1 **)(local_f0 + 0x40)) {
        *(undefined1 **)(local_f0 + 0x38) = puVar11 + local_70[0];
        goto LAB_030cd8d8;
      }
    }
    puVar11 = (undefined1 *)FUN_031cf3b4(local_f0,local_70);
  }
  else {
    puVar11 = (undefined1 *)(**(code **)PTR_DAT_047d1a08)(1,&local_78,0x40);
    local_f0 = 0;
  }
LAB_030cd8d8:
  lVar27 = *(long *)(lVar36 + 0x1000b8);
  if (lVar27 == 0) {
    lVar27 = FUN_00e5d3b4();
    *(long *)(lVar36 + 0x1000b8) = lVar27;
  }
  Var62 = param_3._6_10_;
  local_e8 = *(long *)(*(long *)(lVar27 + 0x3d0) + 0x10);
  if ((*(long *)(local_e8 + 8) == 0) && (local_78 = uVar31, local_e8 != 0)) {
    local_70[0] = uVar31 + 0x3f & 0xffffffffffffffc0;
    if (local_70[0] <= *(ulong *)(local_e8 + 0x28)) {
      puVar12 = *(undefined4 **)(local_e8 + 0x38);
      if (local_70[0] + (long)puVar12 <= *(ulong *)(local_e8 + 0x40)) {
        *(ulong *)(local_e8 + 0x38) = local_70[0] + (long)puVar12;
        goto LAB_030cd9a4;
      }
    }
    puVar12 = (undefined4 *)FUN_031cf3b4(local_e8,local_70);
    Var62 = param_3._6_10_;
  }
  else {
    local_78 = uVar31;
    puVar12 = (undefined4 *)(**(code **)PTR_DAT_047d1a08)(1,&local_78,0x40);
    Var62 = param_3._6_10_;
    local_e8 = 0;
  }
LAB_030cd9a4:
  *(undefined8 *)(*pauVar10 + 8) = param_8[1];
  *(undefined8 *)*pauVar10 = *param_8;
  *local_d0 = (uint)(param_7 >> 0x16) & 0x3ff;
  *puVar11 = 0;
  *puVar12 = 0;
  puVar19 = (uint *)*param_5;
  lVar27 = *(long *)(param_4 + 0x38);
  uVar28 = (ulong)(*puVar19 >> 0x16);
  lVar36 = *(long *)(lVar27 + uVar28 * 0x100 + 8);
  auVar48 = *(undefined1 (*) [16])
             (*(long *)(*(long *)(lVar36 + 0x20) + 0x18) + ((ulong)*puVar19 & 0x3fffff) * 0x18);
  lVar32 = *(long *)(*(long *)(lVar36 + 0x20) + 0x38);
  auVar67 = *(undefined1 (*) [16])(lVar32 + 0xa0);
  bVar76 = *(byte *)(lVar36 + 0x40);
  auVar8._2_10_ = Var62;
  auVar8._0_2_ = auVar48._2_2_;
  auVar54._0_8_ = auVar8._0_8_ << 0x20;
  auVar54._10_6_ = (undefined6)((unkuint10)Var62 >> 0x20);
  auVar54._8_2_ = auVar48._4_2_;
  auVar56._14_2_ = (undefined2)((unkuint10)Var62 >> 0x40);
  auVar56._0_12_ = auVar54._0_12_;
  auVar56._12_2_ = auVar48._6_2_;
  auVar52._4_12_ = auVar56._4_12_;
  auVar52._2_2_ = 0;
  auVar52._0_2_ = auVar48._0_2_;
  auVar53._8_8_ = auVar56._8_8_;
  auVar53._0_6_ = auVar52._0_6_;
  auVar53._6_2_ = 0;
  auVar55._12_4_ = auVar56._12_4_;
  auVar55._0_10_ = auVar53._0_10_;
  auVar55._10_2_ = 0;
  auVar57._0_14_ = auVar55._0_14_;
  auVar57._14_2_ = 0;
  auVar45._2_14_ = auVar48._2_14_;
  auVar45._0_2_ = auVar48._8_2_;
  auVar47._6_10_ = auVar48._6_10_;
  auVar47._0_4_ = auVar45._0_4_;
  auVar47._4_2_ = auVar48._10_2_;
  auVar82._10_6_ = auVar48._10_6_;
  auVar82._0_8_ = auVar47._0_8_;
  auVar82._8_2_ = auVar48._12_2_;
  auVar58._0_12_ = auVar82._0_12_;
  auVar58._12_2_ = auVar48._14_2_;
  auVar58._14_2_ = auVar48._14_2_;
  auVar46._4_12_ = auVar58._4_12_;
  auVar46._0_4_ = auVar47._0_4_ & 0xffff;
  auVar89._8_8_ = auVar58._8_8_;
  auVar89._0_6_ = auVar46._0_6_;
  auVar89._6_2_ = 0;
  auVar48._12_4_ = auVar58._12_4_;
  auVar48._0_10_ = auVar89._0_10_;
  auVar48._10_2_ = 0;
  auVar73._0_14_ = auVar48._0_14_;
  auVar73._14_2_ = 0;
  auVar58 = NEON_ucvtf(auVar57,4);
  auVar48 = NEON_ucvtf(auVar73,4);
  auVar59._0_4_ = auVar67._0_4_ + *(float *)(lVar32 + 0x90) * auVar58._0_4_;
  auVar59._4_4_ = auVar67._4_4_ + *(float *)(lVar32 + 0x94) * auVar58._4_4_;
  auVar59._8_4_ = auVar67._8_4_ + *(float *)(lVar32 + 0x98) * auVar58._8_4_;
  auVar59._12_4_ = auVar67._12_4_ + *(float *)(lVar32 + 0x9c) * auVar58._12_4_;
  auVar49._0_4_ = auVar67._0_4_ + *(float *)(lVar32 + 0x90) * auVar48._0_4_;
  auVar49._4_4_ = auVar67._4_4_ + *(float *)(lVar32 + 0x94) * auVar48._4_4_;
  auVar49._8_4_ = auVar67._8_4_ + *(float *)(lVar32 + 0x98) * auVar48._8_4_;
  auVar49._12_4_ = auVar67._12_4_ + *(float *)(lVar32 + 0x9c) * auVar48._12_4_;
  if (CONCAT31(0,bVar76) != 0) {
    auVar81[4] = bVar76;
    auVar81._0_4_ = CONCAT31(0,bVar76);
    auVar81._5_3_ = 0;
    auVar81[8] = bVar76;
    auVar81._9_3_ = 0;
    auVar81[0xc] = bVar76;
    auVar81._13_3_ = 0;
    iVar21 = -(uint)bVar76;
    auVar88._8_8_ = _UNK_03cab238;
    auVar88._0_8_ = _DAT_03cab230;
    auVar89 = NEON_ushl(auVar88,auVar81,4);
    auVar63._8_8_ = _UNK_03cabbd8;
    auVar63._0_8_ = _DAT_03cabbd0;
    auVar105._8_8_ = _UNK_03cac2d8;
    auVar105._0_8_ = _DAT_03cac2d0;
    auVar72._8_8_ = _UNK_03cabbc8;
    auVar72._0_8_ = _DAT_03cabbc0;
    auVar67 = a64_TBL(ZEXT816(0),auVar59,auVar63);
    auVar82 = NEON_ushl(auVar105,auVar81,4);
    in_q17._8_8_ = 0xffffffffffffffff;
    in_q17._0_8_ = 0xffffffffffffffff;
    auVar58 = a64_TBL(ZEXT816(0),auVar59,auVar72);
    auVar48 = a64_TBL(ZEXT816(0),auVar49,auVar63);
    auVar73 = a64_TBL(ZEXT816(0),auVar49,auVar72);
    auVar90._0_4_ = -(uint)(-1 < auVar89._0_4_);
    auVar90._4_4_ = -(uint)(-1 < auVar89._4_4_);
    auVar90._8_4_ = -(uint)(-1 < auVar89._8_4_);
    auVar90._12_4_ = -(uint)(-1 < auVar89._12_4_);
    auVar59 = auVar59 ^ (auVar59 ^ auVar67) & ~auVar90;
    auVar68._0_4_ = -(uint)(-1 < auVar82._0_4_);
    auVar68._4_4_ = -(uint)(-1 < auVar82._4_4_);
    auVar68._8_4_ = -(uint)(-1 < auVar82._8_4_);
    auVar68._12_4_ = -(uint)(-1 < auVar82._12_4_);
    auVar83._8_8_ = _UNK_03cabec8;
    auVar83._0_8_ = _DAT_03cabec0;
    auVar59 = auVar59 ^ (auVar59 ^ auVar58) & ~auVar68;
    auVar74._4_4_ = iVar21;
    auVar74._0_4_ = iVar21;
    auVar74._8_4_ = iVar21;
    auVar74._12_4_ = iVar21;
    auVar49 = auVar49 ^ (auVar49 ^ auVar48) & ~auVar90;
    auVar48 = NEON_ushl(auVar83,auVar74,4);
    auVar49 = auVar49 ^ (auVar49 ^ auVar73) & ~auVar68;
    auVar64._0_3_ = auVar59._0_3_;
    bVar76 = (byte)((uint)(auVar48._0_4_ << 0x1f) >> 0x18);
    auVar64[3] = bVar76 ^ auVar59[3];
    auVar64[4] = auVar59[4];
    auVar64[5] = auVar59[5];
    auVar64[6] = auVar59[6];
    bVar77 = (byte)((uint)(auVar48._4_4_ << 0x1f) >> 0x18);
    auVar64[7] = bVar77 ^ auVar59[7];
    auVar64[8] = auVar59[8];
    auVar64[9] = auVar59[9];
    auVar64[10] = auVar59[10];
    bVar78 = (byte)((uint)(auVar48._8_4_ << 0x1f) >> 0x18);
    auVar64[0xb] = bVar78 ^ auVar59[0xb];
    auVar64[0xc] = auVar59[0xc];
    auVar64[0xd] = auVar59[0xd];
    auVar64[0xe] = auVar59[0xe];
    bVar79 = (byte)((uint)(auVar48._12_4_ << 0x1f) >> 0x18);
    auVar64[0xf] = bVar79 ^ auVar59[0xf];
    auVar67._0_3_ = auVar49._0_3_;
    auVar67[3] = auVar49[3] ^ bVar76;
    auVar67[4] = auVar49[4];
    auVar67[5] = auVar49[5];
    auVar67[6] = auVar49[6];
    auVar67[7] = auVar49[7] ^ bVar77;
    auVar67[8] = auVar49[8];
    auVar67[9] = auVar49[9];
    auVar67[10] = auVar49[10];
    auVar67[0xb] = auVar49[0xb] ^ bVar78;
    auVar67[0xc] = auVar49[0xc];
    auVar67[0xd] = auVar49[0xd];
    auVar67[0xe] = auVar49[0xe];
    auVar67[0xf] = auVar49[0xf] ^ bVar79;
    auVar59 = NEON_fmin(auVar64,auVar67,4);
    auVar49 = NEON_fmax(auVar64,auVar67,4);
  }
  iVar17 = 1;
  uVar14 = 1;
  iVar21 = 1;
  uVar24 = 1;
  if (1 < iVar25) {
    auVar119._0_4_ = auVar49._0_4_ + *(float *)(lVar36 + 0x50);
    auVar119._4_4_ = auVar49._4_4_ + *(float *)(lVar36 + 0x54);
    auVar119._8_4_ = auVar49._8_4_ + *(float *)(lVar36 + 0x58);
    auVar119._12_4_ = auVar49._12_4_ + *(float *)(lVar36 + 0x5c);
    auVar130._0_4_ = auVar59._0_4_ + *(float *)(lVar36 + 0x50);
    auVar130._4_4_ = auVar59._4_4_ + *(float *)(lVar36 + 0x54);
    auVar130._8_4_ = auVar59._8_4_ + *(float *)(lVar36 + 0x58);
    auVar130._12_4_ = auVar59._12_4_ + *(float *)(lVar36 + 0x5c);
    auVar50._8_8_ = _UNK_03cabbd8;
    auVar50._0_8_ = _DAT_03cabbd0;
    auVar60._8_8_ = _UNK_03cabbc8;
    auVar60._0_8_ = _DAT_03cabbc0;
    auVar65._8_8_ = _UNK_03cab238;
    auVar65._0_8_ = _DAT_03cab230;
    auVar69._8_8_ = _UNK_03cac2d8;
    auVar69._0_8_ = _DAT_03cac2d0;
    auVar75._8_8_ = _UNK_03cabec8;
    auVar75._0_8_ = _DAT_03cabec0;
    lVar32 = 0;
    uVar38 = 0;
    uVar33 = 1;
    iVar21 = 1;
    uVar16 = 1;
    iVar17 = 1;
    while( true ) {
      uVar41 = (ulong)(puVar19[lVar32 + 1] >> 0x16);
      lVar13 = *(long *)(lVar27 + uVar41 * 0x100 + 8);
      auVar48 = *(undefined1 (*) [16])
                 (*(long *)(*(long *)(lVar13 + 0x20) + 0x18) +
                 ((ulong)puVar19[lVar32 + 1] & 0x3fffff) * 0x18);
      lVar27 = *(long *)(*(long *)(lVar13 + 0x20) + 0x38);
      auVar9._2_10_ = in_q17._6_10_;
      auVar9._0_2_ = auVar48._2_2_;
      auVar108._0_8_ = auVar9._0_8_ << 0x20;
      auVar108._10_6_ = in_q17._10_6_;
      auVar108._8_2_ = auVar48._4_2_;
      auVar110._14_2_ = in_q17._14_2_;
      auVar110._0_12_ = auVar108._0_12_;
      auVar110._12_2_ = auVar48._6_2_;
      auVar106._4_12_ = auVar110._4_12_;
      auVar106._2_2_ = 0;
      auVar106._0_2_ = auVar48._0_2_;
      auVar107._8_8_ = auVar110._8_8_;
      auVar107._0_6_ = auVar106._0_6_;
      auVar107._6_2_ = 0;
      auVar109._12_4_ = auVar110._12_4_;
      auVar109._0_10_ = auVar107._0_10_;
      auVar109._10_2_ = 0;
      auVar111._0_14_ = auVar109._0_14_;
      auVar111._14_2_ = 0;
      auVar91._2_14_ = auVar48._2_14_;
      auVar91._0_2_ = auVar48._8_2_;
      auVar93._6_10_ = auVar48._6_10_;
      auVar93._0_4_ = auVar91._0_4_;
      auVar93._4_2_ = auVar48._10_2_;
      auVar95._10_6_ = auVar48._10_6_;
      auVar95._0_8_ = auVar93._0_8_;
      auVar95._8_2_ = auVar48._12_2_;
      auVar97._0_12_ = auVar95._0_12_;
      auVar97._12_2_ = auVar48._14_2_;
      auVar97._14_2_ = auVar48._14_2_;
      auVar92._4_12_ = auVar97._4_12_;
      auVar92._0_4_ = auVar93._0_4_ & 0xffff;
      auVar94._8_8_ = auVar97._8_8_;
      auVar94._0_6_ = auVar92._0_6_;
      auVar94._6_2_ = 0;
      auVar96._12_4_ = auVar97._12_4_;
      auVar96._0_10_ = auVar94._0_10_;
      auVar96._10_2_ = 0;
      auVar98._0_14_ = auVar96._0_14_;
      auVar98._14_2_ = 0;
      auVar48 = NEON_ucvtf(auVar111,4);
      auVar67 = NEON_ucvtf(auVar98,4);
      bVar76 = *(byte *)(lVar13 + 0x40);
      auVar99._0_4_ = *(float *)(lVar27 + 0xa0) + *(float *)(lVar27 + 0x90) * auVar48._0_4_;
      auVar99._4_4_ = *(float *)(lVar27 + 0xa4) + *(float *)(lVar27 + 0x94) * auVar48._4_4_;
      auVar99._8_4_ = *(float *)(lVar27 + 0xa8) + *(float *)(lVar27 + 0x98) * auVar48._8_4_;
      auVar99._12_4_ = *(float *)(lVar27 + 0xac) + *(float *)(lVar27 + 0x9c) * auVar48._12_4_;
      auVar113._0_4_ = *(float *)(lVar27 + 0xa0) + *(float *)(lVar27 + 0x90) * auVar67._0_4_;
      auVar113._4_4_ = *(float *)(lVar27 + 0xa4) + *(float *)(lVar27 + 0x94) * auVar67._4_4_;
      auVar113._8_4_ = *(float *)(lVar27 + 0xa8) + *(float *)(lVar27 + 0x98) * auVar67._8_4_;
      auVar113._12_4_ = *(float *)(lVar27 + 0xac) + *(float *)(lVar27 + 0x9c) * auVar67._12_4_;
      if (CONCAT31(0,bVar76) != 0) {
        auVar138[4] = bVar76;
        auVar138._0_4_ = CONCAT31(0,bVar76);
        auVar138._5_3_ = 0;
        auVar138[8] = bVar76;
        auVar138._9_3_ = 0;
        auVar138[0xc] = bVar76;
        auVar138._13_3_ = 0;
        iVar15 = -(uint)bVar76;
        auVar67 = a64_TBL(ZEXT816(0),auVar99,auVar50);
        auVar73 = a64_TBL(ZEXT816(0),auVar99,auVar60);
        auVar48 = a64_TBL(ZEXT816(0),auVar113,auVar60);
        auVar58 = NEON_ushl(auVar65,auVar138,4);
        auVar142._0_4_ = -(uint)(-1 < auVar58._0_4_);
        auVar142._4_4_ = -(uint)(-1 < auVar58._4_4_);
        auVar142._8_4_ = -(uint)(-1 < auVar58._8_4_);
        auVar142._12_4_ = -(uint)(-1 < auVar58._12_4_);
        auVar58 = NEON_ushl(auVar69,auVar138,4);
        auVar99 = auVar99 ^ (auVar99 ^ auVar67) & ~auVar142;
        auVar134._0_4_ = -(uint)(-1 < auVar58._0_4_);
        auVar134._4_4_ = -(uint)(-1 < auVar58._4_4_);
        auVar134._8_4_ = -(uint)(-1 < auVar58._8_4_);
        auVar134._12_4_ = -(uint)(-1 < auVar58._12_4_);
        auVar58 = a64_TBL(ZEXT816(0),auVar113,auVar50);
        auVar99 = auVar99 ^ (auVar99 ^ auVar73) & ~auVar134;
        auVar135._4_4_ = iVar15;
        auVar135._0_4_ = iVar15;
        auVar135._8_4_ = iVar15;
        auVar135._12_4_ = iVar15;
        auVar67 = NEON_ushl(auVar75,auVar135,4);
        auVar139._0_3_ = auVar99._0_3_;
        bVar76 = (byte)((uint)(auVar67._0_4_ << 0x1f) >> 0x18);
        auVar139[3] = bVar76 ^ auVar99[3];
        auVar139[4] = auVar99[4];
        auVar139[5] = auVar99[5];
        auVar139[6] = auVar99[6];
        bVar77 = (byte)((uint)(auVar67._4_4_ << 0x1f) >> 0x18);
        auVar139[7] = bVar77 ^ auVar99[7];
        auVar139[8] = auVar99[8];
        auVar139[9] = auVar99[9];
        auVar139[10] = auVar99[10];
        bVar78 = (byte)((uint)(auVar67._8_4_ << 0x1f) >> 0x18);
        auVar139[0xb] = bVar78 ^ auVar99[0xb];
        auVar139[0xc] = auVar99[0xc];
        auVar139[0xd] = auVar99[0xd];
        auVar139[0xe] = auVar99[0xe];
        bVar79 = (byte)((uint)(auVar67._12_4_ << 0x1f) >> 0x18);
        auVar139[0xf] = bVar79 ^ auVar99[0xf];
        auVar48 = auVar48 ^ (auVar48 ^ auVar113 ^ (auVar113 ^ auVar58) & ~auVar142) & auVar134;
        auVar112._0_3_ = auVar48._0_3_;
        auVar112[3] = auVar48[3] ^ bVar76;
        auVar112[4] = auVar48[4];
        auVar112[5] = auVar48[5];
        auVar112[6] = auVar48[6];
        auVar112[7] = auVar48[7] ^ bVar77;
        auVar112[8] = auVar48[8];
        auVar112[9] = auVar48[9];
        auVar112[10] = auVar48[10];
        auVar112[0xb] = auVar48[0xb] ^ bVar78;
        auVar112[0xc] = auVar48[0xc];
        auVar112[0xd] = auVar48[0xd];
        auVar112[0xe] = auVar48[0xe];
        auVar112[0xf] = auVar48[0xf] ^ bVar79;
        auVar99 = NEON_fmin(auVar139,auVar112,4);
        auVar113 = NEON_fmax(auVar139,auVar112,4);
      }
      auVar100._0_8_ =
           CONCAT44(auVar99._4_4_ + *(float *)(lVar13 + 0x54),
                    auVar99._0_4_ + *(float *)(lVar13 + 0x50));
      auVar100._8_4_ = auVar99._8_4_ + *(float *)(lVar13 + 0x58);
      auVar100._12_4_ = auVar99._12_4_ + *(float *)(lVar13 + 0x5c);
      in_q17._0_8_ = CONCAT44(auVar113._4_4_ + *(float *)(lVar13 + 0x54),
                              auVar113._0_4_ + *(float *)(lVar13 + 0x50));
      in_q17._8_4_ = auVar113._8_4_ + *(float *)(lVar13 + 0x58);
      in_q17._12_4_ = auVar113._12_4_ + *(float *)(lVar13 + 0x5c);
      iVar37 = (int)uVar38;
      iVar30 = (int)uVar33;
      uVar24 = (uint)uVar28;
      iVar15 = (int)uVar16;
      if ((iVar44 < 1) || (uVar14 = *(uint *)(*param_6 + lVar32 * 4), uVar14 == 0xffffffff)) {
        auVar48 = NEON_fmin(auVar119,in_q17,4);
        auVar67 = NEON_fmax(auVar130,auVar100,4);
        puVar29 = (undefined8 *)(local_c8 + (long)iVar37 * 0x20);
        auVar73 = NEON_fmin(auVar67,auVar48,4);
        auVar48 = NEON_fmax(auVar67,auVar48,4);
        puVar29[1] = auVar73._8_8_;
        *puVar29 = auVar73._0_8_;
        puVar29[3] = auVar48._8_8_;
        puVar29[2] = auVar48._0_8_;
        pauVar39 = pauVar10 + iVar30;
        *(float *)(*pauVar39 + 8) = (auVar73._8_4_ + auVar48._8_4_) * 0.5;
        *(float *)(*pauVar39 + 0xc) = (auVar73._12_4_ + auVar48._12_4_) * 0.5;
        *(float *)*pauVar39 = (auVar73._0_4_ + auVar48._0_4_) * 0.5;
        *(float *)(*pauVar39 + 4) = (auVar73._4_4_ + auVar48._4_4_) * 0.5;
        local_d0[iVar21] = uVar24;
        puVar11[iVar15] = 0;
        puVar12[iVar17] = 0;
      }
      else {
        lVar27 = *(long *)(lVar36 + 0x20);
        uVar28 = (ulong)uVar14 & 0x3fffff;
        iVar18 = (int)uVar28;
        if (iVar18 < *(int *)(lVar27 + 0x30)) {
          puVar20 = (ushort *)(*(long *)(lVar27 + 0x28) + uVar28 * 8);
        }
        else {
          puVar20 = (ushort *)
                    (*(long *)(lVar27 + 0x60) + (long)(iVar18 - *(int *)(lVar27 + 0x30)) * 8);
        }
        lVar27 = *(long *)(lVar27 + 0x38);
        puVar23 = (ushort *)(*(long *)(lVar27 + 0x38) + (ulong)*puVar20 * 0x18);
        fVar114 = (float)NEON_ucvtf((uint)*puVar23);
        fVar124 = (float)NEON_ucvtf((uint)puVar23[1]);
        fVar133 = (float)NEON_ucvtf((uint)puVar23[2]);
        bVar76 = *(byte *)(lVar36 + 0x40);
        auVar117._0_4_ = *(float *)(lVar27 + 0xa0) + *(float *)(lVar27 + 0x90) * fVar114;
        auVar117._4_4_ = *(float *)(lVar27 + 0xa4) + *(float *)(lVar27 + 0x94) * fVar124;
        auVar117._8_4_ = *(float *)(lVar27 + 0xa8) + *(float *)(lVar27 + 0x98) * fVar133;
        auVar117._12_4_ = *(float *)(lVar27 + 0xac) + *(float *)(lVar27 + 0x9c) * 0.0;
        if (CONCAT31(0,bVar76) != 0) {
          auVar136[4] = bVar76;
          auVar136._0_4_ = CONCAT31(0,bVar76);
          auVar136._5_3_ = 0;
          auVar136[8] = bVar76;
          auVar136._9_3_ = 0;
          auVar136[0xc] = bVar76;
          auVar136._13_3_ = 0;
          iVar18 = -(uint)bVar76;
          auVar48 = a64_TBL(ZEXT816(0),auVar117,auVar50);
          auVar67 = a64_TBL(ZEXT816(0),auVar117,auVar60);
          auVar73 = NEON_ushl(auVar65,auVar136,4);
          auVar140._0_4_ = -(uint)(-1 < auVar73._0_4_);
          auVar140._4_4_ = -(uint)(-1 < auVar73._4_4_);
          auVar140._8_4_ = -(uint)(-1 < auVar73._8_4_);
          auVar140._12_4_ = -(uint)(-1 < auVar73._12_4_);
          auVar73 = NEON_ushl(auVar69,auVar136,4);
          auVar117 = auVar117 ^ (auVar117 ^ auVar48) & ~auVar140;
          auVar126._0_4_ = -(uint)(-1 < auVar73._0_4_);
          auVar126._4_4_ = -(uint)(-1 < auVar73._4_4_);
          auVar126._8_4_ = -(uint)(-1 < auVar73._8_4_);
          auVar126._12_4_ = -(uint)(-1 < auVar73._12_4_);
          auVar48 = auVar117 ^ (auVar117 ^ auVar67) & ~auVar126;
          auVar127._4_4_ = iVar18;
          auVar127._0_4_ = iVar18;
          auVar127._8_4_ = iVar18;
          auVar127._12_4_ = iVar18;
          auVar67 = NEON_ushl(auVar75,auVar127,4);
          auVar117._0_3_ = auVar48._0_3_;
          auVar117[3] = (byte)((uint)(auVar67._0_4_ << 0x1f) >> 0x18) ^ auVar48[3];
          auVar117[4] = auVar48[4];
          auVar117[5] = auVar48[5];
          auVar117[6] = auVar48[6];
          auVar117[7] = (byte)((uint)(auVar67._4_4_ << 0x1f) >> 0x18) ^ auVar48[7];
          auVar117[8] = auVar48[8];
          auVar117[9] = auVar48[9];
          auVar117[10] = auVar48[10];
          auVar117[0xb] = (byte)((uint)(auVar67._8_4_ << 0x1f) >> 0x18) ^ auVar48[0xb];
          auVar117[0xc] = auVar48[0xc];
          auVar117[0xd] = auVar48[0xd];
          auVar117[0xe] = auVar48[0xe];
          auVar117[0xf] = (byte)((uint)(auVar67._12_4_ << 0x1f) >> 0x18) ^ auVar48[0xf];
        }
        fVar114 = auVar117._0_4_ + *(float *)(lVar36 + 0x50);
        fVar124 = auVar117._4_4_ + *(float *)(lVar36 + 0x54);
        fVar133 = auVar117._8_4_ + *(float *)(lVar36 + 0x58);
        fVar123 = auVar117._12_4_ + *(float *)(lVar36 + 0x5c);
        pfVar2 = (float *)(local_c8 + (long)iVar37 * 0x20);
        lVar22 = *(long *)(lVar27 + 0x38) + (ulong)*puVar20 * 0x18;
        pauVar39 = pauVar10 + iVar30;
        *(float *)(*pauVar39 + 8) = fVar133;
        *(float *)(*pauVar39 + 0xc) = fVar123;
        *(float *)*pauVar39 = fVar114;
        *(float *)(*pauVar39 + 4) = fVar124;
        pfVar2[2] = fVar133;
        pfVar2[3] = fVar123;
        *pfVar2 = fVar114;
        pfVar2[1] = fVar124;
        pfVar2[6] = fVar133;
        pfVar2[7] = fVar123;
        pfVar2[4] = fVar114;
        pfVar2[5] = fVar124;
        local_d0[iVar21] = uVar24;
        puVar11[iVar15] = 1;
        uVar16 = (long)iVar15 + 1;
        lVar27 = *(long *)(*(long *)(lVar36 + 0x20) + 0x38);
        puVar12[iVar17] =
             *(undefined4 *)
              (*(long *)(lVar27 + 0x48) + (long)(int)(*(int *)(lVar27 + 0xbc) * (uint)*puVar20) * 4)
        ;
        fVar114 = (float)NEON_ucvtf((uint)*(ushort *)(lVar22 + 8));
        fVar124 = (float)NEON_ucvtf((uint)*(ushort *)(lVar22 + 10));
        fVar133 = (float)NEON_ucvtf((uint)*(ushort *)(lVar22 + 0xc));
        lVar27 = (long)iVar17;
        lVar22 = *(long *)(*(long *)(lVar13 + 0x20) + 0x38);
        uVar33 = (long)iVar30 + 1;
        bVar76 = *(byte *)(lVar13 + 0x40);
        uVar38 = (long)iVar37 + 1;
        auVar118._0_4_ = *(float *)(lVar22 + 0xa0) + *(float *)(lVar22 + 0x90) * fVar114;
        auVar118._4_4_ = *(float *)(lVar22 + 0xa4) + *(float *)(lVar22 + 0x94) * fVar124;
        auVar118._8_4_ = *(float *)(lVar22 + 0xa8) + *(float *)(lVar22 + 0x98) * fVar133;
        auVar118._12_4_ = *(float *)(lVar22 + 0xac) + *(float *)(lVar22 + 0x9c) * 0.0;
        if (CONCAT31(0,bVar76) != 0) {
          auVar137[4] = bVar76;
          auVar137._0_4_ = CONCAT31(0,bVar76);
          auVar137._5_3_ = 0;
          auVar137[8] = bVar76;
          auVar137._9_3_ = 0;
          auVar137[0xc] = bVar76;
          auVar137._13_3_ = 0;
          iVar17 = -(uint)bVar76;
          auVar48 = a64_TBL(ZEXT816(0),auVar118,auVar50);
          auVar67 = a64_TBL(ZEXT816(0),auVar118,auVar60);
          auVar73 = NEON_ushl(auVar65,auVar137,4);
          auVar141._0_4_ = -(uint)(-1 < auVar73._0_4_);
          auVar141._4_4_ = -(uint)(-1 < auVar73._4_4_);
          auVar141._8_4_ = -(uint)(-1 < auVar73._8_4_);
          auVar141._12_4_ = -(uint)(-1 < auVar73._12_4_);
          auVar73 = NEON_ushl(auVar69,auVar137,4);
          auVar118 = auVar118 ^ (auVar118 ^ auVar48) & ~auVar141;
          auVar128._0_4_ = -(uint)(-1 < auVar73._0_4_);
          auVar128._4_4_ = -(uint)(-1 < auVar73._4_4_);
          auVar128._8_4_ = -(uint)(-1 < auVar73._8_4_);
          auVar128._12_4_ = -(uint)(-1 < auVar73._12_4_);
          auVar48 = auVar118 ^ (auVar118 ^ auVar67) & ~auVar128;
          auVar129._4_4_ = iVar17;
          auVar129._0_4_ = iVar17;
          auVar129._8_4_ = iVar17;
          auVar129._12_4_ = iVar17;
          auVar67 = NEON_ushl(auVar75,auVar129,4);
          auVar118._0_3_ = auVar48._0_3_;
          auVar118[3] = (byte)((uint)(auVar67._0_4_ << 0x1f) >> 0x18) ^ auVar48[3];
          auVar118[4] = auVar48[4];
          auVar118[5] = auVar48[5];
          auVar118[6] = auVar48[6];
          auVar118[7] = (byte)((uint)(auVar67._4_4_ << 0x1f) >> 0x18) ^ auVar48[7];
          auVar118[8] = auVar48[8];
          auVar118[9] = auVar48[9];
          auVar118[10] = auVar48[10];
          auVar118[0xb] = (byte)((uint)(auVar67._8_4_ << 0x1f) >> 0x18) ^ auVar48[0xb];
          auVar118[0xc] = auVar48[0xc];
          auVar118[0xd] = auVar48[0xd];
          auVar118[0xe] = auVar48[0xe];
          auVar118[0xf] = (byte)((uint)(auVar67._12_4_ << 0x1f) >> 0x18) ^ auVar48[0xf];
        }
        fVar114 = auVar118._0_4_ + *(float *)(lVar13 + 0x50);
        fVar124 = auVar118._4_4_ + *(float *)(lVar13 + 0x54);
        fVar133 = auVar118._8_4_ + *(float *)(lVar13 + 0x58);
        fVar123 = auVar118._12_4_ + *(float *)(lVar13 + 0x5c);
        pfVar2 = (float *)(local_c8 + uVar38 * 0x20);
        pauVar39 = pauVar10 + uVar33;
        *(float *)(*pauVar39 + 8) = fVar133;
        *(float *)(*pauVar39 + 0xc) = fVar123;
        *(float *)*pauVar39 = fVar114;
        *(float *)(*pauVar39 + 4) = fVar124;
        pfVar2[2] = fVar133;
        pfVar2[3] = fVar123;
        *pfVar2 = fVar114;
        pfVar2[1] = fVar124;
        pfVar2[6] = fVar133;
        pfVar2[7] = fVar123;
        pfVar2[4] = fVar114;
        pfVar2[5] = fVar124;
        local_d0[(long)iVar21 + 1] = uVar24;
        puVar11[uVar16] = 2;
        lVar36 = *(long *)(*(long *)(lVar36 + 0x20) + 0x38);
        iVar17 = (int)(lVar27 + 1);
        puVar12[lVar27 + 1] =
             *(undefined4 *)
              (*(long *)(lVar36 + 0x48) + (long)(int)(*(int *)(lVar36 + 0xbc) * (uint)*puVar20) * 4)
        ;
        iVar21 = (int)((long)iVar21 + 1);
      }
      uVar24 = (int)uVar33 + 1;
      uVar33 = (ulong)uVar24;
      iVar21 = iVar21 + 1;
      uVar14 = (int)uVar16 + 1;
      uVar16 = (ulong)uVar14;
      iVar17 = iVar17 + 1;
      if ((ulong)(iVar25 - 1U) - 1 == lVar32) break;
      puVar19 = (uint *)*param_5;
      lVar32 = lVar32 + 1;
      lVar27 = *(long *)(param_4 + 0x38);
      uVar38 = (ulong)((int)uVar38 + 1);
      auVar119._8_8_ = in_q17._8_8_;
      auVar119._0_8_ = in_q17._0_8_;
      auVar130._8_8_ = auVar100._8_8_;
      auVar130._0_8_ = auVar100._0_8_;
      uVar28 = uVar41;
      lVar36 = lVar13;
    }
  }
  *(undefined8 *)(pauVar10[(int)uVar24] + 8) = param_9[1];
  *(undefined8 *)pauVar10[(int)uVar24] = *param_9;
  puVar19 = &local_7c;
  if ((int)param_5[1] != 0) {
    puVar19 = (uint *)(*param_5 + (long)((int)param_5[1] + -1) * 4);
  }
  auVar51._8_8_ = DAT_03cab628;
  auVar51._0_8_ = DAT_03cab620;
  auVar61._8_8_ = _UNK_03cabe68;
  auVar61._0_8_ = _DAT_03cabe60;
  auVar66._8_8_ = _UNK_03caa5b8;
  auVar66._0_8_ = _DAT_03caa5b0;
  iVar25 = 0;
  local_d0[iVar21] = *puVar19 >> 0x16;
  puVar11[(int)uVar14] = 0;
  puVar12[iVar17] = 0;
  do {
    if (1 < (int)uVar24) {
      auVar48 = *pauVar10;
      pauVar39 = (undefined1 (*) [16])(local_c8 + 0x10);
      lVar36 = (ulong)uVar24 - 1;
      pauVar40 = pauVar10 + 2;
      do {
        auVar73 = pauVar39[-1];
        auVar67 = *pauVar39;
        fVar114 = ABS(auVar67._0_4_ - auVar73._0_4_);
        fVar124 = ABS(auVar67._4_4_ - auVar73._4_4_);
        fVar133 = ABS(auVar67._8_4_ - auVar73._8_4_);
        auVar120._4_4_ = fVar124;
        auVar120._0_4_ = fVar124;
        auVar120._8_4_ = fVar124;
        auVar120._12_4_ = fVar124;
        auVar101._4_4_ = fVar114;
        auVar101._0_4_ = fVar114;
        auVar101._8_4_ = fVar114;
        auVar101._12_4_ = fVar114;
        auVar131._0_4_ = -(uint)(fVar124 < fVar114);
        auVar131._4_4_ = -(uint)(fVar124 < fVar114);
        auVar131._8_4_ = -(uint)(fVar124 < fVar114);
        auVar131._12_4_ = -(uint)(fVar124 < fVar114);
        auVar101 = auVar101 ^ (auVar101 ^ auVar120) & auVar131;
        auVar84._0_4_ = -(uint)(fVar133 < auVar101._0_4_);
        auVar84._4_4_ = -(uint)(fVar133 < auVar101._4_4_);
        auVar84._8_4_ = -(uint)(fVar133 < auVar101._8_4_);
        auVar84._12_4_ = -(uint)(fVar133 < auVar101._12_4_);
        auVar58 = auVar51 ^ (auVar51 ^ auVar61) & auVar131;
        auVar58 = auVar58 ^ (auVar58 ^ auVar66) & auVar84;
        fVar87 = auVar58._0_4_;
        fVar103 = auVar58._4_4_;
        fVar104 = auVar58._8_4_;
        fVar114 = -((auVar67._0_4_ + auVar73._0_4_) * 0.5 * fVar87 +
                    (auVar67._4_4_ + auVar73._4_4_) * 0.5 * fVar103 +
                   (auVar67._8_4_ + auVar73._8_4_) * 0.5 * fVar104);
        fVar124 = auVar48._0_4_;
        fVar80 = *(float *)*pauVar40 - fVar124;
        fVar133 = auVar48._4_4_;
        fVar85 = *(float *)(*pauVar40 + 4) - fVar133;
        fVar123 = auVar48._8_4_;
        fVar86 = *(float *)(*pauVar40 + 8) - fVar123;
        fVar71 = auVar48._12_4_;
        fVar115 = fVar80 * fVar87;
        fVar121 = fVar85 * fVar103;
        fVar122 = fVar86 * fVar104;
        fVar116 = fVar115 + fVar121 + fVar122;
        fVar125 = 0.5;
        fVar132 = 0.5;
        if (1.1920929e-07 <= ABS(fVar116)) {
          auVar102._0_4_ = fVar124 * fVar87;
          auVar102._4_4_ = fVar133 * fVar103;
          auVar102._8_4_ = fVar123 * fVar104;
          auVar102._12_4_ = fVar71 * fVar114;
          auVar48 = NEON_ext(auVar102,auVar102,8,1);
          fVar114 = auVar48._0_4_ + fVar114;
          fVar125 = -(auVar102._0_4_ + auVar102._4_4_ + fVar114) / fVar116;
          fVar132 = -(auVar102._0_4_ + auVar102._4_4_ + fVar114) / (fVar115 + fVar121 + fVar122);
        }
        lVar36 = lVar36 + -1;
        auVar70._0_4_ = fVar124 + fVar80 * fVar125;
        auVar70._4_4_ = fVar133 + fVar85 * fVar132;
        auVar70._8_4_ = fVar123 + fVar86 * fVar125;
        auVar70._12_4_ = fVar71 + (*(float *)(*pauVar40 + 0xc) - fVar71) * fVar132;
        pauVar39 = pauVar39 + 2;
        auVar48 = NEON_fmin(auVar67,auVar70,4);
        auVar48 = NEON_fmax(auVar73,auVar48,4);
        *(long *)(pauVar40[-1] + 8) = auVar48._8_8_;
        *(long *)pauVar40[-1] = auVar48._0_8_;
        pauVar40 = pauVar40 + 1;
      } while (lVar36 != 0);
    }
    iVar25 = iVar25 + 1;
  } while (iVar25 != 3);
  iVar25 = 0;
  if (0 < (int)uVar3) {
    puVar19 = local_d0;
    puVar42 = puVar11;
    puVar43 = puVar12;
    pauVar39 = pauVar10;
    do {
      uVar7 = *(undefined8 *)(*pauVar39 + 8);
      uVar6 = *(undefined8 *)*pauVar39;
      uVar3 = *puVar19;
      uVar4 = *puVar43;
      uVar5 = *puVar42;
      if (param_10 != (long *)0x0) {
        iVar44 = (int)param_10[1];
        lVar36 = (long)iVar44;
        if ((int)(*(uint *)((long)param_10 + 0xc) & 0x7fffffff) <= iVar44) {
          FUN_0308eb60(param_10,PTR_PTR_047d1a50,lVar36 + 1);
          iVar44 = (int)param_10[1];
        }
        puVar29 = (undefined8 *)(*param_10 + (long)iVar44 * 0x30);
        *(undefined4 *)(puVar29 + 4) = uVar4;
        *(uint *)((long)puVar29 + 0x24) = uVar3;
        puVar29[1] = uVar7;
        *puVar29 = uVar6;
        puVar29[2] = 0;
        puVar29[3] = 0;
        *(undefined1 *)(puVar29 + 5) = uVar5;
        *(int *)(param_10 + 1) = (int)(lVar36 + 1);
      }
      if ((param_11 != (undefined8 *)0x0) && (iVar25 < param_12)) {
        param_11[2] = 0;
        param_11[3] = 0;
        iVar25 = iVar25 + 1;
        *(undefined4 *)(param_11 + 4) = uVar4;
        *(uint *)((long)param_11 + 0x24) = uVar3;
        *(undefined1 *)(param_11 + 5) = uVar5;
        param_11[1] = uVar7;
        *param_11 = uVar6;
        param_11 = param_11 + 6;
      }
      pauVar39 = pauVar39 + 1;
      uVar34 = uVar34 - 1;
      puVar42 = puVar42 + 1;
      puVar43 = puVar43 + 1;
      puVar19 = puVar19 + 1;
    } while (uVar34 != 0);
  }
  if ((param_11 != (undefined8 *)0x0) && (iVar25 < param_12)) {
    iVar25 = iVar25 + 1;
    *(undefined1 *)(param_11 + 5) = 0;
    param_11[2] = 0;
    param_11[3] = 0;
    param_11[4] = 0xffffffff80000000;
    *param_11 = 0;
    param_11[1] = 0;
  }
  if (local_e8 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,puVar12,uVar31);
  }
  else {
    uVar34 = uVar31 + 0x3f & 0xffffffffffffffc0;
    if ((*(ulong *)(local_e8 + 0x28) < uVar34) ||
       (*(long *)(local_e8 + 0x38) != uVar34 + (long)puVar12)) {
      if (puVar12 != (undefined4 *)0x0) {
        if (*(ulong *)(local_e8 + 0x28) < uVar34 + 0x40) {
          *(int *)(*(long *)(local_e8 + 0x30) + 0x20) =
               *(int *)(*(long *)(local_e8 + 0x30) + 0x20) + -1;
          (**(code **)(**(long **)(local_e8 + 0x10) + 0x18))
                    (*(long **)(local_e8 + 0x10),(long)puVar12 - (long)(int)puVar12[-1],
                     uVar34 + 0x44);
        }
        else {
          if (*(long *)(local_e8 + 0x38) == uVar34 + (long)puVar12) {
            *(undefined4 **)(local_e8 + 0x38) = puVar12;
            goto LAB_030ce1d8;
          }
          FUN_031cf778(local_e8,puVar12);
        }
      }
    }
    else {
      *(undefined4 **)(local_e8 + 0x38) = puVar12;
      if (*(undefined4 **)(local_e8 + 0x48) == puVar12) {
LAB_030ce1d8:
        FUN_031cf578(local_e8);
      }
    }
  }
  if (local_f0 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,puVar11,uVar35);
  }
  else {
    uVar34 = uVar35 + 0x3f & 0xffffffffffffffc0;
    if ((*(ulong *)(local_f0 + 0x28) < uVar34) ||
       (*(undefined1 **)(local_f0 + 0x38) != puVar11 + uVar34)) {
      if (*(ulong *)(local_f0 + 0x28) < uVar34 + 0x40) {
        *(int *)(*(long *)(local_f0 + 0x30) + 0x20) =
             *(int *)(*(long *)(local_f0 + 0x30) + 0x20) + -1;
        (**(code **)(**(long **)(local_f0 + 0x10) + 0x18))
                  (*(long **)(local_f0 + 0x10),(long)puVar11 - (long)*(int *)(puVar11 + -4),
                   uVar34 + 0x44);
      }
      else {
        if (*(undefined1 **)(local_f0 + 0x38) == puVar11 + uVar34) {
          *(undefined1 **)(local_f0 + 0x38) = puVar11;
          goto LAB_030ce2a8;
        }
        FUN_031cf778();
      }
    }
    else {
      *(undefined1 **)(local_f0 + 0x38) = puVar11;
      if (*(undefined1 **)(local_f0 + 0x48) == puVar11) {
LAB_030ce2a8:
        FUN_031cf578();
      }
    }
  }
  if (local_118 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,local_c8,local_120);
joined_r0x030ce33c:
    if (lVar26 == 0) goto LAB_030ce424;
LAB_030ce378:
    uVar34 = uVar31 + 0x3f & 0xffffffffffffffc0;
    if ((*(ulong *)(lVar26 + 0x28) < uVar34) ||
       (*(long *)(lVar26 + 0x38) != uVar34 + (long)local_d0)) {
      if (local_d0 != (uint *)0x0) {
        if (*(ulong *)(lVar26 + 0x28) < uVar34 + 0x40) {
          *(int *)(*(long *)(lVar26 + 0x30) + 0x20) = *(int *)(*(long *)(lVar26 + 0x30) + 0x20) + -1
          ;
          (**(code **)(**(long **)(lVar26 + 0x10) + 0x18))
                    (*(long **)(lVar26 + 0x10),(long)local_d0 - (long)(int)local_d0[-1],
                     uVar34 + 0x44);
        }
        else {
          if (*(long *)(lVar26 + 0x38) == uVar34 + (long)local_d0) {
            *(uint **)(lVar26 + 0x38) = local_d0;
            goto LAB_030ce4e4;
          }
          FUN_031cf778(lVar26,local_d0);
        }
      }
    }
    else {
      *(uint **)(lVar26 + 0x38) = local_d0;
      if (*(uint **)(lVar26 + 0x48) == local_d0) {
LAB_030ce4e4:
        FUN_031cf578(lVar26);
      }
    }
  }
  else {
    uVar34 = local_120 + 0x3f & 0xffffffffffffffc0;
    if ((*(ulong *)(local_118 + 0x28) < uVar34) ||
       (*(long *)(local_118 + 0x38) != uVar34 + local_c8)) {
      if (local_c8 != 0) {
        if (*(ulong *)(local_118 + 0x28) < uVar34 + 0x40) {
          *(int *)(*(long *)(local_118 + 0x30) + 0x20) =
               *(int *)(*(long *)(local_118 + 0x30) + 0x20) + -1;
          (**(code **)(**(long **)(local_118 + 0x10) + 0x18))
                    (*(long **)(local_118 + 0x10),local_c8 - *(int *)(local_c8 + -4),uVar34 + 0x44);
        }
        else {
          if (*(long *)(local_118 + 0x38) == uVar34 + local_c8) {
            *(long *)(local_118 + 0x38) = local_c8;
            goto LAB_030ce41c;
          }
          FUN_031cf778(local_118,local_c8);
        }
        goto joined_r0x030ce33c;
      }
    }
    else {
      *(long *)(local_118 + 0x38) = local_c8;
      if (*(long *)(local_118 + 0x48) == local_c8) {
LAB_030ce41c:
        FUN_031cf578();
        goto joined_r0x030ce33c;
      }
    }
    if (lVar26 != 0) goto LAB_030ce378;
LAB_030ce424:
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,local_d0,uVar31);
  }
  if (local_f8 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,pauVar10,local_100);
    goto LAB_030ce51c;
  }
  uVar34 = local_100 + 0x3f & 0xffffffffffffffc0;
  if ((*(ulong *)(local_f8 + 0x28) < uVar34) ||
     (*(undefined1 **)(local_f8 + 0x38) != *pauVar10 + uVar34)) {
    if (pauVar10 == (undefined1 (*) [16])0x0) goto LAB_030ce51c;
    if (*(ulong *)(local_f8 + 0x28) < uVar34 + 0x40) {
      *(int *)(*(long *)(local_f8 + 0x30) + 0x20) = *(int *)(*(long *)(local_f8 + 0x30) + 0x20) + -1
      ;
      (**(code **)(**(long **)(local_f8 + 0x10) + 0x18))
                (*(long **)(local_f8 + 0x10),(long)pauVar10 - (long)*(int *)(pauVar10[-1] + 0xc),
                 uVar34 + 0x44);
      goto LAB_030ce51c;
    }
    if (*(undefined1 **)(local_f8 + 0x38) != *pauVar10 + uVar34) {
      FUN_031cf778(local_f8,pauVar10);
      goto LAB_030ce51c;
    }
    *(undefined1 (**) [16])(local_f8 + 0x38) = pauVar10;
  }
  else {
    *(undefined1 (**) [16])(local_f8 + 0x38) = pauVar10;
    if (*(undefined1 (**) [16])(local_f8 + 0x48) != pauVar10) goto LAB_030ce51c;
  }
  FUN_031cf578(local_f8);
LAB_030ce51c:
  return param_10 != (long *)0x0 || iVar25 < param_12;
}


