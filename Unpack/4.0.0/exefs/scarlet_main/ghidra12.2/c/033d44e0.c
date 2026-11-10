/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033d44e0; name: FUN_033d44e0
 */


void FUN_033d44e0(long param_1,uint param_2,long *param_3,long *param_4)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 (*pauVar5) [12];
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  uint uVar14;
  float *pfVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  long lVar20;
  undefined1 (*pauVar21) [16];
  long lVar22;
  long lVar23;
  long lVar24;
  float *pfVar25;
  float *pfVar26;
  float *pfVar27;
  ulong __n;
  long *plVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
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
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined4 uVar54;
  float fVar55;
  undefined4 uVar56;
  float fVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar62 [16];
  undefined1 auVar61 [16];
  undefined1 auVar60 [16];
  undefined1 auVar63 [16];
  undefined1 auVar66 [16];
  undefined1 auVar65 [16];
  undefined1 auVar64 [16];
  undefined8 uVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  undefined8 uVar71;
  float fVar73;
  undefined8 uVar72;
  float fVar74;
  undefined8 uVar75;
  float fVar77;
  undefined8 uVar76;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  undefined1 auVar82 [16];
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  
  uVar16 = *(uint *)((long)param_4 + 0xc);
  uVar18 = (ulong)uVar16;
  if ((param_2 & 3) != 0) {
    iVar3 = 4 - (param_2 & 3);
    if (uVar16 != 0) {
      __n = (ulong)(uint)(iVar3 * 4);
      uVar29 = (ulong)param_2;
      uVar30 = uVar18 & 3;
      uVar31 = 0;
      if (2 < uVar18 - 1) {
        plVar28 = (long *)(param_1 + 0x10);
        do {
          memset((void *)(plVar28[-2] + uVar29 * 4),0,__n);
          memset((void *)(plVar28[-1] + uVar29 * 4),0,__n);
          memset((void *)(*plVar28 + uVar29 * 4),0,__n);
          memset((void *)(plVar28[1] + uVar29 * 4),0,__n);
          uVar31 = uVar31 + 4;
          plVar28 = plVar28 + 4;
        } while ((uVar18 & 0xfffffffc) != uVar31);
      }
      if ((uVar16 & 3) != 0) {
        plVar28 = (long *)(param_1 + uVar31 * 8);
        do {
          memset((void *)(*plVar28 + uVar29 * 4),0,__n);
          uVar30 = uVar30 - 1;
          plVar28 = plVar28 + 1;
        } while (uVar30 != 0);
      }
      uVar18 = (ulong)*(uint *)((long)param_4 + 0xc);
    }
    param_2 = iVar3 + param_2;
  }
  pfVar15 = (float *)*param_4;
  uVar16 = *(uint *)((long)param_3 + 0xc);
  if ((((uVar16 >> 2 & 1) != 0) && (3 < (uint)uVar18)) && (lVar22 = *param_3, lVar22 != 0)) {
    uVar31 = uVar18;
    while( true ) {
      lVar23 = 0;
      if ((uVar16 & 2) != 0) {
        lVar23 = 0x60;
      }
      pfVar25 = (float *)(lVar22 + (ulong)((uVar16 & 1) << 5) * 4 + lVar23);
      fVar49 = (float)*(undefined8 *)(pfVar15 + 2);
      fVar52 = (float)((ulong)*(undefined8 *)(pfVar15 + 2) >> 0x20);
      fVar36 = (float)*(undefined8 *)pfVar15;
      fVar45 = (float)((ulong)*(undefined8 *)pfVar15 >> 0x20);
      fVar50 = (float)*(undefined8 *)(pfVar15 + 6);
      fVar51 = (float)((ulong)*(undefined8 *)(pfVar15 + 6) >> 0x20);
      uVar67 = *(undefined8 *)(pfVar15 + 4);
      fVar33 = (float)uVar67;
      fVar41 = (float)((ulong)uVar67 >> 0x20);
      fVar57 = (float)*(undefined8 *)(pfVar15 + 10);
      fVar34 = (float)((ulong)*(undefined8 *)(pfVar15 + 10) >> 0x20);
      fVar53 = (float)*(undefined8 *)(pfVar15 + 8);
      fVar55 = (float)((ulong)*(undefined8 *)(pfVar15 + 8) >> 0x20);
      auVar59 = *(undefined1 (*) [16])(pfVar15 + 0xc);
      fVar35 = *pfVar25;
      fVar32 = *pfVar15;
      auVar96._12_4_ = pfVar15[1];
      auVar96._8_4_ = pfVar15[2];
      fVar37 = pfVar15[3];
      fVar40 = pfVar15[4];
      fVar42 = pfVar15[5];
      fVar44 = pfVar15[6];
      fVar46 = pfVar15[7];
      if (param_2 != 0) {
        fVar38 = pfVar25[1];
        fVar39 = pfVar25[2];
        fVar43 = pfVar25[3];
        fVar47 = pfVar25[4];
        plVar28 = (long *)(param_1 + (ulong)(uint)((int)uVar31 - (int)uVar18) * 8);
        lVar22 = *plVar28;
        lVar20 = plVar28[1];
        lVar23 = plVar28[2];
        lVar1 = plVar28[3];
        uVar31 = 0;
        do {
          uVar16 = (int)uVar31 + 4;
          lVar24 = uVar31 * 4;
          fVar83 = fVar33 * fVar39;
          fVar85 = fVar41 * fVar39;
          fVar87 = fVar50 * fVar39;
          fVar89 = fVar51 * fVar39;
          fVar32 = fVar38 * fVar36;
          auVar96._8_4_ = fVar38 * fVar45;
          fVar40 = fVar38 * fVar49;
          fVar44 = fVar38 * fVar52;
          auVar92 = *(undefined1 (*) [16])(lVar22 + lVar24);
          auVar91 = *(undefined1 (*) [16])(lVar23 + lVar24);
          fVar73 = auVar91._4_4_;
          auVar97 = *(undefined1 (*) [16])(lVar20 + lVar24);
          auVar93 = NEON_ext(auVar97,auVar92,8,1);
          auVar82 = *(undefined1 (*) [16])(lVar1 + lVar24);
          auVar94 = NEON_ext(auVar92,auVar93,8,1);
          auVar93 = NEON_ext(auVar82,auVar91,8,1);
          fVar74 = auVar82._0_4_;
          fVar77 = auVar82._4_4_;
          auVar82 = NEON_ext(auVar91,auVar93,8,1);
          fVar78 = fVar36 * fVar39;
          fVar79 = fVar45 * fVar39;
          fVar80 = fVar49 * fVar39;
          fVar81 = fVar52 * fVar39;
          fVar36 = auVar94._4_4_;
          fVar45 = auVar94._12_4_;
          fVar49 = auVar82._4_4_;
          fVar52 = auVar82._12_4_;
          fVar33 = auVar94._0_4_;
          fVar41 = auVar94._8_4_;
          fVar50 = auVar82._0_4_;
          fVar51 = auVar82._8_4_;
          auVar96._12_4_ = auVar92._0_4_;
          fVar42 = auVar97._0_4_;
          fVar48 = auVar91._0_4_;
          fVar46 = auVar97._4_4_;
          fVar37 = auVar92._4_4_;
          fVar83 = fVar83 + fVar32 + fVar35 * auVar96._12_4_ + fVar47 * auVar59._0_4_ +
                   fVar43 * fVar53;
          fVar85 = fVar85 + auVar96._8_4_ + fVar35 * fVar42 + fVar47 * auVar59._4_4_ +
                   fVar43 * fVar55;
          fVar87 = fVar87 + fVar40 + fVar35 * fVar48 + fVar47 * auVar59._8_4_ + fVar43 * fVar57;
          fVar89 = fVar89 + fVar44 + fVar35 * fVar74 + fVar47 * auVar59._12_4_ + fVar43 * fVar34;
          fVar32 = fVar78 + fVar38 * auVar96._12_4_ + fVar35 * fVar37 + fVar47 * fVar53 +
                   fVar43 * fVar83;
          auVar96._8_4_ =
               fVar79 + fVar38 * fVar42 + fVar35 * fVar46 + fVar47 * fVar55 + fVar43 * fVar85;
          fVar40 = fVar80 + fVar38 * fVar48 + fVar35 * fVar73 + fVar47 * fVar57 + fVar43 * fVar87;
          fVar44 = fVar81 + fVar38 * fVar74 + fVar35 * fVar77 + fVar47 * fVar34 + fVar43 * fVar89;
          auVar59._0_4_ =
               auVar96._12_4_ * fVar39 + fVar38 * fVar37 + fVar35 * fVar33 + fVar47 * fVar83 +
               fVar43 * fVar32;
          auVar59._4_4_ =
               fVar42 * fVar39 + fVar38 * fVar46 + fVar35 * fVar41 + fVar47 * fVar85 +
               fVar43 * auVar96._8_4_;
          auVar59._8_4_ =
               fVar48 * fVar39 + fVar38 * fVar73 + fVar35 * fVar50 + fVar47 * fVar87 +
               fVar43 * fVar40;
          auVar59._12_4_ =
               fVar74 * fVar39 + fVar38 * fVar77 + fVar35 * fVar51 + fVar47 * fVar89 +
               fVar43 * fVar44;
          fVar53 = fVar37 * fVar39 + fVar38 * fVar33 + fVar35 * fVar36 + fVar47 * fVar32 +
                   fVar43 * auVar59._0_4_;
          fVar55 = fVar46 * fVar39 + fVar38 * fVar41 + fVar35 * fVar45 + fVar47 * auVar96._8_4_ +
                   fVar43 * auVar59._4_4_;
          fVar57 = fVar73 * fVar39 + fVar38 * fVar50 + fVar35 * fVar49 + fVar47 * fVar40 +
                   fVar43 * auVar59._8_4_;
          fVar34 = fVar77 * fVar39 + fVar38 * fVar51 + fVar35 * fVar52 + fVar47 * fVar44 +
                   fVar43 * auVar59._12_4_;
          auVar91._4_4_ = auVar96._8_4_;
          auVar91._0_4_ = fVar32;
          auVar91._8_4_ = fVar40;
          auVar91._12_4_ = fVar44;
          auVar97._4_4_ = fVar85;
          auVar97._0_4_ = fVar83;
          auVar97._8_4_ = fVar87;
          auVar97._12_4_ = fVar89;
          auVar91 = NEON_ext(auVar91,auVar97,8,1);
          auVar92._4_4_ = fVar55;
          auVar92._0_4_ = fVar53;
          auVar92._8_4_ = fVar57;
          auVar92._12_4_ = fVar34;
          auVar97 = NEON_ext(auVar92,auVar59,8,1);
          auVar82._4_4_ = fVar85;
          auVar82._0_4_ = fVar83;
          auVar82._8_4_ = fVar87;
          auVar82._12_4_ = fVar89;
          auVar92 = NEON_ext(auVar82,auVar91,8,1);
          auVar91 = NEON_ext(auVar59,auVar97,8,1);
          auVar93._0_8_ = CONCAT44(auVar92._12_4_,auVar92._4_4_);
          auVar93._8_4_ = auVar91._4_4_;
          auVar93._12_4_ = auVar91._12_4_;
          auVar94._0_8_ = CONCAT44(auVar96._8_4_,fVar85);
          auVar94._8_4_ = auVar59._4_4_;
          auVar94._12_4_ = fVar55;
          pfVar25 = (float *)(lVar22 + lVar24);
          pfVar25[2] = auVar59._0_4_;
          pfVar25[3] = fVar53;
          *pfVar25 = fVar83;
          pfVar25[1] = fVar32;
          puVar6 = (undefined8 *)(lVar20 + lVar24);
          puVar6[1] = auVar94._8_8_;
          *puVar6 = auVar94._0_8_;
          puVar6 = (undefined8 *)(lVar23 + lVar24);
          puVar6[1] = CONCAT44(auVar91._8_4_,auVar91._0_4_);
          *puVar6 = CONCAT44(auVar92._8_4_,auVar92._0_4_);
          puVar6 = (undefined8 *)(lVar1 + lVar24);
          puVar6[1] = auVar93._8_8_;
          *puVar6 = auVar93._0_8_;
          uVar31 = (ulong)uVar16;
          fVar32 = fVar36;
          auVar96._12_4_ = fVar45;
          auVar96._8_4_ = fVar49;
          fVar37 = fVar52;
          fVar40 = fVar33;
          fVar42 = fVar41;
          fVar44 = fVar50;
          fVar46 = fVar51;
        } while (uVar16 < param_2);
      }
      uVar16 = (int)uVar18 - 4;
      uVar18 = (ulong)uVar16;
      pfVar15[2] = auVar96._8_4_;
      pfVar15[3] = fVar37;
      *pfVar15 = fVar32;
      pfVar15[1] = auVar96._12_4_;
      pfVar15[6] = fVar44;
      pfVar15[7] = fVar46;
      pfVar15[4] = fVar40;
      pfVar15[5] = fVar42;
      *(ulong *)(pfVar15 + 10) = CONCAT44(fVar34,fVar57);
      *(ulong *)(pfVar15 + 8) = CONCAT44(fVar55,fVar53);
      *(long *)(pfVar15 + 0xe) = auVar59._8_8_;
      *(long *)(pfVar15 + 0xc) = auVar59._0_8_;
      pfVar15 = pfVar15 + 0x10;
      if (uVar16 < 4) break;
      uVar31 = (ulong)*(uint *)((long)param_4 + 0xc);
      uVar16 = *(uint *)((long)param_3 + 0xc);
      lVar22 = *param_3;
    }
    uVar16 = *(uint *)((long)param_3 + 0xc);
  }
  if ((uVar16 >> 1 & 1) != 0) {
    uVar14 = (uint)uVar18;
    if ((1 < uVar14) && (*param_3 != 0)) {
      uVar54 = (undefined4)*(undefined8 *)pfVar15;
      uVar56 = (undefined4)((ulong)*(undefined8 *)pfVar15 >> 0x20);
      auVar63._4_4_ = uVar54;
      auVar63._0_4_ = uVar54;
      auVar63._12_4_ = uVar56;
      auVar63._8_4_ = uVar56;
      fVar35 = (float)*(undefined8 *)(pfVar15 + 4);
      fVar32 = (float)((ulong)*(undefined8 *)(pfVar15 + 4) >> 0x20);
      uVar54 = (undefined4)*(undefined8 *)(pfVar15 + 8);
      uVar56 = (undefined4)((ulong)*(undefined8 *)(pfVar15 + 8) >> 0x20);
      auVar58._4_4_ = uVar54;
      auVar58._0_4_ = uVar54;
      auVar58._12_4_ = uVar56;
      auVar58._8_4_ = uVar56;
      auVar96._12_4_ = (float)*(undefined8 *)(pfVar15 + 0xc);
      auVar96._8_4_ = (float)((ulong)*(undefined8 *)(pfVar15 + 0xc) >> 0x20);
      if (param_2 != 0) {
        plVar28 = (long *)(param_1 + (ulong)(*(int *)((long)param_4 + 0xc) - uVar14) * 8);
        pfVar25 = (float *)(*param_3 + (ulong)((uVar16 & 1) << 5) * 4);
        fVar37 = *pfVar25;
        fVar40 = pfVar25[1];
        fVar42 = pfVar25[2];
        fVar44 = pfVar25[3];
        uVar69 = *(undefined8 *)(pfVar25 + 6);
        uVar67 = *(undefined8 *)(pfVar25 + 4);
        uVar75 = *(undefined8 *)(pfVar25 + 10);
        uVar71 = *(undefined8 *)(pfVar25 + 8);
        fVar55 = (float)*(undefined8 *)(pfVar25 + 0xe);
        fVar57 = (float)((ulong)*(undefined8 *)(pfVar25 + 0xe) >> 0x20);
        fVar52 = (float)*(undefined8 *)(pfVar25 + 0xc);
        fVar53 = (float)((ulong)*(undefined8 *)(pfVar25 + 0xc) >> 0x20);
        fVar46 = pfVar25[0x10];
        fVar33 = pfVar25[0x11];
        fVar36 = pfVar25[0x12];
        fVar41 = pfVar25[0x13];
        fVar45 = pfVar25[0x14];
        fVar50 = pfVar25[0x15];
        fVar49 = pfVar25[0x16];
        fVar51 = pfVar25[0x17];
        lVar22 = *plVar28;
        lVar23 = plVar28[1];
        uVar18 = 0;
        do {
          uVar16 = (int)uVar18 + 4;
          lVar20 = uVar18 * 4;
          fVar78 = auVar63._0_4_;
          fVar89 = (float)uVar71;
          fVar79 = auVar63._4_4_;
          fVar73 = (float)((ulong)uVar71 >> 0x20);
          fVar80 = auVar63._8_4_;
          fVar74 = (float)uVar75;
          auVar66._12_4_ = auVar63._12_4_;
          fVar77 = (float)((ulong)uVar75 >> 0x20);
          fVar34 = fVar52 * fVar35;
          fVar38 = fVar53 * fVar35;
          fVar43 = fVar55 * fVar32;
          fVar47 = fVar57 * fVar32;
          pauVar5 = (undefined1 (*) [12])(lVar22 + lVar20);
          uVar54 = (undefined4)((ulong)*(undefined8 *)(*pauVar5 + 8) >> 0x20);
          fVar84 = (float)*(undefined8 *)*pauVar5;
          fVar86 = (float)((ulong)*(undefined8 *)*pauVar5 >> 0x20);
          auVar59 = *(undefined1 (*) [16])(lVar23 + lVar20);
          auVar11._12_4_ = uVar54;
          auVar11._0_12_ = *pauVar5;
          auVar92 = NEON_ext(auVar59,auVar11,8,1);
          auVar12._12_4_ = uVar54;
          auVar12._0_12_ = *pauVar5;
          auVar92 = NEON_ext(auVar12,auVar92,8,1);
          fVar88 = auVar59._0_4_;
          fVar90 = auVar59._4_4_;
          fVar39 = auVar92._4_4_;
          auVar64._4_12_ = auVar63._4_12_;
          auVar64._0_4_ = fVar39;
          fVar48 = auVar92._12_4_;
          auVar66._0_8_ = auVar64._0_8_;
          auVar66._8_4_ = fVar48;
          auVar65._8_8_ = auVar66._8_8_;
          auVar65._4_4_ = fVar39;
          auVar65._0_4_ = fVar39;
          auVar63._0_12_ = auVar65._0_12_;
          auVar63._12_4_ = fVar48;
          fVar81 = (float)uVar67;
          fVar83 = (float)((ulong)uVar67 >> 0x20);
          fVar85 = (float)uVar69;
          fVar87 = (float)((ulong)uVar69 >> 0x20);
          fVar35 = auVar92._0_4_;
          fVar32 = auVar92._8_4_;
          fVar34 = fVar78 * fVar89 + fVar34 + fVar37 * fVar84 + fVar81 * fVar84 +
                   fVar46 * auVar58._0_4_ + fVar45 * auVar96._12_4_;
          fVar38 = fVar79 * fVar73 + fVar38 + fVar40 * fVar86 + fVar83 * fVar84 +
                   fVar33 * auVar58._4_4_ + fVar50 * auVar96._12_4_;
          auVar95._0_8_ = CONCAT44(fVar38,fVar34);
          auVar95._8_4_ =
               fVar80 * fVar74 + fVar43 + fVar42 * fVar88 + fVar85 * fVar88 + fVar36 * auVar58._8_4_
               + fVar49 * auVar96._8_4_;
          auVar95._12_4_ =
               auVar66._12_4_ * fVar77 + fVar47 + fVar44 * fVar90 + fVar87 * fVar88 +
               fVar41 * auVar58._12_4_ + fVar51 * auVar96._8_4_;
          auVar96._12_4_ =
               fVar86 * fVar89 + fVar52 * fVar84 + fVar37 * fVar35 + fVar81 * fVar35 +
               fVar46 * fVar38 + fVar45 * fVar34;
          fVar34 = fVar86 * fVar73 + fVar53 * fVar84 + fVar40 * fVar39 + fVar83 * fVar35 +
                   fVar33 * fVar38 + fVar50 * fVar34;
          auVar96._8_4_ =
               fVar90 * fVar74 + fVar55 * fVar88 + fVar42 * fVar32 + fVar85 * fVar32 +
               fVar36 * auVar95._12_4_ + fVar49 * auVar95._8_4_;
          fVar38 = fVar90 * fVar77 + fVar57 * fVar88 + fVar44 * fVar48 + fVar87 * fVar32 +
                   fVar41 * auVar95._12_4_ + fVar51 * auVar95._8_4_;
          auVar13._4_4_ = fVar34;
          auVar13._0_4_ = auVar96._12_4_;
          auVar13._8_4_ = auVar96._8_4_;
          auVar13._12_4_ = fVar38;
          auVar59 = NEON_ext(auVar13,auVar95,8,1);
          auVar59 = NEON_ext(auVar95,auVar59,8,1);
          puVar6 = (undefined8 *)(lVar22 + lVar20);
          puVar6[1] = CONCAT44(fVar34,auVar96._12_4_);
          *puVar6 = auVar95._0_8_;
          puVar6 = (undefined8 *)(lVar23 + lVar20);
          puVar6[1] = auVar59._8_8_;
          *puVar6 = auVar59._0_8_;
          auVar60._4_12_ = auVar59._4_12_;
          auVar60._0_4_ = fVar34;
          auVar62._12_4_ = auVar59._12_4_;
          auVar62._0_8_ = auVar60._0_8_;
          auVar62._8_4_ = fVar38;
          auVar61._8_8_ = auVar62._8_8_;
          auVar61._4_4_ = fVar34;
          auVar61._0_4_ = fVar34;
          auVar58._0_12_ = auVar61._0_12_;
          auVar58._12_4_ = fVar38;
          uVar18 = (ulong)uVar16;
        } while (uVar16 < param_2);
      }
      auVar59 = NEON_ext(auVar63,auVar63,8,1);
      *(ulong *)pfVar15 = CONCAT44(auVar59._0_4_,auVar63._0_4_);
      auVar9._4_4_ = fVar35;
      auVar9._0_4_ = fVar35;
      auVar9._8_4_ = fVar32;
      auVar9._12_4_ = fVar32;
      auVar10._4_4_ = fVar35;
      auVar10._0_4_ = fVar35;
      auVar10._8_4_ = fVar32;
      auVar10._12_4_ = fVar32;
      auVar59 = NEON_ext(auVar9,auVar10,8,1);
      *(ulong *)(pfVar15 + 4) = CONCAT44(auVar59._0_4_,fVar35);
      auVar59 = NEON_ext(auVar58,auVar58,8,1);
      *(ulong *)(pfVar15 + 8) = CONCAT44(auVar59._0_4_,auVar58._0_4_);
      auVar7._4_4_ = auVar96._12_4_;
      auVar7._0_4_ = auVar96._12_4_;
      auVar7._8_4_ = auVar96._8_4_;
      auVar7._12_4_ = auVar96._8_4_;
      auVar8._4_4_ = auVar96._12_4_;
      auVar8._0_4_ = auVar96._12_4_;
      auVar8._8_4_ = auVar96._8_4_;
      auVar8._12_4_ = auVar96._8_4_;
      auVar59 = NEON_ext(auVar7,auVar8,8,1);
      *(ulong *)(pfVar15 + 0xc) = CONCAT44(auVar59._0_4_,auVar96._12_4_);
      uVar16 = *(uint *)((long)param_3 + 0xc);
      uVar18 = (ulong)(uVar14 - 2);
    }
  }
  if ((((uVar16 & 1) != 0) && ((int)uVar18 != 0)) && (*param_3 != 0)) {
    do {
      uVar17 = *(uint *)((long)param_4 + 0xc);
      uVar4 = uVar17 - (int)uVar18;
      uVar19 = uVar17 - 1;
      uVar16 = uVar17 & 1;
      uVar2 = uVar4 >> 2;
      uVar14 = uVar4 & 3;
      uVar31 = (ulong)uVar14;
      if (uVar19 == uVar4 && uVar16 != 0) {
        pfVar15 = (float *)(*param_4 + (ulong)((uVar2 + (uVar17 != 1 && 1 < uVar14)) * 0x10) * 4);
        pfVar25 = pfVar15 + 1;
        pfVar26 = pfVar15 + 2;
        pfVar27 = pfVar15 + 3;
      }
      else {
        pfVar15 = (float *)(*param_4 + (ulong)(uVar2 << 4) * 4 + uVar31 * 4);
        pfVar25 = pfVar15 + 4;
        pfVar26 = pfVar15 + 8;
        pfVar27 = pfVar15 + 0xc;
      }
      fVar35 = *pfVar15;
      fVar32 = *pfVar25;
      auVar96._12_4_ = *pfVar26;
      auVar96._8_4_ = *pfVar27;
      if (param_2 != 0) {
        pauVar21 = (undefined1 (*) [16])*param_3;
        uVar30 = 0;
        auVar59 = *pauVar21;
        uVar70 = *(undefined8 *)(pauVar21[1] + 8);
        uVar68 = *(undefined8 *)pauVar21[1];
        uVar76 = *(undefined8 *)(pauVar21[2] + 8);
        uVar72 = *(undefined8 *)pauVar21[2];
        uVar69 = *(undefined8 *)(pauVar21[3] + 8);
        uVar67 = *(undefined8 *)pauVar21[3];
        fVar37 = *(float *)pauVar21[4];
        fVar40 = *(float *)(pauVar21[4] + 4);
        fVar42 = *(float *)(pauVar21[4] + 8);
        fVar44 = *(float *)(pauVar21[4] + 0xc);
        fVar46 = *(float *)pauVar21[5];
        fVar33 = *(float *)(pauVar21[5] + 4);
        fVar36 = *(float *)(pauVar21[5] + 8);
        fVar41 = *(float *)(pauVar21[5] + 0xc);
        uVar75 = *(undefined8 *)(pauVar21[6] + 8);
        uVar71 = *(undefined8 *)pauVar21[6];
        auVar92 = pauVar21[7];
        fVar45 = fVar35;
        fVar50 = fVar32;
        do {
          lVar22 = *(long *)(param_1 + (ulong)uVar4 * 8);
          lVar23 = uVar30 * 4;
          auVar91 = *(undefined1 (*) [16])(lVar22 + lVar23);
          fVar51 = auVar91._0_4_;
          fVar52 = auVar91._4_4_;
          fVar32 = auVar91._8_4_;
          fVar35 = auVar91._12_4_;
          fVar49 = auVar92._12_4_ * auVar96._8_4_;
          auVar96._0_8_ =
               CONCAT44(fVar52 * auVar59._4_4_ + fVar40 * fVar45 + fVar33 * fVar50 +
                        (float)((ulong)uVar68 >> 0x20) * fVar32 +
                        (float)((ulong)uVar72 >> 0x20) * fVar52 +
                        (float)((ulong)uVar67 >> 0x20) * fVar51 +
                        (float)((ulong)uVar71 >> 0x20) * auVar96._12_4_ +
                        auVar92._4_4_ * auVar96._8_4_,
                        fVar51 * auVar59._0_4_ + fVar37 * fVar45 + fVar46 * fVar50 +
                        (float)uVar68 * fVar32 + (float)uVar72 * fVar52 + (float)uVar67 * fVar51 +
                        (float)uVar71 * auVar96._12_4_ + auVar92._0_4_ * auVar96._8_4_);
          auVar96._8_4_ =
               fVar32 * auVar59._8_4_ + fVar42 * fVar45 + fVar36 * fVar50 + (float)uVar70 * fVar32 +
               (float)uVar76 * fVar52 + (float)uVar69 * fVar51 + (float)uVar75 * auVar96._12_4_ +
               auVar92._8_4_ * auVar96._8_4_;
          auVar96._12_4_ =
               fVar35 * auVar59._12_4_ + fVar44 * fVar45 + fVar41 * fVar50 +
               (float)((ulong)uVar70 >> 0x20) * fVar32 + (float)((ulong)uVar76 >> 0x20) * fVar52 +
               (float)((ulong)uVar69 >> 0x20) * fVar51 +
               (float)((ulong)uVar75 >> 0x20) * auVar96._12_4_ + fVar49;
          uVar16 = (int)uVar30 + 4;
          uVar30 = (ulong)uVar16;
          puVar6 = (undefined8 *)(lVar22 + lVar23);
          puVar6[1] = auVar96._8_8_;
          *puVar6 = auVar96._0_8_;
          fVar45 = fVar35;
          fVar50 = fVar32;
        } while (uVar16 < param_2);
        uVar17 = *(uint *)((long)param_4 + 0xc);
        uVar19 = uVar17 - 1;
        uVar16 = uVar17 & 1;
      }
      if ((uVar16 == 0) || (uVar19 != uVar4)) {
        uVar2 = uVar2 << 4;
        *(float *)(*param_4 + (ulong)uVar2 * 4 + uVar31 * 4) = fVar35;
        *(float *)(*param_4 + (ulong)uVar2 * 4 + uVar31 * 4 + 0x10) = fVar32;
        *(float *)(*param_4 + (ulong)uVar2 * 4 + uVar31 * 4 + 0x20) = auVar96._12_4_;
        lVar22 = *param_4 + (ulong)uVar2 * 4 + 0x30;
      }
      else {
        uVar31 = (ulong)((uVar2 + (1 < uVar14 && uVar17 != 1)) * 0x10);
        *(float *)(*param_4 + uVar31 * 4) = fVar35;
        *(float *)(*param_4 + uVar31 * 4 + 4) = fVar32;
        *(float *)(*param_4 + uVar31 * 4 + 8) = auVar96._12_4_;
        lVar22 = *param_4 + 0xc;
      }
      uVar16 = (int)uVar18 - 1;
      uVar18 = (ulong)uVar16;
      *(float *)(lVar22 + uVar31 * 4) = auVar96._8_4_;
    } while (uVar16 != 0);
  }
  return;
}


