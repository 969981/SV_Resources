/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0324f92c; name: FUN_0324f92c
 */


void FUN_0324f92c(long param_1,float *param_2,byte *param_3)

{
  long lVar1;
  char cVar2;
  char cVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined *puVar6;
  int iVar7;
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  ulong uVar11;
  float *pfVar12;
  int iVar13;
  float *pfVar14;
  float fVar15;
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  uint uVar18;
  float fVar21;
  uint uVar22;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uVar23;
  undefined1 auVar24 [12];
  undefined1 auVar25 [12];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [12];
  undefined1 auVar31 [12];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [12];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  uint uVar42;
  uint uVar43;
  undefined1 auVar44 [12];
  uint uVar50;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  uint uVar51;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  undefined1 auVar47 [16];
  uint uVar52;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  uint uVar57;
  float fVar58;
  uint uVar62;
  uint uVar64;
  undefined1 auVar59 [16];
  float fVar63;
  float fVar65;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  uint uVar66;
  uint uVar68;
  float fVar69;
  uint uVar70;
  float fVar71;
  undefined1 auVar67 [16];
  byte bVar72;
  byte bVar73;
  byte bVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  undefined1 uVar78;
  undefined1 uVar79;
  undefined1 uVar80;
  undefined1 uVar81;
  undefined8 uVar82;
  undefined1 local_2a0 [16];
  undefined1 local_290 [16];
  undefined1 local_280 [16];
  undefined1 local_270 [16];
  undefined1 auStack_260 [448];
  undefined *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined1 auStack_60 [48];
  
  puVar6 = PTR_DAT_047d1a18;
  iVar7 = *(int *)(param_1 + 0xc);
  if (iVar7 == 2) {
    FUN_03250a9c(param_1,param_2,auStack_260,auStack_60,2);
    FUN_03250a9c(param_1,auStack_260,param_3,param_3 + 0x30,1);
    FUN_03250a9c(param_1,auStack_60,param_3 + 0x60,param_3 + 0x90,1);
    return;
  }
  if (iVar7 == 1) {
    FUN_03250740(param_1,param_2,auStack_260,auStack_60,2);
    FUN_03250740(param_1,auStack_260,param_3,param_3 + 0x30,1);
    FUN_03250740(param_1,auStack_60,param_3 + 0x60,param_3 + 0x90,1);
    return;
  }
  if (iVar7 != 0) {
    local_90 = 1;
    local_88 = 0;
    local_80 = auStack_260;
    local_a0 = PTR_DAT_047e34b8 + 0x10;
    local_98 = 0xffffffff;
    local_68 = 0;
    local_78 = 0;
    local_70 = 0x1bf;
    memset(auStack_260,0,0x1c0);
    FUN_0322bd4c(&local_a0,"Partition method not implemented",0x20);
    iVar7 = FUN_03226f50(0x4b23e9b2,auStack_260,
                         "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Geometry/Collide/DataStructures/SimdTree/hkcdSimdTreeInternals.cpp"
                         ,0x753);
    if (iVar7 == 0) {
      return;
    }
    CallSupervisor(0x26);
    return;
  }
  pfVar12 = param_2 + 4;
  uVar23 = CONCAT44(param_2[5] - param_2[1],*pfVar12 - *param_2);
  fVar21 = param_2[6] - param_2[2];
  uVar23 = NEON_fmaxp(uVar23,uVar23,4);
  uVar23 = NEON_fmax(CONCAT44(fVar21,fVar21),uVar23,4);
  cVar2 = PTR_DAT_047d1a18
          [(-(uint)((float)((ulong)uVar23 >> 0x20) <= param_2[5] - param_2[1]) & 2) +
           (uint)((float)uVar23 <= *pfVar12 - *param_2) | -(uint)((float)uVar23 <= fVar21) & 4];
  if (cVar2 == '\0') {
    pfVar14 = param_2;
  }
  else if (cVar2 == '\x01') {
    pfVar14 = param_2 + 1;
    pfVar12 = param_2 + 5;
  }
  else if (cVar2 == '\x02') {
    pfVar14 = param_2 + 2;
    pfVar12 = param_2 + 6;
  }
  else {
    pfVar14 = param_2 + 3;
    pfVar12 = param_2 + 7;
  }
  fVar21 = (*pfVar14 + *pfVar12) * 0.5;
  auVar26._8_4_ = 0x807fffff;
  auVar26._0_8_ = 0x807fffff807fffff;
  auVar26._12_4_ = 0x807fffff;
  pauVar17 = (undefined1 (*) [16])(*(long *)(param_1 + 0x28) + (long)(int)param_2[8] * 0x10);
  pauVar9 = pauVar17 + (int)param_2[9];
  auVar67._8_8_ = auVar26._8_8_;
  auVar67._0_8_ = 0x807fffff807fffff;
  auVar32._8_4_ = 0x7f800000;
  auVar32._0_8_ = 0x7f8000007f800000;
  auVar32._12_4_ = 0x7f800000;
  uVar18 = (uint)fVar21 ^ (uint)((int)fVar21 >> 0x1f) >> 1;
  auVar59._8_8_ = auVar32._8_8_;
  auVar59._0_8_ = 0x7f8000007f800000;
  pauVar16 = pauVar17;
  do {
    auVar25 = auVar26._0_12_;
    auVar31 = auVar32._0_12_;
    pauVar9 = pauVar9 + -1;
    if (pauVar9 < pauVar16) {
LAB_0324fa14:
      pauVar8 = pauVar16;
      auVar37 = auVar59;
      auVar45 = auVar67;
    }
    else if (cVar2 == '\0') {
      do {
        auVar4 = *pauVar16;
        pauVar8 = pauVar16;
        auVar37 = auVar59;
        auVar45 = auVar67;
        if ((int)uVar18 <= auVar4._0_4_) break;
        auVar59 = NEON_smin(auVar59,auVar4,4);
        auVar67 = NEON_smax(auVar67,auVar4,4);
        pauVar16 = pauVar16 + 1;
        pauVar8 = pauVar16;
        auVar37 = auVar59;
        auVar45 = auVar67;
      } while (pauVar16 <= pauVar9);
    }
    else if (cVar2 == '\x01') {
      do {
        auVar4 = *pauVar16;
        pauVar8 = pauVar16;
        auVar37 = auVar59;
        auVar45 = auVar67;
        if ((int)uVar18 <= auVar4._4_4_) break;
        auVar59 = NEON_smin(auVar59,auVar4,4);
        auVar67 = NEON_smax(auVar67,auVar4,4);
        pauVar16 = pauVar16 + 1;
        pauVar8 = pauVar16;
        auVar37 = auVar59;
        auVar45 = auVar67;
      } while (pauVar16 <= pauVar9);
    }
    else {
      pauVar10 = pauVar16;
      auVar37 = auVar59;
      auVar45 = auVar67;
      if (cVar2 == '\x02') {
        do {
          auVar4 = *pauVar16;
          pauVar8 = pauVar16;
          auVar37 = auVar59;
          auVar45 = auVar67;
          if ((int)uVar18 <= auVar4._8_4_) break;
          auVar59 = NEON_smin(auVar59,auVar4,4);
          auVar67 = NEON_smax(auVar67,auVar4,4);
          pauVar16 = pauVar16 + 1;
          pauVar8 = pauVar16;
          auVar37 = auVar59;
          auVar45 = auVar67;
        } while (pauVar16 <= pauVar9);
      }
      else {
        do {
          if ((int)uVar18 < 1) goto LAB_0324fa14;
          pauVar8 = pauVar10 + 1;
          uVar23 = *(undefined8 *)(*pauVar10 + 8);
          uVar75 = (undefined1)((ulong)uVar23 >> 8);
          uVar76 = (undefined1)((ulong)uVar23 >> 0x10);
          uVar77 = (undefined1)((ulong)uVar23 >> 0x18);
          uVar78 = (undefined1)((ulong)uVar23 >> 0x20);
          uVar79 = (undefined1)((ulong)uVar23 >> 0x28);
          uVar80 = (undefined1)((ulong)uVar23 >> 0x30);
          uVar81 = (undefined1)((ulong)uVar23 >> 0x38);
          auVar4[9] = uVar75;
          auVar4._0_9_ = *(unkbyte9 *)*pauVar10;
          auVar4[10] = uVar76;
          auVar4[0xb] = uVar77;
          auVar4[0xc] = uVar78;
          auVar4[0xd] = uVar79;
          auVar4[0xe] = uVar80;
          auVar4[0xf] = uVar81;
          auVar37 = NEON_smin(auVar37,auVar4,4);
          auVar5[9] = uVar75;
          auVar5._0_9_ = *(unkbyte9 *)*pauVar10;
          auVar5[10] = uVar76;
          auVar5[0xb] = uVar77;
          auVar5[0xc] = uVar78;
          auVar5[0xd] = uVar79;
          auVar5[0xe] = uVar80;
          auVar5[0xf] = uVar81;
          auVar45 = NEON_smax(auVar45,auVar5,4);
          pauVar10 = pauVar8;
        } while (pauVar8 <= pauVar9);
      }
    }
    auVar30 = auVar45._0_12_;
    auVar24 = auVar37._0_12_;
    if (pauVar9 <= pauVar8) goto LAB_0324fd20;
    switch(cVar2) {
    case '\0':
      while (auVar67 = *pauVar9, (int)uVar18 <= auVar67._0_4_) {
        auVar32 = NEON_smin(auVar32,auVar67,4);
        auVar31 = auVar32._0_12_;
        auVar26 = NEON_smax(auVar26,auVar67,4);
        auVar25 = auVar26._0_12_;
        pauVar9 = pauVar9 + -1;
        if (pauVar9 <= pauVar8) goto LAB_0324fd20;
      }
      break;
    case '\x01':
      while (auVar67 = *pauVar9, (int)uVar18 <= auVar67._4_4_) {
        auVar32 = NEON_smin(auVar32,auVar67,4);
        auVar31 = auVar32._0_12_;
        auVar26 = NEON_smax(auVar26,auVar67,4);
        auVar25 = auVar26._0_12_;
        pauVar9 = pauVar9 + -1;
        if (pauVar9 <= pauVar8) goto LAB_0324fd20;
      }
      break;
    case '\x02':
      while (auVar67 = *pauVar9, (int)uVar18 <= auVar67._8_4_) {
        auVar32 = NEON_smin(auVar32,auVar67,4);
        auVar31 = auVar32._0_12_;
        auVar26 = NEON_smax(auVar26,auVar67,4);
        auVar25 = auVar26._0_12_;
        pauVar9 = pauVar9 + -1;
        if (pauVar9 <= pauVar8) goto LAB_0324fd20;
      }
      break;
    case '\x03':
      while (auVar67 = *pauVar9, (int)uVar18 <= auVar67._12_4_) {
        auVar32 = NEON_smin(auVar32,auVar67,4);
        auVar31 = auVar32._0_12_;
        auVar26 = NEON_smax(auVar26,auVar67,4);
        auVar25 = auVar26._0_12_;
        pauVar9 = pauVar9 + -1;
        if (pauVar9 <= pauVar8) goto LAB_0324fd20;
      }
      break;
    default:
      if ((int)uVar18 < 1) goto LAB_0324fd0c;
      auVar67 = *pauVar9;
    }
    auVar59 = NEON_smin(auVar37,auVar67,4);
    auVar4 = *pauVar8;
    auVar67 = NEON_smax(auVar45,auVar67,4);
    uVar23 = *(undefined8 *)(*pauVar9 + 8);
    auVar32 = NEON_smin(auVar32,auVar4,4);
    *(undefined8 *)*pauVar8 = *(undefined8 *)*pauVar9;
    *(undefined8 *)(*pauVar8 + 8) = uVar23;
    auVar26 = NEON_smax(auVar26,auVar4,4);
    pauVar16 = pauVar8 + 1;
    *(long *)(*pauVar9 + 8) = auVar4._8_8_;
    *(long *)*pauVar9 = auVar4._0_8_;
  } while( true );
LAB_0324fd0c:
  do {
    pauVar16 = pauVar9 + -1;
    auVar32 = NEON_smin(auVar32,*pauVar9,4);
    auVar31 = auVar32._0_12_;
    auVar26 = NEON_smax(auVar26,*pauVar9,4);
    auVar25 = auVar26._0_12_;
    pauVar9 = pauVar16;
  } while (pauVar8 < pauVar16);
LAB_0324fd20:
  fVar21 = param_2[9];
  uVar18 = (uint)((ulong)((long)pauVar8 - (long)pauVar17) >> 4);
  if (((int)uVar18 < 2) || (uVar52 = (int)fVar21 - uVar18, (int)uVar52 < 2)) {
    fVar15 = param_2[8];
    auVar25._8_4_ = 0x807fffff;
    auVar25._0_8_ = 0x807fffff807fffff;
    auVar37._12_4_ = 0x807fffff;
    auVar37._0_12_ = auVar25;
    uVar18 = (int)fVar21 >> 1;
    iVar7 = (int)fVar15 + uVar18;
    auVar31._8_4_ = 0x7f800000;
    auVar31._0_8_ = 0x7f8000007f800000;
    auVar45._12_4_ = 0x7f800000;
    auVar45._0_12_ = auVar31;
    auVar38._8_8_ = auVar45._8_8_;
    auVar38._0_8_ = 0x7f8000007f800000;
    auVar24 = auVar38._0_12_;
    auVar48._8_8_ = auVar37._8_8_;
    auVar48._0_8_ = 0x807fffff807fffff;
    auVar30 = auVar48._0_12_;
    uVar52 = (int)fVar21 - uVar18;
    if (1 < (int)fVar21) {
      lVar1 = *(long *)(param_1 + 0x28) + (long)(int)fVar15 * 0x10;
      uVar57 = uVar18;
      if ((int)uVar18 < 2) {
        uVar57 = 1;
      }
      if ((int)fVar21 < 4) {
        auVar39._8_4_ = 0x7f800000;
        auVar39._0_8_ = 0x7f8000007f800000;
        auVar39._12_4_ = 0x7f800000;
        uVar11 = 0;
        auVar49._8_4_ = 0x807fffff;
        auVar49._0_8_ = 0x807fffff807fffff;
        auVar49._12_4_ = 0x807fffff;
      }
      else {
        auVar39._8_4_ = 0x7f800000;
        auVar39._0_8_ = 0x7f8000007f800000;
        auVar39._12_4_ = 0x7f800000;
        auVar49._8_4_ = 0x807fffff;
        auVar49._0_8_ = 0x807fffff807fffff;
        auVar49._12_4_ = 0x807fffff;
        uVar11 = 0;
        do {
          pauVar16 = (undefined1 (*) [16])(lVar1 + uVar11 * 0x10);
          uVar11 = uVar11 + 2;
          auVar26 = *pauVar16;
          auVar32 = pauVar16[1];
          auVar59 = NEON_smin(auVar39,auVar26,4);
          auVar26 = NEON_smax(auVar49,auVar26,4);
          auVar39 = NEON_smin(auVar59,auVar32,4);
          auVar49 = NEON_smax(auVar26,auVar32,4);
        } while (((ulong)uVar57 & 0x7ffffffe) != uVar11);
      }
      auVar30 = auVar49._0_12_;
      auVar24 = auVar39._0_12_;
      if ((uVar57 & 1) != 0) {
        auVar26 = *(undefined1 (*) [16])(lVar1 + uVar11 * 0x10);
        auVar32 = NEON_smax(auVar49,auVar26,4);
        auVar30 = auVar32._0_12_;
        auVar26 = NEON_smin(auVar39,auVar26,4);
        auVar24 = auVar26._0_12_;
      }
    }
    if (0 < (int)uVar52) {
      lVar1 = *(long *)(param_1 + 0x28) + (long)iVar7 * 0x10;
      if (uVar52 == 1) {
        uVar11 = 0;
        auVar34._8_4_ = 0x7f800000;
        auVar34._0_8_ = 0x7f8000007f800000;
        auVar34._12_4_ = 0x7f800000;
        auVar29._8_4_ = 0x807fffff;
        auVar29._0_8_ = 0x807fffff807fffff;
        auVar29._12_4_ = 0x807fffff;
      }
      else {
        auVar34._8_4_ = 0x7f800000;
        auVar34._0_8_ = 0x7f8000007f800000;
        auVar34._12_4_ = 0x7f800000;
        uVar11 = 0;
        auVar29._8_4_ = 0x807fffff;
        auVar29._0_8_ = 0x807fffff807fffff;
        auVar29._12_4_ = 0x807fffff;
        do {
          pauVar16 = (undefined1 (*) [16])(lVar1 + uVar11 * 0x10);
          uVar11 = uVar11 + 2;
          auVar26 = *pauVar16;
          auVar32 = pauVar16[1];
          auVar59 = NEON_smin(auVar34,auVar26,4);
          auVar26 = NEON_smax(auVar29,auVar26,4);
          auVar34 = NEON_smin(auVar59,auVar32,4);
          auVar29 = NEON_smax(auVar26,auVar32,4);
        } while (((ulong)uVar52 & 0xfffffffe) != uVar11);
      }
      auVar25 = auVar29._0_12_;
      auVar31 = auVar34._0_12_;
      if ((uVar52 & 1) != 0) {
        auVar26 = *(undefined1 (*) [16])(lVar1 + uVar11 * 0x10);
        auVar32 = NEON_smax(auVar29,auVar26,4);
        auVar25 = auVar32._0_12_;
        auVar26 = NEON_smin(auVar34,auVar26,4);
        auVar31 = auVar26._0_12_;
      }
    }
  }
  else {
    fVar15 = param_2[8];
    iVar7 = (int)fVar15 + uVar18;
  }
  uVar66 = (uint)(auVar30._0_4_ >> 0x1f) >> 1;
  uVar68 = (uint)(auVar30._4_4_ >> 0x1f) >> 1;
  uVar70 = (uint)(auVar30._8_4_ >> 0x1f) >> 1;
  uVar57 = (uint)(auVar24._0_4_ >> 0x1f) >> 1;
  uVar62 = (uint)(auVar24._4_4_ >> 0x1f) >> 1;
  uVar64 = (uint)(auVar24._8_4_ >> 0x1f) >> 1;
  fVar21 = (float)CONCAT13((byte)((char)auVar24[3] >> 7) >> 1 ^ auVar24[3],
                           CONCAT12((byte)(uVar57 >> 0x10) ^ auVar24[2],
                                    CONCAT11((byte)(uVar57 >> 8) ^ auVar24[1],
                                             (byte)uVar57 ^ auVar24[0])));
  auVar36._0_8_ =
       CONCAT17((byte)((char)auVar24[7] >> 7) >> 1 ^ auVar24[7],
                CONCAT16((byte)(uVar62 >> 0x10) ^ auVar24[6],
                         CONCAT15((byte)(uVar62 >> 8) ^ auVar24[5],
                                  CONCAT14((byte)uVar62 ^ auVar24[4],fVar21))));
  auVar36[8] = (byte)uVar64 ^ auVar24[8];
  auVar36[9] = (byte)(uVar64 >> 8) ^ auVar24[9];
  auVar36[10] = (byte)(uVar64 >> 0x10) ^ auVar24[10];
  auVar36[0xb] = (byte)((char)auVar24[0xb] >> 7) >> 1 ^ auVar24[0xb];
  fVar58 = (float)CONCAT13((byte)((char)auVar30[3] >> 7) >> 1 ^ auVar30[3],
                           CONCAT12((byte)(uVar66 >> 0x10) ^ auVar30[2],
                                    CONCAT11((byte)(uVar66 >> 8) ^ auVar30[1],
                                             (byte)uVar66 ^ auVar30[0])));
  auVar44._0_8_ =
       CONCAT17((byte)((char)auVar30[7] >> 7) >> 1 ^ auVar30[7],
                CONCAT16((byte)(uVar68 >> 0x10) ^ auVar30[6],
                         CONCAT15((byte)(uVar68 >> 8) ^ auVar30[5],
                                  CONCAT14((byte)uVar68 ^ auVar30[4],fVar58))));
  auVar44[8] = (byte)uVar70 ^ auVar30[8];
  auVar44[9] = (byte)(uVar70 >> 8) ^ auVar30[9];
  auVar44[10] = (byte)(uVar70 >> 0x10) ^ auVar30[10];
  auVar44[0xb] = (byte)((char)auVar30[0xb] >> 7) >> 1 ^ auVar30[0xb];
  bVar72 = (char)auVar31[3] >> 7;
  bVar73 = (char)auVar31[7] >> 7;
  bVar74 = (char)auVar31[0xb] >> 7;
  fVar58 = fVar58 - fVar21;
  fVar63 = (float)((ulong)auVar44._0_8_ >> 0x20) - (float)((ulong)auVar36._0_8_ >> 0x20);
  uVar23 = CONCAT44(fVar63,fVar58);
  fVar65 = auVar44._8_4_ - auVar36._8_4_;
  uVar57 = CONCAT13(bVar72,CONCAT12(bVar72,CONCAT11(bVar72,bVar72))) >> 1;
  uVar62 = CONCAT13(bVar73,CONCAT12(bVar73,CONCAT11(bVar73,bVar73))) >> 1;
  uVar64 = CONCAT13(bVar74,CONCAT12(bVar74,CONCAT11(bVar74,bVar74))) >> 1;
  uVar66 = (uint)(auVar25._0_4_ >> 0x1f) >> 1;
  uVar68 = (uint)(auVar25._4_4_ >> 0x1f) >> 1;
  uVar70 = (uint)(auVar25._8_4_ >> 0x1f) >> 1;
  fVar69 = (float)CONCAT13(bVar72 >> 1 ^ auVar31[3],
                           CONCAT12((byte)(uVar57 >> 0x10) ^ auVar31[2],
                                    CONCAT11((byte)(uVar57 >> 8) ^ auVar31[1],
                                             (byte)uVar57 ^ auVar31[0])));
  auVar30._0_8_ =
       CONCAT17(bVar73 >> 1 ^ auVar31[7],
                CONCAT16((byte)(uVar62 >> 0x10) ^ auVar31[6],
                         CONCAT15((byte)(uVar62 >> 8) ^ auVar31[5],
                                  CONCAT14((byte)uVar62 ^ auVar31[4],fVar69))));
  auVar30[8] = (byte)uVar64 ^ auVar31[8];
  auVar30[9] = (byte)(uVar64 >> 8) ^ auVar31[9];
  auVar30[10] = (byte)(uVar64 >> 0x10) ^ auVar31[10];
  auVar30[0xb] = bVar74 >> 1 ^ auVar31[0xb];
  uVar23 = NEON_fmaxp(uVar23,uVar23,4);
  fVar21 = (float)CONCAT13((byte)((char)auVar25[3] >> 7) >> 1 ^ auVar25[3],
                           CONCAT12((byte)(uVar66 >> 0x10) ^ auVar25[2],
                                    CONCAT11((byte)(uVar66 >> 8) ^ auVar25[1],
                                             (byte)uVar66 ^ auVar25[0])));
  auVar24._0_8_ =
       CONCAT17((byte)((char)auVar25[7] >> 7) >> 1 ^ auVar25[7],
                CONCAT16((byte)(uVar68 >> 0x10) ^ auVar25[6],
                         CONCAT15((byte)(uVar68 >> 8) ^ auVar25[5],
                                  CONCAT14((byte)uVar68 ^ auVar25[4],fVar21))));
  auVar24[8] = (byte)uVar70 ^ auVar25[8];
  auVar24[9] = (byte)(uVar70 >> 8) ^ auVar25[9];
  auVar24[10] = (byte)(uVar70 >> 0x10) ^ auVar25[10];
  auVar24[0xb] = (byte)((char)auVar25[0xb] >> 7) >> 1 ^ auVar25[0xb];
  fVar21 = fVar21 - fVar69;
  fVar69 = (float)((ulong)auVar24._0_8_ >> 0x20) - (float)((ulong)auVar30._0_8_ >> 0x20);
  uVar82 = CONCAT44(fVar69,fVar21);
  fVar71 = auVar24._8_4_ - auVar30._8_4_;
  uVar23 = NEON_fmax(CONCAT44(fVar65,fVar65),uVar23,4);
  uVar82 = NEON_fmaxp(uVar82,uVar82,4);
  uVar82 = NEON_fmax(CONCAT17((char)((uint)fVar71 >> 0x18),
                              CONCAT16((char)((uint)fVar71 >> 0x10),
                                       CONCAT15((char)((uint)fVar71 >> 8),
                                                CONCAT14(SUB41(fVar71,0),fVar71)))),uVar82,4);
  cVar2 = puVar6[(-(uint)((float)((ulong)uVar23 >> 0x20) <= fVar63) & 2) +
                 (uint)((float)uVar23 <= fVar58) | -(uint)((float)uVar23 <= fVar65) & 4];
  uVar57 = (uint)cVar2;
  cVar3 = puVar6[(-(uint)((float)((ulong)uVar82 >> 0x20) <= fVar69) & 2) +
                 (uint)((float)uVar82 <= fVar21) | -(uint)((float)uVar82 <= fVar71) & 4];
  if (2 < uVar57) {
    uVar57 = 3;
  }
  uVar62 = (uint)cVar3;
  if (2 < uVar62) {
    uVar62 = 3;
  }
  fVar69 = (*(float *)((ulong)local_2a0 | ((ulong)uVar57 & 3) << 2) +
           *(float *)((ulong)local_290 | ((ulong)uVar57 & 3) << 2)) * 0.5;
  auVar27._8_4_ = 0x807fffff;
  auVar27._0_8_ = 0x807fffff807fffff;
  auVar27._12_4_ = 0x807fffff;
  auVar33._8_4_ = 0x7f800000;
  auVar33._0_8_ = 0x7f8000007f800000;
  auVar33._12_4_ = 0x7f800000;
  fVar21 = (*(float *)((ulong)local_280 | ((ulong)uVar62 & 3) << 2) +
           *(float *)((ulong)local_270 | ((ulong)uVar62 & 3) << 2)) * 0.5;
  pauVar16 = (undefined1 (*) [16])(*(long *)(param_1 + 0x28) + (long)(int)fVar15 * 0x10);
  pauVar17 = pauVar16 + (int)uVar18;
  auVar46._8_8_ = auVar33._8_8_;
  auVar46._0_8_ = 0x7f8000007f800000;
  auVar60._8_8_ = auVar27._8_8_;
  auVar60._0_8_ = 0x807fffff807fffff;
  uVar57 = (uint)fVar69 ^ (uint)((int)fVar69 >> 0x1f) >> 1;
  pauVar9 = pauVar16;
  do {
    pauVar17 = pauVar17 + -1;
    if (pauVar17 < pauVar9) {
LAB_0324fea4:
      pauVar8 = pauVar9;
      auVar20 = auVar60;
      auVar40 = auVar46;
    }
    else if (cVar2 == '\0') {
      do {
        auVar26 = *pauVar9;
        pauVar8 = pauVar9;
        auVar20 = auVar60;
        auVar40 = auVar46;
        if ((int)uVar57 <= auVar26._0_4_) break;
        auVar46 = NEON_smin(auVar46,auVar26,4);
        auVar60 = NEON_smax(auVar60,auVar26,4);
        pauVar9 = pauVar9 + 1;
        pauVar8 = pauVar9;
        auVar20 = auVar60;
        auVar40 = auVar46;
      } while (pauVar9 <= pauVar17);
    }
    else if (cVar2 == '\x01') {
      do {
        auVar26 = *pauVar9;
        pauVar8 = pauVar9;
        auVar20 = auVar60;
        auVar40 = auVar46;
        if ((int)uVar57 <= auVar26._4_4_) break;
        auVar46 = NEON_smin(auVar46,auVar26,4);
        auVar60 = NEON_smax(auVar60,auVar26,4);
        pauVar9 = pauVar9 + 1;
        pauVar8 = pauVar9;
        auVar20 = auVar60;
        auVar40 = auVar46;
      } while (pauVar9 <= pauVar17);
    }
    else {
      pauVar10 = pauVar9;
      auVar20 = auVar60;
      auVar40 = auVar46;
      if (cVar2 == '\x02') {
        do {
          auVar26 = *pauVar9;
          pauVar8 = pauVar9;
          auVar20 = auVar60;
          auVar40 = auVar46;
          if ((int)uVar57 <= auVar26._8_4_) break;
          auVar46 = NEON_smin(auVar46,auVar26,4);
          auVar60 = NEON_smax(auVar60,auVar26,4);
          pauVar9 = pauVar9 + 1;
          pauVar8 = pauVar9;
          auVar20 = auVar60;
          auVar40 = auVar46;
        } while (pauVar9 <= pauVar17);
      }
      else {
        do {
          if ((int)uVar57 < 1) goto LAB_0324fea4;
          pauVar8 = pauVar10 + 1;
          auVar40 = NEON_smin(auVar40,*pauVar10,4);
          auVar20 = NEON_smax(auVar20,*pauVar10,4);
          pauVar10 = pauVar8;
        } while (pauVar8 <= pauVar17);
      }
    }
    if (pauVar17 <= pauVar8) goto LAB_03250094;
    switch(cVar2) {
    case '\0':
      while (auVar26 = *pauVar17, (int)uVar57 <= auVar26._0_4_) {
        auVar33 = NEON_smin(auVar33,auVar26,4);
        auVar27 = NEON_smax(auVar27,auVar26,4);
        pauVar17 = pauVar17 + -1;
        if (pauVar17 <= pauVar8) goto LAB_03250094;
      }
      break;
    case '\x01':
      while (auVar26 = *pauVar17, (int)uVar57 <= auVar26._4_4_) {
        auVar33 = NEON_smin(auVar33,auVar26,4);
        auVar27 = NEON_smax(auVar27,auVar26,4);
        pauVar17 = pauVar17 + -1;
        if (pauVar17 <= pauVar8) goto LAB_03250094;
      }
      break;
    case '\x02':
      while (auVar26 = *pauVar17, (int)uVar57 <= auVar26._8_4_) {
        auVar33 = NEON_smin(auVar33,auVar26,4);
        auVar27 = NEON_smax(auVar27,auVar26,4);
        pauVar17 = pauVar17 + -1;
        if (pauVar17 <= pauVar8) goto LAB_03250094;
      }
      break;
    case '\x03':
      while (auVar26 = *pauVar17, (int)uVar57 <= auVar26._12_4_) {
        auVar33 = NEON_smin(auVar33,auVar26,4);
        auVar27 = NEON_smax(auVar27,auVar26,4);
        pauVar17 = pauVar17 + -1;
        if (pauVar17 <= pauVar8) goto LAB_03250094;
      }
      break;
    default:
      if ((int)uVar57 < 1) goto LAB_03250080;
      auVar26 = *pauVar17;
    }
    auVar46 = NEON_smin(auVar40,auVar26,4);
    auVar60 = NEON_smax(auVar20,auVar26,4);
    auVar26 = *pauVar8;
    uVar23 = *(undefined8 *)(*pauVar17 + 8);
    auVar33 = NEON_smin(auVar33,auVar26,4);
    *(undefined8 *)*pauVar8 = *(undefined8 *)*pauVar17;
    *(undefined8 *)(*pauVar8 + 8) = uVar23;
    auVar27 = NEON_smax(auVar27,auVar26,4);
    pauVar9 = pauVar8 + 1;
    *(long *)(*pauVar17 + 8) = auVar26._8_8_;
    *(long *)*pauVar17 = auVar26._0_8_;
  } while( true );
LAB_03250080:
  do {
    pauVar9 = pauVar17 + -1;
    auVar33 = NEON_smin(auVar33,*pauVar17,4);
    auVar27 = NEON_smax(auVar27,*pauVar17,4);
    pauVar17 = pauVar9;
  } while (pauVar8 < pauVar9);
LAB_03250094:
  iVar13 = (int)((ulong)((long)pauVar8 - (long)pauVar16) >> 4);
  if ((iVar13 < 1) || ((int)(uVar18 - iVar13) < 1)) {
    uVar57 = (int)uVar18 >> 1;
    uVar62 = uVar18 - uVar57;
    auVar27._8_4_ = 0x807fffff;
    auVar27._0_8_ = 0x807fffff807fffff;
    auVar27._12_4_ = 0x807fffff;
    auVar33._8_4_ = 0x7f800000;
    auVar33._0_8_ = 0x7f8000007f800000;
    auVar33._12_4_ = 0x7f800000;
    auVar40._8_8_ = auVar33._8_8_;
    auVar40._0_8_ = 0x7f8000007f800000;
    *(float *)(param_3 + 0x20) = fVar15;
    *(uint *)(param_3 + 0x24) = uVar57;
    iVar13 = (int)fVar15 + uVar57;
    *(int *)(param_3 + 0x50) = iVar13;
    *(uint *)(param_3 + 0x54) = uVar62;
    auVar20 = auVar27;
    if (1 < (int)uVar18) {
      lVar1 = *(long *)(param_1 + 0x28) + (long)(int)fVar15 * 0x10;
      if ((int)uVar57 < 2) {
        uVar57 = 1;
      }
      if ((int)uVar18 < 4) {
        auVar40._8_4_ = 0x7f800000;
        auVar40._0_8_ = 0x7f8000007f800000;
        auVar40._12_4_ = 0x7f800000;
        uVar11 = 0;
        auVar20._8_4_ = 0x807fffff;
        auVar20._0_8_ = 0x807fffff807fffff;
        auVar20._12_4_ = 0x807fffff;
      }
      else {
        auVar40._8_4_ = 0x7f800000;
        auVar40._0_8_ = 0x7f8000007f800000;
        auVar40._12_4_ = 0x7f800000;
        auVar20._8_4_ = 0x807fffff;
        auVar20._0_8_ = 0x807fffff807fffff;
        auVar20._12_4_ = 0x807fffff;
        uVar11 = 0;
        do {
          pauVar16 = (undefined1 (*) [16])(lVar1 + uVar11 * 0x10);
          uVar11 = uVar11 + 2;
          auVar26 = *pauVar16;
          auVar32 = pauVar16[1];
          auVar59 = NEON_smin(auVar40,auVar26,4);
          auVar26 = NEON_smax(auVar20,auVar26,4);
          auVar40 = NEON_smin(auVar59,auVar32,4);
          auVar20 = NEON_smax(auVar26,auVar32,4);
        } while (((ulong)uVar57 & 0x7ffffffe) != uVar11);
      }
      if ((uVar57 & 1) != 0) {
        auVar26 = *(undefined1 (*) [16])(lVar1 + uVar11 * 0x10);
        auVar20 = NEON_smax(auVar20,auVar26,4);
        auVar40 = NEON_smin(auVar40,auVar26,4);
      }
    }
    if (0 < (int)uVar62) {
      lVar1 = *(long *)(param_1 + 0x28) + (long)iVar13 * 0x10;
      if (uVar62 == 1) {
        uVar11 = 0;
        auVar33._8_4_ = 0x7f800000;
        auVar33._0_8_ = 0x7f8000007f800000;
        auVar33._12_4_ = 0x7f800000;
        auVar27._8_4_ = 0x807fffff;
        auVar27._0_8_ = 0x807fffff807fffff;
        auVar27._12_4_ = 0x807fffff;
      }
      else {
        auVar33._8_4_ = 0x7f800000;
        auVar33._0_8_ = 0x7f8000007f800000;
        auVar33._12_4_ = 0x7f800000;
        uVar11 = 0;
        auVar27._8_4_ = 0x807fffff;
        auVar27._0_8_ = 0x807fffff807fffff;
        auVar27._12_4_ = 0x807fffff;
        do {
          pauVar16 = (undefined1 (*) [16])(lVar1 + uVar11 * 0x10);
          uVar11 = uVar11 + 2;
          auVar26 = *pauVar16;
          auVar32 = pauVar16[1];
          auVar59 = NEON_smin(auVar33,auVar26,4);
          auVar26 = NEON_smax(auVar27,auVar26,4);
          auVar33 = NEON_smin(auVar59,auVar32,4);
          auVar27 = NEON_smax(auVar26,auVar32,4);
        } while (((ulong)uVar62 & 0xfffffffe) != uVar11);
      }
      if ((uVar62 & 1) != 0) {
        auVar26 = *(undefined1 (*) [16])(lVar1 + uVar11 * 0x10);
        auVar27 = NEON_smax(auVar27,auVar26,4);
        auVar33 = NEON_smin(auVar33,auVar26,4);
      }
    }
  }
  else {
    *(float *)(param_3 + 0x20) = fVar15;
    *(int *)(param_3 + 0x24) = iVar13;
    *(int *)(param_3 + 0x50) = (int)fVar15 + iVar13;
    *(uint *)(param_3 + 0x54) = uVar18 - iVar13;
  }
  uVar42 = (uint)(auVar40._0_4_ >> 0x1f) >> 1;
  uVar50 = (uint)(auVar40._4_4_ >> 0x1f) >> 1;
  uVar53 = (uint)(auVar40._8_4_ >> 0x1f) >> 1;
  uVar55 = (uint)(auVar40._12_4_ >> 0x1f) >> 1;
  uVar43 = (uint)(auVar20._0_4_ >> 0x1f) >> 1;
  uVar51 = (uint)(auVar20._4_4_ >> 0x1f) >> 1;
  uVar54 = (uint)(auVar20._8_4_ >> 0x1f) >> 1;
  uVar56 = (uint)(auVar20._12_4_ >> 0x1f) >> 1;
  uVar18 = (uint)(auVar33._0_4_ >> 0x1f) >> 1;
  uVar62 = (uint)(auVar33._4_4_ >> 0x1f) >> 1;
  uVar66 = (uint)(auVar33._8_4_ >> 0x1f) >> 1;
  uVar70 = (uint)(auVar33._12_4_ >> 0x1f) >> 1;
  uVar57 = (uint)(auVar27._0_4_ >> 0x1f) >> 1;
  uVar64 = (uint)(auVar27._4_4_ >> 0x1f) >> 1;
  uVar68 = (uint)(auVar27._8_4_ >> 0x1f) >> 1;
  uVar22 = (uint)(auVar27._12_4_ >> 0x1f) >> 1;
  auVar19._8_4_ = 0x807fffff;
  auVar19._0_8_ = 0x807fffff807fffff;
  auVar19._12_4_ = 0x807fffff;
  auVar61._8_8_ = auVar19._8_8_;
  auVar61._0_8_ = 0x807fffff807fffff;
  param_3[0x38] = (byte)uVar66 ^ auVar33[8];
  param_3[0x39] = (byte)(uVar66 >> 8) ^ auVar33[9];
  param_3[0x3a] = (byte)(uVar66 >> 0x10) ^ auVar33[10];
  param_3[0x3b] = (byte)((char)auVar33[0xb] >> 7) >> 1 ^ auVar33[0xb];
  param_3[0x3c] = (byte)uVar70 ^ auVar33[0xc];
  param_3[0x3d] = (byte)(uVar70 >> 8) ^ auVar33[0xd];
  param_3[0x3e] = (byte)(uVar70 >> 0x10) ^ auVar33[0xe];
  param_3[0x3f] = (byte)((char)auVar33[0xf] >> 7) >> 1 ^ auVar33[0xf];
  param_3[0x30] = (byte)uVar18 ^ auVar33[0];
  param_3[0x31] = (byte)(uVar18 >> 8) ^ auVar33[1];
  param_3[0x32] = (byte)(uVar18 >> 0x10) ^ auVar33[2];
  param_3[0x33] = (byte)((char)auVar33[3] >> 7) >> 1 ^ auVar33[3];
  param_3[0x34] = (byte)uVar62 ^ auVar33[4];
  param_3[0x35] = (byte)(uVar62 >> 8) ^ auVar33[5];
  param_3[0x36] = (byte)(uVar62 >> 0x10) ^ auVar33[6];
  param_3[0x37] = (byte)((char)auVar33[7] >> 7) >> 1 ^ auVar33[7];
  param_3[0x48] = (byte)uVar68 ^ auVar27[8];
  param_3[0x49] = (byte)(uVar68 >> 8) ^ auVar27[9];
  param_3[0x4a] = (byte)(uVar68 >> 0x10) ^ auVar27[10];
  param_3[0x4b] = (byte)((char)auVar27[0xb] >> 7) >> 1 ^ auVar27[0xb];
  param_3[0x4c] = (byte)uVar22 ^ auVar27[0xc];
  param_3[0x4d] = (byte)(uVar22 >> 8) ^ auVar27[0xd];
  param_3[0x4e] = (byte)(uVar22 >> 0x10) ^ auVar27[0xe];
  param_3[0x4f] = (byte)((char)auVar27[0xf] >> 7) >> 1 ^ auVar27[0xf];
  param_3[0x40] = (byte)uVar57 ^ auVar27[0];
  param_3[0x41] = (byte)(uVar57 >> 8) ^ auVar27[1];
  param_3[0x42] = (byte)(uVar57 >> 0x10) ^ auVar27[2];
  param_3[0x43] = (byte)((char)auVar27[3] >> 7) >> 1 ^ auVar27[3];
  param_3[0x44] = (byte)uVar64 ^ auVar27[4];
  param_3[0x45] = (byte)(uVar64 >> 8) ^ auVar27[5];
  param_3[0x46] = (byte)(uVar64 >> 0x10) ^ auVar27[6];
  param_3[0x47] = (byte)((char)auVar27[7] >> 7) >> 1 ^ auVar27[7];
  uVar18 = (uint)fVar21 ^ (uint)((int)fVar21 >> 0x1f) >> 1;
  auVar28._8_4_ = 0x7f800000;
  auVar28._0_8_ = 0x7f8000007f800000;
  auVar28._12_4_ = 0x7f800000;
  param_3[8] = (byte)uVar53 ^ auVar40[8];
  param_3[9] = (byte)(uVar53 >> 8) ^ auVar40[9];
  param_3[10] = (byte)(uVar53 >> 0x10) ^ auVar40[10];
  param_3[0xb] = (byte)((char)auVar40[0xb] >> 7) >> 1 ^ auVar40[0xb];
  param_3[0xc] = (byte)uVar55 ^ auVar40[0xc];
  param_3[0xd] = (byte)(uVar55 >> 8) ^ auVar40[0xd];
  param_3[0xe] = (byte)(uVar55 >> 0x10) ^ auVar40[0xe];
  param_3[0xf] = (byte)((char)auVar40[0xf] >> 7) >> 1 ^ auVar40[0xf];
  *param_3 = (byte)uVar42 ^ auVar40[0];
  param_3[1] = (byte)(uVar42 >> 8) ^ auVar40[1];
  param_3[2] = (byte)(uVar42 >> 0x10) ^ auVar40[2];
  param_3[3] = (byte)((char)auVar40[3] >> 7) >> 1 ^ auVar40[3];
  param_3[4] = (byte)uVar50 ^ auVar40[4];
  param_3[5] = (byte)(uVar50 >> 8) ^ auVar40[5];
  param_3[6] = (byte)(uVar50 >> 0x10) ^ auVar40[6];
  param_3[7] = (byte)((char)auVar40[7] >> 7) >> 1 ^ auVar40[7];
  param_3[0x18] = (byte)uVar54 ^ auVar20[8];
  param_3[0x19] = (byte)(uVar54 >> 8) ^ auVar20[9];
  param_3[0x1a] = (byte)(uVar54 >> 0x10) ^ auVar20[10];
  param_3[0x1b] = (byte)((char)auVar20[0xb] >> 7) >> 1 ^ auVar20[0xb];
  param_3[0x1c] = (byte)uVar56 ^ auVar20[0xc];
  param_3[0x1d] = (byte)(uVar56 >> 8) ^ auVar20[0xd];
  param_3[0x1e] = (byte)(((uint3)(auVar20._13_3_ >> 0x17) >> 1) >> 8) ^ auVar20[0xe];
  param_3[0x1f] = (byte)((char)auVar20[0xf] >> 7) >> 1 ^ auVar20[0xf];
  param_3[0x10] = (byte)uVar43 ^ auVar20[0];
  param_3[0x11] = (byte)(uVar43 >> 8) ^ auVar20[1];
  param_3[0x12] = (byte)(uVar43 >> 0x10) ^ auVar20[2];
  param_3[0x13] = (byte)((char)auVar20[3] >> 7) >> 1 ^ auVar20[3];
  param_3[0x14] = (byte)uVar51 ^ auVar20[4];
  param_3[0x15] = (byte)(uVar51 >> 8) ^ auVar20[5];
  param_3[0x16] = (byte)(uVar51 >> 0x10) ^ auVar20[6];
  param_3[0x17] = (byte)((char)auVar20[7] >> 7) >> 1 ^ auVar20[7];
  pauVar16 = (undefined1 (*) [16])(*(long *)(param_1 + 0x28) + (long)iVar7 * 0x10);
  pauVar17 = pauVar16 + (int)uVar52;
  auVar47._8_8_ = auVar28._8_8_;
  auVar47._0_8_ = 0x7f8000007f800000;
  pauVar9 = pauVar16;
  do {
    pauVar17 = pauVar17 + -1;
    if (pauVar17 < pauVar9) {
LAB_0325013c:
      pauVar8 = pauVar9;
      auVar35 = auVar61;
      auVar41 = auVar47;
    }
    else if (cVar3 == '\0') {
      do {
        auVar26 = *pauVar9;
        pauVar8 = pauVar9;
        auVar35 = auVar61;
        auVar41 = auVar47;
        if ((int)uVar18 <= auVar26._0_4_) break;
        auVar47 = NEON_smin(auVar47,auVar26,4);
        auVar61 = NEON_smax(auVar61,auVar26,4);
        pauVar9 = pauVar9 + 1;
        pauVar8 = pauVar9;
        auVar35 = auVar61;
        auVar41 = auVar47;
      } while (pauVar9 <= pauVar17);
    }
    else if (cVar3 == '\x01') {
      do {
        auVar26 = *pauVar9;
        pauVar8 = pauVar9;
        auVar35 = auVar61;
        auVar41 = auVar47;
        if ((int)uVar18 <= auVar26._4_4_) break;
        auVar47 = NEON_smin(auVar47,auVar26,4);
        auVar61 = NEON_smax(auVar61,auVar26,4);
        pauVar9 = pauVar9 + 1;
        pauVar8 = pauVar9;
        auVar35 = auVar61;
        auVar41 = auVar47;
      } while (pauVar9 <= pauVar17);
    }
    else {
      pauVar10 = pauVar9;
      auVar35 = auVar61;
      auVar41 = auVar47;
      if (cVar3 == '\x02') {
        do {
          auVar26 = *pauVar9;
          pauVar8 = pauVar9;
          auVar35 = auVar61;
          auVar41 = auVar47;
          if ((int)uVar18 <= auVar26._8_4_) break;
          auVar47 = NEON_smin(auVar47,auVar26,4);
          auVar61 = NEON_smax(auVar61,auVar26,4);
          pauVar9 = pauVar9 + 1;
          pauVar8 = pauVar9;
          auVar35 = auVar61;
          auVar41 = auVar47;
        } while (pauVar9 <= pauVar17);
      }
      else {
        do {
          if ((int)uVar18 < 1) goto LAB_0325013c;
          pauVar8 = pauVar10 + 1;
          auVar41 = NEON_smin(auVar41,*pauVar10,4);
          auVar35 = NEON_smax(auVar35,*pauVar10,4);
          pauVar10 = pauVar8;
        } while (pauVar8 <= pauVar17);
      }
    }
    if (pauVar17 <= pauVar8) goto LAB_0325032c;
    switch(cVar3) {
    case '\0':
      while (auVar26 = *pauVar17, (int)uVar18 <= auVar26._0_4_) {
        auVar28 = NEON_smin(auVar28,auVar26,4);
        auVar19 = NEON_smax(auVar19,auVar26,4);
        pauVar17 = pauVar17 + -1;
        if (pauVar17 <= pauVar8) goto LAB_0325032c;
      }
      break;
    case '\x01':
      while (auVar26 = *pauVar17, (int)uVar18 <= auVar26._4_4_) {
        auVar28 = NEON_smin(auVar28,auVar26,4);
        auVar19 = NEON_smax(auVar19,auVar26,4);
        pauVar17 = pauVar17 + -1;
        if (pauVar17 <= pauVar8) goto LAB_0325032c;
      }
      break;
    case '\x02':
      while (auVar26 = *pauVar17, (int)uVar18 <= auVar26._8_4_) {
        auVar28 = NEON_smin(auVar28,auVar26,4);
        auVar19 = NEON_smax(auVar19,auVar26,4);
        pauVar17 = pauVar17 + -1;
        if (pauVar17 <= pauVar8) goto LAB_0325032c;
      }
      break;
    case '\x03':
      while (auVar26 = *pauVar17, (int)uVar18 <= auVar26._12_4_) {
        auVar28 = NEON_smin(auVar28,auVar26,4);
        auVar19 = NEON_smax(auVar19,auVar26,4);
        pauVar17 = pauVar17 + -1;
        if (pauVar17 <= pauVar8) goto LAB_0325032c;
      }
      break;
    default:
      if ((int)uVar18 < 1) {
        do {
          pauVar9 = pauVar17 + -1;
          auVar28 = NEON_smin(auVar28,*pauVar17,4);
          auVar19 = NEON_smax(auVar19,*pauVar17,4);
          pauVar17 = pauVar9;
        } while (pauVar8 < pauVar9);
LAB_0325032c:
        iVar13 = (int)((ulong)((long)pauVar8 - (long)pauVar16) >> 4);
        if ((iVar13 < 1) || ((int)(uVar52 - iVar13) < 1)) {
          uVar18 = (int)uVar52 >> 1;
          uVar57 = uVar52 - uVar18;
          auVar19._8_4_ = 0x807fffff;
          auVar19._0_8_ = 0x807fffff807fffff;
          auVar19._12_4_ = 0x807fffff;
          auVar28._8_4_ = 0x7f800000;
          auVar28._0_8_ = 0x7f8000007f800000;
          auVar28._12_4_ = 0x7f800000;
          auVar41._8_8_ = auVar28._8_8_;
          auVar41._0_8_ = 0x7f8000007f800000;
          auVar35._8_8_ = auVar19._8_8_;
          auVar35._0_8_ = 0x807fffff807fffff;
          *(int *)(param_3 + 0x80) = iVar7;
          *(uint *)(param_3 + 0x84) = uVar18;
          iVar13 = iVar7 + uVar18;
          *(int *)(param_3 + 0xb0) = iVar13;
          *(uint *)(param_3 + 0xb4) = uVar57;
          if (1 < (int)uVar52) {
            lVar1 = *(long *)(param_1 + 0x28) + (long)iVar7 * 0x10;
            if ((int)uVar18 < 2) {
              uVar18 = 1;
            }
            if ((int)uVar52 < 4) {
              auVar41._8_4_ = 0x7f800000;
              auVar41._0_8_ = 0x7f8000007f800000;
              auVar41._12_4_ = 0x7f800000;
              uVar11 = 0;
              auVar35._8_4_ = 0x807fffff;
              auVar35._0_8_ = 0x807fffff807fffff;
              auVar35._12_4_ = 0x807fffff;
            }
            else {
              auVar41._8_4_ = 0x7f800000;
              auVar41._0_8_ = 0x7f8000007f800000;
              auVar41._12_4_ = 0x7f800000;
              auVar35._8_4_ = 0x807fffff;
              auVar35._0_8_ = 0x807fffff807fffff;
              auVar35._12_4_ = 0x807fffff;
              uVar11 = 0;
              do {
                pauVar16 = (undefined1 (*) [16])(lVar1 + uVar11 * 0x10);
                uVar11 = uVar11 + 2;
                auVar26 = *pauVar16;
                auVar32 = pauVar16[1];
                auVar59 = NEON_smin(auVar41,auVar26,4);
                auVar26 = NEON_smax(auVar35,auVar26,4);
                auVar41 = NEON_smin(auVar59,auVar32,4);
                auVar35 = NEON_smax(auVar26,auVar32,4);
              } while (((ulong)uVar18 & 0x7ffffffe) != uVar11);
            }
            if ((uVar18 & 1) != 0) {
              auVar26 = *(undefined1 (*) [16])(lVar1 + uVar11 * 0x10);
              auVar35 = NEON_smax(auVar35,auVar26,4);
              auVar41 = NEON_smin(auVar41,auVar26,4);
            }
          }
          if (0 < (int)uVar57) {
            lVar1 = *(long *)(param_1 + 0x28) + (long)iVar13 * 0x10;
            if (uVar57 == 1) {
              uVar11 = 0;
              auVar28._8_4_ = 0x7f800000;
              auVar28._0_8_ = 0x7f8000007f800000;
              auVar28._12_4_ = 0x7f800000;
              auVar19._8_4_ = 0x807fffff;
              auVar19._0_8_ = 0x807fffff807fffff;
              auVar19._12_4_ = 0x807fffff;
            }
            else {
              auVar28._8_4_ = 0x7f800000;
              auVar28._0_8_ = 0x7f8000007f800000;
              auVar28._12_4_ = 0x7f800000;
              uVar11 = 0;
              auVar19._8_4_ = 0x807fffff;
              auVar19._0_8_ = 0x807fffff807fffff;
              auVar19._12_4_ = 0x807fffff;
              do {
                pauVar16 = (undefined1 (*) [16])(lVar1 + uVar11 * 0x10);
                uVar11 = uVar11 + 2;
                auVar26 = *pauVar16;
                auVar32 = pauVar16[1];
                auVar59 = NEON_smin(auVar28,auVar26,4);
                auVar26 = NEON_smax(auVar19,auVar26,4);
                auVar28 = NEON_smin(auVar59,auVar32,4);
                auVar19 = NEON_smax(auVar26,auVar32,4);
              } while (((ulong)uVar57 & 0xfffffffe) != uVar11);
            }
            if ((uVar57 & 1) != 0) {
              auVar26 = *(undefined1 (*) [16])(lVar1 + uVar11 * 0x10);
              auVar19 = NEON_smax(auVar19,auVar26,4);
              auVar28 = NEON_smin(auVar28,auVar26,4);
            }
          }
        }
        else {
          *(int *)(param_3 + 0x80) = iVar7;
          *(int *)(param_3 + 0x84) = iVar13;
          *(int *)(param_3 + 0xb0) = iVar7 + iVar13;
          *(uint *)(param_3 + 0xb4) = uVar52 - iVar13;
        }
        uVar18 = (uint)(auVar41._0_4_ >> 0x1f) >> 1;
        uVar52 = (uint)(auVar41._4_4_ >> 0x1f) >> 1;
        uVar57 = (uint)(auVar41._8_4_ >> 0x1f) >> 1;
        uVar62 = (uint)(auVar41._12_4_ >> 0x1f) >> 1;
        uVar22 = (uint)(auVar35._0_4_ >> 0x1f) >> 1;
        uVar42 = (uint)(auVar35._4_4_ >> 0x1f) >> 1;
        uVar43 = (uint)(auVar35._8_4_ >> 0x1f) >> 1;
        uVar50 = (uint)(auVar35._12_4_ >> 0x1f) >> 1;
        uVar64 = (uint)(auVar28._0_4_ >> 0x1f) >> 1;
        uVar66 = (uint)(auVar28._4_4_ >> 0x1f) >> 1;
        uVar68 = (uint)(auVar28._8_4_ >> 0x1f) >> 1;
        uVar70 = (uint)(auVar28._12_4_ >> 0x1f) >> 1;
        param_3[0x68] = (byte)uVar57 ^ auVar41[8];
        param_3[0x69] = (byte)(uVar57 >> 8) ^ auVar41[9];
        param_3[0x6a] = (byte)(uVar57 >> 0x10) ^ auVar41[10];
        param_3[0x6b] = (byte)((char)auVar41[0xb] >> 7) >> 1 ^ auVar41[0xb];
        param_3[0x6c] = (byte)uVar62 ^ auVar41[0xc];
        param_3[0x6d] = (byte)(uVar62 >> 8) ^ auVar41[0xd];
        param_3[0x6e] = (byte)(uVar62 >> 0x10) ^ auVar41[0xe];
        param_3[0x6f] = (byte)((char)auVar41[0xf] >> 7) >> 1 ^ auVar41[0xf];
        param_3[0x60] = (byte)uVar18 ^ auVar41[0];
        param_3[0x61] = (byte)(uVar18 >> 8) ^ auVar41[1];
        param_3[0x62] = (byte)(uVar18 >> 0x10) ^ auVar41[2];
        param_3[99] = (byte)((char)auVar41[3] >> 7) >> 1 ^ auVar41[3];
        param_3[100] = (byte)uVar52 ^ auVar41[4];
        param_3[0x65] = (byte)(uVar52 >> 8) ^ auVar41[5];
        param_3[0x66] = (byte)(uVar52 >> 0x10) ^ auVar41[6];
        param_3[0x67] = (byte)((char)auVar41[7] >> 7) >> 1 ^ auVar41[7];
        param_3[0x78] = (byte)uVar43 ^ auVar35[8];
        param_3[0x79] = (byte)(uVar43 >> 8) ^ auVar35[9];
        param_3[0x7a] = (byte)(uVar43 >> 0x10) ^ auVar35[10];
        param_3[0x7b] = (byte)((char)auVar35[0xb] >> 7) >> 1 ^ auVar35[0xb];
        param_3[0x7c] = (byte)uVar50 ^ auVar35[0xc];
        param_3[0x7d] = (byte)(uVar50 >> 8) ^ auVar35[0xd];
        param_3[0x7e] = (byte)(uVar50 >> 0x10) ^ auVar35[0xe];
        param_3[0x7f] = (byte)((char)auVar35[0xf] >> 7) >> 1 ^ auVar35[0xf];
        param_3[0x70] = (byte)uVar22 ^ auVar35[0];
        param_3[0x71] = (byte)(uVar22 >> 8) ^ auVar35[1];
        param_3[0x72] = (byte)(uVar22 >> 0x10) ^ auVar35[2];
        param_3[0x73] = (byte)((char)auVar35[3] >> 7) >> 1 ^ auVar35[3];
        param_3[0x74] = (byte)uVar42 ^ auVar35[4];
        param_3[0x75] = (byte)(uVar42 >> 8) ^ auVar35[5];
        param_3[0x76] = (byte)(uVar42 >> 0x10) ^ auVar35[6];
        param_3[0x77] = (byte)((char)auVar35[7] >> 7) >> 1 ^ auVar35[7];
        uVar18 = (uint)(auVar19._0_4_ >> 0x1f) >> 1;
        uVar52 = (uint)(auVar19._4_4_ >> 0x1f) >> 1;
        uVar57 = (uint)(auVar19._8_4_ >> 0x1f) >> 1;
        uVar62 = (uint)(auVar19._12_4_ >> 0x1f) >> 1;
        param_3[0x98] = (byte)uVar68 ^ auVar28[8];
        param_3[0x99] = (byte)(uVar68 >> 8) ^ auVar28[9];
        param_3[0x9a] = (byte)(uVar68 >> 0x10) ^ auVar28[10];
        param_3[0x9b] = (byte)((char)auVar28[0xb] >> 7) >> 1 ^ auVar28[0xb];
        param_3[0x9c] = (byte)uVar70 ^ auVar28[0xc];
        param_3[0x9d] = (byte)(uVar70 >> 8) ^ auVar28[0xd];
        param_3[0x9e] = (byte)(uVar70 >> 0x10) ^ auVar28[0xe];
        param_3[0x9f] = (byte)((char)auVar28[0xf] >> 7) >> 1 ^ auVar28[0xf];
        param_3[0x90] = (byte)uVar64 ^ auVar28[0];
        param_3[0x91] = (byte)(uVar64 >> 8) ^ auVar28[1];
        param_3[0x92] = (byte)(uVar64 >> 0x10) ^ auVar28[2];
        param_3[0x93] = (byte)((char)auVar28[3] >> 7) >> 1 ^ auVar28[3];
        param_3[0x94] = (byte)uVar66 ^ auVar28[4];
        param_3[0x95] = (byte)(uVar66 >> 8) ^ auVar28[5];
        param_3[0x96] = (byte)(uVar66 >> 0x10) ^ auVar28[6];
        param_3[0x97] = (byte)((char)auVar28[7] >> 7) >> 1 ^ auVar28[7];
        param_3[0xa8] = (byte)uVar57 ^ auVar19[8];
        param_3[0xa9] = (byte)(uVar57 >> 8) ^ auVar19[9];
        param_3[0xaa] = (byte)(uVar57 >> 0x10) ^ auVar19[10];
        param_3[0xab] = (byte)((char)auVar19[0xb] >> 7) >> 1 ^ auVar19[0xb];
        param_3[0xac] = (byte)uVar62 ^ auVar19[0xc];
        param_3[0xad] = (byte)(uVar62 >> 8) ^ auVar19[0xd];
        param_3[0xae] = (byte)(uVar62 >> 0x10) ^ auVar19[0xe];
        param_3[0xaf] = (byte)((char)auVar19[0xf] >> 7) >> 1 ^ auVar19[0xf];
        param_3[0xa0] = (byte)uVar18 ^ auVar19[0];
        param_3[0xa1] = (byte)(uVar18 >> 8) ^ auVar19[1];
        param_3[0xa2] = (byte)(uVar18 >> 0x10) ^ auVar19[2];
        param_3[0xa3] = (byte)((char)auVar19[3] >> 7) >> 1 ^ auVar19[3];
        param_3[0xa4] = (byte)uVar52 ^ auVar19[4];
        param_3[0xa5] = (byte)(uVar52 >> 8) ^ auVar19[5];
        param_3[0xa6] = (byte)(uVar52 >> 0x10) ^ auVar19[6];
        param_3[0xa7] = (byte)((char)auVar19[7] >> 7) >> 1 ^ auVar19[7];
        return;
      }
      auVar26 = *pauVar17;
    }
    auVar47 = NEON_smin(auVar41,auVar26,4);
    auVar61 = NEON_smax(auVar35,auVar26,4);
    auVar26 = *pauVar8;
    uVar23 = *(undefined8 *)(*pauVar17 + 8);
    auVar28 = NEON_smin(auVar28,auVar26,4);
    *(undefined8 *)*pauVar8 = *(undefined8 *)*pauVar17;
    *(undefined8 *)(*pauVar8 + 8) = uVar23;
    auVar19 = NEON_smax(auVar19,auVar26,4);
    pauVar9 = pauVar8 + 1;
    *(long *)(*pauVar17 + 8) = auVar26._8_8_;
    *(long *)*pauVar17 = auVar26._0_8_;
  } while( true );
}


