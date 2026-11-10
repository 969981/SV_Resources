/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00860944; name: FUN_00860944
 */


undefined8 FUN_00860944(char *param_1)

{
  undefined1 (*pauVar1) [12];
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  bool bVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  undefined8 uVar31;
  long lVar32;
  undefined8 uVar33;
  int iVar34;
  long lVar35;
  int iVar36;
  int iVar37;
  float fVar38;
  float fVar39;
  int iVar40;
  float fVar41;
  float fVar42;
  int iVar43;
  float fVar44;
  float fVar45;
  undefined1 auVar46 [12];
  undefined1 auVar47 [16];
  float fVar49;
  undefined1 auVar48 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float *local_300;
  undefined1 auStack_280 [16];
  undefined1 auStack_270 [528];
  
  iVar30 = *(int *)(param_1 + 0x88);
  if (iVar30 < 4) {
    FUN_032260f8(auStack_280,auStack_270,0x200);
    FUN_0322b1e0(auStack_280,"Internal error");
    iVar18 = FUN_03226f50(0x642cf968,auStack_270,
                          "../..\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h"
                          ,0x2b5);
    if (iVar18 != 0) {
      CallSupervisor(0x26);
    }
    FUN_032261b0(auStack_280);
    param_1[0x120] = '\0';
    param_1[0x121] = '\0';
    param_1[0x122] = '\0';
    param_1[0x123] = '\0';
    param_1[0x124] = '\0';
    param_1[0x125] = '\0';
    param_1[0x126] = '\0';
    param_1[0x127] = '\0';
    param_1[0x128] = '\0';
    param_1[0x129] = '\0';
    param_1[0x12a] = '\0';
    param_1[299] = '\0';
    param_1[300] = '\0';
    param_1[0x12d] = '\0';
    param_1[0x12e] = '\0';
    param_1[0x12f] = '\0';
    if (iVar30 < 1) {
      return 0;
    }
  }
  else {
    param_1[0x120] = '\0';
    param_1[0x121] = '\0';
    param_1[0x122] = '\0';
    param_1[0x123] = '\0';
    param_1[0x124] = '\0';
    param_1[0x125] = '\0';
    param_1[0x126] = '\0';
    param_1[0x127] = '\0';
    param_1[0x128] = '\0';
    param_1[0x129] = '\0';
    param_1[0x12a] = '\0';
    param_1[299] = '\0';
    param_1[300] = '\0';
    param_1[0x12d] = '\0';
    param_1[0x12e] = '\0';
    param_1[0x12f] = '\0';
  }
  local_300 = (float *)(param_1 + 0x120);
  pcVar2 = param_1 + 0x50;
  bVar25 = false;
  pcVar3 = param_1 + 0x68;
  iVar18 = 0;
  do {
    iVar36 = iVar18 + 1;
    if (iVar36 < iVar30) {
      lVar32 = *(long *)(param_1 + 0x80);
      lVar4 = lVar32 + (long)iVar18 * 0x40;
      pauVar1 = (undefined1 (*) [12])(lVar4 + 0x20);
      uVar31 = *(undefined8 *)(lVar4 + 0x28);
      iVar43 = (int)uVar31;
      uVar33 = *(undefined8 *)*pauVar1;
      iVar37 = (int)uVar33;
      iVar40 = (int)((ulong)uVar33 >> 0x20);
      auVar47._12_4_ = (int)((ulong)uVar31 >> 0x20);
      auVar47._0_12_ = *pauVar1;
      auVar47 = NEON_scvtf(auVar47,4);
      iVar29 = iVar18;
      while( true ) {
        iVar34 = iVar36;
        iVar29 = iVar29 + 2;
        if (iVar29 < iVar30) {
          lVar4 = lVar32 + (long)iVar34 * 0x40;
          while( true ) {
            iVar7 = *(int *)*(undefined1 (*) [16])(lVar4 + 0x20) - iVar37;
            lVar35 = lVar32 + (long)iVar29 * 0x40;
            iVar28 = *(int *)(lVar4 + 0x24) - iVar40;
            iVar27 = *(int *)*(undefined1 (*) [16])(lVar35 + 0x20) - iVar37;
            iVar8 = *(int *)(lVar4 + 0x28) - iVar43;
            iVar26 = *(int *)(lVar35 + 0x24) - iVar40;
            iVar9 = *(int *)(lVar35 + 0x28) - iVar43;
            iVar36 = iVar9 * iVar28 - iVar26 * iVar8;
            iVar8 = iVar27 * iVar8 - iVar9 * iVar7;
            iVar7 = iVar26 * iVar7 - iVar27 * iVar28;
            if ((iVar8 != 0 || iVar7 != 0) || iVar36 != 0) {
              if (*param_1 != '\0') {
                auVar51 = NEON_scvtf(*(undefined1 (*) [16])(lVar4 + 0x20),4);
                fVar54 = *(float *)(param_1 + 0x150);
                fVar39 = *(float *)(param_1 + 0x154);
                fVar42 = *(float *)(param_1 + 0x158);
                fVar49 = *(float *)(param_1 + 0x15c);
                auVar55 = NEON_scvtf(*(undefined1 (*) [16])(lVar35 + 0x20),4);
                fVar14 = *(float *)(param_1 + 0x130);
                fVar15 = *(float *)(param_1 + 0x134);
                fVar16 = *(float *)(param_1 + 0x138);
                fVar17 = *(float *)(param_1 + 0x13c);
                fVar38 = fVar14 + auVar47._0_4_ * fVar54;
                fVar41 = fVar15 + auVar47._4_4_ * fVar39;
                fVar44 = fVar16 + auVar47._8_4_ * fVar42;
                fVar45 = fVar17 + fVar49 * 0.0;
                auVar53._0_4_ = (fVar14 + fVar54 * auVar51._0_4_) - fVar38;
                auVar53._4_4_ = (fVar15 + fVar39 * auVar51._4_4_) - fVar41;
                auVar53._8_4_ = (fVar16 + fVar42 * auVar51._8_4_) - fVar44;
                auVar53._12_4_ = (fVar17 + fVar49 * 0.0) - fVar45;
                auVar52 = NEON_ext(auVar53,auVar53,4,1);
                auVar51._0_4_ = (fVar14 + fVar54 * auVar55._0_4_) - fVar38;
                auVar51._4_4_ = (fVar15 + fVar39 * auVar55._4_4_) - fVar41;
                auVar51._8_4_ = (fVar16 + fVar42 * auVar55._8_4_) - fVar44;
                auVar51._12_4_ = (fVar17 + fVar49 * 0.0) - fVar45;
                auVar56 = NEON_ext(auVar51,auVar51,4,1);
                auVar55._0_4_ = auVar53._0_4_ * auVar56._0_4_ - auVar51._0_4_ * auVar52._0_4_;
                auVar55._4_4_ = auVar53._4_4_ * auVar56._4_4_ - auVar51._4_4_ * auVar52._4_4_;
                auVar55._8_4_ = auVar53._8_4_ * auVar51._0_4_ - auVar51._8_4_ * auVar53._0_4_;
                auVar55._12_4_ = auVar53._12_4_ * auVar51._4_4_ - auVar51._12_4_ * auVar53._4_4_;
                auVar51 = NEON_ext(auVar55,auVar55,4,1);
                fVar39 = auVar51._0_4_;
                fVar42 = auVar51._4_4_;
                fVar54 = fVar39 * fVar39 + fVar42 * fVar42 + auVar55._0_4_ * auVar55._0_4_;
                auVar46 = SUB1612(ZEXT816(0),0);
                if (fVar54 != 0.0) {
                  fVar54 = SQRT(fVar54);
                  auVar46._0_4_ = fVar39 / fVar54;
                  auVar46._4_4_ =
                       fVar42 / SQRT(fVar39 * fVar39 + fVar42 * fVar42 +
                                     auVar55._0_4_ * auVar55._0_4_);
                  auVar46._8_4_ = auVar55._0_4_ / fVar54;
                }
                fVar39 = auVar46._0_4_;
                fVar42 = auVar46._4_4_;
                fVar49 = auVar46._8_4_;
                fVar54 = -(fVar38 * fVar39 + fVar41 * fVar42 + fVar44 * fVar49);
                auVar48._12_4_ = fVar54;
                auVar48._0_12_ = auVar46;
                fVar39 = fVar39 * fVar39;
                fVar42 = fVar42 * fVar42;
                auVar52._4_4_ = fVar42;
                auVar52._0_4_ = fVar39;
                auVar52._8_4_ = fVar49 * fVar49;
                auVar52._12_4_ = fVar54 * fVar54;
                auVar56._4_4_ = fVar42;
                auVar56._0_4_ = fVar39;
                auVar56._8_4_ = fVar49 * fVar49;
                auVar56._12_4_ = fVar54 * fVar54;
                auVar51 = NEON_ext(auVar52,auVar56,8,1);
                auVar50._0_4_ = *local_300 * *local_300;
                auVar50._4_4_ = *(float *)(param_1 + 0x124) * *(float *)(param_1 + 0x124);
                auVar50._8_4_ = *(float *)(param_1 + 0x128) * *(float *)(param_1 + 0x128);
                auVar50._12_4_ = *(float *)(param_1 + 300) * *(float *)(param_1 + 300);
                auVar53 = NEON_ext(auVar50,auVar50,8,1);
                if (auVar50._0_4_ + auVar50._4_4_ + auVar53._0_4_ < fVar39 + fVar42 + auVar51._0_4_)
                {
                  *(long *)(param_1 + 0x128) = auVar48._8_8_;
                  *(long *)local_300 = auVar46._0_8_;
                }
              }
              iVar28 = iVar29 + 1;
              if (iVar28 < iVar30) {
                while( true ) {
                  lVar35 = (long)iVar28;
                  lVar32 = lVar32 + lVar35 * 0x40;
                  lVar32 = ((long)*(int *)(lVar32 + 0x20) * (long)iVar36 -
                           ((long)iVar7 * (long)iVar43 + (long)iVar8 * (long)iVar40 +
                           (long)iVar36 * (long)iVar37)) +
                           (long)*(int *)(lVar32 + 0x24) * (long)iVar8 +
                           (long)*(int *)(lVar32 + 0x28) * (long)iVar7;
                  if (lVar32 != 0) {
                    lVar19 = FUN_0086075c(pcVar2);
                    lVar20 = FUN_0086075c(pcVar2);
                    lVar21 = FUN_0086075c(pcVar2);
                    lVar22 = FUN_0086075c(pcVar2);
                    lVar23 = *(long *)(param_1 + 0x80) + (long)iVar18 * 0x40;
                    uVar33 = *(undefined8 *)(lVar23 + 0x10);
                    *(undefined8 *)(lVar19 + 0x18) = *(undefined8 *)(lVar23 + 0x18);
                    *(undefined8 *)(lVar19 + 0x10) = uVar33;
                    uVar33 = *(undefined8 *)(lVar23 + 0x20);
                    uVar31 = *(undefined8 *)(lVar23 + 0x30);
                    *(undefined8 *)(lVar19 + 0x28) = *(undefined8 *)(lVar23 + 0x28);
                    *(undefined8 *)(lVar19 + 0x30) = uVar31;
                    *(undefined8 *)(lVar19 + 0x20) = uVar33;
                    *(undefined4 *)(lVar19 + 0x30) = 0;
                    lVar23 = *(long *)(param_1 + 0x80) + (long)iVar34 * 0x40;
                    uVar33 = *(undefined8 *)(lVar23 + 0x10);
                    *(undefined8 *)(lVar20 + 0x18) = *(undefined8 *)(lVar23 + 0x18);
                    *(undefined8 *)(lVar20 + 0x10) = uVar33;
                    uVar33 = *(undefined8 *)(lVar23 + 0x20);
                    uVar31 = *(undefined8 *)(lVar23 + 0x30);
                    *(undefined8 *)(lVar20 + 0x28) = *(undefined8 *)(lVar23 + 0x28);
                    *(undefined8 *)(lVar20 + 0x30) = uVar31;
                    *(undefined8 *)(lVar20 + 0x20) = uVar33;
                    *(undefined4 *)(lVar20 + 0x30) = 0;
                    lVar23 = *(long *)(param_1 + 0x80) + (long)iVar29 * 0x40;
                    uVar33 = *(undefined8 *)(lVar23 + 0x10);
                    *(undefined8 *)(lVar21 + 0x18) = *(undefined8 *)(lVar23 + 0x18);
                    *(undefined8 *)(lVar21 + 0x10) = uVar33;
                    uVar33 = *(undefined8 *)(lVar23 + 0x20);
                    uVar31 = *(undefined8 *)(lVar23 + 0x30);
                    *(undefined8 *)(lVar21 + 0x28) = *(undefined8 *)(lVar23 + 0x28);
                    *(undefined8 *)(lVar21 + 0x30) = uVar31;
                    *(undefined8 *)(lVar21 + 0x20) = uVar33;
                    *(undefined4 *)(lVar21 + 0x30) = 0;
                    lVar23 = *(long *)(param_1 + 0x80) + lVar35 * 0x40;
                    uVar33 = *(undefined8 *)(lVar23 + 0x10);
                    lVar5 = lVar20;
                    if (lVar32 < 1) {
                      lVar5 = lVar19;
                    }
                    *(undefined8 *)(lVar22 + 0x18) = *(undefined8 *)(lVar23 + 0x18);
                    *(undefined8 *)(lVar22 + 0x10) = uVar33;
                    uVar33 = *(undefined8 *)(lVar23 + 0x20);
                    uVar31 = *(undefined8 *)(lVar23 + 0x30);
                    *(undefined8 *)(lVar22 + 0x28) = *(undefined8 *)(lVar23 + 0x28);
                    *(undefined8 *)(lVar22 + 0x30) = uVar31;
                    *(undefined8 *)(lVar22 + 0x20) = uVar33;
                    *(undefined4 *)(lVar22 + 0x30) = 0;
                    if (lVar32 < 1) {
                      lVar19 = lVar20;
                    }
                    lVar32 = FUN_00861334(pcVar3);
                    lVar23 = FUN_00861334(pcVar3);
                    lVar20 = FUN_00861334(pcVar3);
                    lVar24 = FUN_00861334(pcVar3);
                    *(long *)(lVar32 + 0x10) = lVar5;
                    *(long *)(lVar32 + 0x18) = lVar19;
                    *(long *)(lVar32 + 0x20) = lVar21;
                    *(undefined8 *)(lVar32 + 0x60) = 0xffffffff00000000;
                    *(int *)(lVar5 + 0x30) = *(int *)(lVar5 + 0x30) + 1;
                    *(int *)(lVar19 + 0x30) = *(int *)(lVar19 + 0x30) + 1;
                    *(int *)(lVar21 + 0x30) = *(int *)(lVar21 + 0x30) + 1;
                    iVar9 = *(int *)(lVar19 + 0x20) - *(int *)(lVar5 + 0x20);
                    iVar10 = *(int *)(lVar21 + 0x20) - *(int *)(lVar5 + 0x20);
                    iVar26 = *(int *)(lVar19 + 0x28) - *(int *)(lVar5 + 0x28);
                    iVar11 = *(int *)(lVar19 + 0x24) - *(int *)(lVar5 + 0x24);
                    iVar12 = *(int *)(lVar21 + 0x24) - *(int *)(lVar5 + 0x24);
                    iVar13 = *(int *)(lVar21 + 0x28) - *(int *)(lVar5 + 0x28);
                    iVar27 = iVar13 * iVar11 - iVar12 * iVar26;
                    iVar26 = iVar10 * iVar26 - iVar13 * iVar9;
                    iVar9 = iVar12 * iVar9 - iVar10 * iVar11;
                    *(int *)(lVar32 + 0x40) = iVar27;
                    *(int *)(lVar32 + 0x44) = iVar26;
                    *(int *)(lVar32 + 0x48) = iVar9;
                    *(undefined8 *)(lVar32 + 0x50) = 0;
                    if ((iVar26 != 0 || iVar9 != 0) || iVar27 != 0) {
                      *(long *)(lVar32 + 0x50) =
                           -((long)*(int *)(lVar5 + 0x24) * (long)iVar26 +
                             (long)*(int *)(lVar5 + 0x20) * (long)iVar27 +
                            (long)*(int *)(lVar5 + 0x28) * (long)iVar9);
                    }
                    *(long *)(lVar23 + 0x10) = lVar5;
                    *(long *)(lVar23 + 0x18) = lVar22;
                    *(long *)(lVar23 + 0x20) = lVar19;
                    *(undefined8 *)(lVar23 + 0x60) = 0xffffffff00000000;
                    *(int *)(lVar5 + 0x30) = *(int *)(lVar5 + 0x30) + 1;
                    *(int *)(lVar22 + 0x30) = *(int *)(lVar22 + 0x30) + 1;
                    *(int *)(lVar19 + 0x30) = *(int *)(lVar19 + 0x30) + 1;
                    iVar9 = *(int *)(lVar22 + 0x20) - *(int *)(lVar5 + 0x20);
                    iVar10 = *(int *)(lVar19 + 0x20) - *(int *)(lVar5 + 0x20);
                    iVar26 = *(int *)(lVar22 + 0x28) - *(int *)(lVar5 + 0x28);
                    iVar11 = *(int *)(lVar22 + 0x24) - *(int *)(lVar5 + 0x24);
                    iVar12 = *(int *)(lVar19 + 0x24) - *(int *)(lVar5 + 0x24);
                    iVar13 = *(int *)(lVar19 + 0x28) - *(int *)(lVar5 + 0x28);
                    iVar27 = iVar13 * iVar11 - iVar12 * iVar26;
                    iVar26 = iVar10 * iVar26 - iVar13 * iVar9;
                    iVar9 = iVar12 * iVar9 - iVar10 * iVar11;
                    *(int *)(lVar23 + 0x40) = iVar27;
                    *(int *)(lVar23 + 0x44) = iVar26;
                    *(int *)(lVar23 + 0x48) = iVar9;
                    *(undefined8 *)(lVar23 + 0x50) = 0;
                    if ((iVar26 != 0 || iVar9 != 0) || iVar27 != 0) {
                      *(long *)(lVar23 + 0x50) =
                           -((long)*(int *)(lVar5 + 0x24) * (long)iVar26 +
                             (long)*(int *)(lVar5 + 0x20) * (long)iVar27 +
                            (long)*(int *)(lVar5 + 0x28) * (long)iVar9);
                    }
                    *(long *)(lVar20 + 0x10) = lVar5;
                    *(long *)(lVar20 + 0x18) = lVar21;
                    *(long *)(lVar20 + 0x20) = lVar22;
                    *(undefined8 *)(lVar20 + 0x60) = 0xffffffff00000000;
                    *(int *)(lVar5 + 0x30) = *(int *)(lVar5 + 0x30) + 1;
                    *(int *)(lVar21 + 0x30) = *(int *)(lVar21 + 0x30) + 1;
                    *(int *)(lVar22 + 0x30) = *(int *)(lVar22 + 0x30) + 1;
                    iVar9 = *(int *)(lVar21 + 0x20) - *(int *)(lVar5 + 0x20);
                    iVar10 = *(int *)(lVar22 + 0x20) - *(int *)(lVar5 + 0x20);
                    iVar26 = *(int *)(lVar21 + 0x28) - *(int *)(lVar5 + 0x28);
                    iVar11 = *(int *)(lVar21 + 0x24) - *(int *)(lVar5 + 0x24);
                    iVar12 = *(int *)(lVar22 + 0x24) - *(int *)(lVar5 + 0x24);
                    iVar13 = *(int *)(lVar22 + 0x28) - *(int *)(lVar5 + 0x28);
                    iVar27 = iVar13 * iVar11 - iVar12 * iVar26;
                    iVar26 = iVar10 * iVar26 - iVar13 * iVar9;
                    *(int *)(lVar20 + 0x40) = iVar27;
                    *(int *)(lVar20 + 0x44) = iVar26;
                    iVar9 = iVar12 * iVar9 - iVar10 * iVar11;
                    *(int *)(lVar20 + 0x48) = iVar9;
                    *(undefined8 *)(lVar20 + 0x50) = 0;
                    if ((iVar26 != 0 || iVar9 != 0) || iVar27 != 0) {
                      *(long *)(lVar20 + 0x50) =
                           -((long)*(int *)(lVar5 + 0x24) * (long)iVar26 +
                             (long)*(int *)(lVar5 + 0x20) * (long)iVar27 +
                            (long)*(int *)(lVar5 + 0x28) * (long)iVar9);
                    }
                    *(long *)(lVar24 + 0x10) = lVar19;
                    *(long *)(lVar24 + 0x18) = lVar22;
                    *(long *)(lVar24 + 0x20) = lVar21;
                    *(undefined8 *)(lVar24 + 0x60) = 0xffffffff00000000;
                    *(int *)(lVar19 + 0x30) = *(int *)(lVar19 + 0x30) + 1;
                    *(int *)(lVar22 + 0x30) = *(int *)(lVar22 + 0x30) + 1;
                    *(int *)(lVar21 + 0x30) = *(int *)(lVar21 + 0x30) + 1;
                    iVar9 = *(int *)(lVar22 + 0x20) - *(int *)(lVar19 + 0x20);
                    iVar10 = *(int *)(lVar21 + 0x20) - *(int *)(lVar19 + 0x20);
                    iVar26 = *(int *)(lVar22 + 0x28) - *(int *)(lVar19 + 0x28);
                    iVar11 = *(int *)(lVar22 + 0x24) - *(int *)(lVar19 + 0x24);
                    iVar12 = *(int *)(lVar21 + 0x24) - *(int *)(lVar19 + 0x24);
                    iVar13 = *(int *)(lVar21 + 0x28) - *(int *)(lVar19 + 0x28);
                    iVar27 = iVar13 * iVar11 - iVar12 * iVar26;
                    iVar26 = iVar10 * iVar26 - iVar13 * iVar9;
                    iVar9 = iVar12 * iVar9 - iVar10 * iVar11;
                    *(int *)(lVar24 + 0x40) = iVar27;
                    *(int *)(lVar24 + 0x44) = iVar26;
                    *(int *)(lVar24 + 0x48) = iVar9;
                    *(undefined8 *)(lVar24 + 0x50) = 0;
                    if ((iVar26 != 0 || iVar9 != 0) || iVar27 != 0) {
                      *(long *)(lVar24 + 0x50) =
                           -((long)*(int *)(lVar19 + 0x24) * (long)iVar26 +
                             (long)*(int *)(lVar19 + 0x20) * (long)iVar27 +
                            (long)*(int *)(lVar19 + 0x28) * (long)iVar9);
                    }
                    *(long *)(lVar32 + 0x28) = lVar23 + 2;
                    *(long *)(lVar23 + 0x38) = lVar32;
                    *(long *)(lVar32 + 0x30) = lVar24 + 2;
                    *(long *)(lVar24 + 0x38) = lVar32 + 1;
                    *(long *)(lVar32 + 0x38) = lVar20;
                    *(long *)(lVar20 + 0x28) = lVar32 + 2;
                    *(long *)(lVar23 + 0x28) = lVar20 + 2;
                    *(long *)(lVar20 + 0x30) = lVar24 + 1;
                    *(long *)(lVar20 + 0x38) = lVar23;
                    *(long *)(lVar24 + 0x28) = lVar23 + 1;
                    *(long *)(lVar24 + 0x30) = lVar20 + 1;
                    *(long *)(lVar23 + 0x30) = lVar24;
                    iVar27 = *(int *)(param_1 + 0x88);
                    iVar26 = (int)((long)iVar27 + -1);
                    *(int *)(param_1 + 0x88) = iVar26;
                    if (iVar26 != iVar28) {
                      lVar32 = *(long *)(param_1 + 0x80) + ((long)iVar27 + -1) * 0x40;
                      lVar35 = *(long *)(param_1 + 0x80) + lVar35 * 0x40;
                      uVar33 = *(undefined8 *)(lVar32 + 0x18);
                      *(undefined8 *)(lVar35 + 0x28) = *(undefined8 *)(lVar32 + 0x28);
                      uVar31 = *(undefined8 *)(lVar32 + 0x20);
                      *(undefined8 *)(lVar35 + 0x30) = *(undefined8 *)(lVar32 + 0x30);
                      *(undefined8 *)(lVar35 + 0x18) = uVar33;
                      *(undefined8 *)(lVar35 + 0x20) = uVar31;
                      *(undefined8 *)(lVar35 + 0x10) = *(undefined8 *)(lVar32 + 0x10);
                      iVar28 = *(int *)(param_1 + 0x88);
                    }
                    iVar27 = (int)((long)iVar28 + -1);
                    *(int *)(param_1 + 0x88) = iVar27;
                    if (iVar27 != iVar29) {
                      lVar32 = *(long *)(param_1 + 0x80) + ((long)iVar28 + -1) * 0x40;
                      lVar35 = *(long *)(param_1 + 0x80) + (long)iVar29 * 0x40;
                      uVar33 = *(undefined8 *)(lVar32 + 0x18);
                      *(undefined8 *)(lVar35 + 0x28) = *(undefined8 *)(lVar32 + 0x28);
                      uVar31 = *(undefined8 *)(lVar32 + 0x20);
                      *(undefined8 *)(lVar35 + 0x30) = *(undefined8 *)(lVar32 + 0x30);
                      *(undefined8 *)(lVar35 + 0x18) = uVar33;
                      *(undefined8 *)(lVar35 + 0x20) = uVar31;
                      *(undefined8 *)(lVar35 + 0x10) = *(undefined8 *)(lVar32 + 0x10);
                      iVar29 = *(int *)(param_1 + 0x88);
                    }
                    iVar28 = (int)((long)iVar29 + -1);
                    *(int *)(param_1 + 0x88) = iVar28;
                    if (iVar28 != iVar34) {
                      lVar32 = *(long *)(param_1 + 0x80) + ((long)iVar29 + -1) * 0x40;
                      lVar35 = *(long *)(param_1 + 0x80) + (long)iVar34 * 0x40;
                      uVar33 = *(undefined8 *)(lVar32 + 0x18);
                      *(undefined8 *)(lVar35 + 0x28) = *(undefined8 *)(lVar32 + 0x28);
                      uVar31 = *(undefined8 *)(lVar32 + 0x20);
                      *(undefined8 *)(lVar35 + 0x30) = *(undefined8 *)(lVar32 + 0x30);
                      *(undefined8 *)(lVar35 + 0x18) = uVar33;
                      *(undefined8 *)(lVar35 + 0x20) = uVar31;
                      *(undefined8 *)(lVar35 + 0x10) = *(undefined8 *)(lVar32 + 0x10);
                      iVar34 = *(int *)(param_1 + 0x88);
                    }
                    iVar29 = (int)((long)iVar34 + -1);
                    *(int *)(param_1 + 0x88) = iVar29;
                    if (iVar29 != iVar18) {
                      lVar32 = *(long *)(param_1 + 0x80) + (long)iVar18 * 0x40;
                      lVar35 = *(long *)(param_1 + 0x80) + ((long)iVar34 + -1) * 0x40;
                      uVar33 = *(undefined8 *)(lVar35 + 0x18);
                      uVar31 = *(undefined8 *)(lVar35 + 0x20);
                      uVar6 = *(undefined8 *)(lVar35 + 0x30);
                      *(undefined8 *)(lVar32 + 0x28) = *(undefined8 *)(lVar35 + 0x28);
                      *(undefined8 *)(lVar32 + 0x30) = uVar6;
                      *(undefined8 *)(lVar32 + 0x18) = uVar33;
                      *(undefined8 *)(lVar32 + 0x20) = uVar31;
                      *(undefined8 *)(lVar32 + 0x10) = *(undefined8 *)(lVar35 + 0x10);
                    }
                    bVar25 = true;
                    iVar18 = iVar30;
                    iVar34 = iVar30;
                    iVar29 = iVar30;
                    iVar28 = iVar30;
                  }
                  iVar28 = iVar28 + 1;
                  if (iVar30 <= iVar28) break;
                  lVar32 = *(long *)(param_1 + 0x80);
                }
              }
              if (!bVar25) {
                return 0;
              }
              bVar25 = true;
            }
            iVar29 = iVar29 + 1;
            if (iVar30 <= iVar29) break;
            lVar32 = *(long *)(param_1 + 0x80);
          }
        }
        if (iVar30 <= iVar34 + 1) break;
        lVar32 = *(long *)(param_1 + 0x80);
        iVar36 = iVar34 + 1;
        iVar29 = iVar34;
      }
      iVar36 = iVar18 + 1;
    }
    iVar18 = iVar36;
    if (iVar30 <= iVar36) {
      if (bVar25) {
        iVar30 = *(int *)(param_1 + 0x88);
        if (0 < iVar30) {
          do {
            FUN_0086151c(param_1,*(long *)(param_1 + 0x80) + (long)(iVar30 + -1) * 0x40);
            iVar18 = *(int *)(param_1 + 0x88);
            iVar30 = iVar18 + -1;
            *(int *)(param_1 + 0x88) = iVar30;
          } while (iVar30 != 0 && 0 < iVar18);
        }
        param_1[0x88] = '\0';
        param_1[0x89] = '\0';
        param_1[0x8a] = '\0';
        param_1[0x8b] = '\0';
        if ((-1 < (int)*(uint *)(param_1 + 0x8c)) && (*(long *)(param_1 + 0x80) != 0)) {
          (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                    (PTR_PTR_047d1a50,*(long *)(param_1 + 0x80),
                     (ulong)*(uint *)(param_1 + 0x8c) << 6);
        }
        param_1[0x80] = '\0';
        param_1[0x81] = '\0';
        param_1[0x82] = '\0';
        param_1[0x83] = '\0';
        param_1[0x84] = '\0';
        param_1[0x85] = '\0';
        param_1[0x86] = '\0';
        param_1[0x87] = '\0';
        param_1[0x8c] = '\0';
        param_1[0x8d] = '\0';
        param_1[0x8e] = '\0';
        param_1[0x8f] = -0x80;
        return 1;
      }
      return 0;
    }
  } while( true );
}


