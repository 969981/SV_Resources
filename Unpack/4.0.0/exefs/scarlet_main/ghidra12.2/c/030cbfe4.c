/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030cbfe4; name: FUN_030cbfe4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_030cbfe4(undefined1 param_1 [16],undefined1 param_2 [16],undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  short sVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  long *plVar10;
  uint *puVar11;
  uint *puVar12;
  ushort *puVar13;
  float *pfVar14;
  uint uVar15;
  uint *puVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  undefined8 *puVar20;
  float *pfVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  ulong *puVar25;
  uint uVar26;
  undefined8 uVar27;
  int iVar28;
  long lVar29;
  uint *puVar30;
  ulong *puVar31;
  float fVar32;
  float fVar55;
  float fVar56;
  undefined1 auVar35 [16];
  undefined1 auVar34 [16];
  undefined1 auVar33 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar57;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar48 [16];
  undefined1 auVar47 [16];
  undefined1 auVar46 [16];
  undefined1 auVar45 [16];
  undefined1 auVar44 [16];
  undefined1 auVar43 [16];
  undefined1 auVar42 [16];
  undefined1 auVar41 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar58;
  undefined8 uVar59;
  undefined1 auVar67 [16];
  undefined1 auVar66 [16];
  undefined1 auVar65 [16];
  undefined1 auVar64 [16];
  undefined1 auVar63 [16];
  undefined1 auVar62 [16];
  undefined1 auVar61 [16];
  undefined1 auVar60 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float fVar88;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar81 [16];
  undefined1 auVar80 [16];
  undefined1 auVar79 [16];
  undefined1 auVar78 [16];
  undefined1 auVar77 [16];
  undefined1 auVar76 [16];
  undefined1 auVar75 [16];
  undefined1 auVar74 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  float fVar100;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  byte bVar107;
  byte bVar108;
  byte bVar109;
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  byte bVar110;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  ulong local_100;
  long local_f8;
  ulong local_b0;
  ulong *puStack_a8;
  ulong *local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  ulong local_68;
  
  if (*(int *)(param_3 + 0xf) == 0) {
    return 2;
  }
  puVar16 = (uint *)param_3[0xe];
  iVar28 = *(int *)(param_3 + 0xf) + -1;
  puVar31 = (ulong *)*param_3;
  uVar3 = *puVar16;
  *(int *)(param_3 + 0xf) = iVar28;
  *(undefined8 *)puVar16 = *(undefined8 *)(puVar16 + (long)iVar28 * 2);
  iVar28 = *(int *)(param_3 + 0xf);
  uVar17 = 1;
  if (2 < iVar28) {
    uVar15 = 1;
    if (*(int *)(param_3[0xe] + 0x14) < *(int *)(param_3[0xe] + 0xc)) {
      uVar15 = 2;
    }
    uVar17 = (ulong)uVar15;
  }
  if ((int)uVar17 < iVar28) {
    iVar22 = 0;
    do {
      lVar18 = param_3[0xe];
      iVar9 = (int)uVar17;
      if (*(int *)(lVar18 + (long)iVar22 * 8 + 4) <= *(int *)(lVar18 + (long)iVar9 * 8 + 4)) break;
      lVar29 = (long)iVar9;
      uVar27 = *(undefined8 *)(lVar18 + (long)iVar22 * 8);
      *(undefined8 *)(lVar18 + (long)iVar22 * 8) = *(undefined8 *)(lVar18 + lVar29 * 8);
      *(undefined8 *)(lVar18 + lVar29 * 8) = uVar27;
      uVar17 = lVar29 << 1 | 1;
      lVar18 = (long)(int)(lVar29 << 1) + 2;
      if ((int)lVar18 < *(int *)(param_3 + 0xf)) {
        uVar15 = (uint)uVar17;
        if (*(int *)(param_3[0xe] + lVar18 * 8 + 4) < *(int *)(param_3[0xe] + uVar17 * 8 + 4)) {
          uVar15 = uVar15 + 1;
        }
        uVar17 = (ulong)uVar15;
      }
      iVar22 = iVar9;
    } while ((int)uVar17 < iVar28);
  }
  uVar15 = uVar3 >> 0x16;
  if ((uint)puVar31[0xe] == uVar15) {
    uVar17 = puVar31[0xc];
  }
  else {
    uVar17 = *(ulong *)(*(long *)(*puVar31 + 0x38) + (ulong)uVar15 * 0x100 + 8);
    puVar31[0xc] = uVar17;
    *(uint *)(puVar31 + 0xe) = uVar15;
  }
  puVar25 = (ulong *)(*(long *)(*(long *)(uVar17 + 0x20) + 0x18) + ((ulong)uVar3 & 0x3fffff) * 0x18)
  ;
  uVar27 = *(undefined8 *)((long)puVar25 + 6);
  puVar31[0xf] = *puVar25;
  *(undefined8 *)((long)puVar31 + 0x7e) = uVar27;
  *(int *)(puVar31 + 0x11) = (int)puVar25[2];
  *(undefined4 *)((long)puVar31 + 0x8c) = *(undefined4 *)((long)puVar25 + 0x14);
  lVar18 = *(long *)(uVar17 + 0x20);
  if ((*(int *)(lVar18 + 0x48) == 0) ||
     (iVar28 = *(int *)(*(long *)(lVar18 + 0x40) + ((ulong)uVar3 & 0x3fffff) * 4), iVar28 == -1)) {
    uVar19 = 0xffffffff;
  }
  else {
    uVar19 = *(ulong *)(*(long *)(lVar18 + 0x50) + (long)iVar28 * 8);
  }
  auVar90 = *(undefined1 (*) [16])(puVar31 + 0xf);
  puVar31[0x12] = uVar19;
  auVar60._2_14_ = param_2._2_14_;
  auVar60._0_2_ = auVar90._0_2_;
  auVar62._6_10_ = param_2._6_10_;
  auVar62._0_4_ = auVar60._0_4_;
  auVar62._4_2_ = auVar90._2_2_;
  auVar64._10_6_ = param_2._10_6_;
  auVar64._0_8_ = auVar62._0_8_;
  auVar64._8_2_ = auVar90._4_2_;
  auVar66._14_2_ = param_2._14_2_;
  auVar66._0_12_ = auVar64._0_12_;
  auVar66._12_2_ = auVar90._6_2_;
  auVar61._4_12_ = auVar66._4_12_;
  auVar61._0_4_ = auVar62._0_4_ & 0xffff;
  auVar63._8_8_ = auVar66._8_8_;
  auVar63._0_6_ = auVar61._0_6_;
  auVar63._6_2_ = 0;
  auVar65._12_4_ = auVar66._12_4_;
  auVar65._0_10_ = auVar63._0_10_;
  auVar65._10_2_ = 0;
  auVar67._0_14_ = auVar65._0_14_;
  auVar67._14_2_ = 0;
  auVar36._2_14_ = auVar90._2_14_;
  auVar36._0_2_ = auVar90._8_2_;
  auVar68._6_10_ = auVar90._6_10_;
  auVar68._0_4_ = auVar36._0_4_;
  auVar68._4_2_ = auVar90._10_2_;
  auVar125._10_6_ = auVar90._10_6_;
  auVar125._0_8_ = auVar68._0_8_;
  auVar125._8_2_ = auVar90._12_2_;
  auVar34._0_12_ = auVar125._0_12_;
  auVar34._12_2_ = auVar90._14_2_;
  auVar34._14_2_ = auVar90._14_2_;
  auVar90._4_12_ = auVar34._4_12_;
  auVar90._0_4_ = auVar68._0_4_ & 0xffff;
  auVar123._8_8_ = auVar34._8_8_;
  auVar123._0_6_ = auVar90._0_6_;
  auVar123._6_2_ = 0;
  auVar33._12_4_ = auVar34._12_4_;
  auVar33._0_10_ = auVar123._0_10_;
  auVar33._10_2_ = 0;
  auVar35._0_14_ = auVar33._0_14_;
  auVar35._14_2_ = 0;
  puVar31[0x19] = (ulong)(puVar31 + 0xf);
  *(uint *)(puVar31 + 0x18) = uVar3;
  auVar68 = NEON_ucvtf(auVar67,4);
  lVar18 = *(long *)(*(long *)(uVar17 + 0x20) + 0x38);
  auVar36 = NEON_ucvtf(auVar35,4);
  auVar90 = *(undefined1 (*) [16])(lVar18 + 0xa0);
  auVar69._0_8_ =
       CONCAT44(auVar90._4_4_ + *(float *)(lVar18 + 0x94) * auVar68._4_4_,
                auVar90._0_4_ + *(float *)(lVar18 + 0x90) * auVar68._0_4_);
  auVar69._8_4_ = auVar90._8_4_ + *(float *)(lVar18 + 0x98) * auVar68._8_4_;
  auVar69._12_4_ = auVar90._12_4_ + *(float *)(lVar18 + 0x9c) * auVar68._12_4_;
  auVar37._0_8_ =
       CONCAT44(auVar90._4_4_ + *(float *)(lVar18 + 0x94) * auVar36._4_4_,
                auVar90._0_4_ + *(float *)(lVar18 + 0x90) * auVar36._0_4_);
  auVar37._8_4_ = auVar90._8_4_ + *(float *)(lVar18 + 0x98) * auVar36._8_4_;
  auVar37._12_4_ = auVar90._12_4_ + *(float *)(lVar18 + 0x9c) * auVar36._12_4_;
  puVar31[0x1d] = auVar69._8_8_;
  puVar31[0x1c] = auVar69._0_8_;
  puVar31[0x1f] = auVar37._8_8_;
  puVar31[0x1e] = auVar37._0_8_;
  bVar107 = *(byte *)(uVar17 + 0x40);
  if (CONCAT31(0,bVar107) != 0) {
    auVar89[4] = bVar107;
    auVar89._0_4_ = CONCAT31(0,bVar107);
    auVar89._5_3_ = 0;
    auVar89[8] = bVar107;
    auVar89._9_3_ = 0;
    auVar89[0xc] = bVar107;
    auVar89._13_3_ = 0;
    iVar28 = -(uint)bVar107;
    auVar101._8_8_ = _UNK_03cab238;
    auVar101._0_8_ = _DAT_03cab230;
    auVar36 = NEON_ushl(auVar101,auVar89,4);
    auVar117._8_8_ = _UNK_03cac2d8;
    auVar117._0_8_ = _DAT_03cac2d0;
    auVar122._4_4_ = iVar28;
    auVar122._0_4_ = iVar28;
    auVar122._8_4_ = iVar28;
    auVar122._12_4_ = iVar28;
    auVar111._8_8_ = _UNK_03cabbd8;
    auVar111._0_8_ = _DAT_03cabbd0;
    auVar90 = NEON_ushl(auVar117,auVar89,4);
    auVar118._8_8_ = _UNK_03cabec8;
    auVar118._0_8_ = _DAT_03cabec0;
    auVar124._8_8_ = _UNK_03cabbc8;
    auVar124._0_8_ = _DAT_03cabbc0;
    auVar102._0_4_ = -(uint)(-1 < auVar36._0_4_);
    auVar102._4_4_ = -(uint)(-1 < auVar36._4_4_);
    auVar102._8_4_ = -(uint)(-1 < auVar36._8_4_);
    auVar102._12_4_ = -(uint)(-1 < auVar36._12_4_);
    auVar91._0_4_ = -(uint)(-1 < auVar90._0_4_);
    auVar91._4_4_ = -(uint)(-1 < auVar90._4_4_);
    auVar91._8_4_ = -(uint)(-1 < auVar90._8_4_);
    auVar91._12_4_ = -(uint)(-1 < auVar90._8_8_);
    auVar68 = NEON_ushl(auVar118,auVar122,4);
    auVar123 = a64_TBL(ZEXT816(0),auVar69,auVar111);
    auVar36 = a64_TBL(ZEXT816(0),auVar37,auVar111);
    auVar90 = a64_TBL(ZEXT816(0),auVar69,auVar124);
    auVar125 = a64_TBL(ZEXT816(0),auVar37,auVar124);
    auVar37 = auVar37 ^ (auVar37 ^ auVar36) & ~auVar102;
    auVar90 = auVar90 ^ (auVar90 ^ auVar123 ^ (auVar123 ^ auVar69) & auVar102) & auVar91;
    auVar37 = auVar37 ^ (auVar37 ^ auVar125) & ~auVar91;
    auVar92._0_3_ = auVar90._0_3_;
    bVar107 = (byte)((uint)(auVar68._0_4_ << 0x1f) >> 0x18);
    auVar92[3] = bVar107 ^ auVar90[3];
    auVar92[4] = auVar90[4];
    auVar92[5] = auVar90[5];
    auVar92[6] = auVar90[6];
    bVar108 = (byte)((uint)(auVar68._4_4_ << 0x1f) >> 0x18);
    auVar92[7] = bVar108 ^ auVar90[7];
    auVar92[8] = auVar90[8];
    auVar92[9] = auVar90[9];
    auVar92[10] = auVar90[10];
    bVar109 = (byte)((uint)(auVar68._8_4_ << 0x1f) >> 0x18);
    auVar92[0xb] = bVar109 ^ auVar90[0xb];
    auVar92[0xc] = auVar90[0xc];
    auVar92[0xd] = auVar90[0xd];
    auVar92[0xe] = auVar90[0xe];
    bVar110 = (byte)((uint)(auVar68._12_4_ << 0x1f) >> 0x18);
    auVar92[0xf] = bVar110 ^ auVar90[0xf];
    auVar38._0_3_ = auVar37._0_3_;
    auVar38[3] = auVar37[3] ^ bVar107;
    auVar38[4] = auVar37[4];
    auVar38[5] = auVar37[5];
    auVar38[6] = auVar37[6];
    auVar38[7] = auVar37[7] ^ bVar108;
    auVar38[8] = auVar37[8];
    auVar38[9] = auVar37[9];
    auVar38[10] = auVar37[10];
    auVar38[0xb] = auVar37[0xb] ^ bVar109;
    auVar38[0xc] = auVar37[0xc];
    auVar38[0xd] = auVar37[0xd];
    auVar38[0xe] = auVar37[0xe];
    auVar38[0xf] = auVar37[0xf] ^ bVar110;
    auVar69 = NEON_fmin(auVar92,auVar38,4);
    auVar37 = NEON_fmax(auVar92,auVar38,4);
    puVar31[0x1d] = auVar69._8_8_;
    puVar31[0x1c] = auVar69._0_8_;
    puVar31[0x1f] = auVar37._8_8_;
    puVar31[0x1e] = auVar37._0_8_;
  }
  fVar58 = auVar69._0_4_ + *(float *)(uVar17 + 0x50);
  fVar88 = auVar69._4_4_ + *(float *)(uVar17 + 0x54);
  auVar70._0_8_ = CONCAT44(fVar88,fVar58);
  auVar70._8_4_ = auVar69._8_4_ + *(float *)(uVar17 + 0x58);
  auVar70._12_4_ = auVar69._12_4_ + *(float *)(uVar17 + 0x5c);
  puVar31[0x1d] = auVar70._8_8_;
  puVar31[0x1c] = auVar70._0_8_;
  auVar90 = *(undefined1 (*) [16])(uVar17 + 0x50);
  fVar32 = auVar37._0_4_ + auVar90._0_4_;
  fVar55 = auVar37._4_4_ + auVar90._4_4_;
  fVar56 = auVar37._8_4_ + auVar90._8_4_;
  fVar57 = auVar37._12_4_ + auVar90._12_4_;
  *(float *)(puVar31 + 0x1f) = fVar56;
  *(float *)((long)puVar31 + 0xfc) = fVar57;
  *(float *)(puVar31 + 0x1e) = fVar32;
  *(float *)((long)puVar31 + 0xf4) = fVar55;
  if ((uint)puVar31[8] == uVar3) {
    fVar32 = *(float *)(puVar31 + 6);
    fVar55 = *(float *)((long)puVar31 + 0x34);
    fVar56 = *(float *)(puVar31 + 7);
    fVar57 = *(float *)((long)puVar31 + 0x3c);
  }
  else {
    fVar32 = (fVar58 + fVar32) * 0.5;
    fVar55 = (fVar88 + fVar55) * 0.5;
    fVar56 = (auVar70._8_4_ + fVar56) * 0.5;
    fVar57 = (auVar70._12_4_ + fVar57) * 0.5;
  }
  plVar10 = (long *)puVar31[0xb];
  *(float *)(puVar31 + 0x1b) = fVar56;
  *(float *)((long)puVar31 + 0xdc) = fVar57;
  *(float *)(puVar31 + 0x1a) = fVar32;
  *(float *)((long)puVar31 + 0xd4) = fVar55;
  uVar17 = (ulong)(uVar3 * -0x61c8864f >> 0x18);
  lVar18 = *plVar10;
  for (uVar5 = *(ushort *)(plVar10[2] + uVar17 * 2); -1 < (short)uVar5;
      uVar5 = *(ushort *)(plVar10[1] + (ulong)uVar5 * 2)) {
    if (*(uint *)(lVar18 + (ulong)uVar5 * 0x10 + 8) == uVar3) {
      puVar20 = (undefined8 *)(lVar18 + (ulong)uVar5 * 0x10);
      goto LAB_030cc2f4;
    }
  }
  iVar28 = *(int *)((long)plVar10 + 0x1c);
  puVar20 = (undefined8 *)(lVar18 + (long)iVar28 * 0x10);
  *(int *)((long)plVar10 + 0x1c) = iVar28 + 1;
  *puVar20 = 0x7f7fffee7f7fffee;
  *(uint *)(puVar20 + 1) = uVar3;
  *(undefined4 *)((long)puVar20 + 0xc) = 0xffff;
  *(undefined2 *)(plVar10[1] + (long)(short)iVar28 * 2) = *(undefined2 *)(plVar10[2] + uVar17 * 2);
  *(short *)(plVar10[2] + uVar17 * 2) = (short)iVar28;
  lVar18 = *plVar10;
LAB_030cc2f4:
  *(int *)(plVar10 + 8) = ((int)puVar20 - (int)lVar18) * 0x1000 >> 0x10;
  plVar10[9] = (long)puVar20;
  plVar10[10] = (long)puVar20;
  fVar32 = *(float *)param_3[0xb];
  sVar4 = *(short *)((long)puVar31 + 0x7e);
  iVar28 = *(int *)((long)puVar31 + 0x94);
  lVar18 = tpidr_el0;
  lVar29 = *(long *)(lVar18 + 0x1000b8);
  if (lVar29 == 0) {
    lVar29 = FUN_00e5d3b4();
    *(long *)(lVar18 + 0x1000b8) = lVar29;
  }
  uVar15 = iVar28 + sVar4;
  local_f8 = *(long *)(*(long *)(lVar29 + 0x3d0) + 0x10);
  if (*(long *)(local_f8 + 8) == 0) {
    local_100 = -(ulong)(uVar15 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar15 << 2;
    local_68 = local_100;
    if (local_f8 == 0) goto LAB_030cc40c;
    local_b0 = local_100 + 0x3f & 0xffffffffffffffc0;
    if (*(ulong *)(local_f8 + 0x28) < local_b0) {
LAB_030cc384:
      puVar16 = (uint *)FUN_031cf3b4(local_f8,&local_b0);
    }
    else {
      puVar16 = *(uint **)(local_f8 + 0x38);
      if (*(ulong *)(local_f8 + 0x40) < local_b0 + (long)puVar16) goto LAB_030cc384;
      *(ulong *)(local_f8 + 0x38) = local_b0 + (long)puVar16;
    }
  }
  else {
    local_68 = -(ulong)(uVar15 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar15 << 2;
LAB_030cc40c:
    local_100 = local_68;
    puVar16 = (uint *)(**(code **)PTR_DAT_047d1a08)(1,&local_68,0x40);
    local_f8 = 0;
  }
  sVar4 = *(short *)((long)puVar31 + 0x7e);
  uVar15 = *(uint *)((long)puVar31 + 0x94);
  puVar12 = puVar16;
  if (sVar4 < 1) {
    uVar23 = uVar15;
  }
  else {
    uVar17 = puVar31[0x11];
    uVar23 = (int)sVar4 & 3;
    if ((int)sVar4 - 1U < 3) {
      lVar18 = 0;
    }
    else {
      lVar18 = 0;
      do {
        puVar11 = puVar12;
        uVar26 = (int)uVar17 + (int)lVar18;
        puVar12 = puVar16 + lVar18;
        lVar18 = lVar18 + 4;
        *puVar12 = uVar26;
        puVar12[1] = uVar26 + 1;
        puVar12[2] = uVar26 + 2;
        puVar12[3] = uVar26 + 3;
        puVar12 = puVar12 + 4;
      } while (((int)sVar4 & 0xfffffffcU) != (uint)lVar18);
      puVar12 = puVar11 + 4;
    }
    if (uVar23 != 0) {
      uVar26 = (int)lVar18 + (int)uVar17;
      puVar11 = puVar12;
      do {
        puVar12 = puVar11 + 1;
        *puVar11 = uVar26;
        uVar23 = uVar23 - 1;
        uVar26 = uVar26 + 1;
        puVar11 = puVar12;
      } while (uVar23 != 0);
    }
    uVar23 = *(uint *)((long)puVar31 + 0x94);
  }
  if (0 < (int)uVar23) {
    uVar17 = puVar31[0x12];
    uVar26 = uVar23 & 3;
    if (uVar23 - 1 < 3) {
      lVar18 = 0;
    }
    else {
      lVar18 = 0;
      puVar11 = puVar12;
      do {
        puVar30 = puVar11;
        uVar7 = (int)uVar17 + (int)lVar18;
        puVar11 = puVar12 + lVar18;
        lVar18 = lVar18 + 4;
        *puVar11 = uVar7;
        puVar11[1] = uVar7 + 1;
        puVar11[2] = uVar7 + 2;
        puVar11[3] = uVar7 + 3;
        puVar11 = puVar11 + 4;
      } while ((uVar23 & 0xfffffffc) != (uint)lVar18);
      puVar12 = puVar30 + 4;
    }
    if (uVar26 != 0) {
      uVar23 = (int)lVar18 + (int)uVar17;
      do {
        *puVar12 = uVar23;
        uVar26 = uVar26 - 1;
        uVar23 = uVar23 + 1;
        puVar12 = puVar12 + 1;
      } while (uVar26 != 0);
    }
  }
  if (puVar16 < puVar16 + (int)(uVar15 + (int)sVar4)) {
    auVar87._8_4_ = 0xff7fffee;
    auVar87._0_8_ = 0xff7fffeeff7fffee;
    auVar87._12_4_ = 0xff7fffee;
    auVar39._8_4_ = 0x7f7fffee;
    auVar39._0_8_ = 0x7f7fffee7f7fffee;
    auVar39._12_4_ = 0x7f7fffee;
    uVar27 = auVar87._8_8_;
    puVar12 = puVar16;
LAB_030cc5b8:
    if (*(int *)(param_3 + 5) <= *(int *)((long)param_3 + 0x2c)) goto LAB_030ccf54;
    uVar17 = puVar31[0xc];
    uVar23 = *puVar12;
    iVar28 = *(int *)(*(long *)(uVar17 + 0x20) + 0x30);
    lVar18 = 0x28;
    if (iVar28 <= (int)uVar23) {
      lVar18 = 0x60;
    }
    iVar22 = 0;
    if (iVar28 <= (int)uVar23) {
      iVar22 = iVar28;
    }
    uVar19 = *(ulong *)(*(long *)(*(long *)(uVar17 + 0x20) + lVar18) +
                       (long)(int)(uVar23 - iVar22) * 8);
    uVar26 = (uint)(uVar19 >> 0x20);
    puVar31[0x13] = uVar19;
    uVar7 = (uint)uVar19;
    if ((uVar7 >> 0x16 & 1) == 0) {
      if (uVar26 == 0xffffffff) {
        uVar26 = 0xffffffff;
      }
      else {
        uVar26 = uVar26 & 0x3fffff | *(int *)(*(long *)(uVar17 + 0x20) + 0x94) << 0x16;
      }
    }
    *(uint *)(puVar31 + 0x28) = uVar23 | (int)puVar31[0xe] << 0x16;
    *(uint *)((long)puVar31 + 0x9c) = uVar26;
    puVar31[0x29] = (ulong)(puVar31 + 0x13);
    if ((uVar7 >> 0x14 & 1) == 0) {
      puVar13 = (ushort *)0x0;
      puVar31[0x2b] = 0;
      puVar31[0x2c] = 0;
      puVar31[0x2a] = 0;
    }
    else {
      puVar13 = (ushort *)
                (*(long *)(*(long *)(*(long *)(uVar17 + 0x20) + 0x38) + 0x38) +
                (uVar19 & 0xffff) * 0x18);
      puVar31[0x2a] = (ulong)puVar13;
      lVar18 = *(long *)(*(long *)(uVar17 + 0x20) + 0x38);
      iVar28 = *(int *)(lVar18 + 0xbc);
      uVar19 = *(long *)(lVar18 + 0x48) + (long)(int)(iVar28 * (uVar7 & 0xffff)) * 4;
      puVar31[0x2b] = uVar19;
      puVar31[0x2c] = uVar19 + (long)iVar28 * 4;
      fVar55 = (float)NEON_ucvtf((uint)*puVar13);
      fVar56 = (float)NEON_ucvtf((uint)puVar13[1]);
      fVar57 = (float)NEON_ucvtf((uint)puVar13[2]);
      lVar18 = *(long *)(*(long *)(uVar17 + 0x20) + 0x38);
      bVar107 = *(byte *)(uVar17 + 0x40);
      auVar40._0_4_ = *(float *)(lVar18 + 0xa0) + *(float *)(lVar18 + 0x90) * fVar55;
      auVar40._4_4_ = *(float *)(lVar18 + 0xa4) + *(float *)(lVar18 + 0x94) * fVar56;
      auVar40._8_4_ = *(float *)(lVar18 + 0xa8) + *(float *)(lVar18 + 0x98) * fVar57;
      auVar40._12_4_ = *(float *)(lVar18 + 0xac) + *(float *)(lVar18 + 0x9c) * 0.0;
      if (CONCAT31(0,bVar107) != 0) {
        auVar103[4] = bVar107;
        auVar103._0_4_ = CONCAT31(0,bVar107);
        auVar103._5_3_ = 0;
        auVar103[8] = bVar107;
        auVar103._9_3_ = 0;
        auVar103[0xc] = bVar107;
        auVar103._13_3_ = 0;
        iVar28 = -(uint)bVar107;
        auVar112._8_8_ = _UNK_03cab238;
        auVar112._0_8_ = _DAT_03cab230;
        auVar123 = NEON_ushl(auVar112,auVar103,4);
        auVar71._8_8_ = _UNK_03cabbd8;
        auVar71._0_8_ = _DAT_03cabbd0;
        auVar119._8_8_ = _UNK_03cac2d8;
        auVar119._0_8_ = _DAT_03cac2d0;
        auVar93._8_8_ = _UNK_03cabbc8;
        auVar93._0_8_ = _DAT_03cabbc0;
        auVar90 = a64_TBL(ZEXT816(0),auVar40,auVar71);
        auVar68 = NEON_ushl(auVar119,auVar103,4);
        auVar36 = a64_TBL(ZEXT816(0),auVar40,auVar93);
        auVar113._0_4_ = -(uint)(-1 < auVar123._0_4_);
        auVar113._4_4_ = -(uint)(-1 < auVar123._4_4_);
        auVar113._8_4_ = -(uint)(-1 < auVar123._8_4_);
        auVar113._12_4_ = -(uint)(-1 < auVar123._12_4_);
        auVar40 = auVar40 ^ (auVar40 ^ auVar90) & ~auVar113;
        auVar72._0_4_ = -(uint)(-1 < auVar68._0_4_);
        auVar72._4_4_ = -(uint)(-1 < auVar68._4_4_);
        auVar72._8_4_ = -(uint)(-1 < auVar68._8_4_);
        auVar72._12_4_ = -(uint)(-1 < auVar68._12_4_);
        auVar90 = auVar40 ^ (auVar40 ^ auVar36) & ~auVar72;
        auVar73._4_4_ = iVar28;
        auVar73._0_4_ = iVar28;
        auVar73._8_4_ = iVar28;
        auVar73._12_4_ = iVar28;
        auVar94._8_8_ = _UNK_03cabec8;
        auVar94._0_8_ = _DAT_03cabec0;
        auVar36 = NEON_ushl(auVar94,auVar73,4);
        auVar40._0_3_ = auVar90._0_3_;
        auVar40[3] = (byte)((uint)(auVar36._0_4_ << 0x1f) >> 0x18) ^ auVar90[3];
        auVar40[4] = auVar90[4];
        auVar40[5] = auVar90[5];
        auVar40[6] = auVar90[6];
        auVar40[7] = (byte)((uint)(auVar36._4_4_ << 0x1f) >> 0x18) ^ auVar90[7];
        auVar40[8] = auVar90[8];
        auVar40[9] = auVar90[9];
        auVar40[10] = auVar90[10];
        auVar40[0xb] = (byte)((uint)(auVar36._8_4_ << 0x1f) >> 0x18) ^ auVar90[0xb];
        auVar40[0xc] = auVar90[0xc];
        auVar40[0xd] = auVar90[0xd];
        auVar40[0xe] = auVar90[0xe];
        auVar40[0xf] = (byte)((uint)(auVar36._12_4_ << 0x1f) >> 0x18) ^ auVar90[0xf];
      }
      auVar87 = *(undefined1 (*) [16])(uVar17 + 0x50);
      fVar55 = auVar40._0_4_ + auVar87._0_4_;
      fVar56 = auVar40._4_4_ + auVar87._4_4_;
      fVar57 = auVar40._8_4_ + auVar87._8_4_;
      fVar58 = auVar40._12_4_ + auVar87._12_4_;
      *(float *)(puVar31 + 0x2f) = fVar57;
      *(float *)((long)puVar31 + 0x17c) = fVar58;
      *(float *)(puVar31 + 0x2e) = fVar55;
      *(float *)((long)puVar31 + 0x174) = fVar56;
      *(float *)(puVar31 + 0x31) = fVar57;
      *(float *)((long)puVar31 + 0x18c) = fVar58;
      *(float *)(puVar31 + 0x30) = fVar55;
      *(float *)((long)puVar31 + 0x184) = fVar56;
    }
    if (*(uint *)((long)puVar31 + 0x74) == uVar26 >> 0x16) {
      uVar17 = puVar31[0xd];
    }
    else {
      uVar17 = *(ulong *)(*(long *)(*puVar31 + 0x38) + (ulong)(uVar26 >> 0x16) * 0x100 + 8);
      puVar31[0xd] = uVar17;
      *(uint *)((long)puVar31 + 0x74) = uVar26 >> 0x16;
    }
    puVar25 = (ulong *)(*(long *)(*(long *)(uVar17 + 0x20) + 0x18) +
                       ((ulong)uVar26 & 0x3fffff) * 0x18);
    uVar19 = *puVar25;
    *(undefined8 *)((long)puVar31 + 0xa6) = *(undefined8 *)((long)puVar25 + 6);
    puVar31[0x14] = uVar19;
    auVar90 = *(undefined1 (*) [16])(puVar31 + 0x14);
    *(int *)(puVar31 + 0x16) = (int)puVar25[2];
    *(undefined4 *)((long)puVar31 + 0xb4) = *(undefined4 *)((long)puVar25 + 0x14);
    auVar74._2_14_ = auVar87._2_14_;
    auVar74._0_2_ = auVar90._0_2_;
    auVar76._6_10_ = auVar87._6_10_;
    auVar76._0_4_ = auVar74._0_4_;
    auVar76._4_2_ = auVar90._2_2_;
    auVar78._10_6_ = auVar87._10_6_;
    auVar78._0_8_ = auVar76._0_8_;
    auVar78._8_2_ = auVar90._4_2_;
    auVar80._14_2_ = auVar87._14_2_;
    auVar80._0_12_ = auVar78._0_12_;
    auVar80._12_2_ = auVar90._6_2_;
    auVar75._4_12_ = auVar80._4_12_;
    auVar75._0_4_ = auVar76._0_4_ & 0xffff;
    auVar77._8_8_ = auVar80._8_8_;
    auVar77._0_6_ = auVar75._0_6_;
    auVar77._6_2_ = 0;
    auVar79._12_4_ = auVar80._12_4_;
    auVar79._0_10_ = auVar77._0_10_;
    auVar79._10_2_ = 0;
    auVar81._0_14_ = auVar79._0_14_;
    auVar81._14_2_ = 0;
    auVar41._2_14_ = auVar90._2_14_;
    auVar41._0_2_ = auVar90._8_2_;
    auVar43._6_10_ = auVar90._6_10_;
    auVar43._0_4_ = auVar41._0_4_;
    auVar43._4_2_ = auVar90._10_2_;
    auVar45._10_6_ = auVar90._10_6_;
    auVar45._0_8_ = auVar43._0_8_;
    auVar45._8_2_ = auVar90._12_2_;
    auVar47._0_12_ = auVar45._0_12_;
    auVar47._12_2_ = auVar90._14_2_;
    auVar47._14_2_ = auVar90._14_2_;
    auVar42._4_12_ = auVar47._4_12_;
    auVar42._0_4_ = auVar43._0_4_ & 0xffff;
    auVar44._8_8_ = auVar47._8_8_;
    auVar44._0_6_ = auVar42._0_6_;
    auVar44._6_2_ = 0;
    auVar46._12_4_ = auVar47._12_4_;
    auVar46._0_10_ = auVar44._0_10_;
    auVar46._10_2_ = 0;
    auVar48._0_14_ = auVar46._0_14_;
    auVar48._14_2_ = 0;
    auVar36 = NEON_ucvtf(auVar81,4);
    lVar18 = *(long *)(*(long *)(uVar17 + 0x20) + 0x38);
    auVar90 = NEON_ucvtf(auVar48,4);
    auVar82._0_8_ =
         CONCAT44(*(float *)(lVar18 + 0xa4) + *(float *)(lVar18 + 0x94) * auVar36._4_4_,
                  *(float *)(lVar18 + 0xa0) + *(float *)(lVar18 + 0x90) * auVar36._0_4_);
    auVar82._8_4_ = *(float *)(lVar18 + 0xa8) + *(float *)(lVar18 + 0x98) * auVar36._8_4_;
    auVar82._12_4_ = *(float *)(lVar18 + 0xac) + *(float *)(lVar18 + 0x9c) * auVar36._12_4_;
    auVar49._0_8_ =
         CONCAT44(*(float *)(lVar18 + 0xa4) + *(float *)(lVar18 + 0x94) * auVar90._4_4_,
                  *(float *)(lVar18 + 0xa0) + *(float *)(lVar18 + 0x90) * auVar90._0_4_);
    auVar49._8_4_ = *(float *)(lVar18 + 0xa8) + *(float *)(lVar18 + 0x98) * auVar90._8_4_;
    auVar49._12_4_ = *(float *)(lVar18 + 0xac) + *(float *)(lVar18 + 0x9c) * auVar90._12_4_;
    puVar31[0x25] = auVar82._8_8_;
    puVar31[0x24] = auVar82._0_8_;
    puVar31[0x27] = auVar49._8_8_;
    puVar31[0x26] = auVar49._0_8_;
    bVar107 = *(byte *)(uVar17 + 0x40);
    if (CONCAT31(0,bVar107) != 0) {
      auVar95[4] = bVar107;
      auVar95._0_4_ = CONCAT31(0,bVar107);
      auVar95._5_3_ = 0;
      auVar95[8] = bVar107;
      auVar95._9_3_ = 0;
      auVar95[0xc] = bVar107;
      auVar95._13_3_ = 0;
      iVar28 = -(uint)bVar107;
      auVar104._8_8_ = _UNK_03cab238;
      auVar104._0_8_ = _DAT_03cab230;
      auVar36 = NEON_ushl(auVar104,auVar95,4);
      auVar126._8_8_ = _UNK_03cac2d8;
      auVar126._0_8_ = _DAT_03cac2d0;
      auVar114._8_8_ = _UNK_03cabbd8;
      auVar114._0_8_ = _DAT_03cabbd0;
      auVar128._8_8_ = _UNK_03cabbc8;
      auVar128._0_8_ = _DAT_03cabbc0;
      auVar120._4_4_ = iVar28;
      auVar120._0_4_ = iVar28;
      auVar120._8_4_ = iVar28;
      auVar120._12_4_ = iVar28;
      auVar90 = NEON_ushl(auVar126,auVar95,4);
      auVar127._8_8_ = _UNK_03cabec8;
      auVar127._0_8_ = _DAT_03cabec0;
      auVar123 = a64_TBL(ZEXT816(0),auVar82,auVar114);
      auVar68 = a64_TBL(ZEXT816(0),auVar49,auVar114);
      auVar105._0_4_ = -(uint)(-1 < auVar36._0_4_);
      auVar105._4_4_ = -(uint)(-1 < auVar36._4_4_);
      auVar105._8_4_ = -(uint)(-1 < auVar36._8_4_);
      auVar105._12_4_ = -(uint)(-1 < auVar36._8_8_);
      auVar96._0_4_ = -(uint)(-1 < auVar90._0_4_);
      auVar96._4_4_ = -(uint)(-1 < auVar90._4_4_);
      auVar96._8_4_ = -(uint)(-1 < auVar90._8_4_);
      auVar96._12_4_ = -(uint)(-1 < auVar90._8_8_);
      auVar90 = NEON_ushl(auVar127,auVar120,4);
      auVar36 = a64_TBL(ZEXT816(0),auVar82,auVar128);
      auVar125 = a64_TBL(ZEXT816(0),auVar49,auVar128);
      auVar82 = auVar82 ^ (auVar82 ^ auVar123) & ~auVar105;
      auVar49 = auVar49 ^ (auVar49 ^ auVar68) & ~auVar105;
      auVar82 = auVar82 ^ (auVar82 ^ auVar36) & ~auVar96;
      auVar49 = auVar49 ^ (auVar49 ^ auVar125) & ~auVar96;
      auVar97._0_3_ = auVar82._0_3_;
      bVar107 = (byte)((uint)(auVar90._0_4_ << 0x1f) >> 0x18);
      auVar97[3] = bVar107 ^ auVar82[3];
      auVar97[4] = auVar82[4];
      auVar97[5] = auVar82[5];
      auVar97[6] = auVar82[6];
      bVar108 = (byte)((uint)(auVar90._4_4_ << 0x1f) >> 0x18);
      auVar97[7] = bVar108 ^ auVar82[7];
      auVar97[8] = auVar82[8];
      auVar97[9] = auVar82[9];
      auVar97[10] = auVar82[10];
      bVar109 = (byte)((uint)(auVar90._8_4_ << 0x1f) >> 0x18);
      auVar97[0xb] = bVar109 ^ auVar82[0xb];
      auVar97[0xc] = auVar82[0xc];
      auVar97[0xd] = auVar82[0xd];
      auVar97[0xe] = auVar82[0xe];
      bVar110 = (byte)((uint)(auVar90._12_4_ << 0x1f) >> 0x18);
      auVar97[0xf] = bVar110 ^ auVar82[0xf];
      auVar50._0_3_ = auVar49._0_3_;
      auVar50[3] = auVar49[3] ^ bVar107;
      auVar50[4] = auVar49[4];
      auVar50[5] = auVar49[5];
      auVar50[6] = auVar49[6];
      auVar50[7] = auVar49[7] ^ bVar108;
      auVar50[8] = auVar49[8];
      auVar50[9] = auVar49[9];
      auVar50[10] = auVar49[10];
      auVar50[0xb] = auVar49[0xb] ^ bVar109;
      auVar50[0xc] = auVar49[0xc];
      auVar50[0xd] = auVar49[0xd];
      auVar50[0xe] = auVar49[0xe];
      auVar50[0xf] = auVar49[0xf] ^ bVar110;
      auVar82 = NEON_fmin(auVar97,auVar50,4);
      auVar49 = NEON_fmax(auVar97,auVar50,4);
      puVar31[0x25] = auVar82._8_8_;
      puVar31[0x24] = auVar82._0_8_;
      puVar31[0x27] = auVar49._8_8_;
      puVar31[0x26] = auVar49._0_8_;
    }
    fVar57 = auVar82._0_4_ + *(float *)(uVar17 + 0x50);
    fVar58 = auVar82._4_4_ + *(float *)(uVar17 + 0x54);
    auVar83._0_8_ = CONCAT44(fVar58,fVar57);
    auVar83._8_4_ = auVar82._8_4_ + *(float *)(uVar17 + 0x58);
    auVar83._12_4_ = auVar82._12_4_ + *(float *)(uVar17 + 0x5c);
    puVar31[0x25] = auVar83._8_8_;
    puVar31[0x24] = auVar83._0_8_;
    fVar55 = auVar49._0_4_ + *(float *)(uVar17 + 0x50);
    fVar56 = auVar49._4_4_ + *(float *)(uVar17 + 0x54);
    auVar51._0_8_ = CONCAT44(fVar56,fVar55);
    auVar51._8_4_ = auVar49._8_4_ + *(float *)(uVar17 + 0x58);
    auVar51._12_4_ = auVar49._12_4_ + *(float *)(uVar17 + 0x5c);
    puVar31[0x27] = auVar51._8_8_;
    puVar31[0x26] = auVar51._0_8_;
    if (*(uint *)puVar31[10] == uVar26) {
      pfVar14 = (float *)puVar31[9];
      fVar55 = *pfVar14;
      fVar56 = pfVar14[1];
      fVar57 = pfVar14[2];
      fVar58 = pfVar14[3];
    }
    else {
      fVar55 = (fVar57 + fVar55) * 0.5;
      fVar56 = (fVar58 + fVar56) * 0.5;
      fVar57 = (auVar83._8_4_ + auVar51._8_4_) * 0.5;
      fVar58 = (auVar83._12_4_ + auVar51._12_4_) * 0.5;
    }
    *(uint *)(puVar31 + 0x20) = uVar26;
    puVar31[0x21] = (ulong)(puVar31 + 0x14);
    *(float *)(puVar31 + 0x23) = fVar57;
    *(float *)((long)puVar31 + 0x11c) = fVar58;
    *(float *)(puVar31 + 0x22) = fVar55;
    *(float *)((long)puVar31 + 0x114) = fVar56;
    if (puVar13 == (ushort *)0x0) {
      auVar90 = NEON_fmin(*(undefined1 (*) [16])(puVar31 + 0x1e),auVar51,4);
      auVar36 = NEON_fmax(*(undefined1 (*) [16])(puVar31 + 0x1c),auVar83,4);
      auVar68 = NEON_fmin(auVar36,auVar90,4);
      auVar90 = NEON_fmax(auVar36,auVar90,4);
      puVar31[0x2f] = auVar68._8_8_;
      puVar31[0x2e] = auVar68._0_8_;
      puVar31[0x31] = auVar90._8_8_;
      puVar31[0x30] = auVar90._0_8_;
      auVar53._8_8_ = auVar39._8_8_;
      auVar53._0_8_ = 0x7f7fffee7f7fffee;
      auVar87._8_8_ = uVar27;
      auVar87._0_8_ = 0xff7fffeeff7fffee;
    }
    else {
      fVar55 = (float)NEON_ucvtf((uint)puVar13[4]);
      fVar56 = (float)NEON_ucvtf((uint)puVar13[5]);
      lVar18 = *(long *)(*(long *)(uVar17 + 0x20) + 0x38);
      fVar57 = (float)NEON_ucvtf((uint)puVar13[6]);
      bVar107 = *(byte *)(uVar17 + 0x40);
      auVar52._0_4_ = *(float *)(lVar18 + 0xa0) + *(float *)(lVar18 + 0x90) * fVar55;
      auVar52._4_4_ = *(float *)(lVar18 + 0xa4) + *(float *)(lVar18 + 0x94) * fVar56;
      auVar52._8_4_ = *(float *)(lVar18 + 0xa8) + *(float *)(lVar18 + 0x98) * fVar57;
      auVar52._12_4_ = *(float *)(lVar18 + 0xac) + *(float *)(lVar18 + 0x9c) * 0.0;
      if (CONCAT31(0,bVar107) != 0) {
        auVar106[4] = bVar107;
        auVar106._0_4_ = CONCAT31(0,bVar107);
        auVar106._5_3_ = 0;
        auVar106[8] = bVar107;
        auVar106._9_3_ = 0;
        auVar106[0xc] = bVar107;
        auVar106._13_3_ = 0;
        iVar28 = -(uint)bVar107;
        auVar115._8_8_ = _UNK_03cab238;
        auVar115._0_8_ = _DAT_03cab230;
        auVar123 = NEON_ushl(auVar115,auVar106,4);
        auVar84._8_8_ = _UNK_03cabbd8;
        auVar84._0_8_ = _DAT_03cabbd0;
        auVar121._8_8_ = _UNK_03cac2d8;
        auVar121._0_8_ = _DAT_03cac2d0;
        auVar98._8_8_ = _UNK_03cabbc8;
        auVar98._0_8_ = _DAT_03cabbc0;
        auVar90 = a64_TBL(ZEXT816(0),auVar52,auVar84);
        auVar68 = NEON_ushl(auVar121,auVar106,4);
        auVar36 = a64_TBL(ZEXT816(0),auVar52,auVar98);
        auVar116._0_4_ = -(uint)(-1 < auVar123._0_4_);
        auVar116._4_4_ = -(uint)(-1 < auVar123._4_4_);
        auVar116._8_4_ = -(uint)(-1 < auVar123._8_4_);
        auVar116._12_4_ = -(uint)(-1 < auVar123._12_4_);
        auVar52 = auVar52 ^ (auVar52 ^ auVar90) & ~auVar116;
        auVar85._0_4_ = -(uint)(-1 < auVar68._0_4_);
        auVar85._4_4_ = -(uint)(-1 < auVar68._4_4_);
        auVar85._8_4_ = -(uint)(-1 < auVar68._8_4_);
        auVar85._12_4_ = -(uint)(-1 < auVar68._12_4_);
        auVar90 = auVar52 ^ (auVar52 ^ auVar36) & ~auVar85;
        auVar86._4_4_ = iVar28;
        auVar86._0_4_ = iVar28;
        auVar86._8_4_ = iVar28;
        auVar86._12_4_ = iVar28;
        auVar99._8_8_ = _UNK_03cabec8;
        auVar99._0_8_ = _DAT_03cabec0;
        auVar36 = NEON_ushl(auVar99,auVar86,4);
        auVar52._0_3_ = auVar90._0_3_;
        auVar52[3] = (byte)((uint)(auVar36._0_4_ << 0x1f) >> 0x18) ^ auVar90[3];
        auVar52[4] = auVar90[4];
        auVar52[5] = auVar90[5];
        auVar52[6] = auVar90[6];
        auVar52[7] = (byte)((uint)(auVar36._4_4_ << 0x1f) >> 0x18) ^ auVar90[7];
        auVar52[8] = auVar90[8];
        auVar52[9] = auVar90[9];
        auVar52[10] = auVar90[10];
        auVar52[0xb] = (byte)((uint)(auVar36._8_4_ << 0x1f) >> 0x18) ^ auVar90[0xb];
        auVar52[0xc] = auVar90[0xc];
        auVar52[0xd] = auVar90[0xd];
        auVar52[0xe] = auVar90[0xe];
        auVar52[0xf] = (byte)((uint)(auVar36._12_4_ << 0x1f) >> 0x18) ^ auVar90[0xf];
      }
      auVar53._0_8_ =
           CONCAT44(auVar52._4_4_ + *(float *)(uVar17 + 0x54),
                    auVar52._0_4_ + *(float *)(uVar17 + 0x50));
      auVar53._8_4_ = auVar52._8_4_ + *(float *)(uVar17 + 0x58);
      auVar53._12_4_ = auVar52._12_4_ + *(float *)(uVar17 + 0x5c);
      auVar87._8_8_ = auVar53._8_8_;
      auVar87._0_8_ = auVar53._0_8_;
    }
    plVar10 = (long *)puVar31[0xb];
    puVar31[0x33] = auVar53._8_8_;
    puVar31[0x32] = auVar53._0_8_;
    puVar31[0x35] = auVar87._8_8_;
    puVar31[0x34] = auVar87._0_8_;
    if (uVar26 == 0xffffffff) {
      puVar20 = (undefined8 *)0x0;
    }
    else {
      uVar17 = (ulong)(uVar26 * -0x61c8864f >> 0x18);
      lVar18 = *plVar10;
      for (uVar5 = *(ushort *)(plVar10[2] + uVar17 * 2); -1 < (short)uVar5;
          uVar5 = *(ushort *)(plVar10[1] + (ulong)uVar5 * 2)) {
        if (*(uint *)(lVar18 + (ulong)uVar5 * 0x10 + 8) == uVar26) {
          puVar20 = (undefined8 *)(lVar18 + (ulong)uVar5 * 0x10);
          goto LAB_030cc9c8;
        }
      }
      iVar28 = *(int *)((long)plVar10 + 0x1c);
      *(int *)((long)plVar10 + 0x1c) = iVar28 + 1;
      puVar20 = (undefined8 *)(lVar18 + (long)iVar28 * 0x10);
      *puVar20 = 0x7f7fffee7f7fffee;
      *(uint *)(puVar20 + 1) = uVar26;
      *(undefined4 *)((long)puVar20 + 0xc) = 0xffff;
      *(undefined2 *)(plVar10[1] + (long)(short)iVar28 * 2) =
           *(undefined2 *)(plVar10[2] + uVar17 * 2);
      *(short *)(plVar10[2] + uVar17 * 2) = (short)iVar28;
    }
LAB_030cc9c8:
    plVar10[9] = (long)puVar20;
    plVar10 = (long *)puVar31[4];
    if (plVar10 != (long *)0x0) {
      local_b0 = *puVar31;
      local_98 = 1;
      puStack_a8 = puVar31 + 1;
      local_a0 = puVar31 + 0x18;
      uVar17 = (**(code **)(*plVar10 + 0x28))(plVar10,&local_b0);
      if ((uVar17 & 1) != 0) goto LAB_030cca10;
      goto LAB_030ccf10;
    }
LAB_030cca10:
    fVar58 = (*(float *)(puVar31 + 0x2e) + *(float *)(puVar31 + 0x30)) * 0.5;
    fVar88 = (*(float *)((long)puVar31 + 0x174) + *(float *)((long)puVar31 + 0x184)) * 0.5;
    fVar100 = (*(float *)(puVar31 + 0x2f) + *(float *)(puVar31 + 0x31)) * 0.5;
    fVar55 = *(float *)(puVar31 + 0x1a) - fVar58;
    fVar56 = *(float *)((long)puVar31 + 0xd4) - fVar88;
    fVar57 = *(float *)(puVar31 + 0x1b) - fVar100;
    fVar55 = fVar55 * fVar55;
    fVar56 = fVar56 * fVar56;
    fVar57 = fVar57 * fVar57;
    if ((*(byte *)((long)puVar31 + 0x9a) >> 4 & 1) == 0) {
      fVar58 = fVar58 - *(float *)(puVar31 + 0x22);
      fVar88 = fVar88 - *(float *)((long)puVar31 + 0x114);
      fVar100 = fVar100 - *(float *)(puVar31 + 0x23);
      fVar58 = fVar58 * fVar58;
      fVar88 = fVar88 * fVar88;
      fVar100 = fVar100 * fVar100;
      uVar59 = CONCAT44(SQRT(fVar100 + fVar58 + fVar88),SQRT(fVar100 + fVar58 + fVar88));
    }
    else {
      fVar58 = *(float *)(puVar31 + 0x32) - *(float *)(puVar31 + 0x22);
      fVar88 = *(float *)((long)puVar31 + 0x194) - *(float *)((long)puVar31 + 0x114);
      fVar100 = *(float *)(puVar31 + 0x33) - *(float *)(puVar31 + 0x23);
      fVar58 = fVar58 * fVar58;
      fVar88 = fVar88 * fVar88;
      fVar100 = fVar100 * fVar100;
      uVar59 = CONCAT44(*(float *)(puVar31[0x2a] + 0x14) + SQRT(fVar58 + fVar88 + fVar100),
                        *(float *)(puVar31[0x2a] + 0x14) + SQRT(fVar58 + fVar88 + fVar100));
    }
    fVar58 = SQRT(fVar55 + fVar56 + fVar57);
    plVar10 = (long *)puVar31[3];
    if (plVar10 == (long *)0x0) {
      fVar55 = fVar32 + fVar58 + (float)uVar59;
    }
    else {
      local_b0 = *puVar31;
      local_98 = 1;
      puStack_a8 = puVar31 + 1;
      local_a0 = puVar31 + 0x18;
      local_90 = CONCAT44(fVar32,fVar32);
      uStack_88 = CONCAT44(SQRT(fVar55 + fVar56 + fVar57),fVar58);
      local_80 = uVar59;
      fVar55 = (float)(**(code **)(*plVar10 + 0x28))(plVar10,&local_b0);
      fVar55 = fVar32 + fVar55;
    }
    auVar87 = ZEXT416((uint)*(float *)(param_3 + 9));
    if (fVar55 <= *(float *)(param_3 + 9)) {
      pfVar14 = (float *)param_3[0xb];
      if (((*(ushort *)((long)pfVar14 + 0xe) & 3) == 0) ||
         (auVar87 = ZEXT416((uint)*pfVar14), fVar55 < *pfVar14)) {
        *pfVar14 = fVar55;
        if ((*(ushort *)((long)pfVar14 + 0xe) & 3) == 0) {
          lVar18 = param_3[0x10];
          fVar55 = *(float *)(lVar18 + 0x110) - *(float *)(param_3 + 0x12);
          fVar56 = *(float *)(lVar18 + 0x114) - *(float *)((long)param_3 + 0x94);
          fVar57 = *(float *)(lVar18 + 0x118) - *(float *)(param_3 + 0x13);
          fVar55 = fVar55 * fVar55;
          fVar56 = fVar56 * fVar56;
          fVar57 = fVar57 * fVar57;
          auVar54._0_4_ = SQRT(fVar55 + fVar56 + fVar57);
          auVar54._4_4_ = SQRT(fVar55 + fVar56 + fVar57);
          auVar54._8_8_ = 0;
          if (1 < (int)*(uint *)(param_3 + 0x11)) {
            lVar29 = (ulong)*(uint *)(param_3 + 0x11) - 1;
            pfVar21 = (float *)(param_3 + 0x16);
            do {
              lVar29 = lVar29 + -1;
              fVar55 = *(float *)(lVar18 + 0x110) - *pfVar21;
              fVar56 = *(float *)(lVar18 + 0x114) - pfVar21[1];
              fVar57 = *(float *)(lVar18 + 0x118) - pfVar21[2];
              fVar55 = fVar55 * fVar55;
              fVar56 = fVar56 * fVar56;
              fVar57 = fVar57 * fVar57;
              auVar54._0_8_ =
                   NEON_fmin(auVar54._0_8_,
                             CONCAT44(SQRT(fVar55 + fVar56 + fVar57),SQRT(fVar55 + fVar56 + fVar57))
                             ,4);
              pfVar21 = pfVar21 + 8;
            } while (lVar29 != 0);
          }
          fVar55 = auVar54._0_4_;
          pfVar14[1] = fVar55;
          if (fVar55 < *(float *)((long)param_3 + 0x44)) {
            *(float *)((long)param_3 + 0x44) = fVar55;
            *(uint *)(param_3 + 8) = uVar26;
          }
        }
        *(short *)(*(long *)(param_3[0x22] + 0x48) + 0xc) =
             (short)*(undefined4 *)(param_3[0x22] + 0x40);
        if ((param_3[0x23] == 0) || ((*(byte *)(param_3[0x23] + 0x9a) >> 4 & 1) != 0)) {
          uVar7 = *(uint *)((long)param_3 + 300);
          if ((int)uVar7 < *(int *)(param_3 + 0x25) * 2) {
            FUN_030cd234(param_3 + 0x24,uVar7 * 2 + 2);
            uVar7 = *(uint *)((long)param_3 + 300);
          }
          uVar6 = (uVar26 * -0x61c8864f & 0xff00ff00) >> 8 | (uVar26 * -0x61c8864f & 0xff00ff) << 8;
          uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
          lVar18 = param_3[0x24];
          while( true ) {
            uVar6 = uVar7 & uVar6;
            uVar8 = *(uint *)(lVar18 + (ulong)uVar6 * 8);
            if (uVar8 == 0xffffffff) break;
            if (uVar8 == uVar26) {
              iVar28 = 0;
              goto LAB_030ccd80;
            }
            uVar6 = uVar6 + 1;
          }
          iVar28 = 1;
LAB_030ccd80:
          *(int *)(param_3 + 0x25) = *(int *)(param_3 + 0x25) + iVar28;
          *(uint *)(lVar18 + (-(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar6 << 3)) =
               uVar26;
          *(uint *)(param_3[0x24] + (long)(int)uVar6 * 8 + 4) = uVar23;
        }
        else {
          uVar23 = *(uint *)((long)param_3 + 300);
          if ((int)uVar23 < 1) {
LAB_030ccc8c:
            uVar17 = (ulong)(uVar23 + 1);
          }
          else {
            uVar7 = (uVar26 * -0x61c8864f & 0xff00ff00) >> 8 |
                    (uVar26 * -0x61c8864f & 0xff00ff) << 8;
            uVar17 = (ulong)(uVar23 & (uVar7 >> 0x10 | uVar7 << 0x10));
            uVar7 = *(uint *)(param_3[0x24] + uVar17 * 8);
            if (uVar7 == 0xffffffff) goto LAB_030ccc8c;
            if (uVar7 != uVar26) {
              do {
                uVar17 = (ulong)((int)uVar17 + 1U & uVar23);
                uVar7 = *(uint *)(param_3[0x24] + uVar17 * 8);
                if (uVar7 == 0xffffffff) goto LAB_030ccc8c;
              } while (uVar7 != uVar26);
            }
          }
          uVar7 = (uint)uVar17;
          if ((int)uVar7 <= (int)uVar23) {
            *(int *)(param_3 + 0x25) = *(int *)(param_3 + 0x25) + -1;
            *(undefined4 *)(param_3[0x24] + uVar17 * 8) = 0xffffffff;
            uVar23 = *(uint *)((long)param_3 + 300);
            lVar18 = param_3[0x24];
            uVar6 = uVar7;
            do {
              uVar6 = uVar23 + uVar6 & uVar23;
            } while (*(int *)(lVar18 + (ulong)uVar6 * 8) != -1);
            uVar19 = (ulong)(uVar23 & uVar7 + 1);
            iVar28 = *(int *)(lVar18 + uVar19 * 8);
            if (iVar28 != -1) {
              uVar7 = uVar6 + 1 & uVar23;
              do {
                uVar6 = (iVar28 * -0x61c8864f & 0xff00ff00U) >> 8 |
                        (iVar28 * -0x61c8864f & 0xff00ffU) << 8;
                uVar6 = (uVar6 >> 0x10 | uVar6 << 0x10) & uVar23;
                uVar24 = (uint)uVar19;
                uVar8 = (uint)uVar17;
                if ((((uVar24 < uVar7) || (uVar6 <= uVar8)) &&
                    ((uVar8 <= uVar24 || ((uVar6 <= uVar8 && (uVar24 < uVar6)))))) &&
                   ((uVar6 <= uVar8 || (uVar7 <= uVar6)))) {
                  *(undefined8 *)(lVar18 + uVar17 * 8) = *(undefined8 *)(lVar18 + uVar19 * 8);
                  *(undefined4 *)(param_3[0x24] + uVar19 * 8) = 0xffffffff;
                  uVar23 = *(uint *)((long)param_3 + 300);
                  lVar18 = param_3[0x24];
                  uVar17 = uVar19;
                }
                uVar19 = (ulong)(uVar23 & uVar24 + 1);
                iVar28 = *(int *)(lVar18 + uVar19 * 8);
              } while (iVar28 != -1);
            }
          }
        }
        pfVar14 = (float *)param_3[0xb];
        fVar55 = *(float *)((long)param_3 + 0x4c) * pfVar14[1];
        auVar87 = ZEXT416((uint)fVar55);
        fVar55 = *pfVar14 + fVar55;
        if (fVar55 <= *(float *)(param_3 + 9)) {
          uVar5 = *(ushort *)((long)pfVar14 + 0xe);
          *(ushort *)((long)pfVar14 + 0xe) = uVar5 & 0xfffc | 1;
          uVar23 = *(uint *)(param_3 + 0xf);
          if ((uVar5 & 1) == 0) {
            if (*(int *)((long)param_3 + 0x7c) <= (int)uVar23) goto LAB_030ccf54;
            uVar19 = (ulong)(int)uVar23;
            puVar11 = (uint *)(param_3[0xe] + uVar19 * 8);
            *(uint *)(param_3 + 0xf) = uVar23 + 1;
            *puVar11 = uVar26;
            puVar11[1] = (uint)fVar55;
            lVar18 = param_3[0xe];
            puVar1 = (undefined4 *)(lVar18 + uVar19 * 8);
            uVar2 = *puVar1;
            iVar28 = puVar1[1];
            uVar17 = (ulong)uVar23;
            if (0 < (int)uVar23) {
              do {
                iVar9 = (int)uVar17;
                iVar22 = iVar9;
                if (-1 < iVar9 + -1) {
                  iVar22 = iVar9 + -1;
                }
                uVar19 = (ulong)(uint)(iVar22 >> 1);
                if (*(int *)(lVar18 + uVar19 * 8 + 4) <= iVar28) {
                  uVar19 = (ulong)iVar9;
                  break;
                }
                *(undefined8 *)(lVar18 + uVar17 * 8) = *(undefined8 *)(lVar18 + uVar19 * 8);
                lVar18 = param_3[0xe];
                uVar17 = uVar19;
              } while (2 < iVar9);
            }
            *(undefined4 *)(lVar18 + uVar19 * 8) = uVar2;
            *(int *)(param_3[0xe] + uVar19 * 8 + 4) = iVar28;
          }
          else if (0 < (int)uVar23) {
            uVar17 = 0;
            lVar18 = 4;
            do {
              if (*(uint *)(param_3[0xe] + lVar18 + -4) == uVar26) {
                *(float *)(param_3[0xe] + lVar18) = fVar55;
                lVar29 = param_3[0xe];
                iVar28 = ((int *)(lVar29 + lVar18))[-1];
                iVar22 = *(int *)(lVar29 + lVar18);
                if ((int)uVar17 == 0) goto LAB_030ccefc;
                uVar19 = uVar17 & 0xffffffff;
                goto LAB_030cce9c;
              }
              uVar17 = uVar17 + 1;
              lVar18 = lVar18 + 8;
            } while (uVar23 != uVar17);
          }
        }
      }
    }
LAB_030ccf10:
    puVar12 = puVar12 + 1;
    if (puVar16 + (int)(uVar15 + (int)sVar4) <= puVar12) goto LAB_030ccf54;
    goto LAB_030cc5b8;
  }
LAB_030ccf54:
  *(ushort *)(param_3[0xc] + 0xe) = *(ushort *)(param_3[0xc] + 0xe) & 0xfffc | 2;
  if (local_f8 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,puVar16,local_100);
    goto LAB_030cd030;
  }
  uVar17 = local_100 + 0x3f & 0xffffffffffffffc0;
  if ((*(ulong *)(local_f8 + 0x28) < uVar17) ||
     (*(long *)(local_f8 + 0x38) != uVar17 + (long)puVar16)) {
    if (puVar16 == (uint *)0x0) goto LAB_030cd030;
    if (*(ulong *)(local_f8 + 0x28) < uVar17 + 0x40) {
      *(int *)(*(long *)(local_f8 + 0x30) + 0x20) = *(int *)(*(long *)(local_f8 + 0x30) + 0x20) + -1
      ;
      (**(code **)(**(long **)(local_f8 + 0x10) + 0x18))
                (*(long **)(local_f8 + 0x10),(long)puVar16 - (long)(int)puVar16[-1],uVar17 + 0x44);
      goto LAB_030cd030;
    }
    if (*(long *)(local_f8 + 0x38) != uVar17 + (long)puVar16) {
      FUN_031cf778(local_f8,puVar16);
      goto LAB_030cd030;
    }
    *(uint **)(local_f8 + 0x38) = puVar16;
  }
  else {
    *(uint **)(local_f8 + 0x38) = puVar16;
    if (*(uint **)(local_f8 + 0x48) != puVar16) goto LAB_030cd030;
  }
  FUN_031cf578();
LAB_030cd030:
  *(uint *)(param_3 + 0x26) = uVar3;
  if (0 < (int)*(uint *)(param_3 + 0x11)) {
    lVar18 = 0;
    puVar16 = (uint *)(param_3 + 0x14);
    do {
      if (*puVar16 == uVar3) {
        if ((int)lVar18 != 1) {
          return 1;
        }
        break;
      }
      lVar18 = lVar18 + -1;
      puVar16 = puVar16 + 8;
    } while (-lVar18 != (ulong)*(uint *)(param_3 + 0x11));
  }
  if (*(int *)(param_3 + 0xf) < *(int *)((long)param_3 + 0x7c)) {
    iVar28 = 3;
    if (*(int *)((long)param_3 + 0x2c) < *(int *)(param_3 + 5)) {
      iVar28 = (uint)(*(int *)(param_3 + 0xf) == 0) << 1;
    }
  }
  else {
    iVar28 = 3;
  }
  return iVar28;
  while( true ) {
    uVar17 = (long)((ulong)uVar23 << 0x20) >> 0x21;
    *(undefined8 *)(lVar29 + uVar19 * 8) = *(undefined8 *)(lVar29 + uVar17 * 8);
    lVar29 = param_3[0xe];
    uVar19 = (ulong)(uint)((int)uVar23 >> 1);
    if ((int)uVar26 < 3) break;
LAB_030cce9c:
    uVar26 = (uint)uVar19;
    uVar23 = uVar26;
    if (-1 < (int)(uVar26 - 1)) {
      uVar23 = uVar26 - 1;
    }
    if (*(int *)(lVar29 + (long)((int)uVar23 >> 1) * 8 + 4) <= iVar22) {
      uVar17 = (ulong)(int)uVar26;
      break;
    }
  }
LAB_030ccefc:
  *(int *)(lVar29 + uVar17 * 8) = iVar28;
  *(int *)(param_3[0xe] + uVar17 * 8 + 4) = iVar22;
  goto LAB_030ccf10;
}


