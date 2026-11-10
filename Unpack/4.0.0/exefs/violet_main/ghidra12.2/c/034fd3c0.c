/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034fd3c0; name: FUN_034fd3c0
 */


void FUN_034fd3c0(long *param_1,long param_2,uint param_3,int param_4,long param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float *pfVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  float *pfVar20;
  uint uVar21;
  long *plVar22;
  long lVar23;
  uint uVar24;
  uint uVar25;
  undefined1 (*pauVar26) [16];
  long lVar27;
  float *pfVar28;
  float *pfVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
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
  undefined4 uVar49;
  float fVar50;
  undefined4 uVar51;
  float fVar52;
  float fVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar58 [16];
  undefined1 auVar57 [16];
  undefined1 auVar56 [16];
  undefined1 auVar59 [16];
  undefined1 auVar62 [16];
  undefined1 auVar61 [16];
  undefined1 auVar60 [16];
  undefined8 uVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  float fVar69;
  undefined8 uVar68;
  float fVar70;
  undefined8 uVar71;
  float fVar73;
  undefined8 uVar72;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar89;
  float fVar90;
  undefined1 auVar87 [16];
  float fVar91;
  undefined1 auVar88 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  long lStack_70;
  int local_64;
  
  uVar21 = *(uint *)((long)param_1 + 0xc);
  uVar30 = (ulong)uVar21;
  if (uVar21 == 0) {
    uVar19 = 0;
    if ((param_3 & 3) == 0) goto LAB_034fd518;
    local_64 = 4 - (param_3 & 3);
  }
  else {
    if (uVar21 == 1) {
      uVar19 = 0;
    }
    else {
      uVar31 = 0;
      uVar19 = 0;
      plVar22 = (long *)((long)register0x00000008 + uVar30 * -0x10 + -0x60);
      do {
        lVar23 = uVar31 * 4;
        uVar18 = param_4 + (int)uVar31;
        uVar19 = uVar19 + 2;
        lVar2 = uVar31 * 4;
        uVar31 = (ulong)(uint)((int)uVar31 + param_4 * 2);
        plVar22[-2] = param_2 + lVar23;
        plVar22[-1] = param_5 + lVar2;
        *plVar22 = param_2 + (ulong)uVar18 * 4;
        plVar22[1] = param_5 + (ulong)uVar18 * 4;
        plVar22 = plVar22 + 4;
      } while ((uVar30 & 0xfffffffe) != uVar19);
    }
    if ((uVar21 & 1) != 0) {
      uVar18 = (int)uVar19 * param_4;
      (&lStack_70)[uVar30 * -2 + uVar19 * 2] = param_2 + (ulong)uVar18 * 4;
      (&lStack_70 + uVar30 * -2 + uVar19 * 2)[1] = param_5 + (ulong)uVar18 * 4;
    }
    uVar19 = uVar30;
    if ((param_3 & 3) == 0) goto LAB_034fd518;
    local_64 = 4 - (param_3 & 3);
    if (uVar21 != 0) {
      uVar19 = (ulong)(uint)(local_64 * 4);
      uVar31 = (ulong)param_3;
      if (uVar21 == 1) {
        uVar32 = 0;
      }
      else {
        uVar32 = 0;
        plVar22 = (long *)((long)register0x00000008 + uVar30 * -0x10 + -0x60);
        do {
          memset((void *)(plVar22[-2] + uVar31 * 4),0,uVar19);
          memset((void *)(*plVar22 + uVar31 * 4),0,uVar19);
          uVar32 = uVar32 + 2;
          plVar22 = plVar22 + 4;
        } while ((uVar30 & 0xfffffffe) != uVar32);
      }
      if ((uVar21 & 1) != 0) {
        memset((void *)((&lStack_70)[uVar30 * -2 + uVar32 * 2] + uVar31 * 4),0,uVar19);
      }
      uVar19 = (ulong)*(uint *)((long)param_1 + 0xc);
    }
  }
  param_3 = local_64 + param_3;
LAB_034fd518:
  plVar22 = param_1 + 2;
  pfVar20 = (float *)*param_1;
  uVar21 = *(uint *)((long)param_1 + 0x1c);
  if ((((uVar21 >> 2 & 1) != 0) && (3 < (uint)uVar19)) && (lVar23 = *plVar22, lVar23 != 0)) {
    uVar31 = uVar19;
    while( true ) {
      lVar2 = 0;
      if ((uVar21 & 2) != 0) {
        lVar2 = 0x60;
      }
      pfVar28 = (float *)(lVar23 + (ulong)((uVar21 & 1) << 5) * 4 + lVar2);
      auVar88._8_4_ = (float)*(undefined8 *)(pfVar20 + 2);
      auVar98._8_4_ = (float)((ulong)*(undefined8 *)(pfVar20 + 2) >> 0x20);
      fVar39 = (float)*(undefined8 *)pfVar20;
      auVar98._12_4_ = (float)((ulong)*(undefined8 *)pfVar20 >> 0x20);
      fVar46 = (float)*(undefined8 *)(pfVar20 + 6);
      fVar47 = (float)((ulong)*(undefined8 *)(pfVar20 + 6) >> 0x20);
      uVar63 = *(undefined8 *)*(undefined1 (*) [16])(pfVar20 + 4);
      auVar87 = *(undefined1 (*) [16])(pfVar20 + 4);
      fVar34 = (float)uVar63;
      fVar42 = (float)((ulong)uVar63 >> 0x20);
      fVar52 = (float)*(undefined8 *)(pfVar20 + 10);
      fVar53 = (float)((ulong)*(undefined8 *)(pfVar20 + 10) >> 0x20);
      fVar48 = (float)*(undefined8 *)(pfVar20 + 8);
      fVar50 = (float)((ulong)*(undefined8 *)(pfVar20 + 8) >> 0x20);
      auVar55 = *(undefined1 (*) [16])(pfVar20 + 0xc);
      fVar37 = *pfVar28;
      if (param_3 == 0) {
        fVar39 = *pfVar20;
        auVar98._12_4_ = pfVar20[1];
        auVar88._8_4_ = pfVar20[2];
        auVar98._8_4_ = pfVar20[3];
      }
      else {
        fVar76 = pfVar28[1];
        fVar78 = pfVar28[2];
        fVar80 = pfVar28[3];
        fVar82 = pfVar28[4];
        plVar1 = &lStack_70 + uVar30 * -2 + (ulong)(uint)((int)uVar31 - (int)uVar19) * 2;
        lVar23 = *plVar1;
        lVar27 = plVar1[1];
        lVar2 = plVar1[2];
        lVar5 = plVar1[3];
        lVar3 = plVar1[4];
        lVar6 = plVar1[5];
        lVar4 = plVar1[6];
        lVar7 = plVar1[7];
        uVar31 = 0;
        do {
          uVar21 = (int)uVar31 + 4;
          lVar17 = uVar31 * 4;
          fVar81 = fVar34 * fVar78;
          fVar83 = fVar42 * fVar78;
          fVar84 = fVar46 * fVar78;
          fVar85 = fVar47 * fVar78;
          fVar33 = fVar76 * fVar39;
          fVar38 = fVar76 * auVar98._12_4_;
          fVar41 = fVar76 * auVar88._8_4_;
          fVar43 = fVar76 * auVar98._8_4_;
          auVar93 = *(undefined1 (*) [16])(lVar23 + lVar17);
          auVar92 = *(undefined1 (*) [16])(lVar3 + lVar17);
          fVar69 = auVar92._4_4_;
          auVar99 = *(undefined1 (*) [16])(lVar2 + lVar17);
          auVar95 = NEON_ext(auVar99,auVar93,8,1);
          auVar87 = *(undefined1 (*) [16])(lVar4 + lVar17);
          auVar96 = NEON_ext(auVar93,auVar95,8,1);
          auVar95 = NEON_ext(auVar87,auVar92,8,1);
          fVar70 = auVar87._0_4_;
          fVar73 = auVar87._4_4_;
          auVar95 = NEON_ext(auVar92,auVar95,8,1);
          fVar74 = fVar39 * fVar78;
          fVar75 = auVar98._12_4_ * fVar78;
          fVar77 = auVar88._8_4_ * fVar78;
          fVar79 = auVar98._8_4_ * fVar78;
          fVar39 = auVar96._4_4_;
          auVar98._12_4_ = auVar96._12_4_;
          auVar88._8_4_ = auVar95._4_4_;
          auVar98._8_4_ = auVar95._12_4_;
          fVar34 = auVar96._0_4_;
          fVar42 = auVar96._8_4_;
          auVar87._4_4_ = fVar42;
          auVar87._0_4_ = fVar34;
          fVar46 = auVar95._0_4_;
          auVar87._8_4_ = fVar46;
          fVar47 = auVar95._8_4_;
          auVar87._12_4_ = fVar47;
          fVar35 = auVar93._0_4_;
          fVar40 = auVar99._0_4_;
          fVar45 = auVar92._0_4_;
          fVar44 = auVar99._4_4_;
          fVar36 = auVar93._4_4_;
          fVar81 = fVar81 + fVar33 + fVar37 * fVar35 + fVar82 * auVar55._0_4_ + fVar80 * fVar48;
          fVar83 = fVar83 + fVar38 + fVar37 * fVar40 + fVar82 * auVar55._4_4_ + fVar80 * fVar50;
          fVar84 = fVar84 + fVar41 + fVar37 * fVar45 + fVar82 * auVar55._8_4_ + fVar80 * fVar52;
          fVar85 = fVar85 + fVar43 + fVar37 * fVar70 + fVar82 * auVar55._12_4_ + fVar80 * fVar53;
          fVar33 = fVar74 + fVar76 * fVar35 + fVar37 * fVar36 + fVar82 * fVar48 + fVar80 * fVar81;
          fVar38 = fVar75 + fVar76 * fVar40 + fVar37 * fVar44 + fVar82 * fVar50 + fVar80 * fVar83;
          fVar41 = fVar77 + fVar76 * fVar45 + fVar37 * fVar69 + fVar82 * fVar52 + fVar80 * fVar84;
          fVar43 = fVar79 + fVar76 * fVar70 + fVar37 * fVar73 + fVar82 * fVar53 + fVar80 * fVar85;
          auVar55._0_4_ =
               fVar35 * fVar78 + fVar76 * fVar36 + fVar37 * fVar34 + fVar82 * fVar81 +
               fVar80 * fVar33;
          auVar55._4_4_ =
               fVar40 * fVar78 + fVar76 * fVar44 + fVar37 * fVar42 + fVar82 * fVar83 +
               fVar80 * fVar38;
          auVar55._8_4_ =
               fVar45 * fVar78 + fVar76 * fVar69 + fVar37 * fVar46 + fVar82 * fVar84 +
               fVar80 * fVar41;
          auVar55._12_4_ =
               fVar70 * fVar78 + fVar76 * fVar73 + fVar37 * fVar47 + fVar82 * fVar85 +
               fVar80 * fVar43;
          fVar48 = fVar36 * fVar78 + fVar76 * fVar34 + fVar37 * fVar39 + fVar82 * fVar33 +
                   fVar80 * auVar55._0_4_;
          fVar50 = fVar44 * fVar78 + fVar76 * fVar42 + fVar37 * auVar98._12_4_ + fVar82 * fVar38 +
                   fVar80 * auVar55._4_4_;
          fVar52 = fVar69 * fVar78 + fVar76 * fVar46 + fVar37 * auVar88._8_4_ + fVar82 * fVar41 +
                   fVar80 * auVar55._8_4_;
          fVar53 = fVar73 * fVar78 + fVar76 * fVar47 + fVar37 * auVar98._8_4_ + fVar82 * fVar43 +
                   fVar80 * auVar55._12_4_;
          auVar92._4_4_ = fVar38;
          auVar92._0_4_ = fVar33;
          auVar92._8_4_ = fVar41;
          auVar92._12_4_ = fVar43;
          auVar99._4_4_ = fVar83;
          auVar99._0_4_ = fVar81;
          auVar99._8_4_ = fVar84;
          auVar99._12_4_ = fVar85;
          auVar92 = NEON_ext(auVar92,auVar99,8,1);
          auVar93._4_4_ = fVar50;
          auVar93._0_4_ = fVar48;
          auVar93._8_4_ = fVar52;
          auVar93._12_4_ = fVar53;
          auVar99 = NEON_ext(auVar93,auVar55,8,1);
          auVar95._4_4_ = fVar83;
          auVar95._0_4_ = fVar81;
          auVar95._8_4_ = fVar84;
          auVar95._12_4_ = fVar85;
          auVar93 = NEON_ext(auVar95,auVar92,8,1);
          auVar92 = NEON_ext(auVar55,auVar99,8,1);
          auVar96._0_8_ = CONCAT44(auVar93._12_4_,auVar93._4_4_);
          auVar96._8_4_ = auVar92._4_4_;
          auVar96._12_4_ = auVar92._12_4_;
          auVar94._0_8_ = CONCAT44(fVar38,fVar83);
          auVar94._8_4_ = auVar55._4_4_;
          auVar94._12_4_ = fVar50;
          pfVar28 = (float *)(lVar27 + lVar17);
          pfVar28[2] = auVar55._0_4_;
          pfVar28[3] = fVar48;
          *pfVar28 = fVar81;
          pfVar28[1] = fVar33;
          ((undefined8 *)(lVar5 + lVar17))[1] = auVar94._8_8_;
          *(undefined8 *)(lVar5 + lVar17) = auVar94._0_8_;
          ((undefined8 *)(lVar6 + lVar17))[1] = CONCAT44(auVar92._8_4_,auVar92._0_4_);
          *(undefined8 *)(lVar6 + lVar17) = CONCAT44(auVar93._8_4_,auVar93._0_4_);
          ((undefined8 *)(lVar7 + lVar17))[1] = auVar96._8_8_;
          *(undefined8 *)(lVar7 + lVar17) = auVar96._0_8_;
          uVar31 = (ulong)uVar21;
        } while (uVar21 < param_3);
      }
      uVar21 = (int)uVar19 - 4;
      uVar19 = (ulong)uVar21;
      pfVar20[2] = auVar88._8_4_;
      pfVar20[3] = auVar98._8_4_;
      *pfVar20 = fVar39;
      pfVar20[1] = auVar98._12_4_;
      *(long *)(pfVar20 + 6) = auVar87._8_8_;
      *(long *)(pfVar20 + 4) = auVar87._0_8_;
      *(ulong *)(pfVar20 + 10) = CONCAT44(fVar53,fVar52);
      *(ulong *)(pfVar20 + 8) = CONCAT44(fVar50,fVar48);
      *(long *)(pfVar20 + 0xe) = auVar55._8_8_;
      *(long *)(pfVar20 + 0xc) = auVar55._0_8_;
      pfVar20 = pfVar20 + 0x10;
      if (uVar21 < 4) break;
      uVar31 = (ulong)*(uint *)((long)param_1 + 0xc);
      uVar21 = *(uint *)((long)param_1 + 0x1c);
      lVar23 = *plVar22;
    }
    uVar21 = *(uint *)((long)param_1 + 0x1c);
  }
  if ((uVar21 >> 1 & 1) != 0) {
    uVar18 = (uint)uVar19;
    if ((1 < uVar18) && (*plVar22 != 0)) {
      uVar49 = (undefined4)*(undefined8 *)pfVar20;
      uVar51 = (undefined4)((ulong)*(undefined8 *)pfVar20 >> 0x20);
      auVar59._4_4_ = uVar49;
      auVar59._0_4_ = uVar49;
      auVar59._12_4_ = uVar51;
      auVar59._8_4_ = uVar51;
      fVar37 = (float)*(undefined8 *)(pfVar20 + 4);
      fVar39 = (float)((ulong)*(undefined8 *)(pfVar20 + 4) >> 0x20);
      uVar49 = (undefined4)*(undefined8 *)(pfVar20 + 8);
      uVar51 = (undefined4)((ulong)*(undefined8 *)(pfVar20 + 8) >> 0x20);
      auVar54._4_4_ = uVar49;
      auVar54._0_4_ = uVar49;
      auVar54._12_4_ = uVar51;
      auVar54._8_4_ = uVar51;
      auVar98._12_4_ = (float)*(undefined8 *)(pfVar20 + 0xc);
      auVar88._8_4_ = (float)((ulong)*(undefined8 *)(pfVar20 + 0xc) >> 0x20);
      if (param_3 != 0) {
        plVar1 = &lStack_70 + uVar30 * -2 + (ulong)(*(int *)((long)param_1 + 0xc) - uVar18) * 2;
        pfVar28 = (float *)(*plVar22 + (ulong)((uVar21 & 1) << 5) * 4);
        auVar98._8_4_ = *pfVar28;
        fVar34 = pfVar28[1];
        fVar42 = pfVar28[2];
        fVar46 = pfVar28[3];
        uVar65 = *(undefined8 *)(pfVar28 + 6);
        uVar63 = *(undefined8 *)(pfVar28 + 4);
        uVar71 = *(undefined8 *)(pfVar28 + 10);
        uVar67 = *(undefined8 *)(pfVar28 + 8);
        fVar78 = (float)*(undefined8 *)(pfVar28 + 0xe);
        fVar80 = (float)((ulong)*(undefined8 *)(pfVar28 + 0xe) >> 0x20);
        fVar53 = (float)*(undefined8 *)(pfVar28 + 0xc);
        fVar76 = (float)((ulong)*(undefined8 *)(pfVar28 + 0xc) >> 0x20);
        fVar35 = (float)*(undefined8 *)(pfVar28 + 0x12);
        fVar38 = (float)((ulong)*(undefined8 *)(pfVar28 + 0x12) >> 0x20);
        fVar82 = (float)*(undefined8 *)(pfVar28 + 0x10);
        fVar33 = (float)((ulong)*(undefined8 *)(pfVar28 + 0x10) >> 0x20);
        fVar47 = pfVar28[0x14];
        fVar48 = pfVar28[0x15];
        fVar50 = pfVar28[0x16];
        fVar52 = pfVar28[0x17];
        lVar23 = *plVar1;
        lVar3 = plVar1[1];
        lVar2 = plVar1[2];
        lVar4 = plVar1[3];
        uVar19 = 0;
        do {
          uVar21 = (int)uVar19 + 4;
          lVar27 = uVar19 * 4;
          fVar74 = auVar59._0_4_;
          fVar85 = (float)uVar67;
          fVar75 = auVar59._4_4_;
          fVar69 = (float)((ulong)uVar67 >> 0x20);
          fVar77 = auVar59._8_4_;
          fVar70 = (float)uVar71;
          auVar62._12_4_ = auVar59._12_4_;
          fVar73 = (float)((ulong)uVar71 >> 0x20);
          fVar36 = fVar53 * fVar37;
          fVar41 = fVar76 * fVar37;
          fVar43 = fVar78 * fVar39;
          fVar44 = fVar80 * fVar39;
          auVar55 = *(undefined1 (*) [16])(lVar23 + lVar27);
          auVar87 = *(undefined1 (*) [16])(lVar2 + lVar27);
          auVar93 = NEON_ext(auVar87,auVar55,8,1);
          auVar93 = NEON_ext(auVar55,auVar93,8,1);
          fVar40 = auVar93._4_4_;
          auVar60._4_12_ = auVar59._4_12_;
          auVar60._0_4_ = fVar40;
          fVar45 = auVar93._12_4_;
          auVar62._0_8_ = auVar60._0_8_;
          auVar62._8_4_ = fVar45;
          auVar61._8_8_ = auVar62._8_8_;
          auVar61._4_4_ = fVar40;
          auVar61._0_4_ = fVar40;
          auVar59._0_12_ = auVar61._0_12_;
          auVar59._12_4_ = fVar45;
          fVar86 = auVar55._0_4_;
          fVar89 = auVar55._4_4_;
          fVar90 = auVar87._0_4_;
          fVar91 = auVar87._4_4_;
          fVar79 = (float)uVar63;
          fVar81 = (float)((ulong)uVar63 >> 0x20);
          fVar83 = (float)uVar65;
          fVar84 = (float)((ulong)uVar65 >> 0x20);
          fVar37 = auVar93._0_4_;
          fVar39 = auVar93._8_4_;
          fVar36 = fVar74 * fVar85 + fVar36 + auVar98._8_4_ * fVar86 + fVar79 * fVar86 +
                   fVar82 * auVar54._0_4_ + fVar47 * auVar98._12_4_;
          fVar41 = fVar75 * fVar69 + fVar41 + fVar34 * fVar89 + fVar81 * fVar86 +
                   fVar33 * auVar54._4_4_ + fVar48 * auVar98._12_4_;
          auVar97._0_8_ = CONCAT44(fVar41,fVar36);
          auVar97._8_4_ =
               fVar77 * fVar70 + fVar43 + fVar42 * fVar90 + fVar83 * fVar90 + fVar35 * auVar54._8_4_
               + fVar50 * auVar88._8_4_;
          auVar97._12_4_ =
               auVar62._12_4_ * fVar73 + fVar44 + fVar46 * fVar91 + fVar84 * fVar90 +
               fVar38 * auVar54._12_4_ + fVar52 * auVar88._8_4_;
          auVar98._12_4_ =
               fVar89 * fVar85 + fVar53 * fVar86 + auVar98._8_4_ * fVar37 + fVar79 * fVar37 +
               fVar82 * fVar41 + fVar47 * fVar36;
          fVar36 = fVar89 * fVar69 + fVar76 * fVar86 + fVar34 * fVar40 + fVar81 * fVar37 +
                   fVar33 * fVar41 + fVar48 * fVar36;
          auVar88._0_8_ = CONCAT44(fVar36,auVar98._12_4_);
          auVar88._8_4_ =
               fVar91 * fVar70 + fVar78 * fVar90 + fVar42 * fVar39 + fVar83 * fVar39 +
               fVar35 * auVar97._12_4_ + fVar50 * auVar97._8_4_;
          auVar88._12_4_ =
               fVar91 * fVar73 + fVar80 * fVar90 + fVar46 * fVar45 + fVar84 * fVar39 +
               fVar38 * auVar97._12_4_ + fVar52 * auVar97._8_4_;
          auVar55 = NEON_ext(auVar88,auVar97,8,1);
          auVar55 = NEON_ext(auVar97,auVar55,8,1);
          ((undefined8 *)(lVar3 + lVar27))[1] = auVar88._0_8_;
          *(undefined8 *)(lVar3 + lVar27) = auVar97._0_8_;
          ((undefined8 *)(lVar4 + lVar27))[1] = auVar55._8_8_;
          *(undefined8 *)(lVar4 + lVar27) = auVar55._0_8_;
          auVar56._4_12_ = auVar55._4_12_;
          auVar56._0_4_ = fVar36;
          auVar58._12_4_ = auVar55._12_4_;
          auVar58._0_8_ = auVar56._0_8_;
          auVar58._8_4_ = auVar88._12_4_;
          auVar57._8_8_ = auVar58._8_8_;
          auVar57._4_4_ = fVar36;
          auVar57._0_4_ = fVar36;
          auVar54._0_12_ = auVar57._0_12_;
          auVar54._12_4_ = auVar88._12_4_;
          uVar19 = (ulong)uVar21;
        } while (uVar21 < param_3);
      }
      auVar55 = NEON_ext(auVar59,auVar59,8,1);
      *(ulong *)pfVar20 = CONCAT44(auVar55._0_4_,auVar59._0_4_);
      auVar14._4_4_ = fVar37;
      auVar14._0_4_ = fVar37;
      auVar14._8_4_ = fVar39;
      auVar14._12_4_ = fVar39;
      auVar15._4_4_ = fVar37;
      auVar15._0_4_ = fVar37;
      auVar15._8_4_ = fVar39;
      auVar15._12_4_ = fVar39;
      auVar55 = NEON_ext(auVar14,auVar15,8,1);
      *(ulong *)(pfVar20 + 4) = CONCAT44(auVar55._0_4_,fVar37);
      auVar55 = NEON_ext(auVar54,auVar54,8,1);
      *(ulong *)(pfVar20 + 8) = CONCAT44(auVar55._0_4_,auVar54._0_4_);
      auVar12._4_4_ = auVar98._12_4_;
      auVar12._0_4_ = auVar98._12_4_;
      auVar12._8_4_ = auVar88._8_4_;
      auVar12._12_4_ = auVar88._8_4_;
      auVar13._4_4_ = auVar98._12_4_;
      auVar13._0_4_ = auVar98._12_4_;
      auVar13._8_4_ = auVar88._8_4_;
      auVar13._12_4_ = auVar88._8_4_;
      auVar55 = NEON_ext(auVar12,auVar13,8,1);
      *(ulong *)(pfVar20 + 0xc) = CONCAT44(auVar55._0_4_,auVar98._12_4_);
      uVar21 = *(uint *)((long)param_1 + 0x1c);
      uVar19 = (ulong)(uVar18 - 2);
    }
  }
  if ((((uVar21 & 1) != 0) && ((int)uVar19 != 0)) && (*plVar22 != 0)) {
    do {
      uVar24 = *(uint *)((long)param_1 + 0xc);
      uVar10 = uVar24 - (int)uVar19;
      uVar25 = uVar24 - 1;
      uVar9 = uVar10 >> 2;
      uVar21 = uVar24 & 1;
      uVar18 = uVar10 & 3;
      uVar31 = (ulong)uVar18;
      uVar8 = uVar9 << 4;
      if (uVar25 == uVar10 && uVar21 != 0) {
        pfVar20 = (float *)(*param_1 + (ulong)((uVar9 + (uVar24 != 1 && 1 < uVar18)) * 0x10) * 4);
        pfVar28 = pfVar20 + 1;
        pfVar29 = pfVar20 + 2;
        pfVar16 = pfVar20 + 3;
      }
      else {
        pfVar20 = (float *)(*param_1 + (ulong)uVar8 * 4 + uVar31 * 4);
        pfVar28 = pfVar20 + 4;
        pfVar29 = pfVar20 + 8;
        pfVar16 = pfVar20 + 0xc;
      }
      fVar37 = *pfVar20;
      fVar39 = *pfVar28;
      auVar98._12_4_ = *pfVar29;
      auVar98._8_4_ = *pfVar16;
      if (param_3 != 0) {
        pauVar26 = (undefined1 (*) [16])*plVar22;
        auVar55 = *pauVar26;
        uVar66 = *(undefined8 *)(pauVar26[1] + 8);
        uVar64 = *(undefined8 *)pauVar26[1];
        uVar72 = *(undefined8 *)(pauVar26[2] + 8);
        uVar68 = *(undefined8 *)pauVar26[2];
        uVar65 = *(undefined8 *)(pauVar26[3] + 8);
        uVar63 = *(undefined8 *)pauVar26[3];
        uVar71 = *(undefined8 *)(pauVar26[4] + 8);
        uVar67 = *(undefined8 *)pauVar26[4];
        auVar88._8_4_ = *(float *)pauVar26[5];
        fVar34 = *(float *)(pauVar26[5] + 4);
        fVar42 = *(float *)(pauVar26[5] + 8);
        fVar46 = *(float *)(pauVar26[5] + 0xc);
        auVar87 = pauVar26[6];
        auVar93 = pauVar26[7];
        lVar23 = (&lStack_70)[uVar30 * -2 + (ulong)uVar10 * 2];
        lVar2 = (&lStack_70 + uVar30 * -2 + (ulong)uVar10 * 2)[1];
        uVar32 = 0;
        fVar47 = fVar37;
        fVar48 = fVar39;
        do {
          uVar21 = (int)uVar32 + 4;
          auVar92 = *(undefined1 (*) [16])(lVar23 + uVar32 * 4);
          fVar52 = auVar92._0_4_;
          fVar53 = auVar92._4_4_;
          fVar39 = auVar92._8_4_;
          fVar37 = auVar92._12_4_;
          fVar50 = auVar93._12_4_ * auVar98._8_4_;
          auVar98._0_8_ =
               CONCAT44(fVar53 * auVar55._4_4_ + (float)((ulong)uVar67 >> 0x20) * fVar47 +
                        fVar34 * fVar48 + (float)((ulong)uVar64 >> 0x20) * fVar39 +
                        (float)((ulong)uVar68 >> 0x20) * fVar53 +
                        (float)((ulong)uVar63 >> 0x20) * fVar52 + auVar87._4_4_ * auVar98._12_4_ +
                        auVar93._4_4_ * auVar98._8_4_,
                        fVar52 * auVar55._0_4_ + (float)uVar67 * fVar47 + auVar88._8_4_ * fVar48 +
                        (float)uVar64 * fVar39 + (float)uVar68 * fVar53 + (float)uVar63 * fVar52 +
                        auVar87._0_4_ * auVar98._12_4_ + auVar93._0_4_ * auVar98._8_4_);
          auVar98._8_4_ =
               fVar39 * auVar55._8_4_ + (float)uVar71 * fVar47 + fVar42 * fVar48 +
               (float)uVar66 * fVar39 + (float)uVar72 * fVar53 + (float)uVar65 * fVar52 +
               auVar87._8_4_ * auVar98._12_4_ + auVar93._8_4_ * auVar98._8_4_;
          auVar98._12_4_ =
               fVar37 * auVar55._12_4_ + (float)((ulong)uVar71 >> 0x20) * fVar47 + fVar46 * fVar48 +
               (float)((ulong)uVar66 >> 0x20) * fVar39 + (float)((ulong)uVar72 >> 0x20) * fVar53 +
               (float)((ulong)uVar65 >> 0x20) * fVar52 + auVar87._12_4_ * auVar98._12_4_ + fVar50;
          puVar11 = (undefined8 *)(lVar2 + uVar32 * 4);
          puVar11[1] = auVar98._8_8_;
          *puVar11 = auVar98._0_8_;
          uVar32 = (ulong)uVar21;
          fVar47 = fVar37;
          fVar48 = fVar39;
        } while (uVar21 < param_3);
        uVar24 = *(uint *)((long)param_1 + 0xc);
        uVar25 = uVar24 - 1;
        uVar21 = uVar24 & 1;
      }
      if ((uVar21 == 0) || (uVar25 != uVar10)) {
        *(float *)(*param_1 + (ulong)uVar8 * 4 + uVar31 * 4) = fVar37;
        *(float *)(*param_1 + (ulong)uVar8 * 4 + uVar31 * 4 + 0x10) = fVar39;
        *(float *)(*param_1 + (ulong)uVar8 * 4 + uVar31 * 4 + 0x20) = auVar98._12_4_;
        lVar23 = *param_1 + (ulong)uVar8 * 4 + 0x30;
      }
      else {
        uVar31 = (ulong)((uVar9 + (1 < uVar18 && uVar24 != 1)) * 0x10);
        *(float *)(*param_1 + uVar31 * 4) = fVar37;
        *(float *)(*param_1 + uVar31 * 4 + 4) = fVar39;
        *(float *)(*param_1 + uVar31 * 4 + 8) = auVar98._12_4_;
        lVar23 = *param_1 + 0xc;
      }
      uVar21 = (int)uVar19 - 1;
      uVar19 = (ulong)uVar21;
      *(float *)(lVar23 + uVar31 * 4) = auVar98._8_4_;
    } while (uVar21 != 0);
  }
  return;
}


