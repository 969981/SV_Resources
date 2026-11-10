/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cec840; name: FUN_00cec840
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_00cec840(float param_1,int *param_2)

{
  long lVar1;
  byte *pbVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  byte *pbVar5;
  byte *pbVar7;
  ulong uVar6;
  long lVar8;
  ushort *puVar9;
  uint *puVar10;
  uint uVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar19;
  undefined1 auVar18 [16];
  float fVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  float fVar25;
  undefined1 auVar26 [12];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar30;
  undefined1 auVar29 [16];
  float fVar31;
  float fVar37;
  float fVar38;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar39;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  undefined1 auVar43 [16];
  float fVar44;
  undefined1 auVar45 [16];
  float fVar46;
  float fVar47;
  float fVar54;
  undefined1 auVar48 [12];
  undefined1 auVar49 [12];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar55;
  float fVar56;
  undefined1 auVar53 [16];
  undefined1 auVar57 [12];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  
  puVar9 = (ushort *)((long)param_2 - (long)*param_2);
  if (*puVar9 < 5) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    if ((ulong)puVar9[2] != 0) {
      puVar10 = (uint *)((long)param_2 + (ulong)puVar9[2]);
      lVar8 = (long)puVar10 + (ulong)*puVar10;
    }
    if (6 < *puVar9) {
      puVar10 = (uint *)0x0;
      if ((ulong)puVar9[3] != 0) {
        puVar10 = (uint *)((long)param_2 + (ulong)puVar9[3]);
        puVar10 = (uint *)((long)puVar10 + (ulong)*puVar10);
      }
      goto LAB_00cec884;
    }
  }
  puVar10 = (uint *)0x0;
