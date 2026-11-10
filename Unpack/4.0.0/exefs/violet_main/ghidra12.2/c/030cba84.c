/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030cba84; name: FUN_030cba84
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030cba84(long *param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  uint uVar17;
  ulong uVar18;
  undefined1 (*pauVar19) [16];
  float *pfVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auVar28 [16];
  undefined1 auVar27 [16];
  undefined1 auVar26 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar39;
  float fVar40;
  float fVar54;
  undefined1 in_q3 [16];
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
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  byte bVar63;
  byte bVar64;
  byte bVar65;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  byte bVar66;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  
  *(undefined4 *)(param_1 + 0x26) = 0xffffffff;
  *param_1 = (long)param_2;
  puVar10 = (undefined4 *)param_4[4];
  uVar5 = *(uint *)(param_4 + 5);
  uVar6 = *(uint *)(param_4 + 3);
  plVar11 = (long *)param_4[2];
  uVar22 = param_4[1];
  uVar21 = *param_4;
  param_1[0x10] = (long)param_2;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)(param_1 + 0x14) = *puVar10;
  lVar12 = *plVar11;
  lVar14 = plVar11[1];
  *(undefined4 *)(param_1 + 0x11) = 1;
  param_1[0x13] = lVar14;
  param_1[0x12] = lVar12;
  uVar17 = uVar6 >> 0x16;
  if (*(uint *)((long)param_2 + 0x74) != uVar17) {
    param_2[0xd] = *(long *)(*(long *)(*param_2 + 0x38) + (ulong)uVar17 * 0x100 + 8);
    *(uint *)((long)param_2 + 0x74) = uVar17;
    param_2 = (long *)*param_1;
  }
  lVar12 = param_2[0xd];
  puVar13 = (undefined8 *)
            (*(long *)(*(long *)(lVar12 + 0x20) + 0x18) + ((ulong)uVar6 & 0x3fffff) * 0x18);
  uVar16 = *(undefined8 *)((long)puVar13 + 6);
  pauVar19 = (undefined1 (*) [16])(param_2 + 0x14);
  *(undefined8 *)*pauVar19 = *puVar13;
  *(undefined8 *)((long)param_2 + 0xa6) = uVar16;
  auVar29 = *pauVar19;
  *(undefined4 *)(param_2 + 0x16) = *(undefined4 *)(puVar13 + 2);
  auVar41._2_14_ = in_q3._2_14_;
  auVar41._0_2_ = auVar29._0_2_;
  auVar43._6_10_ = in_q3._6_10_;
  auVar43._0_4_ = auVar41._0_4_;
  auVar43._4_2_ = auVar29._2_2_;
  auVar45._10_6_ = in_q3._10_6_;
  auVar45._0_8_ = auVar43._0_8_;
  auVar45._8_2_ = auVar29._4_2_;
  auVar47._14_2_ = in_q3._14_2_;
  auVar47._0_12_ = auVar45._0_12_;
  auVar47._12_2_ = auVar29._6_2_;
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
  auVar49._2_14_ = auVar29._2_14_;
  auVar49._0_2_ = auVar29._8_2_;
  auVar71._6_10_ = auVar29._6_10_;
  auVar71._0_4_ = auVar49._0_4_;
  auVar71._4_2_ = auVar29._10_2_;
  auVar75._10_6_ = auVar29._10_6_;
  auVar75._0_8_ = auVar71._0_8_;
  auVar75._8_2_ = auVar29._12_2_;
  auVar27._0_12_ = auVar75._0_12_;
  auVar27._12_2_ = auVar29._14_2_;
  auVar27._14_2_ = auVar29._14_2_;
  auVar29._4_12_ = auVar27._4_12_;
  auVar29._0_4_ = auVar71._0_4_ & 0xffff;
  auVar73._8_8_ = auVar27._8_8_;
  auVar73._0_6_ = auVar29._0_6_;
  auVar73._6_2_ = 0;
  auVar26._12_4_ = auVar27._12_4_;
  auVar26._0_10_ = auVar73._0_10_;
  auVar26._10_2_ = 0;
  auVar28._0_14_ = auVar26._0_14_;
  auVar28._14_2_ = 0;
  *(undefined4 *)((long)param_2 + 0xb4) = *(undefined4 *)((long)puVar13 + 0x14);
  lVar14 = *(long *)(*(long *)(lVar12 + 0x20) + 0x38);
  auVar49 = NEON_ucvtf(auVar48,4);
  auVar29 = NEON_ucvtf(auVar28,4);
  auVar50._0_8_ =
       CONCAT44(*(float *)(lVar14 + 0xa4) + *(float *)(lVar14 + 0x94) * auVar49._4_4_,
                *(float *)(lVar14 + 0xa0) + *(float *)(lVar14 + 0x90) * auVar49._0_4_);
  auVar50._8_4_ = *(float *)(lVar14 + 0xa8) + *(float *)(lVar14 + 0x98) * auVar49._8_4_;
  auVar50._12_4_ = *(float *)(lVar14 + 0xac) + *(float *)(lVar14 + 0x9c) * auVar49._12_4_;
  auVar30._0_8_ =
       CONCAT44(*(float *)(lVar14 + 0xa4) + *(float *)(lVar14 + 0x94) * auVar29._4_4_,
                *(float *)(lVar14 + 0xa0) + *(float *)(lVar14 + 0x90) * auVar29._0_4_);
  auVar30._8_4_ = *(float *)(lVar14 + 0xa8) + *(float *)(lVar14 + 0x98) * auVar29._8_4_;
  auVar30._12_4_ = *(float *)(lVar14 + 0xac) + *(float *)(lVar14 + 0x9c) * auVar29._12_4_;
  param_2[0x25] = auVar50._8_8_;
  param_2[0x24] = auVar50._0_8_;
  param_2[0x27] = auVar30._8_8_;
  param_2[0x26] = auVar30._0_8_;
  bVar63 = *(byte *)(lVar12 + 0x40);
  if (CONCAT31(0,bVar63) != 0) {
    auVar55[4] = bVar63;
    auVar55._0_4_ = CONCAT31(0,bVar63);
    auVar55._5_3_ = 0;
    auVar55[8] = bVar63;
    auVar55._9_3_ = 0;
    auVar55[0xc] = bVar63;
    auVar55._13_3_ = 0;
    iVar9 = -(uint)bVar63;
    auVar59._8_8_ = _UNK_03cab238;
    auVar59._0_8_ = _DAT_03cab230;
    auVar49 = NEON_ushl(auVar59,auVar55,4);
    auVar69._8_8_ = _UNK_03cac2d8;
    auVar69._0_8_ = _DAT_03cac2d0;
    auVar72._4_4_ = iVar9;
    auVar72._0_4_ = iVar9;
    auVar72._8_4_ = iVar9;
    auVar72._12_4_ = iVar9;
    auVar67._8_8_ = _UNK_03cabbd8;
    auVar67._0_8_ = _DAT_03cabbd0;
    auVar29 = NEON_ushl(auVar69,auVar55,4);
    auVar70._8_8_ = _UNK_03cabec8;
    auVar70._0_8_ = _DAT_03cabec0;
    auVar74._8_8_ = _UNK_03cabbc8;
    auVar74._0_8_ = _DAT_03cabbc0;
    auVar60._0_4_ = -(uint)(-1 < auVar49._0_4_);
    auVar60._4_4_ = -(uint)(-1 < auVar49._4_4_);
    auVar60._8_4_ = -(uint)(-1 < auVar49._8_4_);
    auVar60._12_4_ = -(uint)(-1 < auVar49._8_8_);
    auVar56._0_4_ = -(uint)(-1 < auVar29._0_4_);
    auVar56._4_4_ = -(uint)(-1 < auVar29._4_4_);
    auVar56._8_4_ = -(uint)(-1 < auVar29._8_4_);
    auVar56._12_4_ = -(uint)(-1 < auVar29._8_8_);
    auVar71 = NEON_ushl(auVar70,auVar72,4);
    auVar73 = a64_TBL(ZEXT816(0),auVar50,auVar67);
    auVar49 = a64_TBL(ZEXT816(0),auVar30,auVar67);
    auVar29 = a64_TBL(ZEXT816(0),auVar50,auVar74);
    auVar75 = a64_TBL(ZEXT816(0),auVar30,auVar74);
    auVar30 = auVar30 ^ (auVar30 ^ auVar49) & ~auVar60;
    auVar29 = auVar29 ^ (auVar29 ^ auVar73 ^ (auVar73 ^ auVar50) & auVar60) & auVar56;
    auVar30 = auVar30 ^ (auVar30 ^ auVar75) & ~auVar56;
    auVar57._0_3_ = auVar29._0_3_;
    bVar63 = (byte)((uint)(auVar71._0_4_ << 0x1f) >> 0x18);
    auVar57[3] = bVar63 ^ auVar29[3];
    auVar57[4] = auVar29[4];
    auVar57[5] = auVar29[5];
    auVar57[6] = auVar29[6];
    bVar64 = (byte)((uint)(auVar71._4_4_ << 0x1f) >> 0x18);
    auVar57[7] = bVar64 ^ auVar29[7];
    auVar57[8] = auVar29[8];
    auVar57[9] = auVar29[9];
    auVar57[10] = auVar29[10];
    bVar65 = (byte)((uint)(auVar71._8_4_ << 0x1f) >> 0x18);
    auVar57[0xb] = bVar65 ^ auVar29[0xb];
    auVar57[0xc] = auVar29[0xc];
    auVar57[0xd] = auVar29[0xd];
    auVar57[0xe] = auVar29[0xe];
    bVar66 = (byte)((uint)(auVar71._12_4_ << 0x1f) >> 0x18);
    auVar57[0xf] = bVar66 ^ auVar29[0xf];
    auVar31._0_3_ = auVar30._0_3_;
    auVar31[3] = auVar30[3] ^ bVar63;
    auVar31[4] = auVar30[4];
    auVar31[5] = auVar30[5];
    auVar31[6] = auVar30[6];
    auVar31[7] = auVar30[7] ^ bVar64;
    auVar31[8] = auVar30[8];
    auVar31[9] = auVar30[9];
    auVar31[10] = auVar30[10];
    auVar31[0xb] = auVar30[0xb] ^ bVar65;
    auVar31[0xc] = auVar30[0xc];
    auVar31[0xd] = auVar30[0xd];
    auVar31[0xe] = auVar30[0xe];
    auVar31[0xf] = auVar30[0xf] ^ bVar66;
    auVar50 = NEON_fmin(auVar57,auVar31,4);
    auVar30 = NEON_fmax(auVar57,auVar31,4);
    param_2[0x25] = auVar50._8_8_;
    param_2[0x24] = auVar50._0_8_;
    param_2[0x27] = auVar30._8_8_;
    param_2[0x26] = auVar30._0_8_;
  }
  fVar40 = auVar50._0_4_ + *(float *)(lVar12 + 0x50);
  fVar54 = auVar50._4_4_ + *(float *)(lVar12 + 0x54);
  auVar51._0_8_ = CONCAT44(fVar54,fVar40);
  auVar51._8_4_ = auVar50._8_4_ + *(float *)(lVar12 + 0x58);
  auVar51._12_4_ = auVar50._12_4_ + *(float *)(lVar12 + 0x5c);
  param_2[0x25] = auVar51._8_8_;
  param_2[0x24] = auVar51._0_8_;
  fVar24 = auVar30._0_4_ + *(float *)(lVar12 + 0x50);
  fVar36 = auVar30._4_4_ + *(float *)(lVar12 + 0x54);
  auVar32._0_8_ = CONCAT44(fVar36,fVar24);
  auVar32._8_4_ = auVar30._8_4_ + *(float *)(lVar12 + 0x58);
  auVar32._12_4_ = auVar30._12_4_ + *(float *)(lVar12 + 0x5c);
  param_2[0x27] = auVar32._8_8_;
  param_2[0x26] = auVar32._0_8_;
  if (*(uint *)param_2[10] == uVar6) {
    pfVar20 = (float *)param_2[9];
    fVar24 = *pfVar20;
    fVar36 = pfVar20[1];
    fVar40 = pfVar20[2];
    fVar54 = pfVar20[3];
  }
  else {
    fVar24 = (fVar40 + fVar24) * 0.5;
    fVar36 = (fVar54 + fVar36) * 0.5;
    fVar40 = (auVar51._8_4_ + auVar32._8_4_) * 0.5;
    fVar54 = (auVar51._12_4_ + auVar32._12_4_) * 0.5;
  }
  param_2[0x21] = (long)pauVar19;
  lVar14 = param_2[0x2a];
  *(uint *)(param_2 + 0x20) = uVar6;
  *(float *)(param_2 + 0x23) = fVar40;
  *(float *)((long)param_2 + 0x11c) = fVar54;
  *(float *)(param_2 + 0x22) = fVar24;
  *(float *)((long)param_2 + 0x114) = fVar36;
  if (lVar14 == 0) {
    auVar49 = NEON_fmax(*(undefined1 (*) [16])(param_2 + 0x1c),auVar51,4);
    auVar29 = NEON_fmin(*(undefined1 (*) [16])(param_2 + 0x1e),auVar32,4);
    auVar71 = NEON_fmin(auVar49,auVar29,4);
    auVar29 = NEON_fmax(auVar49,auVar29,4);
    fVar38 = -3.40282e+38;
    fVar25 = -3.40282e+38;
    fVar37 = -3.40282e+38;
    fVar39 = -3.40282e+38;
    param_2[0x2f] = auVar71._8_8_;
    param_2[0x2e] = auVar71._0_8_;
    param_2[0x31] = auVar29._8_8_;
    param_2[0x30] = auVar29._0_8_;
    fVar40 = 3.40282e+38;
    fVar24 = 3.40282e+38;
    fVar36 = 3.40282e+38;
    fVar54 = 3.40282e+38;
  }
  else {
    fVar24 = (float)NEON_ucvtf((uint)*(ushort *)(lVar14 + 8));
    fVar36 = (float)NEON_ucvtf((uint)*(ushort *)(lVar14 + 10));
    fVar40 = (float)NEON_ucvtf((uint)*(ushort *)(lVar14 + 0xc));
    lVar14 = *(long *)(*(long *)(lVar12 + 0x20) + 0x38);
    bVar63 = *(byte *)(lVar12 + 0x40);
    auVar23._0_4_ = *(float *)(lVar14 + 0xa0) + *(float *)(lVar14 + 0x90) * fVar24;
    auVar23._4_4_ = *(float *)(lVar14 + 0xa4) + *(float *)(lVar14 + 0x94) * fVar36;
    auVar23._8_4_ = *(float *)(lVar14 + 0xa8) + *(float *)(lVar14 + 0x98) * fVar40;
    auVar23._12_4_ = *(float *)(lVar14 + 0xac) + *(float *)(lVar14 + 0x9c) * 0.0;
    if (CONCAT31(0,bVar63) != 0) {
      auVar58[4] = bVar63;
      auVar58._0_4_ = CONCAT31(0,bVar63);
      auVar58._5_3_ = 0;
      auVar58[8] = bVar63;
      auVar58._9_3_ = 0;
      auVar58[0xc] = bVar63;
      auVar58._13_3_ = 0;
      auVar61._8_8_ = _UNK_03cab238;
      auVar61._0_8_ = _DAT_03cab230;
      auVar73 = NEON_ushl(auVar61,auVar58,4);
      auVar33._8_8_ = _UNK_03cabbd8;
      auVar33._0_8_ = _DAT_03cabbd0;
      auVar68._8_8_ = _UNK_03cac2d8;
      auVar68._0_8_ = _DAT_03cac2d0;
      auVar52._8_8_ = _UNK_03cabbc8;
      auVar52._0_8_ = _DAT_03cabbc0;
      iVar9 = -(uint)bVar63;
      auVar29 = a64_TBL(ZEXT816(0),auVar23,auVar33);
      auVar71 = NEON_ushl(auVar68,auVar58,4);
      auVar49 = a64_TBL(ZEXT816(0),auVar23,auVar52);
      auVar62._0_4_ = -(uint)(-1 < auVar73._0_4_);
      auVar62._4_4_ = -(uint)(-1 < auVar73._4_4_);
      auVar62._8_4_ = -(uint)(-1 < auVar73._8_4_);
      auVar62._12_4_ = -(uint)(-1 < auVar73._12_4_);
      auVar23 = auVar23 ^ (auVar23 ^ auVar29) & ~auVar62;
      auVar34._0_4_ = -(uint)(-1 < auVar71._0_4_);
      auVar34._4_4_ = -(uint)(-1 < auVar71._4_4_);
      auVar34._8_4_ = -(uint)(-1 < auVar71._8_4_);
      auVar34._12_4_ = -(uint)(-1 < auVar71._12_4_);
      auVar29 = auVar23 ^ (auVar23 ^ auVar49) & ~auVar34;
      auVar35._4_4_ = iVar9;
      auVar35._0_4_ = iVar9;
      auVar35._8_4_ = iVar9;
      auVar35._12_4_ = iVar9;
      auVar53._8_8_ = _UNK_03cabec8;
      auVar53._0_8_ = _DAT_03cabec0;
      auVar49 = NEON_ushl(auVar53,auVar35,4);
      auVar23._0_3_ = auVar29._0_3_;
      auVar23[3] = (byte)((uint)(auVar49._0_4_ << 0x1f) >> 0x18) ^ auVar29[3];
      auVar23[4] = auVar29[4];
      auVar23[5] = auVar29[5];
      auVar23[6] = auVar29[6];
      auVar23[7] = (byte)((uint)(auVar49._4_4_ << 0x1f) >> 0x18) ^ auVar29[7];
      auVar23[8] = auVar29[8];
      auVar23[9] = auVar29[9];
      auVar23[10] = auVar29[10];
      auVar23[0xb] = (byte)((uint)(auVar49._8_4_ << 0x1f) >> 0x18) ^ auVar29[0xb];
      auVar23[0xc] = auVar29[0xc];
      auVar23[0xd] = auVar29[0xd];
      auVar23[0xe] = auVar29[0xe];
      auVar23[0xf] = (byte)((uint)(auVar49._12_4_ << 0x1f) >> 0x18) ^ auVar29[0xf];
    }
    fVar25 = auVar23._0_4_ + *(float *)(lVar12 + 0x50);
    fVar37 = auVar23._4_4_ + *(float *)(lVar12 + 0x54);
    fVar38 = auVar23._8_4_ + *(float *)(lVar12 + 0x58);
    fVar39 = auVar23._12_4_ + *(float *)(lVar12 + 0x5c);
    fVar24 = fVar25;
    fVar36 = fVar37;
    fVar40 = fVar38;
    fVar54 = fVar39;
  }
  *(float *)(param_2 + 0x33) = fVar40;
  *(float *)((long)param_2 + 0x19c) = fVar54;
  *(float *)(param_2 + 0x32) = fVar24;
  *(float *)((long)param_2 + 0x194) = fVar36;
  *(float *)(param_2 + 0x35) = fVar38;
  *(float *)((long)param_2 + 0x1ac) = fVar39;
  *(float *)(param_2 + 0x34) = fVar25;
  *(float *)((long)param_2 + 0x1a4) = fVar37;
  lVar12 = *param_1;
  *(undefined8 *)(lVar12 + 0x118) = uVar22;
  *(undefined8 *)(lVar12 + 0x110) = uVar21;
  uVar15 = (ulong)(uVar6 * -0x61c8864f >> 0x18);
  lVar12 = param_1[2];
  for (uVar7 = *(ushort *)(param_1[4] + uVar15 * 2); -1 < (short)uVar7;
      uVar7 = *(ushort *)(param_1[3] + (ulong)uVar7 * 2)) {
    if (*(uint *)(lVar12 + (ulong)uVar7 * 0x10 + 8) == uVar6) {
      puVar13 = (undefined8 *)(lVar12 + (ulong)uVar7 * 0x10);
      goto LAB_030cbd84;
    }
  }
  iVar9 = *(int *)((long)param_1 + 0x2c);
  *(int *)((long)param_1 + 0x2c) = iVar9 + 1;
  puVar13 = (undefined8 *)(lVar12 + (long)iVar9 * 0x10);
  *puVar13 = 0x7f7fffee7f7fffee;
  *(uint *)(puVar13 + 1) = uVar6;
  *(undefined4 *)((long)puVar13 + 0xc) = 0xffff;
  *(undefined2 *)(param_1[3] + (long)(short)iVar9 * 2) = *(undefined2 *)(param_1[4] + uVar15 * 2);
  *(short *)(param_1[4] + uVar15 * 2) = (short)iVar9;
