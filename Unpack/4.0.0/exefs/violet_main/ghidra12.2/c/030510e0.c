/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030510e0; name: FUN_030510e0
 */


/* WARNING: Removing unreachable block (ram,0x03051ea8) */
/* WARNING: Removing unreachable block (ram,0x03051914) */
/* WARNING: Removing unreachable block (ram,0x03051b88) */
/* WARNING: Removing unreachable block (ram,0x03051fe4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030510e0(float *param_1,long param_2,long param_3,float *param_4)

{
  undefined1 (*pauVar1) [12];
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  bool bVar5;
  ulong uVar6;
  bool bVar7;
  float *pfVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar17;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar26;
  float fVar27;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar28;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar29 [16];
  float fVar33;
  float fVar34;
  undefined8 uVar36;
  float fVar41;
  undefined1 auVar37 [16];
  float fVar35;
  float fVar39;
  float fVar40;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auVar38 [16];
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 auVar51 [16];
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined1 auVar55 [16];
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar66;
  undefined8 uVar65;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  float local_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float local_140 [2];
  undefined8 uStack_138;
  float local_130 [2];
  undefined8 uStack_128;
  float local_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float local_110 [2];
  undefined8 uStack_108;
  float local_100 [2];
  undefined8 uStack_f8;
  float local_f0 [56];
  
  auVar15._8_4_ = 0x28800000;
  auVar15._0_8_ = 0x2880000028800000;
  auVar15._12_4_ = 0x28800000;
  uVar12 = NEON_fmov(0x3f800000,4);
  lVar4 = 0;
  bVar5 = true;
  do {
    bVar7 = bVar5;
    pfVar8 = (float *)(param_3 + lVar4 * 0x60);
    auVar24 = *(undefined1 (*) [16])(pfVar8 + 8);
    fVar61 = *(float *)(param_3 + 0x140);
    fVar63 = *(float *)(param_3 + 0x144);
    fVar11 = *(float *)(param_3 + 0x148);
    fVar50 = *(float *)(param_3 + 0x14c);
    fVar28 = *pfVar8;
    fVar30 = pfVar8[1];
    fVar32 = pfVar8[2];
    fVar33 = pfVar8[3];
    lVar10 = *(long *)(pfVar8 + 0xc);
    *(long *)(local_140 + lVar4 * 0x28 + -2) = auVar24._8_8_;
    *(long *)(local_140 + lVar4 * 0x28 + -4) = auVar24._0_8_;
    auVar29._0_4_ = fVar28 - fVar61;
    auVar29._4_4_ = fVar30 - fVar63;
    auVar29._8_4_ = fVar32 - fVar11;
    auVar29._12_4_ = fVar33 - fVar50;
    auVar37 = NEON_ext(auVar24,auVar24,8,1);
    uVar36 = NEON_ext(auVar24._0_8_,auVar37._0_8_,4,1);
    auVar55 = NEON_ext(auVar29,auVar29,4,1);
    fVar61 = *(float *)(param_3 + 0x100);
    fVar63 = *(float *)(param_3 + 0x104);
    fVar11 = *(float *)(param_3 + 0x108);
    fVar50 = *(float *)(param_3 + 0x10c);
    auVar23._0_4_ = auVar29._0_4_ - *(float *)(lVar10 + 0x70);
    auVar23._4_4_ = auVar29._4_4_ - *(float *)(lVar10 + 0x74);
    auVar23._8_4_ = auVar29._8_4_ - *(float *)(lVar10 + 0x78);
    auVar23._12_4_ = auVar29._12_4_ - *(float *)(lVar10 + 0x7c);
    auVar37 = NEON_ext(auVar23,auVar23,4,1);
    fVar26 = (float)((ulong)uVar36 >> 0x20);
    fVar41 = auVar24._0_4_;
    fVar44 = auVar24._4_4_;
    fVar17 = auVar24._8_4_;
    fVar34 = auVar29._0_4_ * (float)uVar36 - fVar41 * auVar55._0_4_;
    fVar39 = auVar29._4_4_ * fVar26 - fVar44 * auVar55._4_4_;
    fVar42 = auVar29._8_4_ * fVar41 - fVar17 * auVar29._0_4_;
    fVar28 = *(float *)(param_3 + 0x120);
    fVar30 = *(float *)(param_3 + 0x124);
    fVar32 = *(float *)(param_3 + 0x128);
    fVar33 = *(float *)(param_3 + 300);
    fVar59 = *(float *)(param_3 + 0x130);
    fVar52 = *(float *)(param_3 + 0x134);
    fVar54 = *(float *)(param_3 + 0x138);
    fVar57 = *(float *)(param_3 + 0x13c);
    fVar60 = (float)*(undefined8 *)(param_3 + 0x110);
    fVar62 = (float)((ulong)*(undefined8 *)(param_3 + 0x110) >> 0x20);
    fVar64 = (float)*(undefined8 *)(param_3 + 0x118);
    fVar66 = (float)((ulong)*(undefined8 *)(param_3 + 0x118) >> 0x20);
    fVar22 = fVar41 * auVar37._0_4_ - (float)uVar36 * auVar23._0_4_;
    fVar26 = fVar44 * auVar37._4_4_ - fVar26 * auVar23._4_4_;
    fVar27 = fVar17 * auVar23._0_4_ - fVar41 * auVar23._8_4_;
    fVar35 = fVar59 * fVar34 + fVar60 * fVar39 + fVar28 * fVar42;
    fVar40 = fVar52 * fVar34 + fVar62 * fVar39 + fVar30 * fVar42;
    fVar43 = fVar54 * fVar34 + fVar64 * fVar39 + fVar32 * fVar42;
    fVar45 = fVar57 * fVar34 + fVar66 * fVar39 + fVar33 * fVar42;
    fVar31 = (float)*(undefined8 *)(lVar10 + 0x30);
    auVar72._0_4_ = fVar61 + fVar31;
    fVar46 = (float)((ulong)*(undefined8 *)(lVar10 + 0x30) >> 0x20);
    auVar72._4_4_ = fVar63 + fVar46;
    fVar47 = (float)*(undefined8 *)(lVar10 + 0x38);
    auVar72._8_4_ = fVar11 + fVar47;
    fVar48 = (float)((ulong)*(undefined8 *)(lVar10 + 0x38) >> 0x20);
    auVar72._12_4_ = fVar50 + fVar48;
    fVar34 = (float)*(undefined8 *)(lVar10 + 0x60) * fVar22 +
             *(float *)(lVar10 + 0x40) * fVar26 + (float)*(undefined8 *)(lVar10 + 0x50) * fVar27;
    fVar39 = (float)((ulong)*(undefined8 *)(lVar10 + 0x60) >> 0x20) * fVar22 +
             *(float *)(lVar10 + 0x44) * fVar26 +
             (float)((ulong)*(undefined8 *)(lVar10 + 0x50) >> 0x20) * fVar27;
    fVar42 = (float)*(undefined8 *)(lVar10 + 0x68) * fVar22 +
             *(float *)(lVar10 + 0x48) * fVar26 + (float)*(undefined8 *)(lVar10 + 0x58) * fVar27;
    fVar22 = (float)((ulong)*(undefined8 *)(lVar10 + 0x68) >> 0x20) * fVar22 +
             *(float *)(lVar10 + 0x4c) * fVar26 +
             (float)((ulong)*(undefined8 *)(lVar10 + 0x58) >> 0x20) * fVar27;
    fVar26 = fVar61 * fVar35 * fVar35 + fVar31 * fVar34 * fVar34;
    fVar27 = fVar63 * fVar40 * fVar40 + fVar46 * fVar39 * fVar39;
    auVar37 = NEON_fmax(auVar72,auVar15,4);
    auVar73._12_4_ = fVar50 * fVar45 * fVar45 + fVar48 * fVar22 * fVar22;
    auVar73._8_4_ = fVar11 * fVar43 * fVar43 + fVar47 * fVar42 * fVar42;
    auVar73._4_4_ = fVar27;
    auVar73._0_4_ = fVar26;
    auVar74._0_12_ = auVar73._0_12_;
    auVar74._12_4_ = auVar37._12_4_;
    auVar37 = NEON_ext(auVar74,auVar74,8,1);
    fVar22 = fVar26 + fVar27 + auVar37._0_4_ + auVar37._4_4_;
    fVar26 = (float)uVar12;
    local_140[lVar4 * 0x28 + 2] = fVar43;
    local_130[lVar4 * 0x28 + -1] = fVar26 / fVar22;
    local_140[lVar4 * 0x28] = fVar35;
    local_140[lVar4 * 0x28 + 1] = fVar40;
    local_130[lVar4 * 0x28 + 2] = fVar42;
    local_130[lVar4 * 0x28 + 3] = fVar22;
    local_130[lVar4 * 0x28] = fVar34;
    local_130[lVar4 * 0x28 + 1] = fVar39;
    fVar27 = local_130[lVar4 * 0x28 + 3] + *(float *)(param_2 + lVar4 * 100 + 0x6c);
    local_f0[lVar4 * 0x28 + 6] = 1.0 / fVar27;
    local_f0[lVar4 * 0x28 + 7] = fVar27;
    pauVar1 = (undefined1 (*) [12])(pfVar8 + 4);
    uVar65 = *(undefined8 *)(pfVar8 + 6);
    fVar48 = (float)uVar65;
    fVar49 = (float)((ulong)uVar65 >> 0x20);
    uVar36 = *(undefined8 *)*pauVar1;
    fVar46 = (float)uVar36;
    fVar47 = (float)((ulong)uVar36 >> 0x20);
    auVar37._12_4_ = fVar49;
    auVar37._0_12_ = *pauVar1;
    auVar38._12_4_ = fVar49;
    auVar38._0_12_ = *pauVar1;
    auVar37 = NEON_ext(auVar37,auVar38,8,1);
    *(undefined8 *)(local_110 + lVar4 * 0x28 + -2) = uVar65;
    *(undefined8 *)(local_110 + lVar4 * 0x28 + -4) = uVar36;
    auVar70._0_4_ = auVar29._0_4_ - *(float *)(lVar10 + 0x70);
    auVar70._4_4_ = auVar29._4_4_ - *(float *)(lVar10 + 0x74);
    auVar70._8_4_ = auVar29._8_4_ - *(float *)(lVar10 + 0x78);
    auVar70._12_4_ = auVar29._12_4_ - *(float *)(lVar10 + 0x7c);
    uVar36 = NEON_ext(uVar36,auVar37._0_8_,4,1);
    auVar37 = NEON_ext(auVar70,auVar70,4,1);
    fVar56 = (float)((ulong)uVar36 >> 0x20);
    fVar27 = auVar29._0_4_ * (float)uVar36 - auVar55._0_4_ * fVar46;
    fVar45 = auVar29._4_4_ * fVar56 - auVar55._4_4_ * fVar47;
    fVar31 = auVar29._8_4_ * fVar46 - auVar29._0_4_ * fVar48;
    fVar53 = fVar46 * auVar37._0_4_ - (float)uVar36 * auVar70._0_4_;
    fVar56 = fVar47 * auVar37._4_4_ - fVar56 * auVar70._4_4_;
    fVar58 = fVar48 * auVar70._0_4_ - fVar46 * auVar70._8_4_;
    fVar28 = fVar59 * fVar27 + fVar60 * fVar45 + fVar28 * fVar31;
    fVar30 = fVar52 * fVar27 + fVar62 * fVar45 + fVar30 * fVar31;
    fVar32 = fVar54 * fVar27 + fVar64 * fVar45 + fVar32 * fVar31;
    fVar33 = fVar57 * fVar27 + fVar66 * fVar45 + fVar33 * fVar31;
    fVar54 = *(float *)(lVar10 + 0x60) * fVar53 +
             *(float *)(lVar10 + 0x40) * fVar56 + *(float *)(lVar10 + 0x50) * fVar58;
    fVar57 = *(float *)(lVar10 + 100) * fVar53 +
             *(float *)(lVar10 + 0x44) * fVar56 + *(float *)(lVar10 + 0x54) * fVar58;
    fVar27 = *(float *)(lVar10 + 0x68) * fVar53 +
             *(float *)(lVar10 + 0x48) * fVar56 + *(float *)(lVar10 + 0x58) * fVar58;
    fVar59 = *(float *)(lVar10 + 0x6c) * fVar53 +
             *(float *)(lVar10 + 0x4c) * fVar56 + *(float *)(lVar10 + 0x5c) * fVar58;
    auVar51._0_4_ = fVar61 + *(float *)(lVar10 + 0x30);
    auVar51._4_4_ = fVar63 + *(float *)(lVar10 + 0x34);
    auVar51._8_4_ = fVar11 + *(float *)(lVar10 + 0x38);
    auVar51._12_4_ = fVar50 + *(float *)(lVar10 + 0x3c);
    auVar37 = NEON_fmax(auVar51,auVar15,4);
    fVar61 = fVar61 * fVar28 * fVar28 + *(float *)(lVar10 + 0x30) * fVar54 * fVar54;
    fVar63 = fVar63 * fVar30 * fVar30 + *(float *)(lVar10 + 0x34) * fVar57 * fVar57;
    auVar67._4_4_ = fVar63;
    auVar67._0_4_ = fVar61;
    auVar67._12_4_ = fVar50 * fVar33 * fVar33 + *(float *)(lVar10 + 0x3c) * fVar59 * fVar59;
    auVar67._8_4_ = fVar11 * fVar32 * fVar32 + *(float *)(lVar10 + 0x38) * fVar27 * fVar27;
    auVar68._0_12_ = auVar67._0_12_;
    auVar68._12_4_ = auVar37._12_4_;
    auVar37 = NEON_ext(auVar68,auVar68,8,1);
    fVar11 = fVar61 + fVar63 + auVar37._0_4_ + auVar37._4_4_;
    local_110[lVar4 * 0x28 + 2] = fVar32;
    local_100[lVar4 * 0x28 + -1] = fVar26 / fVar11;
    local_110[lVar4 * 0x28] = fVar28;
    local_110[lVar4 * 0x28 + 1] = fVar30;
    local_100[lVar4 * 0x28 + 2] = fVar27;
    local_f0[lVar4 * 0x28 + -1] = fVar11;
    local_100[lVar4 * 0x28] = fVar54;
    local_100[lVar4 * 0x28 + 1] = fVar57;
    local_f0[lVar4 * 0x28 + 4] = local_100[lVar4 * 0x28 + -1];
    local_f0[lVar4 * 0x28 + 5] = local_f0[lVar4 * 0x28 + -1];
    fVar63 = local_f0[0x2d];
    fVar61 = local_f0[5];
    lVar10 = *(long *)(pfVar8 + 0xe);
    fVar45 = (float)*(undefined8 *)(param_3 + 0x170);
    fVar53 = (float)((ulong)*(undefined8 *)(param_3 + 0x170) >> 0x20);
    fVar58 = (float)*(undefined8 *)(param_3 + 0x178);
    fVar62 = (float)((ulong)*(undefined8 *)(param_3 + 0x178) >> 0x20);
    fVar31 = (float)*(undefined8 *)(lVar10 + 0x20);
    fVar56 = (float)((ulong)*(undefined8 *)(lVar10 + 0x20) >> 0x20);
    fVar60 = (float)*(undefined8 *)(lVar10 + 0x28);
    fVar64 = (float)((ulong)*(undefined8 *)(lVar10 + 0x28) >> 0x20);
    fVar50 = *(float *)(param_3 + 0x160) - *(float *)(lVar10 + 0x10);
    fVar33 = *(float *)(param_3 + 0x164) - *(float *)(lVar10 + 0x14);
    fVar59 = *(float *)(param_3 + 0x168) - *(float *)(lVar10 + 0x18);
    fVar52 = *(float *)(param_3 + 0x16c) - *(float *)(lVar10 + 0x1c);
    auVar55._0_4_ = fVar41 * fVar50 + fVar35 * fVar45 + fVar34 * fVar31;
    auVar55._4_4_ = fVar44 * fVar33 + fVar40 * fVar53 + fVar39 * fVar56;
    auVar55._8_4_ = fVar17 * fVar59 + fVar43 * fVar58 + fVar42 * fVar60;
    auVar55._12_4_ = auVar24._12_4_ * fVar52 + (fVar26 / fVar22) * fVar62 + fVar22 * fVar64;
    auVar38 = NEON_ext(auVar55,auVar55,8,1);
    auVar24._0_4_ = fVar46 * fVar50 + fVar28 * fVar45 + fVar54 * fVar31;
    auVar24._4_4_ = fVar47 * fVar33 + fVar30 * fVar53 + fVar57 * fVar56;
    auVar24._8_4_ = fVar48 * fVar59 + fVar32 * fVar58 + fVar27 * fVar60;
    auVar24._12_4_ = fVar49 * fVar52 + (fVar26 / fVar11) * fVar62 + fVar11 * fVar64;
    auVar37 = NEON_ext(auVar24,auVar24,8,1);
    param_4[lVar4 * 9 + 5] = param_4[lVar4 * 9 + 5] + auVar24._0_4_ + auVar24._4_4_ + auVar37._0_4_;
    param_4[lVar4 * 9 + 6] = param_4[lVar4 * 9 + 6] + auVar55._0_4_ + auVar55._4_4_ + auVar38._0_4_;
    lVar4 = 1;
    bVar5 = false;
  } while (bVar7);
  lVar4 = *(long *)(param_3 + 0x30);
  fVar11 = local_120 * local_f0[0x1c];
  fVar50 = fStack_11c * local_f0[0x1d];
  fVar28 = fStack_118 * local_f0[0x1e];
  fVar30 = fStack_114 * local_f0[0x1f];
  if (lVar4 == *(long *)(param_3 + 0x90)) {
    fVar32 = *(float *)(param_3 + 0x100);
    fVar33 = *(float *)(param_3 + 0x104);
    fVar59 = *(float *)(param_3 + 0x108);
    fVar52 = *(float *)(param_3 + 0x10c);
    fVar17 = (float)((ulong)*(undefined8 *)(lVar4 + 0x38) >> 0x20);
    fVar11 = fVar11 * fVar52 + fVar11 * fVar17;
    fVar50 = fVar50 * fVar52 + fVar50 * fVar17;
    fVar28 = fVar28 * fVar52 + fVar28 * fVar17;
    fVar30 = fVar30 * fVar52 + fVar30 * fVar17;
    fVar54 = local_110[0] * local_f0[0x20] * fVar32 +
             local_100[0] * local_f0[0x24] * (float)*(undefined8 *)(lVar4 + 0x30);
    fVar57 = local_110[1] * local_f0[0x21] * fVar33 +
             local_100[1] * local_f0[0x25] * (float)((ulong)*(undefined8 *)(lVar4 + 0x30) >> 0x20);
    fVar22 = (float)uStack_108 * local_f0[0x22] * fVar59 +
             (float)uStack_f8 * local_f0[0x26] * (float)*(undefined8 *)(lVar4 + 0x38);
    fVar17 = uStack_108._4_4_ * local_f0[0x23] * fVar52 + uStack_f8._4_4_ * local_f0[0x27] * fVar17;
  }
  else {
    fVar32 = *(float *)(param_3 + 0x100);
    fVar33 = *(float *)(param_3 + 0x104);
    fVar59 = *(float *)(param_3 + 0x108);
    fVar52 = *(float *)(param_3 + 0x10c);
    fVar11 = fVar11 * fVar52;
    fVar50 = fVar50 * fVar52;
    fVar28 = fVar28 * fVar52;
    fVar30 = fVar30 * fVar52;
    fVar54 = local_110[0] * local_f0[0x20] * fVar32;
    fVar57 = local_110[1] * local_f0[0x21] * fVar33;
    fVar22 = (float)uStack_108 * local_f0[0x22] * fVar59;
    fVar17 = uStack_108._4_4_ * local_f0[0x23] * fVar52;
  }
  auVar18._0_4_ = fVar54 + fVar11;
  auVar18._4_4_ = fVar57 + fVar50;
  auVar18._8_4_ = fVar22 + fVar28;
  auVar18._12_4_ = fVar17 + fVar30;
  auVar15 = NEON_ext(auVar18,auVar18,8,1);
  fVar50 = auVar18._0_4_ + auVar18._4_4_ + auVar15._0_4_;
  fVar11 = param_4[4];
  if (fVar11 != 0.0) {
    fVar28 = *(float *)(lVar4 + 0x30);
    fVar30 = *(float *)(lVar4 + 0x34);
    fVar54 = *(float *)(lVar4 + 0x38);
    fVar22 = fVar52 * fVar11;
    fVar57 = *(float *)(lVar4 + 0x3c) * fVar11;
    uVar65 = *(undefined8 *)(param_3 + 0xe8);
    uVar36 = *(undefined8 *)(param_3 + 0xe0);
    *(float *)(param_3 + 0xe8) = (float)uVar65 + fStack_148 * fVar22;
    *(float *)(param_3 + 0xec) = (float)((ulong)uVar65 >> 0x20) + fStack_144 * fVar22;
    *(float *)(param_3 + 0xe0) = (float)uVar36 + local_150 * fVar22;
    *(float *)(param_3 + 0xe4) = (float)((ulong)uVar36 >> 0x20) + fStack_14c * fVar22;
    *(float *)(lVar4 + 0x18) = *(float *)(lVar4 + 0x18) - fStack_148 * fVar57;
    *(float *)(lVar4 + 0x1c) = *(float *)(lVar4 + 0x1c) - fStack_144 * fVar57;
    *(float *)(lVar4 + 0x10) = *(float *)(lVar4 + 0x10) - local_150 * fVar57;
    *(float *)(lVar4 + 0x14) = *(float *)(lVar4 + 0x14) - fStack_14c * fVar57;
    *(ulong *)(param_3 + 0xf8) =
         CONCAT44(fVar22 * uStack_138._4_4_ + *(float *)(param_3 + 0xfc),
                  fVar59 * fVar11 * (float)uStack_138 + *(float *)(param_3 + 0xf8));
    *(ulong *)(param_3 + 0xf0) =
         CONCAT44(fVar33 * fVar11 * local_140[1] + *(float *)(param_3 + 0xf4),
                  fVar32 * fVar11 * local_140[0] + *(float *)(param_3 + 0xf0));
    uVar65 = *(undefined8 *)(lVar4 + 0x28);
    uVar36 = *(undefined8 *)(lVar4 + 0x20);
    *(float *)(lVar4 + 0x28) = fVar54 * fVar11 * (float)uStack_128 + (float)uVar65;
    *(float *)(lVar4 + 0x2c) = fVar57 * uStack_128._4_4_ + (float)((ulong)uVar65 >> 0x20);
    *(float *)(lVar4 + 0x20) = fVar28 * fVar11 * local_130[0] + (float)uVar36;
    *(float *)(lVar4 + 0x24) = fVar30 * fVar11 * local_130[1] + (float)((ulong)uVar36 >> 0x20);
  }
  auVar16._4_4_ = fVar50;
  auVar16._0_4_ = local_f0[5];
  fVar11 = param_4[0xd];
  if (fVar11 != 0.0) {
    lVar4 = *(long *)(param_3 + 0x90);
    fVar52 = fVar52 * fVar11;
    fVar28 = *(float *)(lVar4 + 0x30);
    fVar30 = *(float *)(lVar4 + 0x34);
    fVar54 = *(float *)(lVar4 + 0x38);
    fVar57 = *(float *)(lVar4 + 0x3c) * fVar11;
    uVar65 = *(undefined8 *)(param_3 + 0xe8);
    uVar36 = *(undefined8 *)(param_3 + 0xe0);
    *(float *)(param_3 + 0xe8) = (float)uVar65 + local_f0[0x12] * fVar52;
    *(float *)(param_3 + 0xec) = (float)((ulong)uVar65 >> 0x20) + local_f0[0x13] * fVar52;
    *(float *)(param_3 + 0xe0) = (float)uVar36 + local_f0[0x10] * fVar52;
    *(float *)(param_3 + 0xe4) = (float)((ulong)uVar36 >> 0x20) + local_f0[0x11] * fVar52;
    *(float *)(lVar4 + 0x18) = *(float *)(lVar4 + 0x18) - local_f0[0x12] * fVar57;
    *(float *)(lVar4 + 0x1c) = *(float *)(lVar4 + 0x1c) - local_f0[0x13] * fVar57;
    *(float *)(lVar4 + 0x10) = *(float *)(lVar4 + 0x10) - local_f0[0x10] * fVar57;
    *(float *)(lVar4 + 0x14) = *(float *)(lVar4 + 0x14) - local_f0[0x11] * fVar57;
    *(float *)(param_3 + 0xf8) = fVar59 * fVar11 * local_f0[0x16] + *(float *)(param_3 + 0xf8);
    *(float *)(param_3 + 0xfc) = fVar52 * local_f0[0x17] + *(float *)(param_3 + 0xfc);
    *(float *)(param_3 + 0xf0) = fVar32 * fVar11 * local_f0[0x14] + *(float *)(param_3 + 0xf0);
    *(float *)(param_3 + 0xf4) = fVar33 * fVar11 * local_f0[0x15] + *(float *)(param_3 + 0xf4);
    *(float *)(lVar4 + 0x28) = fVar54 * fVar11 * local_f0[0x1a] + *(float *)(lVar4 + 0x28);
    *(float *)(lVar4 + 0x2c) = fVar57 * local_f0[0x1b] + *(float *)(lVar4 + 0x2c);
    *(float *)(lVar4 + 0x20) = fVar28 * fVar11 * local_f0[0x18] + *(float *)(lVar4 + 0x20);
    *(float *)(lVar4 + 0x24) = fVar30 * fVar11 * local_f0[0x19] + *(float *)(lVar4 + 0x24);
  }
  lVar4 = 0;
  bVar5 = true;
  fVar11 = *(float *)(param_3 + 0x4c) + *(float *)(param_3 + 0xac);
  fVar28 = *(float *)(param_3 + 0x4c) * *(float *)(param_2 + 0x7c) +
           fVar11 * *(float *)(param_2 + 0x80);
  local_f0[3] = fVar28;
  local_f0[0x2b] =
       *(float *)(param_3 + 0xac) * *(float *)(param_2 + 0xe0) + fVar11 * *(float *)(param_2 + 0xe4)
  ;
  param_4[2] = 0.0;
  param_4[0xb] = 0.0;
  fVar11 = *param_1;
  while( true ) {
    lVar10 = param_3 + lVar4 * 0x60;
    lVar9 = *(long *)(lVar10 + 0x30);
    uVar65 = *(undefined8 *)(local_110 + lVar4 * 0x28 + -2);
    uVar36 = *(undefined8 *)(local_110 + lVar4 * 0x28 + -4);
    fVar30 = *(float *)(param_3 + 0xe0);
    fVar32 = *(float *)(param_3 + 0xe4);
    fVar33 = *(float *)(param_3 + 0xe8);
    fVar59 = *(float *)(param_3 + 0xec);
    fVar52 = *(float *)(param_3 + 0xf0);
    fVar54 = *(float *)(param_3 + 0xf4);
    fVar57 = *(float *)(param_3 + 0xf8);
    fVar22 = *(float *)(param_3 + 0xfc);
    auVar71._0_4_ =
         fVar52 * (float)*(undefined8 *)(local_140 + lVar4 * 0x28) +
         *(float *)(lVar9 + 0x20) * (float)*(undefined8 *)(local_130 + lVar4 * 0x28) +
         (fVar30 - *(float *)(lVar9 + 0x10)) * (float)*(undefined8 *)(local_140 + lVar4 * 0x28 + -4)
    ;
    auVar71._4_4_ =
         fVar54 * (float)((ulong)*(undefined8 *)(local_140 + lVar4 * 0x28) >> 0x20) +
         *(float *)(lVar9 + 0x24) *
         (float)((ulong)*(undefined8 *)(local_130 + lVar4 * 0x28) >> 0x20) +
         (fVar32 - *(float *)(lVar9 + 0x14)) *
         (float)((ulong)*(undefined8 *)(local_140 + lVar4 * 0x28 + -4) >> 0x20);
    auVar71._8_4_ =
         fVar57 * (float)*(undefined8 *)(local_140 + lVar4 * 0x28 + 2) +
         *(float *)(lVar9 + 0x28) * (float)*(undefined8 *)(local_130 + lVar4 * 0x28 + 2) +
         (fVar33 - *(float *)(lVar9 + 0x18)) * (float)*(undefined8 *)(local_140 + lVar4 * 0x28 + -2)
    ;
    auVar71._12_4_ =
         fVar22 * (float)((ulong)*(undefined8 *)(local_140 + lVar4 * 0x28 + 2) >> 0x20) +
         *(float *)(lVar9 + 0x2c) *
         (float)((ulong)*(undefined8 *)(local_130 + lVar4 * 0x28 + 2) >> 0x20) +
         (fVar59 - *(float *)(lVar9 + 0x1c)) *
         (float)((ulong)*(undefined8 *)(local_140 + lVar4 * 0x28 + -2) >> 0x20);
    auVar15 = NEON_ext(auVar71,auVar71,8,1);
    fVar17 = auVar71._0_4_ + auVar71._4_4_ + auVar15._0_4_;
    local_f0[lVar4 * 0x28] = fVar17;
    auVar69._0_4_ =
         fVar52 * (float)*(undefined8 *)(local_110 + lVar4 * 0x28) +
         *(float *)(lVar9 + 0x20) * (float)*(undefined8 *)(local_100 + lVar4 * 0x28) +
         (fVar30 - *(float *)(lVar9 + 0x10)) * (float)uVar36;
    auVar69._4_4_ =
         fVar54 * (float)((ulong)*(undefined8 *)(local_110 + lVar4 * 0x28) >> 0x20) +
         *(float *)(lVar9 + 0x24) *
         (float)((ulong)*(undefined8 *)(local_100 + lVar4 * 0x28) >> 0x20) +
         (fVar32 - *(float *)(lVar9 + 0x14)) * (float)((ulong)uVar36 >> 0x20);
    auVar69._8_4_ =
         fVar57 * (float)*(undefined8 *)(local_110 + lVar4 * 0x28 + 2) +
         *(float *)(lVar9 + 0x28) * (float)*(undefined8 *)(local_100 + lVar4 * 0x28 + 2) +
         (fVar33 - *(float *)(lVar9 + 0x18)) * (float)uVar65;
    auVar69._12_4_ =
         fVar22 * (float)((ulong)*(undefined8 *)(local_110 + lVar4 * 0x28 + 2) >> 0x20) +
         *(float *)(lVar9 + 0x2c) *
         (float)((ulong)*(undefined8 *)(local_100 + lVar4 * 0x28 + 2) >> 0x20) +
         (fVar59 - *(float *)(lVar9 + 0x1c)) * (float)((ulong)uVar65 >> 0x20);
    auVar15 = NEON_ext(auVar69,auVar69,8,1);
    fVar30 = param_4[lVar4 * 9 + 5] * 0.25 + auVar69._0_4_ + auVar69._4_4_ + auVar15._0_4_;
    local_f0[lVar4 * 0x28 + 2] = fVar30;
    if (*(char *)(lVar10 + 0x58) == '\0') {
      fVar52 = param_4[lVar4 * 9];
      lVar10 = param_3 + lVar4 * 0x60;
      fVar32 = *(float *)(lVar10 + 0x50);
      (param_4 + lVar4 * 9)[6] = 0.0;
      fVar59 = *(float *)(lVar10 + 0x40);
      fVar33 = fVar52;
    }
    else {
      fVar54 = local_f0[lVar4 * 0x28 + 7];
      fVar32 = local_f0[lVar4 * 0x28 + 4] * fVar54 * (fVar17 + param_4[lVar4 * 9 + 6] * 0.5) * 0.5;
      fVar59 = *(float *)(param_3 + lVar4 * 0x60 + 0x40);
      fVar33 = fVar11 * ABS(fVar28) * fVar59;
      fVar57 = fVar54 * fVar33;
      fVar52 = fVar57;
      if (fVar32 <= 0.0) {
        fVar52 = -(fVar54 * fVar33);
      }
      if (ABS(fVar32) <= fVar57) {
        fVar52 = fVar32;
      }
      fVar52 = -fVar17 - fVar52;
      fVar32 = 0.0;
      fVar33 = -fVar17;
    }
    local_f0[lVar4 * 0x28 + 1] = fVar52;
    fVar54 = *(float *)(param_3 + lVar4 * 0x60 + 0x44);
    if (fVar54 != 0.0) {
      fVar59 = fVar59 + fVar54 * SQRT(fVar30 * fVar30 + fVar33 * fVar33);
      fVar30 = *(float *)(param_3 + lVar4 * 0x60 + 0x48);
      if (fVar30 <= fVar59) {
        fVar59 = fVar30;
      }
      if (fVar59 <= 0.0) {
        fVar59 = 0.0;
      }
    }
    fVar59 = fVar11 * ABS(fVar28) * fVar59;
    fVar11 = 1.0 / (fVar59 + 1.4210855e-14);
    local_f0[lVar4 * 0x28 + 10] = fVar59;
    local_f0[lVar4 * 0x28 + 0xb] = fVar11;
    local_f0[lVar4 * 0x28 + 0xc] = fVar59;
    local_f0[lVar4 * 0x28 + 0xd] = fVar11;
    fVar11 = *param_1;
    local_f0[lVar4 * 0x28 + 8] = fVar52 * local_f0[lVar4 * 0x28 + 6] + fVar32 * fVar11;
    if (!bVar5) break;
    fVar28 = local_f0[lVar4 * 0x28 + 0x2b];
    bVar5 = false;
    lVar4 = 1;
  }
  fVar28 = *(float *)(param_3 + 0x54);
  fVar30 = *(float *)(param_3 + 0xb4);
  if (fVar28 + fVar30 <= 0.0) {
    auVar16._8_4_ = fVar50;
    auVar16._12_4_ = fVar63;
  }
  else {
    fVar11 = fVar11 * *(float *)(param_2 + 0x1c) *
                      (ABS(*(float *)(param_3 + 0x4c)) + ABS(*(float *)(param_3 + 0xac)));
    if (fVar11 == 0.0) {
      fVar28 = 10000.0;
      fVar32 = 10000.0;
    }
    else {
      if (fVar28 <= 0.0) {
        fVar28 = 0.0;
      }
      fVar32 = fVar28 / fVar11;
      if (fVar30 <= 0.0) {
        fVar30 = 0.0;
      }
      if (fVar28 <= fVar11) {
        fVar32 = 1.0;
      }
      fVar28 = fVar30 / fVar11;
      if (10000.0 < fVar32) {
        fVar32 = 10000.0;
      }
      if (fVar30 <= fVar11) {
        fVar28 = 1.0;
      }
      if (10000.0 < fVar28) {
        fVar28 = 10000.0;
      }
    }
    auVar25._0_4_ = fVar61 * fVar32;
    auVar25._4_8_ = 0;
    auVar25._12_4_ = fVar63 * fVar28;
    fVar50 = fVar50 * SQRT(fVar28 * fVar32);
    local_f0[4] = local_f0[4] / fVar32;
    local_f0[5] = fVar32 * local_f0[5];
    local_f0[0x2c] = local_f0[0x2c] / fVar28;
    local_f0[0x2d] = fVar28 * local_f0[0x2d];
    auVar19._4_4_ = fVar50;
    auVar19._0_4_ = auVar25._0_4_;
    auVar19._8_4_ = fVar50;
    auVar19._12_4_ = 0;
    auVar15 = NEON_ext(auVar25,auVar19,0xc,1);
    auVar16 = NEON_ext(auVar15,auVar15,4,1);
  }
  auVar20._8_8_ = _UNK_03cac2c8;
  auVar20._0_8_ = _DAT_03cac2c0;
  auVar15 = a64_TBL(ZEXT816(0),auVar16,auVar20);
  fVar63 = auVar16._0_4_ * auVar15._0_4_;
  fVar61 = auVar16._4_4_;
  fVar11 = fVar61 * auVar15._4_4_;
  if (ABS(fVar63 - fVar11) <= 0.0) {
    auVar14._8_8_ = _UNK_03cac0f8;
    auVar14._0_8_ = _DAT_03cac0f0;
  }
  else {
    auVar15 = NEON_ext(auVar16,auVar16,4,1);
    auVar37 = NEON_ext(auVar15,auVar15,8,1);
    fVar26 = fVar26 / (fVar63 - fVar11);
    fVar63 = (float)((ulong)uVar12 >> 0x20) / (fVar63 - fVar11);
    auVar21._8_8_ = _UNK_03caba98;
    auVar21._0_8_ = _DAT_03caba90;
    auVar13._0_4_ = -auVar15._0_4_ * fVar26;
    auVar13._4_4_ = -auVar15._4_4_ * fVar63;
    auVar13._8_4_ = auVar37._0_4_ * fVar26;
    auVar13._12_4_ = auVar37._4_4_ * fVar63;
    auVar14 = a64_TBL(ZEXT816(0),auVar13,auVar21);
  }
  fVar33 = local_f0[2] * auVar14._0_4_ + local_f0[0x2a] * auVar14._4_4_;
  local_f0[9] = -fVar33;
  fVar30 = local_f0[2] * auVar14._8_4_ + local_f0[0x2a] * auVar14._12_4_;
  fVar50 = local_f0[8] * local_f0[0xb];
  fVar63 = local_f0[0xd] * local_f0[9];
  local_f0[0x31] = -fVar30;
  fVar32 = fVar50 * fVar50 + fVar63 * fVar63;
  fVar28 = local_f0[0x30] * local_f0[0x33];
  fVar11 = local_f0[0x35] * local_f0[0x31];
  if (*(float *)(param_3 + 0xc0) <= ABS(local_f0[0])) {
    param_4[5] = 0.0;
    param_4[6] = 0.0;
    param_4[0xe] = 0.0;
    param_4[0xf] = 0.0;
  }
  fVar59 = fVar28 * fVar28 + fVar11 * fVar11;
  if (fVar32 <= 1.0) {
    if (fVar59 <= 1.0) {
      if (1.0 <= fVar32) {
        fVar63 = fVar63 * *(float *)(param_2 + 100);
        fVar32 = fVar50 * *(float *)(param_2 + 0x20);
        fVar32 = fVar63 * fVar63 + fVar32 * fVar32;
        if (fVar32 <= 1.0) {
          uVar2 = 0;
          do {
            fVar52 = fVar63;
            fVar54 = fVar32;
            fVar63 = *(float *)(param_2 + 0x60) * fVar52;
            fVar32 = fVar50 * *(float *)(param_2 + 0x24 + uVar2 * 4);
            fVar32 = fVar63 * fVar63 + fVar32 * fVar32;
            if (0xd < uVar2) break;
            uVar2 = uVar2 + 1;
          } while (fVar32 <= 1.0);
        }
        else {
          fVar54 = 0.0;
          fVar52 = 0.0;
        }
        fVar22 = (SQRT(fVar32) + -1.0) - (SQRT(fVar54) + -1.0);
        fVar57 = 8388608.0;
        if (1.1920929e-07 < ABS(fVar22)) {
          fVar57 = 1.0 / fVar22;
        }
        fVar32 = fVar52 * (SQRT(fVar32) + -1.0) * fVar57 - fVar63 * fVar57 * (SQRT(fVar54) + -1.0);
        fVar63 = -1.1;
        if (-1.1 <= fVar32) {
          fVar63 = fVar32;
        }
        fVar32 = ABS(local_f0[0xc] * fVar63);
        fVar63 = fVar32;
        if (local_f0[9] <= fVar32) {
          fVar63 = local_f0[9];
        }
        local_f0[9] = -fVar32;
        if (fVar33 <= fVar32) {
          local_f0[9] = fVar63;
        }
      }
      else {
        local_f0[9] = local_f0[4] * -local_f0[2];
      }
      if (1.0 <= fVar59) {
        fVar11 = fVar11 * *(float *)(param_2 + 200);
        fVar61 = fVar28 * *(float *)(param_2 + 0x84);
        fVar61 = fVar11 * fVar11 + fVar61 * fVar61;
        if (fVar61 <= 1.0) {
          uVar2 = 0;
          do {
            fVar63 = fVar61;
            fVar32 = fVar11;
            fVar11 = *(float *)(param_2 + 0xc4) * fVar32;
            fVar61 = fVar28 * *(float *)(param_2 + 0x88 + uVar2 * 4);
            fVar61 = fVar11 * fVar11 + fVar61 * fVar61;
            if (0xd < uVar2) break;
            uVar2 = uVar2 + 1;
          } while (fVar61 <= 1.0);
        }
        else {
          fVar32 = 0.0;
          fVar63 = fVar32;
        }
        fVar59 = (SQRT(fVar61) + -1.0) - (SQRT(fVar63) + -1.0);
        fVar33 = 8388608.0;
        if (1.1920929e-07 < ABS(fVar59)) {
          fVar33 = 1.0 / fVar59;
        }
        fVar63 = fVar32 * (SQRT(fVar61) + -1.0) * fVar33 - fVar11 * fVar33 * (SQRT(fVar63) + -1.0);
        fVar61 = -1.1;
        if (-1.1 <= fVar63) {
          fVar61 = fVar63;
        }
        fVar63 = ABS(local_f0[0x34] * fVar61);
        fVar61 = fVar63;
        if (local_f0[0x31] <= fVar63) {
          fVar61 = local_f0[0x31];
        }
        local_f0[0x31] = -fVar63;
        if (fVar30 <= fVar63) {
          local_f0[0x31] = fVar61;
        }
      }
      else {
        local_f0[0x31] = local_f0[0x2c] * -(local_f0[0x2a] + fVar61 * local_f0[9]);
      }
      param_4[7] = local_f0[0xd] * local_f0[9];
      param_4[8] = fVar50;
      param_4[0x10] = local_f0[0x35] * local_f0[0x31];
      param_4[0x11] = fVar28;
      param_4[0] = 0.0;
      param_4[1] = 0.0;
      param_4[9] = 0.0;
      param_4[10] = 0.0;
      goto LAB_0305203c;
    }
  }
  else {
    param_4[5] = (1.0 / fVar32) * param_4[5];
    param_4[6] = (1.0 / fVar32) * param_4[6];
  }
  if (1.0 < fVar59) {
    param_4[0xe] = (1.0 / fVar59) * param_4[0xe];
    param_4[0xf] = (1.0 / fVar59) * param_4[0xf];
  }
  uVar6 = (ulong)(fVar32 <= fVar59);
  uVar2 = (ulong)(fVar59 < fVar32);
  fVar50 = local_f0[uVar6 * 0x28 + 2];
  fVar11 = local_f0[uVar6 * 0x28 + 4] * -fVar50;
  local_f0[uVar6 * 0x28 + 9] = fVar11;
  pfVar8 = local_f0 + uVar2 * 0x28 + 2;
  fVar28 = fVar11 * local_f0[uVar6 * 0x28 + 0xd];
  fVar63 = fVar28;
  if (1.8446726e+19 < fVar28) {
    fVar63 = 1.8446726e+19;
  }
  fVar32 = local_f0[uVar6 * 0x28 + 8];
  fVar33 = fVar32 * local_f0[uVar6 * 0x28 + 0xb];
  fVar30 = -1.8446726e+19;
  if (-1.8446726e+19 <= fVar28) {
    fVar30 = fVar63;
  }
  fVar63 = -1.8446726e+19;
  if (-1.8446726e+19 <= fVar33) {
    fVar63 = fVar33;
  }
  param_4[uVar6 * 9 + 7] = fVar30;
  param_4[uVar6 * 9 + 8] = fVar63;
  if (1.0 <= fVar30 * fVar30 + fVar63 * fVar63) {
    lVar4 = param_2 + uVar6 * 100;
    fVar30 = fVar30 * *(float *)(lVar4 + 100);
    fVar33 = fVar63 * *(float *)(lVar4 + 0x20);
    fVar28 = fVar30 * fVar30 + fVar33 * fVar33;
    if (fVar28 <= 1.0) {
      lVar4 = param_2 + uVar6 * 100;
      uVar3 = 0;
      do {
        fVar52 = fVar30;
        fVar59 = fVar33;
        fVar54 = fVar28;
        fVar30 = *(float *)(lVar4 + 0x60) * fVar52;
        fVar33 = fVar63 * *(float *)(lVar4 + 0x24 + uVar3 * 4);
        fVar28 = fVar30 * fVar30 + fVar33 * fVar33;
        if (0xd < uVar3) break;
        uVar3 = uVar3 + 1;
      } while (fVar28 <= 1.0);
    }
    else {
      fVar59 = 0.0;
      fVar54 = 0.0;
      fVar52 = 0.0;
    }
    fVar57 = (SQRT(fVar28) + -1.0) - (SQRT(fVar54) + -1.0);
    fVar63 = 8388608.0;
    if (1.1920929e-07 < ABS(fVar57)) {
      fVar63 = 1.0 / fVar57;
    }
    fVar54 = fVar63 * -(SQRT(fVar54) + -1.0);
    fVar63 = (SQRT(fVar28) + -1.0) * fVar63;
    fVar30 = fVar30 * fVar54 + fVar52 * fVar63;
    fVar28 = fVar33 * fVar54 + fVar59 * fVar63;
    fVar63 = fVar30;
    if (1.1 < fVar30) {
      fVar63 = 1.1;
    }
    fVar33 = fVar28;
    if (1.1 < fVar28) {
      fVar33 = 1.1;
    }
    fVar59 = -1.1;
    if (-1.1 <= fVar30) {
      fVar59 = fVar63;
    }
    fVar63 = -1.1;
    if (-1.1 <= fVar28) {
      fVar63 = fVar33;
    }
    fVar63 = local_f0[uVar6 * 0x28 + 10] * fVar63;
    fVar59 = local_f0[uVar6 * 0x28 + 0xc] * fVar59;
    fVar32 = fVar32 - fVar63;
    local_f0[uVar6 * 0x28 + 9] = fVar59;
    local_f0[uVar6 * 0x28 + 0xe] = fVar32;
    local_f0[uVar6 * 0x28 + 8] = fVar63;
    fVar50 = fVar50 * fVar50 + local_f0[uVar6 * 0x28] * local_f0[uVar6 * 0x28];
    fVar28 = local_f0[uVar6 * 0x28 + 10] * local_f0[uVar6 * 0x28 + 7] * fVar32;
    fVar63 = 8388608.0;
    if (1.1920929e-07 < ABS(fVar50)) {
      fVar63 = 1.0 / fVar50;
    }
    fVar11 = local_f0[uVar6 * 0x28 + 0xc] * local_f0[uVar6 * 0x28 + 5] * (fVar11 - fVar59);
    param_4[uVar6 * 9 + 2] = SQRT(fVar63 * (fVar28 * fVar28 + fVar11 * fVar11));
  }
  else {
    local_f0[uVar6 * 0x28 + 0xe] = 0.0;
    fVar59 = fVar11;
  }
  fVar11 = *pfVar8 + fVar61 * fVar59;
  *pfVar8 = fVar11;
  fVar50 = local_f0[uVar2 * 0x28 + 4] * -fVar11;
  local_f0[uVar2 * 0x28 + 9] = fVar50;
  fVar28 = fVar50 * local_f0[uVar2 * 0x28 + 0xd];
  fVar63 = fVar28;
  if (1.8446726e+19 < fVar28) {
    fVar63 = 1.8446726e+19;
  }
  fVar32 = local_f0[uVar2 * 0x28 + 8];
  fVar33 = fVar32 * local_f0[uVar2 * 0x28 + 0xb];
  fVar30 = -1.8446726e+19;
  if (-1.8446726e+19 <= fVar28) {
    fVar30 = fVar63;
  }
  fVar63 = -1.8446726e+19;
  if (-1.8446726e+19 <= fVar33) {
    fVar63 = fVar33;
  }
  param_4[uVar2 * 9 + 7] = fVar30;
  param_4[uVar2 * 9 + 8] = fVar63;
  if (1.0 <= fVar30 * fVar30 + fVar63 * fVar63) {
    lVar4 = param_2 + uVar2 * 100;
    fVar30 = fVar30 * *(float *)(lVar4 + 100);
    fVar33 = fVar63 * *(float *)(lVar4 + 0x20);
    fVar28 = fVar30 * fVar30 + fVar33 * fVar33;
    if (fVar28 <= 1.0) {
      param_2 = param_2 + uVar2 * 100;
      uVar6 = 0;
      do {
        fVar52 = fVar30;
        fVar59 = fVar33;
        fVar54 = fVar28;
        fVar30 = *(float *)(param_2 + 0x60) * fVar52;
        fVar33 = fVar63 * *(float *)(param_2 + 0x24 + uVar6 * 4);
        fVar28 = fVar30 * fVar30 + fVar33 * fVar33;
        if (0xd < uVar6) break;
        uVar6 = uVar6 + 1;
      } while (fVar28 <= 1.0);
    }
    else {
      fVar59 = 0.0;
      fVar54 = 0.0;
      fVar52 = 0.0;
    }
    fVar57 = (SQRT(fVar28) + -1.0) - (SQRT(fVar54) + -1.0);
    fVar63 = 8388608.0;
    if (1.1920929e-07 < ABS(fVar57)) {
      fVar63 = 1.0 / fVar57;
    }
    fVar54 = fVar63 * -(SQRT(fVar54) + -1.0);
    fVar63 = (SQRT(fVar28) + -1.0) * fVar63;
    fVar30 = fVar30 * fVar54 + fVar52 * fVar63;
    fVar28 = fVar33 * fVar54 + fVar59 * fVar63;
    fVar63 = fVar30;
    if (1.1 < fVar30) {
      fVar63 = 1.1;
    }
    fVar33 = fVar28;
    if (1.1 < fVar28) {
      fVar33 = 1.1;
    }
    fVar59 = -1.1;
    if (-1.1 <= fVar30) {
      fVar59 = fVar63;
    }
    fVar63 = -1.1;
    if (-1.1 <= fVar28) {
      fVar63 = fVar33;
    }
    fVar63 = local_f0[uVar2 * 0x28 + 10] * fVar63;
    fVar59 = local_f0[uVar2 * 0x28 + 0xc] * fVar59;
    fVar32 = fVar32 - fVar63;
    local_f0[uVar2 * 0x28 + 9] = fVar59;
    local_f0[uVar2 * 0x28 + 0xe] = fVar32;
    local_f0[uVar2 * 0x28 + 8] = fVar63;
    fVar30 = fVar11 * fVar11 + local_f0[uVar2 * 0x28] * local_f0[uVar2 * 0x28];
    fVar28 = local_f0[uVar2 * 0x28 + 10] * local_f0[uVar2 * 0x28 + 7] * fVar32;
    fVar50 = local_f0[uVar2 * 0x28 + 0xc] * local_f0[uVar2 * 0x28 + 5] * (fVar50 - fVar59);
    fVar63 = 8388608.0;
    if (1.1920929e-07 < ABS(fVar30)) {
      fVar63 = 1.0 / fVar30;
    }
    param_4[uVar2 * 9 + 2] = SQRT(fVar63 * (fVar28 * fVar28 + fVar50 * fVar50));
  }
  else {
    local_f0[uVar2 * 0x28 + 0xe] = 0.0;
    fVar59 = fVar50;
  }
  *pfVar8 = fVar11 + fVar61 * fVar59;
  *param_4 = local_f0[0xe] * local_f0[7];
  param_4[9] = local_f0[0x36] * local_f0[0x2f];
  param_4[1] = local_f0[2];
  param_4[10] = local_f0[0x2a];
LAB_0305203c:
  param_4[4] = local_f0[8];
  param_4[0xd] = local_f0[0x30];
  param_4[3] = local_f0[9] * param_1[1];
  param_4[0xc] = local_f0[0x31] * param_1[1];
  lVar4 = *(long *)(param_3 + 0x30);
  fVar22 = *(float *)(lVar4 + 0x3c) * local_f0[9];
  fVar61 = *(float *)(param_3 + 0xe0);
  fVar63 = *(float *)(param_3 + 0xe4);
  fVar11 = *(float *)(param_3 + 0xe8);
  fVar50 = *(float *)(param_3 + 0xec);
  fVar28 = *(float *)(param_3 + 0x100);
  fVar30 = *(float *)(param_3 + 0x104);
  fVar32 = *(float *)(param_3 + 0x108);
  fVar33 = *(float *)(param_3 + 0x10c);
  *(float *)(lVar4 + 0x18) = *(float *)(lVar4 + 0x18) - fStack_118 * fVar22;
  *(float *)(lVar4 + 0x1c) = *(float *)(lVar4 + 0x1c) - fStack_114 * fVar22;
  *(float *)(lVar4 + 0x10) = *(float *)(lVar4 + 0x10) - local_120 * fVar22;
  *(float *)(lVar4 + 0x14) = *(float *)(lVar4 + 0x14) - fStack_11c * fVar22;
  fVar34 = fVar33 * local_f0[9];
  fVar59 = *(float *)(param_3 + 0xf0);
  fVar52 = *(float *)(param_3 + 0xf4);
  fVar54 = *(float *)(param_3 + 0xf8);
  fVar57 = *(float *)(param_3 + 0xfc);
  *(float *)(lVar4 + 0x28) =
       *(float *)(lVar4 + 0x38) * local_f0[9] * (float)uStack_f8 + *(float *)(lVar4 + 0x28);
  *(float *)(lVar4 + 0x2c) = fVar22 * uStack_f8._4_4_ + *(float *)(lVar4 + 0x2c);
  *(float *)(lVar4 + 0x20) =
       *(float *)(lVar4 + 0x30) * local_f0[9] * local_100[0] + *(float *)(lVar4 + 0x20);
  *(float *)(lVar4 + 0x24) =
       *(float *)(lVar4 + 0x34) * local_f0[9] * local_100[1] + *(float *)(lVar4 + 0x24);
  lVar4 = *(long *)(param_3 + 0x90);
  fVar22 = *(float *)(lVar4 + 0x30);
  fVar26 = *(float *)(lVar4 + 0x34);
  fVar17 = *(float *)(lVar4 + 0x38);
  fVar33 = fVar33 * local_f0[0x31];
  fVar39 = *(float *)(lVar4 + 0x3c) * local_f0[0x31];
  *(float *)(lVar4 + 0x18) = *(float *)(lVar4 + 0x18) - local_f0[0x1e] * fVar39;
  *(float *)(lVar4 + 0x1c) = *(float *)(lVar4 + 0x1c) - local_f0[0x1f] * fVar39;
  *(float *)(lVar4 + 0x10) = *(float *)(lVar4 + 0x10) - local_f0[0x1c] * fVar39;
  *(float *)(lVar4 + 0x14) = *(float *)(lVar4 + 0x14) - local_f0[0x1d] * fVar39;
  *(float *)(param_3 + 0xf8) =
       fVar32 * local_f0[9] * (float)uStack_108 + fVar54 + fVar32 * local_f0[0x31] * local_f0[0x22];
  *(float *)(param_3 + 0xfc) = fVar34 * uStack_108._4_4_ + fVar57 + fVar33 * local_f0[0x23];
  *(float *)(param_3 + 0xf0) =
       fVar28 * local_f0[9] * local_110[0] + fVar59 + fVar28 * local_f0[0x31] * local_f0[0x20];
  *(float *)(param_3 + 0xf4) =
       fVar30 * local_f0[9] * local_110[1] + fVar52 + fVar30 * local_f0[0x31] * local_f0[0x21];
  *(float *)(lVar4 + 0x28) = fVar17 * local_f0[0x31] * local_f0[0x26] + *(float *)(lVar4 + 0x28);
  *(float *)(lVar4 + 0x2c) = fVar39 * local_f0[0x27] + *(float *)(lVar4 + 0x2c);
  *(float *)(lVar4 + 0x20) = fVar22 * local_f0[0x31] * local_f0[0x24] + *(float *)(lVar4 + 0x20);
  *(float *)(lVar4 + 0x24) = fVar26 * local_f0[0x31] * local_f0[0x25] + *(float *)(lVar4 + 0x24);
  *(ulong *)(param_3 + 0xe8) =
       CONCAT44(fVar50 + fStack_114 * fVar34 + local_f0[0x1f] * fVar33,
                fVar11 + fStack_118 * fVar34 + local_f0[0x1e] * fVar33);
  *(ulong *)(param_3 + 0xe0) =
       CONCAT44(fVar63 + fStack_11c * fVar34 + local_f0[0x1d] * fVar33,
                fVar61 + local_120 * fVar34 + local_f0[0x1c] * fVar33);
  return;
}


