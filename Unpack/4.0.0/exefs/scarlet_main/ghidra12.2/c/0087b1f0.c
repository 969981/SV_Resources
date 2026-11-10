/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0087b1f0; name: FUN_0087b1f0
 */


void FUN_0087b1f0(long param_1,long param_2,long *param_3,uint param_4,uint param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  undefined1 (*pauVar10) [12];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  long lVar13;
  float *pfVar14;
  float *pfVar15;
  uint uVar16;
  uint uVar17;
  undefined4 *puVar18;
  undefined1 (*pauVar19) [16];
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long *plVar24;
  ulong uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auVar48 [16];
  undefined1 auVar51 [16];
  undefined1 auVar50 [16];
  undefined1 auVar49 [16];
  undefined1 auVar52 [16];
  float fVar55;
  float fVar56;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  float fVar65;
  undefined8 uVar64;
  float fVar66;
  float fVar68;
  undefined8 uVar67;
  float fVar69;
  float fVar71;
  undefined8 uVar70;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  undefined4 uVar77;
  float fVar78;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  float fVar81;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  undefined1 auVar82 [16];
  float fVar87;
  undefined1 auVar88 [16];
  float fVar89;
  
  if ((param_5 & 3) != 0) {
    iVar9 = 4 - (param_5 & 3);
    if (param_4 != 0) {
      uVar23 = (ulong)(uint)(iVar9 * 4);
      uVar25 = 0;
      if (param_4 != 1) {
        lVar22 = (ulong)param_5 * 4;
        plVar24 = (long *)(param_1 + 0x10);
        do {
          memset((void *)(plVar24[-2] + lVar22),0,uVar23);
          memset((void *)(*plVar24 + lVar22),0,uVar23);
          uVar25 = uVar25 + 2;
          plVar24 = plVar24 + 4;
        } while (((ulong)param_4 & 0xfffffffe) != uVar25);
      }
      if ((param_4 & 1) != 0) {
        memset((void *)(*(long *)(param_1 + uVar25 * 0x10) + (ulong)param_5 * 4),0,uVar23);
      }
    }
    param_5 = iVar9 + param_5;
  }
  uVar17 = *(uint *)((long)param_3 + 0xc);
  uVar16 = param_4;
  if ((((uVar17 >> 2 & 1) != 0) && (lVar22 = *param_3, lVar22 != 0)) && (3 < param_4)) {
    uVar25 = (ulong)param_4;
    while( true ) {
      lVar20 = param_4 - uVar25;
      puVar2 = (undefined8 *)(param_2 + lVar20 * 8);
      pauVar19 = (undefined1 (*) [16])*puVar2;
      auVar48 = *(undefined1 (*) [16])puVar2[1];
      auVar80 = *pauVar19;
      auVar79 = *(undefined1 (*) [16])puVar2[2];
      lVar3 = 0;
      if ((uVar17 & 2) != 0) {
        lVar3 = 0x60;
      }
      auVar53 = NEON_ext(auVar48,auVar80,8,1);
      auVar57 = NEON_ext(auVar80,auVar53,8,1);
      auVar53 = *(undefined1 (*) [16])puVar2[3];
      auVar54 = NEON_ext(auVar53,auVar79,8,1);
      auVar58 = NEON_ext(auVar79,auVar54,8,1);
      pfVar15 = (float *)(lVar22 + (ulong)((uVar17 & 1) << 5) * 4 + lVar3);
      auVar54._4_4_ = (float)auVar57._8_4_;
      auVar54._0_4_ = (float)auVar57._0_4_;
      auVar54._8_4_ = (float)auVar58._0_4_;
      auVar54._12_4_ = (float)auVar58._8_4_;
      auVar88._4_4_ = auVar48._0_4_;
      auVar88._0_4_ = auVar80._0_4_;
      auVar88._8_4_ = auVar79._0_4_;
      auVar88._12_4_ = auVar53._0_4_;
      auVar52._4_4_ = auVar48._4_4_;
      auVar52._0_4_ = auVar80._4_4_;
      auVar52._8_4_ = auVar79._4_4_;
      auVar52._12_4_ = auVar53._4_4_;
      auVar48._4_4_ = (float)auVar57._12_4_;
      auVar48._0_4_ = (float)auVar57._4_4_;
      auVar48._8_4_ = (float)auVar58._4_4_;
      auVar48._12_4_ = (float)auVar58._12_4_;
      fVar87 = *pfVar15;
      if (param_5 != 0) {
        fVar85 = pfVar15[2];
        fVar28 = pfVar15[3];
        fVar38 = pfVar15[1];
        fVar73 = pfVar15[4];
        plVar24 = (long *)(param_1 + lVar20 * 0x10);
        lVar22 = *plVar24;
        lVar21 = plVar24[1];
        lVar3 = plVar24[2];
        lVar4 = plVar24[3];
        lVar20 = plVar24[4];
        lVar5 = plVar24[5];
        lVar7 = plVar24[6];
        lVar6 = plVar24[7];
        uVar23 = 0;
        do {
          uVar17 = (int)uVar23 + 4;
          lVar13 = uVar23 * 4;
          fVar40 = auVar88._0_4_;
          fVar55 = auVar88._4_4_;
          fVar56 = auVar88._8_4_;
          fVar29 = auVar88._12_4_;
          auVar79 = *(undefined1 (*) [16])(lVar22 + lVar13);
          pauVar10 = (undefined1 (*) [12])(lVar3 + lVar13);
          auVar80._12_4_ = (int)((ulong)*(undefined8 *)(*pauVar10 + 8) >> 0x20);
          auVar80._0_12_ = *pauVar10;
          auVar53 = NEON_ext(auVar80,auVar79,8,1);
          auVar80 = *(undefined1 (*) [16])(lVar20 + lVar13);
          auVar57 = NEON_ext(auVar79,auVar53,8,1);
          auVar53 = *(undefined1 (*) [16])(lVar7 + lVar13);
          auVar88 = NEON_ext(auVar53,auVar80,8,1);
          auVar58 = NEON_ext(auVar80,auVar88,8,1);
          fVar89 = auVar52._0_4_;
          fVar27 = auVar52._4_4_;
          fVar32 = auVar52._8_4_;
          fVar37 = auVar52._12_4_;
          fVar76 = auVar79._0_4_;
          fVar35 = (float)*(undefined8 *)*pauVar10;
          fVar42 = auVar80._0_4_;
          fVar45 = auVar53._0_4_;
          fVar39 = (float)((ulong)*(undefined8 *)*pauVar10 >> 0x20);
          fVar31 = auVar79._4_4_;
          fVar44 = auVar80._4_4_;
          fVar47 = auVar53._4_4_;
          fVar26 = auVar57._0_4_;
          fVar36 = auVar57._8_4_;
          auVar52._4_4_ = fVar36;
          auVar52._0_4_ = fVar26;
          fVar43 = auVar58._0_4_;
          auVar52._8_4_ = fVar43;
          fVar46 = auVar58._8_4_;
          auVar52._12_4_ = fVar46;
          auVar53._0_4_ =
               fVar89 * fVar85 + fVar38 * fVar40 + fVar87 * fVar76 + fVar73 * auVar48._0_4_ +
               fVar28 * auVar54._0_4_;
          auVar53._4_4_ =
               fVar27 * fVar85 + fVar38 * fVar55 + fVar87 * fVar35 + fVar73 * auVar48._4_4_ +
               fVar28 * auVar54._4_4_;
          auVar53._8_4_ =
               fVar32 * fVar85 + fVar38 * fVar56 + fVar87 * fVar42 + fVar73 * auVar48._8_4_ +
               fVar28 * auVar54._8_4_;
          auVar53._12_4_ =
               fVar37 * fVar85 + fVar38 * fVar29 + fVar87 * fVar45 + fVar73 * auVar48._12_4_ +
               fVar28 * auVar54._12_4_;
          auVar88._4_4_ = auVar57._12_4_;
          auVar88._0_4_ = auVar57._4_4_;
          auVar88._8_4_ = auVar58._4_4_;
          auVar88._12_4_ = auVar58._12_4_;
          fVar89 = fVar40 * fVar85 + fVar38 * fVar76 + fVar87 * fVar31 + fVar73 * auVar54._0_4_ +
                   fVar28 * auVar53._0_4_;
          fVar27 = fVar55 * fVar85 + fVar38 * fVar35 + fVar87 * fVar39 + fVar73 * auVar54._4_4_ +
                   fVar28 * auVar53._4_4_;
          fVar32 = fVar56 * fVar85 + fVar38 * fVar42 + fVar87 * fVar44 + fVar73 * auVar54._8_4_ +
                   fVar28 * auVar53._8_4_;
          fVar37 = fVar29 * fVar85 + fVar38 * fVar45 + fVar87 * fVar47 + fVar73 * auVar54._12_4_ +
                   fVar28 * auVar53._12_4_;
          auVar48._0_4_ =
               fVar76 * fVar85 + fVar38 * fVar31 + fVar87 * fVar26 + fVar73 * auVar53._0_4_ +
               fVar28 * fVar89;
          auVar48._4_4_ =
               fVar35 * fVar85 + fVar38 * fVar39 + fVar87 * fVar36 + fVar73 * auVar53._4_4_ +
               fVar28 * fVar27;
          auVar48._8_4_ =
               fVar42 * fVar85 + fVar38 * fVar44 + fVar87 * fVar43 + fVar73 * auVar53._8_4_ +
               fVar28 * fVar32;
          auVar48._12_4_ =
               fVar45 * fVar85 + fVar38 * fVar47 + fVar87 * fVar46 + fVar73 * auVar53._12_4_ +
               fVar28 * fVar37;
          auVar54._0_4_ =
               fVar31 * fVar85 + fVar38 * fVar26 + fVar87 * auVar57._4_4_ + fVar73 * fVar89 +
               fVar28 * auVar48._0_4_;
          auVar54._4_4_ =
               fVar39 * fVar85 + fVar38 * fVar36 + fVar87 * auVar57._12_4_ + fVar73 * fVar27 +
               fVar28 * auVar48._4_4_;
          auVar54._8_4_ =
               fVar44 * fVar85 + fVar38 * fVar43 + fVar87 * auVar58._4_4_ + fVar73 * fVar32 +
               fVar28 * auVar48._8_4_;
          auVar54._12_4_ =
               fVar47 * fVar85 + fVar38 * fVar46 + fVar87 * auVar58._12_4_ + fVar73 * fVar37 +
               fVar28 * auVar48._12_4_;
          auVar79._4_4_ = fVar27;
          auVar79._0_4_ = fVar89;
          auVar79._8_4_ = fVar32;
          auVar79._12_4_ = fVar37;
          auVar80 = NEON_ext(auVar79,auVar53,8,1);
          auVar80 = NEON_ext(auVar53,auVar80,8,1);
          auVar79 = NEON_ext(auVar54,auVar48,8,1);
          auVar79 = NEON_ext(auVar48,auVar79,8,1);
          pfVar15 = (float *)(lVar21 + lVar13);
          pfVar15[2] = auVar48._0_4_;
          pfVar15[3] = auVar54._0_4_;
          *pfVar15 = auVar53._0_4_;
          pfVar15[1] = fVar89;
          uVar59 = CONCAT44(auVar54._4_4_,auVar48._4_4_);
          ((undefined8 *)(lVar4 + lVar13))[1] = uVar59;
          *(undefined8 *)(lVar4 + lVar13) = CONCAT44(fVar27,auVar53._4_4_);
          puVar18 = (undefined4 *)(lVar5 + lVar13);
          puVar18[2] = auVar79._0_4_;
          puVar18[3] = auVar79._8_4_;
          *puVar18 = auVar80._0_4_;
          puVar18[1] = auVar80._8_4_;
          puVar18 = (undefined4 *)(lVar6 + lVar13);
          puVar18[2] = auVar79._4_4_;
          puVar18[3] = auVar79._12_4_;
          *puVar18 = auVar80._4_4_;
          puVar18[1] = auVar80._12_4_;
          uVar23 = (ulong)uVar17;
        } while (uVar17 < param_5);
        pauVar19 = (undefined1 (*) [16])*puVar2;
      }
      auVar79 = NEON_ext(auVar52,auVar88,8,1);
      auVar80 = NEON_ext(auVar48,auVar54,8,1);
      auVar79 = NEON_ext(auVar88,auVar79,8,1);
      auVar80 = NEON_ext(auVar54,auVar80,8,1);
      *(ulong *)(*pauVar19 + 8) = CONCAT44(auVar48._0_4_,auVar54._0_4_);
      *(ulong *)*pauVar19 = CONCAT44(auVar52._0_4_,auVar88._0_4_);
      puVar18 = (undefined4 *)puVar2[1];
      puVar18[2] = auVar54._4_4_;
      puVar18[3] = auVar48._4_4_;
      *puVar18 = auVar88._4_4_;
      puVar18[1] = auVar52._4_4_;
      puVar18 = (undefined4 *)puVar2[2];
      puVar18[2] = auVar80._0_4_;
      puVar18[3] = auVar80._8_4_;
      *puVar18 = auVar79._0_4_;
      puVar18[1] = auVar79._8_4_;
      puVar18 = (undefined4 *)puVar2[3];
      puVar18[2] = auVar80._4_4_;
      puVar18[3] = auVar80._12_4_;
      *puVar18 = auVar79._4_4_;
      puVar18[1] = auVar79._12_4_;
      uVar16 = (int)uVar25 - 4;
      if (uVar16 < 4) break;
      uVar17 = *(uint *)((long)param_3 + 0xc);
      uVar25 = uVar25 - 4;
      lVar22 = *param_3;
    }
    uVar17 = *(uint *)((long)param_3 + 0xc);
  }
  if ((((uVar17 >> 1 & 1) != 0) && (1 < uVar16)) && (*param_3 != 0)) {
    plVar24 = (long *)(param_2 + (ulong)(param_4 - uVar16) * 8);
    pfVar15 = (float *)*plVar24;
    pfVar14 = (float *)plVar24[1];
    fVar87 = *pfVar15;
    fVar85 = *pfVar14;
    fVar28 = pfVar15[1];
    fVar38 = pfVar14[1];
    auVar57._4_4_ = pfVar15[2];
    auVar57._0_4_ = pfVar15[2];
    auVar57._12_4_ = pfVar14[2];
    auVar57._8_4_ = pfVar14[2];
    fVar73 = pfVar15[3];
    fVar76 = pfVar14[3];
    if (param_5 != 0) {
      pfVar15 = (float *)(*param_3 + (ulong)((uVar17 & 1) << 5) * 4);
      plVar1 = (long *)(param_1 + (ulong)(param_4 - uVar16) * 0x10);
      fVar26 = *pfVar15;
      fVar31 = pfVar15[1];
      fVar35 = pfVar15[2];
      fVar36 = pfVar15[3];
      fVar39 = pfVar15[4];
      fVar42 = pfVar15[5];
      fVar43 = pfVar15[6];
      fVar44 = pfVar15[7];
      uVar61 = *(undefined8 *)(pfVar15 + 10);
      uVar59 = *(undefined8 *)(pfVar15 + 8);
      uVar62 = *(undefined8 *)(pfVar15 + 0xe);
      uVar60 = *(undefined8 *)(pfVar15 + 0xc);
      uVar64 = *(undefined8 *)(pfVar15 + 0x12);
      uVar63 = *(undefined8 *)(pfVar15 + 0x10);
      fVar45 = pfVar15[0x14];
      fVar46 = pfVar15[0x15];
      fVar47 = pfVar15[0x16];
      fVar89 = pfVar15[0x17];
      lVar22 = *plVar1;
      lVar20 = plVar1[1];
      lVar3 = plVar1[2];
      lVar7 = plVar1[3];
      uVar25 = 0;
      do {
        uVar17 = (int)uVar25 + 4;
        lVar21 = uVar25 * 4;
        fVar55 = (float)uVar59;
        fVar81 = fVar87 * fVar55;
        fVar56 = (float)((ulong)uVar59 >> 0x20);
        fVar83 = fVar87 * fVar56;
        fVar29 = (float)uVar61;
        fVar84 = fVar85 * fVar29;
        fVar30 = (float)((ulong)uVar61 >> 0x20);
        fVar86 = fVar85 * fVar30;
        fVar33 = (float)uVar60;
        fVar27 = fVar33 * fVar28;
        fVar34 = (float)((ulong)uVar60 >> 0x20);
        fVar32 = fVar34 * fVar28;
        fVar41 = (float)uVar62;
        fVar37 = fVar41 * fVar38;
        fVar65 = (float)((ulong)uVar62 >> 0x20);
        fVar40 = fVar65 * fVar38;
        pauVar10 = (undefined1 (*) [12])(lVar22 + lVar21);
        uVar77 = (undefined4)((ulong)*(undefined8 *)(*pauVar10 + 8) >> 0x20);
        fVar72 = (float)*(undefined8 *)*pauVar10;
        fVar74 = (float)((ulong)*(undefined8 *)*pauVar10 >> 0x20);
        auVar48 = *(undefined1 (*) [16])(lVar3 + lVar21);
        auVar58._12_4_ = uVar77;
        auVar58._0_12_ = *pauVar10;
        auVar80 = NEON_ext(auVar48,auVar58,8,1);
        auVar11._12_4_ = uVar77;
        auVar11._0_12_ = *pauVar10;
        auVar80 = NEON_ext(auVar11,auVar80,8,1);
        fVar75 = auVar48._0_4_;
        fVar78 = auVar48._4_4_;
        fVar87 = auVar80._4_4_;
        fVar85 = auVar80._12_4_;
        fVar28 = auVar80._0_4_;
        fVar38 = auVar80._8_4_;
        fVar66 = (float)uVar63;
        fVar68 = (float)((ulong)uVar63 >> 0x20);
        fVar69 = (float)uVar64;
        fVar71 = (float)((ulong)uVar64 >> 0x20);
        fVar27 = fVar81 + fVar27 + fVar26 * fVar72 + fVar39 * fVar72 + fVar66 * auVar57._0_4_ +
                 fVar45 * fVar73;
        fVar32 = fVar83 + fVar32 + fVar31 * fVar74 + fVar42 * fVar72 + fVar68 * auVar57._4_4_ +
                 fVar46 * fVar73;
        auVar82._0_8_ = CONCAT44(fVar32,fVar27);
        auVar82._8_4_ =
             fVar84 + fVar37 + fVar35 * fVar75 + fVar43 * fVar75 + fVar69 * auVar57._8_4_ +
             fVar47 * fVar76;
        auVar82._12_4_ =
             fVar86 + fVar40 + fVar36 * fVar78 + fVar44 * fVar75 + fVar71 * auVar57._12_4_ +
             fVar89 * fVar76;
        fVar73 = fVar74 * fVar55 + fVar33 * fVar72 + fVar26 * fVar28 + fVar39 * fVar28 +
                 fVar66 * fVar32 + fVar45 * fVar27;
        fVar27 = fVar74 * fVar56 + fVar34 * fVar72 + fVar31 * fVar87 + fVar42 * fVar28 +
                 fVar68 * fVar32 + fVar46 * fVar27;
        fVar76 = fVar78 * fVar29 + fVar41 * fVar75 + fVar35 * fVar38 + fVar43 * fVar38 +
                 fVar69 * auVar82._12_4_ + fVar47 * auVar82._8_4_;
        fVar32 = fVar78 * fVar30 + fVar65 * fVar75 + fVar36 * fVar85 + fVar44 * fVar38 +
                 fVar71 * auVar82._12_4_ + fVar89 * auVar82._8_4_;
        auVar12._4_4_ = fVar27;
        auVar12._0_4_ = fVar73;
        auVar12._8_4_ = fVar76;
        auVar12._12_4_ = fVar32;
        auVar48 = NEON_ext(auVar12,auVar82,8,1);
        auVar48 = NEON_ext(auVar82,auVar48,8,1);
        ((undefined8 *)(lVar20 + lVar21))[1] = CONCAT44(fVar27,fVar73);
        *(undefined8 *)(lVar20 + lVar21) = auVar82._0_8_;
        ((undefined8 *)(lVar7 + lVar21))[1] = auVar48._8_8_;
        *(undefined8 *)(lVar7 + lVar21) = auVar48._0_8_;
        auVar49._4_12_ = auVar48._4_12_;
        auVar49._0_4_ = fVar27;
        auVar51._12_4_ = auVar48._12_4_;
        auVar51._0_8_ = auVar49._0_8_;
        auVar51._8_4_ = fVar32;
        auVar50._8_8_ = auVar51._8_8_;
        auVar50._4_4_ = fVar27;
        auVar50._0_4_ = fVar27;
        auVar57._0_12_ = auVar50._0_12_;
        auVar57._12_4_ = fVar32;
        uVar25 = (ulong)uVar17;
      } while (uVar17 < param_5);
      pfVar15 = (float *)*plVar24;
    }
    *pfVar15 = fVar87;
    *(float *)(*plVar24 + 4) = fVar28;
    *(int *)(*plVar24 + 8) = auVar57._0_4_;
    *(float *)(*plVar24 + 0xc) = fVar73;
    *(float *)plVar24[1] = fVar85;
    *(float *)(plVar24[1] + 4) = fVar38;
    *(int *)(plVar24[1] + 8) = auVar57._8_4_;
    *(float *)(plVar24[1] + 0xc) = fVar76;
    uVar17 = *(uint *)((long)param_3 + 0xc);
    uVar16 = uVar16 - 2;
  }
  if ((((uVar17 & 1) != 0) && (pfVar15 = (float *)*param_3, pfVar15 != (float *)0x0)) &&
     (uVar16 != 0)) {
    if (param_5 == 0) {
      uVar8 = uVar16 - 1;
      for (uVar17 = uVar16 & 7; uVar17 != 0; uVar17 = uVar17 - 1) {
        uVar16 = uVar16 - 1;
      }
      if (6 < uVar8) {
        do {
          uVar16 = uVar16 - 8;
        } while (uVar16 != 0);
      }
    }
    else {
      while( true ) {
        plVar24 = (long *)(param_1 + (ulong)(param_4 - uVar16) * 0x10);
        pfVar14 = *(float **)(param_2 + (ulong)(param_4 - uVar16) * 8);
        fVar28 = *pfVar15;
        fVar38 = pfVar15[1];
        fVar73 = pfVar15[2];
        fVar76 = pfVar15[3];
        fVar26 = pfVar15[4];
        fVar31 = pfVar15[5];
        fVar35 = pfVar15[6];
        fVar36 = pfVar15[7];
        uVar62 = *(undefined8 *)(pfVar15 + 10);
        uVar60 = *(undefined8 *)(pfVar15 + 8);
        uVar64 = *(undefined8 *)(pfVar15 + 0xe);
        uVar63 = *(undefined8 *)(pfVar15 + 0xc);
        uVar70 = *(undefined8 *)(pfVar15 + 0x12);
        uVar67 = *(undefined8 *)(pfVar15 + 0x10);
        fVar39 = pfVar15[0x14];
        fVar42 = pfVar15[0x15];
        fVar43 = pfVar15[0x16];
        fVar44 = pfVar15[0x17];
        uVar61 = *(undefined8 *)(pfVar15 + 0x1a);
        uVar59 = *(undefined8 *)(pfVar15 + 0x18);
        fVar45 = pfVar15[0x1c];
        fVar46 = pfVar15[0x1d];
        fVar47 = pfVar15[0x1e];
        fVar89 = pfVar15[0x1f];
        fVar87 = pfVar14[2];
        fVar85 = pfVar14[3];
        uVar25 = 0;
        fVar27 = *pfVar14;
        fVar32 = pfVar14[1];
        do {
          uVar17 = (int)uVar25 + 4;
          pfVar15 = (float *)(*plVar24 + uVar25 * 4);
          fVar37 = *pfVar15;
          fVar40 = pfVar15[1];
          fVar55 = pfVar15[2];
          fVar56 = pfVar15[3];
          fVar29 = (float)uVar59 * fVar87;
          fVar33 = (float)((ulong)uVar59 >> 0x20) * fVar87;
          fVar30 = fVar45 * fVar85;
          fVar34 = fVar46 * fVar85;
          fVar41 = fVar89 * fVar85;
          fVar85 = fVar55 * fVar73 + (float)uVar70 * fVar27 + fVar43 * fVar32 + fVar35 * fVar55 +
                   (float)uVar62 * fVar40 + (float)uVar64 * fVar37 + (float)uVar61 * fVar87 +
                   fVar47 * fVar85;
          fVar87 = fVar56 * fVar76 + (float)((ulong)uVar70 >> 0x20) * fVar27 + fVar44 * fVar32 +
                   fVar36 * fVar55 + (float)((ulong)uVar62 >> 0x20) * fVar40 +
                   (float)((ulong)uVar64 >> 0x20) * fVar37 + (float)((ulong)uVar61 >> 0x20) * fVar87
                   + fVar41;
          pfVar15 = (float *)(plVar24[1] + uVar25 * 4);
          pfVar15[2] = fVar85;
          pfVar15[3] = fVar87;
          *pfVar15 = fVar37 * fVar28 + (float)uVar67 * fVar27 + fVar39 * fVar32 + fVar26 * fVar55 +
                     (float)uVar60 * fVar40 + (float)uVar63 * fVar37 + fVar29 + fVar30;
          pfVar15[1] = fVar40 * fVar38 + (float)((ulong)uVar67 >> 0x20) * fVar27 + fVar42 * fVar32 +
                       fVar31 * fVar55 + (float)((ulong)uVar60 >> 0x20) * fVar40 +
                       (float)((ulong)uVar63 >> 0x20) * fVar37 + fVar33 + fVar34;
          uVar25 = (ulong)uVar17;
          fVar27 = fVar56;
          fVar32 = fVar55;
        } while (uVar17 < param_5);
        *(ulong *)pfVar14 = CONCAT44(fVar55,fVar56);
        *(ulong *)(pfVar14 + 2) = CONCAT44(fVar85,fVar87);
        if (uVar16 == 1) break;
        pfVar15 = (float *)*param_3;
        uVar16 = uVar16 - 1;
      }
    }
  }
  return;
}