LAB_030cbd84:
  *(undefined4 *)puVar13 = 0;
  lVar12 = param_1[0x10];
  fVar24 = *(float *)(lVar12 + 0x110) - (float)param_1[0x12];
  fVar36 = *(float *)(lVar12 + 0x114) - (float)((ulong)param_1[0x12] >> 0x20);
  fVar40 = *(float *)(lVar12 + 0x118) - (float)param_1[0x13];
  fVar24 = fVar24 * fVar24;
  fVar36 = fVar36 * fVar36;
  fVar40 = fVar40 * fVar40;
  uVar21 = CONCAT44(SQRT(fVar24 + fVar36 + fVar40),SQRT(fVar24 + fVar36 + fVar40));
  if (1 < (int)*(uint *)(param_1 + 0x11)) {
    lVar14 = (ulong)*(uint *)(param_1 + 0x11) - 1;
    pfVar20 = (float *)(param_1 + 0x16);
    do {
      lVar14 = lVar14 + -1;
      fVar24 = *(float *)(lVar12 + 0x110) - *pfVar20;
      fVar36 = *(float *)(lVar12 + 0x114) - pfVar20[1];
      fVar40 = *(float *)(lVar12 + 0x118) - pfVar20[2];
      fVar24 = fVar24 * fVar24;
      fVar36 = fVar36 * fVar36;
      fVar40 = fVar40 * fVar40;
      uVar21 = NEON_fmin(uVar21,CONCAT44(SQRT(fVar24 + fVar36 + fVar40),
                                         SQRT(fVar24 + fVar36 + fVar40)),4);
      pfVar20 = pfVar20 + 8;
    } while (lVar14 != 0);
  }
  fVar24 = (float)uVar21;
  *(float *)((long)puVar13 + 4) = fVar24;
  *(ushort *)((long)puVar13 + 0xe) = *(ushort *)((long)puVar13 + 0xe) | 5;
  if (fVar24 < *(float *)((long)param_1 + 0x44)) {
    *(float *)((long)param_1 + 0x44) = fVar24;
    *(uint *)(param_1 + 8) = uVar6;
    fVar24 = *(float *)((long)puVar13 + 4);
  }
  if (fVar24 < 3.40282e+38) {
    uVar7 = *(ushort *)(param_1[4] + uVar15 * 2);
    if (-1 < (short)uVar7) {
      do {
        if (*(uint *)(param_1[2] + (ulong)uVar7 * 0x10 + 8) == uVar6) {
          pfVar20 = (float *)(param_1[2] + (ulong)uVar7 * 0x10);
          goto LAB_030cbe60;
        }
        uVar7 = *(ushort *)(param_1[3] + (ulong)uVar7 * 2);
      } while (-1 < (short)uVar7);
    }
    pfVar20 = (float *)(param_1 + 6);
LAB_030cbe60:
    fVar24 = *(float *)((long)param_1 + 0x4c);
    fVar36 = *pfVar20;
    fVar40 = pfVar20[1];
    uVar17 = *(uint *)(param_1 + 0xf);
    puVar2 = (uint *)(param_1[0xe] + (long)(int)uVar17 * 8);
    *(uint *)(param_1 + 0xf) = uVar17 + 1;
    *puVar2 = uVar6;
    puVar2[1] = (uint)(fVar36 + fVar24 * fVar40);
    lVar12 = param_1[0xe];
    puVar3 = (undefined4 *)(lVar12 + (long)(int)uVar17 * 8);
    uVar4 = *puVar3;
    iVar9 = puVar3[1];
    if ((int)uVar17 < 1) {
LAB_030cbedc:
      uVar15 = (ulong)(int)uVar17;
    }
    else {
      do {
        uVar6 = uVar17;
        if (-1 < (int)(uVar17 - 1)) {
          uVar6 = uVar17 - 1;
        }
        uVar15 = (ulong)(uint)((int)uVar6 >> 1);
        if (*(int *)(lVar12 + uVar15 * 8 + 4) <= iVar9) goto LAB_030cbedc;
        *(undefined8 *)(lVar12 + (ulong)uVar17 * 8) = *(undefined8 *)(lVar12 + uVar15 * 8);
        lVar12 = param_1[0xe];
        bVar1 = 2 < (int)uVar17;
        uVar17 = (int)uVar6 >> 1;
      } while (bVar1);
    }
    *(undefined4 *)(lVar12 + uVar15 * 8) = uVar4;
    *(int *)(param_1[0xe] + uVar15 * 8 + 4) = iVar9;
  }
  if (0 < (int)uVar5) {
    uVar15 = 0;
    do {
      iVar9 = puVar10[uVar15];
      if (iVar9 != -1) {
        uVar18 = (ulong)((uint)(iVar9 * -0x61c8864f) >> 0x18);
        lVar12 = param_1[2];
        for (uVar7 = *(ushort *)(param_1[4] + uVar18 * 2); -1 < (short)uVar7;
            uVar7 = *(ushort *)(param_1[3] + (ulong)uVar7 * 2)) {
          if (*(int *)(lVar12 + (ulong)uVar7 * 0x10 + 8) == iVar9) {
            puVar13 = (undefined8 *)(lVar12 + (ulong)uVar7 * 0x10);
            goto LAB_030cbf8c;
          }
        }
        iVar8 = *(int *)((long)param_1 + 0x2c);
        puVar13 = (undefined8 *)(lVar12 + (long)iVar8 * 0x10);
        *(int *)((long)param_1 + 0x2c) = iVar8 + 1;
        *puVar13 = 0x7f7fffee7f7fffee;
        *(int *)(puVar13 + 1) = iVar9;
        *(undefined4 *)((long)puVar13 + 0xc) = 0xffff;
        *(undefined2 *)(param_1[3] + (long)(short)iVar8 * 2) =
             *(undefined2 *)(param_1[4] + uVar18 * 2);
        *(short *)(param_1[4] + uVar18 * 2) = (short)iVar8;
LAB_030cbf8c:
        *(undefined4 *)((long)puVar13 + 4) = 0;
        *(ushort *)((long)puVar13 + 0xe) = *(ushort *)((long)puVar13 + 0xe) | 8;
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar5);
  }
  param_1[0x22] = (long)(param_1 + 2);
  param_1[0x23] = *param_1;
  return;
}