LAB_00cec884:
  lVar1 = lVar8 + 4;
  pbVar7 = (byte *)(lVar8 + 6);
  uVar6 = ~(ulong)pbVar7 + lVar1 + (ulong)*puVar10;
  if (uVar6 != 0) {
    pbVar2 = pbVar7 + (uVar6 >> 1);
    bVar3 = *pbVar2;
    pbVar5 = pbVar7;
    while( true ) {
      uVar12 = uVar6 >> 1;
      pbVar7 = pbVar2 + 1;
      uVar6 = uVar6 + (uVar6 >> 1 ^ 0xffffffffffffffff);
      if (param_1 <= (float)bVar3) {
        pbVar7 = pbVar5;
        uVar6 = uVar12;
      }
      if (uVar6 == 0) break;
      pbVar2 = pbVar7 + (uVar6 >> 1);
      bVar3 = *pbVar2;
      pbVar5 = pbVar7;
    }
  }
  uVar6 = (long)pbVar7 - lVar1;
  iVar21 = (int)uVar6;
  uVar11 = (uint)*(byte *)(lVar1 + (ulong)(iVar21 - 1U));
  uVar12 = *(ulong *)((long)puVar10 + (ulong)(iVar21 - 1U) * 6 + 4);
  fVar20 = (param_1 - (float)uVar11) /
           (float)(int)(*(byte *)(lVar1 + (uVar6 & 0xffffffff)) - uVar11);
  auVar45._0_8_ = CONCAT44((int)(uVar12 >> 0x12),(uint)uVar12 >> 3) & 0x7fff00007fff;
  auVar45._8_4_ = (uint)(uVar12 >> 0x21) & 0x7fff;
  auVar45._12_4_ = 0;
  auVar45 = NEON_ucvtf(auVar45,4);
  uVar11 = (uint)uVar12 & 3;
  fVar44 = (float)_DAT_03cabb50;
  auVar48._0_4_ = fVar44 + auVar45._0_4_ * 4.7938363e-05;
  fVar46 = (float)((ulong)_DAT_03cabb50 >> 0x20);
  auVar48._4_4_ = fVar46 + auVar45._4_4_ * 4.7938363e-05;
  fVar19 = (float)_UNK_03cabb58;
  fVar25 = (float)((ulong)_UNK_03cabb58 >> 0x20);
  auVar48._8_4_ = fVar19 + auVar45._8_4_ * 4.7938363e-05;
  auVar35._12_4_ = fVar25 + auVar45._12_4_ * 4.7938363e-05;
  auVar35._0_12_ = auVar48;
  fVar15 = 1.0 - (auVar48._0_4_ * auVar48._0_4_ + auVar48._4_4_ * auVar48._4_4_ +
                 auVar48._8_4_ * auVar48._8_4_ + auVar35._12_4_ * auVar35._12_4_);
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  fVar42 = (float)NEON_frsqrte(fVar15);
  fVar42 = fVar15 - (fVar42 * fVar15 * fVar42 * fVar15 - fVar15) * 0.5;
  fVar64 = (float)NEON_frsqrte(fVar42);
  fVar42 = fVar42 - (fVar64 * fVar42 * fVar64 * fVar42 - fVar15) * 0.5;
  fVar15 = (float)NEON_frsqrte(fVar42);
  fVar15 = fVar15 * fVar42;
  if (uVar11 == 3) {
    auVar53._12_4_ = fVar15;
    auVar53._0_12_ = auVar48;
  }
  else if (uVar11 == 1) {
    auVar18._4_4_ = auVar48._8_4_;
    auVar18._0_4_ = auVar48._0_4_;
    auVar18._8_4_ = auVar48._0_4_;
    auVar18._12_4_ = fVar15;
    auVar45 = NEON_ext(auVar35,auVar35,4,1);
    auVar53 = NEON_ext(auVar18,auVar45,8,1);
  }
  else if (uVar11 == 2) {
    auVar35 = NEON_ext(auVar35,auVar35,8,1);
    auVar45 = NEON_ext(auVar35,ZEXT416((uint)fVar15),4,1);
    auVar53 = NEON_ext(auVar45,auVar35,4,1);
  }
  else {
    auVar45 = NEON_ext(auVar35,ZEXT416((uint)fVar15),4,1);
    auVar53 = NEON_ext(auVar45,auVar35,0xc,1);
  }
  auVar16._0_8_ = -(ulong)((uVar12 & 4) == 0);
  auVar58._0_4_ = -auVar53._0_4_;
  auVar58._4_4_ = -auVar53._4_4_;
  auVar58._8_4_ = -auVar53._8_4_;
  auVar58._12_4_ = -auVar53._12_4_;
  auVar16._8_8_ = auVar16._0_8_;
  auVar17 = auVar58 ^ (auVar58 ^ auVar53) & auVar16;
  if (0.0 < fVar20) {
    uVar6 = *(ulong *)((long)puVar10 + (uVar6 & 0xffffffff) * 6 + 4);
    auVar50._0_8_ = CONCAT44((int)(uVar6 >> 0x12),(uint)uVar6 >> 3) & 0x7fff00007fff;
    auVar50._8_4_ = (uint)(uVar6 >> 0x21) & 0x7fff;
    auVar50._12_4_ = 0;
    uVar11 = (uint)uVar6 & 3;
    auVar45 = NEON_ucvtf(auVar50,4);
    auVar49._0_4_ = fVar44 + auVar45._0_4_ * 4.7938363e-05;
    auVar49._4_4_ = fVar46 + auVar45._4_4_ * 4.7938363e-05;
    auVar49._8_4_ = fVar19 + auVar45._8_4_ * 4.7938363e-05;
    auVar51._12_4_ = fVar25 + auVar45._12_4_ * 4.7938363e-05;
    auVar51._0_12_ = auVar49;
    fVar15 = 1.0 - (auVar49._0_4_ * auVar49._0_4_ + auVar49._4_4_ * auVar49._4_4_ +
                   auVar49._8_4_ * auVar49._8_4_ + auVar51._12_4_ * auVar51._12_4_);
    if (fVar15 <= 0.0) {
      fVar15 = 0.0;
    }
    fVar42 = (float)NEON_frsqrte(fVar15);
    fVar42 = fVar15 - (fVar42 * fVar15 * fVar42 * fVar15 - fVar15) * 0.5;
    fVar64 = (float)NEON_frsqrte(fVar42);
    fVar42 = fVar42 - (fVar64 * fVar42 * fVar64 * fVar42 - fVar15) * 0.5;
    fVar15 = (float)NEON_frsqrte(fVar42);
    fVar15 = fVar15 * fVar42;
    if (uVar11 == 3) {
      auVar52._12_4_ = fVar15;
      auVar52._0_12_ = auVar49;
    }
    else if (uVar11 == 1) {
      auVar63._4_4_ = auVar49._8_4_;
      auVar63._0_4_ = auVar49._0_4_;
      auVar63._8_4_ = auVar49._0_4_;
      auVar63._12_4_ = fVar15;
      auVar45 = NEON_ext(auVar51,auVar51,4,1);
      auVar52 = NEON_ext(auVar63,auVar45,8,1);
    }
    else if (uVar11 == 2) {
      auVar45 = NEON_ext(auVar51,auVar51,8,1);
      auVar35 = NEON_ext(auVar45,ZEXT416((uint)fVar15),4,1);
      auVar52 = NEON_ext(auVar35,auVar45,4,1);
    }
    else {
      auVar45 = NEON_ext(auVar51,ZEXT416((uint)fVar15),4,1);
      auVar52 = NEON_ext(auVar45,auVar51,0xc,1);
    }
    auVar59._0_8_ = -(ulong)((uVar6 & 4) == 0);
    auVar65._0_4_ = -auVar52._0_4_;
    auVar65._4_4_ = -auVar52._4_4_;
    auVar65._8_4_ = -auVar52._8_4_;
    auVar65._12_4_ = -auVar52._12_4_;
    auVar59._8_8_ = auVar59._0_8_;
    auVar52 = auVar52 ^ (auVar52 ^ auVar65) & ~auVar59;
    if (1.0 <= fVar20) {
      return auVar52;
    }
    uVar6 = *(ulong *)((long)puVar10 + (ulong)(iVar21 - 2) * 6 + 4);
    auVar60._0_8_ = CONCAT44((int)(uVar6 >> 0x12),(uint)uVar6 >> 3) & 0x7fff00007fff;
    auVar60._8_4_ = (uint)(uVar6 >> 0x21) & 0x7fff;
    auVar60._12_4_ = 0;
    uVar11 = (uint)uVar6 & 3;
    auVar45 = NEON_ucvtf(auVar60,4);
    auVar57._0_4_ = fVar44 + auVar45._0_4_ * 4.7938363e-05;
    auVar57._4_4_ = fVar46 + auVar45._4_4_ * 4.7938363e-05;
    auVar57._8_4_ = fVar19 + auVar45._8_4_ * 4.7938363e-05;
    auVar61._12_4_ = fVar25 + auVar45._12_4_ * 4.7938363e-05;
    auVar61._0_12_ = auVar57;
    fVar15 = 1.0 - (auVar57._0_4_ * auVar57._0_4_ + auVar57._4_4_ * auVar57._4_4_ +
                   auVar57._8_4_ * auVar57._8_4_ + auVar61._12_4_ * auVar61._12_4_);
    if (fVar15 <= 0.0) {
      fVar15 = 0.0;
    }
    fVar42 = (float)NEON_frsqrte(fVar15);
    fVar42 = fVar15 - (fVar42 * fVar15 * fVar42 * fVar15 - fVar15) * 0.5;
    fVar64 = (float)NEON_frsqrte(fVar42);
    fVar42 = fVar42 - (fVar64 * fVar42 * fVar64 * fVar42 - fVar15) * 0.5;
    fVar15 = (float)NEON_frsqrte(fVar42);
    fVar15 = fVar15 * fVar42;
    if (uVar11 == 3) {
      auVar62._12_4_ = fVar15;
      auVar62._0_12_ = auVar57;
    }
    else if (uVar11 == 1) {
      auVar67._4_4_ = auVar57._8_4_;
      auVar67._0_4_ = auVar57._0_4_;
      auVar67._8_4_ = auVar57._0_4_;
      auVar67._12_4_ = fVar15;
      auVar45 = NEON_ext(auVar61,auVar61,4,1);
      auVar62 = NEON_ext(auVar67,auVar45,8,1);
    }
    else if (uVar11 == 2) {
      auVar45 = NEON_ext(auVar61,auVar61,8,1);
      auVar35 = NEON_ext(auVar45,ZEXT416((uint)fVar15),4,1);
      auVar62 = NEON_ext(auVar35,auVar45,4,1);
    }
    else {
      auVar45 = NEON_ext(auVar61,ZEXT416((uint)fVar15),4,1);
      auVar62 = NEON_ext(auVar45,auVar61,0xc,1);
    }
    uVar12 = *(ulong *)((long)puVar10 + (ulong)(iVar21 + 1) * 6 + 4);
    auVar66._0_8_ = -(ulong)((uVar6 & 4) == 0);
    auVar66._8_8_ = auVar66._0_8_;
    auVar32._0_8_ = CONCAT44((int)(uVar12 >> 0x12),(uint)uVar12 >> 3) & 0x7fff00007fff;
    auVar32._8_4_ = (uint)(uVar12 >> 0x21) & 0x7fff;
    auVar32._12_4_ = 0;
    uVar11 = (uint)uVar12 & 3;
    auVar45 = NEON_ucvtf(auVar32,4);
    auVar26._0_4_ = fVar44 + auVar45._0_4_ * 4.7938363e-05;
    auVar26._4_4_ = fVar46 + auVar45._4_4_ * 4.7938363e-05;
    auVar26._8_4_ = fVar19 + auVar45._8_4_ * 4.7938363e-05;
    auVar27._12_4_ = fVar25 + auVar45._12_4_ * 4.7938363e-05;
    auVar27._0_12_ = auVar26;
    auVar4._4_4_ = -auVar62._4_4_;
    auVar4._0_4_ = -auVar62._0_4_;
    auVar4._8_4_ = -auVar62._8_4_;
    auVar4._12_4_ = -auVar62._12_4_;
    auVar33._4_4_ = -auVar62._4_4_;
    auVar33._0_4_ = -auVar62._0_4_;
    auVar33._8_4_ = -auVar62._8_4_;
    auVar33._12_4_ = -auVar62._12_4_;
    auVar33 = auVar33 ^ (auVar4 ^ auVar62) & auVar66;
    fVar15 = 1.0 - (auVar26._0_4_ * auVar26._0_4_ + auVar26._4_4_ * auVar26._4_4_ +
                   auVar26._8_4_ * auVar26._8_4_ + auVar27._12_4_ * auVar27._12_4_);
    if (fVar15 <= 0.0) {
      fVar15 = 0.0;
    }
    fVar44 = (float)NEON_frsqrte(fVar15);
    fVar44 = fVar15 - (fVar44 * fVar15 * fVar44 * fVar15 - fVar15) * 0.5;
    fVar46 = (float)NEON_frsqrte(fVar44);
    fVar44 = fVar44 - (fVar46 * fVar44 * fVar46 * fVar44 - fVar15) * 0.5;
    fVar15 = (float)NEON_frsqrte(fVar44);
    fVar15 = fVar15 * fVar44;
    if (uVar11 == 3) {
      auVar28._12_4_ = fVar15;
      auVar28._0_12_ = auVar26;
    }
    else if (uVar11 == 1) {
      auVar41._4_4_ = auVar26._8_4_;
      auVar41._0_4_ = auVar26._0_4_;
      auVar41._8_4_ = auVar26._0_4_;
      auVar41._12_4_ = fVar15;
      auVar45 = NEON_ext(auVar27,auVar27,4,1);
      auVar28 = NEON_ext(auVar41,auVar45,8,1);
    }
    else if (uVar11 == 2) {
      auVar45 = NEON_ext(auVar27,auVar27,8,1);
      auVar35 = NEON_ext(auVar45,ZEXT416((uint)fVar15),4,1);
      auVar28 = NEON_ext(auVar35,auVar45,4,1);
    }
    else {
      auVar45 = NEON_ext(auVar27,ZEXT416((uint)fVar15),4,1);
      auVar28 = NEON_ext(auVar45,auVar27,0xc,1);
    }
    fVar47 = auVar52._0_4_;
    fVar54 = auVar52._4_4_;
    fVar55 = auVar52._8_4_;
    fVar56 = auVar52._12_4_;
    auVar40._0_8_ = -(ulong)((uVar12 & 4) == 0);
    auVar43._0_4_ = -auVar28._0_4_;
    auVar43._4_4_ = -auVar28._4_4_;
    auVar43._8_4_ = -auVar28._8_4_;
    auVar43._12_4_ = -auVar28._12_4_;
    auVar40._8_8_ = auVar40._0_8_;
    auVar28 = auVar28 ^ (auVar28 ^ auVar43) & ~auVar40;
    fVar15 = auVar17._0_4_;
    fVar44 = auVar17._4_4_;
    fVar46 = auVar17._8_4_;
    fVar19 = auVar17._12_4_;
    fVar31 = (fVar47 - auVar33._0_4_) * 0.5;
    fVar37 = (fVar54 - auVar33._4_4_) * 0.5;
    fVar38 = (fVar55 - auVar33._8_4_) * 0.5;
    fVar39 = (fVar56 - auVar33._12_4_) * 0.5;
    fVar25 = (auVar28._0_4_ - fVar15) * 0.5;
    fVar42 = (auVar28._4_4_ - fVar44) * 0.5;
    fVar64 = (auVar28._8_4_ - fVar46) * 0.5;
    fVar30 = (auVar28._12_4_ - fVar19) * 0.5;
    auVar45 = NEON_fmov(0x40400000,4);
    fVar15 = fVar15 + (fVar31 + ((((fVar47 * auVar45._0_4_ - fVar15 * auVar45._0_4_) -
                                  (fVar31 + fVar31)) - fVar25) +
                                (((fVar15 + fVar15) - (fVar47 + fVar47)) + fVar31 + fVar25) * fVar20
                                ) * fVar20) * fVar20;
    fVar44 = fVar44 + (fVar37 + ((((fVar54 * auVar45._4_4_ - fVar44 * auVar45._4_4_) -
                                  (fVar37 + fVar37)) - fVar42) +
                                (((fVar44 + fVar44) - (fVar54 + fVar54)) + fVar37 + fVar42) * fVar20
                                ) * fVar20) * fVar20;
    fVar46 = fVar46 + (fVar38 + ((((fVar55 * auVar45._8_4_ - fVar46 * auVar45._8_4_) -
                                  (fVar38 + fVar38)) - fVar64) +
                                (((fVar46 + fVar46) - (fVar55 + fVar55)) + fVar38 + fVar64) * fVar20
                                ) * fVar20) * fVar20;
    fVar19 = fVar19 + (fVar39 + ((((fVar56 * auVar45._12_4_ - fVar19 * auVar45._12_4_) -
                                  (fVar39 + fVar39)) - fVar30) +
                                (((fVar19 + fVar19) - (fVar56 + fVar56)) + fVar39 + fVar30) * fVar20
                                ) * fVar20) * fVar20;
    auVar13._0_4_ = fVar15 * fVar15 + fVar44 * fVar44;
    auVar13._4_4_ = fVar46 * fVar46 + fVar19 * fVar19;
    auVar13._8_4_ = fVar15 * fVar15 + fVar44 * fVar44;
    auVar13._12_4_ = fVar46 * fVar46 + fVar19 * fVar19;
    auVar45 = NEON_ext(auVar13,auVar13,4,1);
    auVar14._0_4_ = auVar45._0_4_ + auVar45._4_4_;
    auVar14._4_4_ = auVar45._8_4_ + auVar45._12_4_;
    auVar14._8_4_ = auVar45._0_4_ + auVar45._4_4_;
    auVar14._12_4_ = auVar45._8_4_ + auVar45._12_4_;
    auVar45 = NEON_frsqrte(auVar14,4);
    auVar34._0_4_ = auVar14._0_4_ * auVar45._0_4_;
    auVar34._4_4_ = auVar14._4_4_ * auVar45._4_4_;
    auVar34._8_4_ = auVar14._8_4_ * auVar45._8_4_;
    auVar34._12_4_ = auVar14._12_4_ * auVar45._12_4_;
    auVar35 = NEON_frsqrts(auVar45,auVar34,4);
    auVar29._0_4_ = auVar45._0_4_ * auVar35._0_4_;
    auVar29._4_4_ = auVar45._4_4_ * auVar35._4_4_;
    auVar29._8_4_ = auVar45._8_4_ * auVar35._8_4_;
    auVar29._12_4_ = auVar45._12_4_ * auVar35._12_4_;
    auVar36._0_4_ = auVar14._0_4_ * auVar29._0_4_;
    auVar36._4_4_ = auVar14._4_4_ * auVar29._4_4_;
    auVar36._8_4_ = auVar14._8_4_ * auVar29._8_4_;
    auVar36._12_4_ = auVar14._12_4_ * auVar29._12_4_;
    iVar21 = -(uint)(auVar14._0_4_ == 0.0);
    iVar22 = -(uint)(auVar14._4_4_ == 0.0);
    iVar23 = -(uint)(auVar14._8_4_ == 0.0);
    iVar24 = -(uint)(auVar14._12_4_ == 0.0);
    auVar45 = NEON_frsqrts(auVar29,auVar36,4);
    fVar15 = auVar29._0_4_ * auVar45._0_4_ * fVar15;
    fVar44 = auVar29._4_4_ * auVar45._4_4_ * fVar44;
    fVar46 = auVar29._8_4_ * auVar45._8_4_ * fVar46;
    fVar19 = auVar29._12_4_ * auVar45._12_4_ * fVar19;
    auVar17[0] = SUB41(fVar15,0) & ~(byte)iVar21;
    auVar17[1] = (byte)((uint)fVar15 >> 8) & ~(byte)((uint)iVar21 >> 8);
    auVar17[2] = (byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar21 >> 0x10);
    auVar17[3] = (byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18);
    auVar17[4] = SUB41(fVar44,0) & ~(byte)iVar22;
    auVar17[5] = (byte)((uint)fVar44 >> 8) & ~(byte)((uint)iVar22 >> 8);
    auVar17[6] = (byte)((uint)fVar44 >> 0x10) & ~(byte)((uint)iVar22 >> 0x10);
    auVar17[7] = (byte)((uint)fVar44 >> 0x18) & ~(byte)((uint)iVar22 >> 0x18);
    auVar17[8] = SUB41(fVar46,0) & ~(byte)iVar23;
    auVar17[9] = (byte)((uint)fVar46 >> 8) & ~(byte)((uint)iVar23 >> 8);
    auVar17[10] = (byte)((uint)fVar46 >> 0x10) & ~(byte)((uint)iVar23 >> 0x10);
    auVar17[0xb] = (byte)((uint)fVar46 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18);
    auVar17[0xc] = SUB41(fVar19,0) & ~(byte)iVar24;
    auVar17[0xd] = (byte)((uint)fVar19 >> 8) & ~(byte)((uint)iVar24 >> 8);
    auVar17[0xe] = (byte)((uint)fVar19 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10);
    auVar17[0xf] = (byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18);
  }
  return auVar17;
}


