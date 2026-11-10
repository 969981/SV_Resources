/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a9d520; name: FUN_00a9d520
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a9d520(float param_1,undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],undefined1 param_5 [16],float param_6,long param_7,
                 long *param_8,byte param_9,ulong param_10)

{
  float *pfVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  void *__src;
  ulong uVar8;
  long lVar9;
  uint *puVar10;
  short sVar11;
  long *plVar12;
  long *plVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined4 uVar24;
  float fVar31;
  float fVar32;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  int iVar33;
  float fVar34;
  float fVar35;
  int iVar42;
  int iVar43;
  undefined1 auVar36 [16];
  int iVar45;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar44;
  float fVar46;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar47;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar54;
  float fVar55;
  undefined1 auVar56 [12];
  float fVar64;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [12];
  float fVar79;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined8 uVar80;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  float fVar83;
  undefined1 auVar84 [16];
  float local_90;
  float fStack_88;
  
  uVar80 = param_4._8_8_;
  lVar9 = *param_8;
  if (lVar9 == 0) {
    plVar12 = (long *)0x0;
  }
  else if (*(short *)(lVar9 + 0x1a) == 0) {
    plVar12 = (long *)0x0;
  }
  else {
    psVar2 = (short *)(lVar9 + 0x1a);
    sVar11 = *(short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar2;
      if (sVar3 == sVar11) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar5) {
          *psVar2 = sVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_00a9df34;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00a9df34:
        bVar5 = false;
      }
      if (bVar5) {
        plVar12 = (long *)0x0;
        if (*(long *)(lVar9 + 0x10) != 0) {
          plVar12 = (long *)(*(long *)(lVar9 + 0x10) + -0x28);
        }
        break;
      }
      plVar12 = (long *)0x0;
      sVar11 = sVar3;
    } while (sVar3 != 0);
  }
  *(byte *)(param_7 + 0x149) = param_9 & 1;
  local_90 = SUB164(*(undefined1 (*) [16])(param_7 + 0x20),0);
  fStack_88 = SUB164(*(undefined1 (*) [16])(param_7 + 0x20),8);
  if (((DAT_04838230 & 1) == 0) && (iVar33 = __cxa_guard_acquire(&DAT_04838230), iVar33 != 0)) {
    fVar18 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_047d2388);
    uVar8 = (ulong)((fVar18 / *(float *)PTR_FloatDegree180_047d2390) * 60.0);
    DAT_04838228 = *(float *)(PTR_SinCosSampleTable_047d2398 + (uVar8 >> 0x18 & 0xff) * 0x10) +
                   *(float *)((long)(PTR_SinCosSampleTable_047d2398 + (uVar8 >> 0x18 & 0xff) * 0x10)
                             + 8) * (float)((uint)uVar8 & 0xffffff) * 5.9604645e-08;
    __cxa_guard_release(&DAT_04838230);
  }
  if (((DAT_04838240 & 1) == 0) && (iVar33 = __cxa_guard_acquire(&DAT_04838240), iVar33 != 0)) {
    fVar18 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_047d2388);
    uVar8 = (ulong)((fVar18 / *(float *)PTR_FloatDegree180_047d2390) * 44.0);
    DAT_04838238 = *(float *)(PTR_SinCosSampleTable_047d2398 + (uVar8 >> 0x18 & 0xff) * 0x10) +
                   *(float *)((long)(PTR_SinCosSampleTable_047d2398 + (uVar8 >> 0x18 & 0xff) * 0x10)
                             + 8) * (float)((uint)uVar8 & 0xffffff) * 5.9604645e-08;
    __cxa_guard_release(&DAT_04838240);
  }
  *(undefined4 *)(param_7 + 0x140) = 0;
  auVar58._0_4_ = local_90 * local_90 + 0.0;
  auVar58._4_4_ = fStack_88 * fStack_88 + 0.0;
  auVar58._8_4_ = local_90 * local_90 + 0.0;
  auVar58._12_4_ = fStack_88 * fStack_88 + 0.0;
  auVar36 = NEON_ext(auVar58,auVar58,4,1);
  auVar76._0_4_ = auVar36._0_4_ + auVar36._4_4_;
  auVar76._4_4_ = auVar36._8_4_ + auVar36._12_4_;
  auVar76._8_4_ = auVar36._0_4_ + auVar36._4_4_;
  auVar76._12_4_ = auVar36._8_4_ + auVar36._12_4_;
  auVar36 = NEON_frsqrte(auVar76,4);
  auVar57._0_4_ = auVar76._0_4_ * auVar36._0_4_;
  auVar57._4_4_ = auVar76._4_4_ * auVar36._4_4_;
  auVar57._8_4_ = auVar76._8_4_ * auVar36._8_4_;
  auVar57._12_4_ = auVar76._12_4_ * auVar36._12_4_;
  auVar58 = NEON_frsqrts(auVar36,auVar57,4);
  auVar48._0_4_ = auVar36._0_4_ * auVar58._0_4_;
  auVar48._4_4_ = auVar36._4_4_ * auVar58._4_4_;
  auVar48._8_4_ = auVar36._8_4_ * auVar58._8_4_;
  auVar48._12_4_ = auVar36._12_4_ * auVar58._12_4_;
  auVar59._0_4_ = auVar76._0_4_ * auVar48._0_4_;
  auVar59._4_4_ = auVar76._4_4_ * auVar48._4_4_;
  auVar59._8_4_ = auVar76._8_4_ * auVar48._8_4_;
  auVar59._12_4_ = auVar76._12_4_ * auVar48._12_4_;
  iVar33 = -(uint)(auVar76._0_4_ == 0.0);
  iVar42 = -(uint)(auVar76._4_4_ == 0.0);
  iVar43 = -(uint)(auVar76._8_4_ == 0.0);
  iVar45 = -(uint)(auVar76._12_4_ == 0.0);
  auVar36 = NEON_frsqrts(auVar48,auVar59,4);
  local_90 = local_90 * auVar48._0_4_ * auVar36._0_4_;
  fVar31 = auVar48._4_4_ * auVar36._4_4_ * 0.0;
  fStack_88 = fStack_88 * auVar48._8_4_ * auVar36._8_4_;
  fVar32 = auVar48._12_4_ * auVar36._12_4_ * 0.0;
  fVar18 = (float)CONCAT13((byte)((uint)local_90 >> 0x18) & ~(byte)((uint)iVar33 >> 0x18),
                           CONCAT12((byte)((uint)local_90 >> 0x10) & ~(byte)((uint)iVar33 >> 0x10),
                                    CONCAT11((byte)((uint)local_90 >> 8) &
                                             ~(byte)((uint)iVar33 >> 8),
                                             SUB41(local_90,0) & ~(byte)iVar33)));
  auVar75._0_8_ =
       CONCAT17((byte)((uint)fVar31 >> 0x18) & ~(byte)((uint)iVar42 >> 0x18),
                CONCAT16((byte)((uint)fVar31 >> 0x10) & ~(byte)((uint)iVar42 >> 0x10),
                         CONCAT15((byte)((uint)fVar31 >> 8) & ~(byte)((uint)iVar42 >> 8),
                                  CONCAT14(SUB41(fVar31,0) & ~(byte)iVar42,fVar18))));
  auVar75[8] = SUB41(fStack_88,0) & ~(byte)iVar43;
  auVar75[9] = (byte)((uint)fStack_88 >> 8) & ~(byte)((uint)iVar43 >> 8);
  auVar75[10] = (byte)((uint)fStack_88 >> 0x10) & ~(byte)((uint)iVar43 >> 0x10);
  auVar75[0xb] = (byte)((uint)fStack_88 >> 0x18) & ~(byte)((uint)iVar43 >> 0x18);
  auVar36[0xc] = SUB41(fVar32,0) & ~(byte)iVar45;
  auVar36._0_12_ = auVar75;
  auVar36[0xd] = (byte)((uint)fVar32 >> 8) & ~(byte)((uint)iVar45 >> 8);
  auVar36[0xe] = (byte)((uint)fVar32 >> 0x10) & ~(byte)((uint)iVar45 >> 0x10);
  auVar36[0xf] = (byte)((uint)fVar32 >> 0x18) & ~(byte)((uint)iVar45 >> 0x18);
  fVar32 = -fVar18;
  fVar79 = auVar75._8_4_;
  fVar31 = (float)((ulong)auVar75._0_8_ >> 0x20);
  if (0.0 < *(float *)(param_7 + 0x144)) {
    fVar34 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_047d2388);
    uVar8 = (ulong)(*(float *)(param_7 + 0x13c) * param_1 *
                   (fVar34 / *(float *)PTR_FloatDegree180_047d2390));
    pfVar1 = (float *)(PTR_SinCosSampleTable_047d2398 + (uVar8 >> 0x18 & 0xff) * 0x10);
    fVar34 = (float)((uint)uVar8 & 0xffffff) * 5.9604645e-08;
    fVar35 = *pfVar1 + pfVar1[2] * fVar34;
    fVar34 = pfVar1[1] + pfVar1[3] * fVar34;
    auVar26._0_4_ = fVar79 * fVar34 + fVar18 * fVar35;
    auVar26._4_4_ = fVar34 * 0.0 + fVar31 * fVar35;
    auVar26._8_4_ = fVar32 * fVar34 + fVar79 * fVar35;
    auVar26._12_4_ = fVar34 * 0.0 + auVar36._12_4_ * fVar35;
    *(float *)(param_7 + 0x144) = *(float *)(param_7 + 0x144) - param_1;
    goto LAB_00a9d9bc;
  }
  auVar25[0] = -(*(char *)(param_7 + 0x134) == '\0');
  auVar37._0_4_ = -param_3._0_4_;
  auVar37._4_4_ = -param_3._4_4_;
  auVar37._8_4_ = -param_3._8_4_;
  auVar37._12_4_ = -param_3._12_4_;
  auVar25[1] = auVar25[0];
  auVar25[2] = auVar25[0];
  auVar25[3] = auVar25[0];
  auVar25._4_3_ = 0;
  auVar25[7] = auVar25[0];
  auVar25[8] = auVar25[0];
  auVar25[9] = auVar25[0];
  auVar25[10] = auVar25[0];
  auVar25[0xb] = auVar25[0];
  auVar25[0xc] = auVar25[0];
  auVar25[0xd] = auVar25[0];
  auVar25[0xe] = auVar25[0];
  auVar25[0xf] = auVar25[0];
  auVar37 = auVar37 ^ (auVar37 ^ param_3) & auVar25;
  fVar34 = auVar37._0_4_;
  fVar35 = auVar37._8_4_;
  auVar14._0_4_ = fVar34 * fVar34 + 0.0;
  auVar14._4_4_ = fVar35 * fVar35 + 0.0;
  auVar14._8_4_ = fVar34 * fVar34 + 0.0;
  auVar14._12_4_ = fVar35 * fVar35 + 0.0;
  auVar58 = NEON_ext(auVar14,auVar14,4,1);
  auVar15._0_4_ = auVar58._0_4_ + auVar58._4_4_;
  auVar15._4_4_ = auVar58._8_4_ + auVar58._12_4_;
  auVar15._8_4_ = auVar58._0_4_ + auVar58._4_4_;
  auVar15._12_4_ = auVar58._8_4_ + auVar58._12_4_;
  if (auVar15._0_4_ <= 1.0000001e-06) {
    auVar26._8_8_ = auVar36._8_8_;
    auVar26._0_8_ = auVar75._0_8_;
    goto LAB_00a9d9bc;
  }
  auVar58 = NEON_frsqrte(auVar15,4);
  auVar49._0_4_ = auVar15._0_4_ * auVar58._0_4_;
  auVar49._4_4_ = auVar15._4_4_ * auVar58._4_4_;
  auVar49._8_4_ = auVar15._8_4_ * auVar58._8_4_;
  auVar49._12_4_ = auVar15._12_4_ * auVar58._12_4_;
  auVar76 = NEON_frsqrts(auVar58,auVar49,4);
  auVar38._0_4_ = auVar58._0_4_ * auVar76._0_4_;
  auVar38._4_4_ = auVar58._4_4_ * auVar76._4_4_;
  auVar38._8_4_ = auVar58._8_4_ * auVar76._8_4_;
  auVar38._12_4_ = auVar58._12_4_ * auVar76._12_4_;
  auVar50._0_4_ = auVar15._0_4_ * auVar38._0_4_;
  auVar50._4_4_ = auVar15._4_4_ * auVar38._4_4_;
  auVar50._8_4_ = auVar15._8_4_ * auVar38._8_4_;
  auVar50._12_4_ = auVar15._12_4_ * auVar38._12_4_;
  iVar33 = -(uint)(auVar15._0_4_ == 0.0);
  iVar42 = -(uint)(auVar15._4_4_ == 0.0);
  iVar43 = -(uint)(auVar15._8_4_ == 0.0);
  iVar45 = -(uint)(auVar15._12_4_ == 0.0);
  auVar58 = NEON_frsqrts(auVar38,auVar50,4);
  pfVar1 = &DAT_04838228;
  if (*(char *)(param_7 + 0x149) != '\0') {
    pfVar1 = &DAT_04838238;
  }
  fVar34 = fVar34 * auVar38._0_4_ * auVar58._0_4_;
  fVar64 = auVar38._4_4_ * auVar58._4_4_ * 0.0;
  fVar35 = fVar35 * auVar38._8_4_ * auVar58._8_4_;
  fVar44 = auVar38._12_4_ * auVar58._12_4_ * 0.0;
  fVar34 = (float)CONCAT13((byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar33 >> 0x18),
                           CONCAT12((byte)((uint)fVar34 >> 0x10) & ~(byte)((uint)iVar33 >> 0x10),
                                    CONCAT11((byte)((uint)fVar34 >> 8) & ~(byte)((uint)iVar33 >> 8),
                                             SUB41(fVar34,0) & ~(byte)iVar33)));
  auVar56._0_8_ =
       CONCAT17((byte)((uint)fVar64 >> 0x18) & ~(byte)((uint)iVar42 >> 0x18),
                CONCAT16((byte)((uint)fVar64 >> 0x10) & ~(byte)((uint)iVar42 >> 0x10),
                         CONCAT15((byte)((uint)fVar64 >> 8) & ~(byte)((uint)iVar42 >> 8),
                                  CONCAT14(SUB41(fVar64,0) & ~(byte)iVar42,fVar34))));
  auVar56[8] = SUB41(fVar35,0) & ~(byte)iVar43;
  auVar56[9] = (byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar43 >> 8);
  auVar56[10] = (byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar43 >> 0x10);
  auVar56[0xb] = (byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar43 >> 0x18);
  auVar26[0xc] = SUB41(fVar44,0) & ~(byte)iVar45;
  auVar26._0_12_ = auVar56;
  auVar26[0xd] = (byte)((uint)fVar44 >> 8) & ~(byte)((uint)iVar45 >> 8);
  auVar26[0xe] = (byte)((uint)fVar44 >> 0x10) & ~(byte)((uint)iVar45 >> 0x10);
  auVar26[0xf] = (byte)((uint)fVar44 >> 0x18) & ~(byte)((uint)iVar45 >> 0x18);
  fVar18 = fVar18 * fVar34;
  fVar31 = fVar31 * (float)((ulong)auVar56._0_8_ >> 0x20);
  fVar34 = fVar79 * auVar56._8_4_;
  fVar35 = auVar36._12_4_ * auVar26._12_4_;
  auVar16._0_4_ = fVar18 + fVar31;
  auVar16._4_4_ = fVar34 + fVar35;
  auVar16._8_4_ = fVar18 + fVar31;
  auVar16._12_4_ = fVar34 + fVar35;
  auVar58 = NEON_ext(auVar16,auVar16,4,1);
  fVar18 = auVar58._0_4_ + auVar58._4_4_;
  if (1.0 < fVar18) {
    fVar18 = 1.0;
  }
  if (fVar18 <= -1.0) {
    fVar18 = -1.0;
  }
  if (*pfVar1 <= fVar18) {
LAB_00a9d78c:
    bVar5 = false;
  }
  else {
    if (*(int *)(&DAT_03d30718 + (long)*(int *)(param_7 + 0x130) * 0x1c) == 2) {
      puVar10 = (uint *)((long)param_8 + 0x114);
    }
    else if (*(int *)(&DAT_03d30718 + (long)*(int *)(param_7 + 0x130) * 0x1c) == 1) {
      puVar10 = (uint *)(param_8 + 0x22);
    }
    else {
      puVar10 = (uint *)((long)param_8 + 0x10c);
    }
    if (*(char *)(param_7 + 0x148) != '\0') goto LAB_00a9d78c;
    if ((*(char *)(param_7 + 0x149) != '\0') ||
       ((bVar5 = false, (0x7fffefcd3e3U >> ((ulong)*puVar10 & 0x3f) & 1) != 0 &&
        (*(char *)(param_7 + 0x137) == '\0')))) {
      fVar31 = (float)FUN_01e1f854(param_8);
      *(float *)(param_7 + 0x144) = fVar31 - param_1;
      bVar5 = 0.0 < fVar31 - param_1;
      auVar36._8_8_ = auVar36._8_8_;
      auVar36._0_8_ = auVar75._0_8_;
      auVar26._8_8_ = auVar26._8_8_;
      auVar26._0_8_ = auVar56._0_8_;
    }
  }
  fVar31 = fVar79 * auVar26._0_4_;
  fVar34 = auVar26._4_4_ * 0.0;
  fVar35 = fVar32 * auVar26._8_4_;
  fVar64 = auVar26._12_4_ * 0.0;
  auVar17._0_4_ = fVar31 + fVar34;
  auVar17._4_4_ = fVar35 + fVar64;
  auVar17._8_4_ = fVar31 + fVar34;
  auVar17._12_4_ = fVar35 + fVar64;
  auVar58 = NEON_ext(auVar17,auVar17,4,1);
  fVar31 = auVar58._0_4_ + auVar58._4_4_;
  if ((fVar18 <= 0.0) || (fVar31 != 0.0)) {
    if (0.0 <= fVar31) {
      if (bVar5) {
        *(undefined4 *)(param_7 + 0x140) = 0x3f800000;
        fVar31 = (float)FUN_02032650(fVar18);
        goto LAB_00a9d814;
      }
      fVar34 = *(float *)(param_7 + 0x13c);
      if (*(char *)(param_7 + 0x137) == '\0') {
        fVar31 = (float)NEON_fminnm(fVar34 + 5.0,0x43f00000);
        if (fVar34 <= 0.0) {
          fVar31 = 5.0;
        }
      }
      else {
        fVar31 = (float)NEON_fminnm(fVar34 + fVar34 + 10.0,0x43f00000);
        if (fVar34 <= 0.0) {
          fVar31 = 10.0;
        }
      }
    }
    else if (bVar5) {
      *(undefined4 *)(param_7 + 0x140) = 0xbf800000;
      fVar31 = (float)FUN_02032650(fVar18);
      fVar31 = -fVar31;
LAB_00a9d814:
      fVar31 = fVar31 / *(float *)(param_7 + 0x144);
    }
    else {
      fVar34 = *(float *)(param_7 + 0x13c);
      if (*(char *)(param_7 + 0x137) == '\0') {
        fVar31 = fVar34 + -5.0;
        if (fVar34 + -5.0 <= -480.0) {
          fVar31 = -480.0;
        }
        if (0.0 <= fVar34) {
          fVar31 = -5.0;
        }
      }
      else {
        fVar31 = fVar34 + fVar34 + -10.0;
        if (fVar31 <= -480.0) {
          fVar31 = -480.0;
        }
        if (0.0 <= fVar34) {
          fVar31 = -10.0;
        }
      }
    }
    *(float *)(param_7 + 0x13c) = fVar31;
  }
  else {
    *(undefined4 *)(param_7 + 0x13c) = 0;
    fVar31 = 0.0;
  }
  uVar24 = *(undefined4 *)PTR_AngleIndexHalfRound_047d2388;
  *(float *)(param_7 + 0x13c) = fVar31 * param_6;
  fVar34 = (float)NEON_ucvtf(uVar24);
  uVar8 = (ulong)(fVar31 * param_6 * param_1 * (fVar34 / *(float *)PTR_FloatDegree180_047d2390));
  fVar31 = (float)((uint)uVar8 & 0xffffff) * 5.9604645e-08;
  fVar34 = *(float *)(PTR_SinCosSampleTable_047d2398 + (uVar8 >> 0x18 & 0xff) * 0x10) +
           *(float *)((long)(PTR_SinCosSampleTable_047d2398 + (uVar8 >> 0x18 & 0xff) * 0x10) + 8) *
           fVar31;
  if (fVar18 < fVar34) {
    uVar8 = uVar8 >> 0x18 & 0xff;
    fVar18 = *(float *)(PTR_SinCosSampleTable_047d2398 + uVar8 * 0x10 + 4) +
             fVar31 * *(float *)(PTR_SinCosSampleTable_047d2398 + uVar8 * 0x10 + 0xc);
    auVar26._0_4_ = auVar36._0_4_ * fVar34 + fVar79 * fVar18;
    auVar26._4_4_ = auVar36._4_4_ * fVar34 + fVar18 * 0.0;
    auVar26._8_4_ = auVar36._8_4_ * fVar34 + fVar32 * fVar18;
    auVar26._12_4_ = auVar36._12_4_ * fVar34 + fVar18 * 0.0;
  }
LAB_00a9d9bc:
  auVar19._0_12_ = SUB1612(*(undefined1 (*) [16])(param_7 + 0x30),0);
  auVar19._12_4_ = 0;
  auVar36 = FUN_01413118(auVar19,param_7,param_8);
  fVar18 = auVar36._0_4_;
  fVar79 = auVar26._0_4_;
  fVar34 = auVar26._4_4_;
  fVar35 = param_2._0_4_;
  fVar44 = param_2._8_4_;
  fVar31 = auVar36._4_4_;
  fVar32 = auVar36._8_4_;
  fVar64 = param_2._4_4_;
  fVar46 = (float)((ulong)_DAT_03cab3a0 >> 0x20);
  fVar54 = (float)((ulong)_UNK_03cab3a8 >> 0x20);
  fVar51 = (float)((ulong)_DAT_03cac210 >> 0x20);
  fVar55 = (float)((ulong)_UNK_03cac218 >> 0x20);
  fVar52 = (float)((ulong)_DAT_03cabb00 >> 0x20);
  fVar83 = (float)((ulong)_UNK_03cabb08 >> 0x20);
  if (*(char *)(param_7 + 0x134) == '\0') {
    auVar58 = NEON_fmov(0x3f800000,4);
    auVar76 = NEON_ext(auVar26,auVar26,8,1);
    fVar47 = auVar58._0_4_ + (float)_DAT_03cab3a0 * fVar18 + (float)_DAT_03cac210 * fVar34 +
             (float)_DAT_03cabb00 * fVar44;
    fVar52 = auVar58._4_4_ + fVar46 * fVar18 + fVar51 * fVar34 + fVar52 * fVar44;
    fVar53 = auVar58._8_4_ + (float)_UNK_03cab3a8 * fVar18 + (float)_UNK_03cac218 * fVar34 +
             (float)_UNK_03cabb08 * fVar44;
    fVar55 = auVar58._12_4_ + fVar54 * fVar18 + fVar55 * fVar34 + fVar83 * fVar44;
    auVar58 = NEON_ext(auVar36,auVar36,8,1);
    fVar18 = auVar76._0_4_;
    auVar36 = NEON_fmov(0x40800000,4);
    auVar71._0_4_ = SQRT(fVar47) * 0.5 * auVar36._0_4_;
    auVar71._4_4_ = SQRT(fVar52) * 0.5 * auVar36._4_4_;
    auVar71._8_4_ = SQRT(fVar53) * 0.5 * auVar36._8_4_;
    auVar71._12_4_ = SQRT(fVar55) * 0.5 * auVar36._12_4_;
    auVar36 = NEON_frecpe(auVar71,4);
    auVar76 = NEON_frecps(auVar36,auVar71,4);
    fVar34 = auVar58._0_4_ + fVar35;
    auVar7._8_4_ = fVar18 + -fVar64;
    auVar7._4_4_ = fVar34;
    auVar21._4_4_ = fVar47;
    auVar21._0_4_ = fVar47;
    auVar21._8_4_ = fVar47;
    auVar21._12_4_ = fVar47;
    auVar29._4_4_ = fVar52;
    auVar29._0_4_ = fVar52;
    auVar29._8_4_ = fVar52;
    auVar29._12_4_ = fVar52;
    auVar82._0_4_ = -(uint)(fVar47 <= fVar52);
    auVar82._4_4_ = -(uint)(fVar47 <= fVar52);
    auVar82._8_4_ = -(uint)(fVar47 <= fVar52);
    auVar82._12_4_ = -(uint)(fVar47 <= fVar52);
    auVar78._0_4_ = auVar36._0_4_ * auVar76._0_4_;
    auVar78._4_4_ = auVar36._4_4_ * auVar76._4_4_;
    auVar78._8_4_ = auVar36._8_4_ * auVar76._8_4_;
    auVar78._12_4_ = auVar36._12_4_ * auVar76._12_4_;
    auVar21 = auVar21 ^ (auVar21 ^ auVar29) & auVar82;
    auVar36 = NEON_frecps(auVar78,auVar71,4);
    auVar72._4_4_ = fVar53;
    auVar72._0_4_ = fVar53;
    auVar72._8_4_ = fVar53;
    auVar72._12_4_ = fVar53;
    fVar44 = auVar78._0_4_ * auVar36._0_4_;
    fVar46 = auVar78._4_4_ * auVar36._4_4_;
    fVar54 = auVar78._8_4_ * auVar36._8_4_;
    fVar51 = auVar78._12_4_ * auVar36._12_4_;
    auVar84._0_4_ = -(uint)(auVar21._0_4_ <= fVar53);
    auVar84._4_4_ = -(uint)(auVar21._4_4_ <= fVar53);
    auVar84._8_4_ = -(uint)(auVar21._8_4_ <= fVar53);
    auVar84._12_4_ = -(uint)(auVar21._12_4_ <= fVar53);
    auVar21 = auVar21 ^ (auVar21 ^ auVar72) & auVar84;
    auVar22._0_4_ = -(uint)(auVar21._0_4_ <= fVar55);
    auVar22._4_4_ = -(uint)(auVar21._4_4_ <= fVar55);
    auVar22._8_4_ = -(uint)(auVar21._8_4_ <= fVar55);
    auVar22._12_4_ = -(uint)(auVar21._12_4_ <= fVar55);
    auVar73._0_4_ = (fVar31 + fVar79) * fVar46;
    auVar73._4_4_ = fVar46 * 0.0;
    auVar73._8_4_ = (fVar18 + fVar64) * fVar46;
    auVar73._12_4_ = (fVar35 + -fVar32) * fVar46;
    auVar7._0_4_ = (fVar79 + fVar31) * fVar44;
    auVar67._0_8_ = auVar7._0_8_ << 0x20;
    auVar67._8_4_ = fVar34 * fVar44;
    auVar67._12_4_ = (fVar18 + -fVar64) * fVar44;
    auVar41._0_4_ = (auVar58._0_4_ + fVar35) * fVar54;
    auVar41._4_4_ = (fVar18 + fVar64) * fVar54;
    auVar41._12_4_ = (fVar31 - fVar79) * fVar54;
    auVar30._0_4_ = (fVar18 - fVar64) * fVar51;
    auVar30._4_4_ = (fVar35 - fVar32) * fVar51;
    auVar30._8_4_ = (fVar31 - fVar79) * fVar51;
    auVar68._4_12_ = auVar67._4_12_;
    auVar68._0_4_ = SQRT(fVar47) * 0.5;
    auVar74._8_8_ = auVar73._8_8_;
    auVar74._4_4_ = SQRT(fVar52) * 0.5;
    auVar74._0_4_ = auVar73._0_4_;
    auVar41._8_4_ = SQRT(fVar53) * 0.5;
    auVar30._12_4_ = SQRT(fVar55) * 0.5;
    auVar41 = auVar41 ^ (auVar41 ^ auVar68 ^ (auVar68 ^ auVar74) & auVar82) & ~auVar84;
    auVar20 = auVar41 ^ (auVar41 ^ auVar30) & auVar22;
  }
  else {
    auVar58 = NEON_fmov(0x3f800000,4);
    auVar76 = NEON_ext(auVar26,auVar26,8,1);
    fVar47 = ((auVar58._0_4_ - (float)_DAT_03cab3a0 * fVar18) + (float)_DAT_03cac210 * fVar34) -
             (float)_DAT_03cabb00 * fVar44;
    fVar51 = ((auVar58._4_4_ - fVar46 * fVar18) + fVar51 * fVar34) - fVar52 * fVar44;
    fVar52 = ((auVar58._8_4_ - (float)_UNK_03cab3a8 * fVar18) + (float)_UNK_03cac218 * fVar34) -
             (float)_UNK_03cabb08 * fVar44;
    fVar54 = ((auVar58._12_4_ - fVar54 * fVar18) + fVar55 * fVar34) - fVar83 * fVar44;
    auVar69._0_4_ = -fVar18;
    auVar69._4_4_ = -fVar31;
    auVar69._8_4_ = -fVar32;
    auVar69._12_4_ = -auVar36._12_4_;
    fVar35 = -fVar35;
    fVar64 = -fVar64;
    auVar58 = NEON_ext(auVar69,auVar69,8,1);
    auVar36 = NEON_fmov(0x40800000,4);
    fVar18 = auVar76._0_4_;
    auVar39._0_4_ = SQRT(fVar47) * 0.5 * auVar36._0_4_;
    auVar39._4_4_ = SQRT(fVar51) * 0.5 * auVar36._4_4_;
    auVar39._8_4_ = SQRT(fVar52) * 0.5 * auVar36._8_4_;
    auVar39._12_4_ = SQRT(fVar54) * 0.5 * auVar36._12_4_;
    fVar31 = auVar69._4_4_ - fVar79;
    auVar36 = NEON_frecpe(auVar39,4);
    auVar6._8_4_ = fVar31;
    auVar6._4_4_ = fVar31;
    auVar76 = NEON_frecps(auVar36,auVar39,4);
    auVar65._0_4_ = auVar36._0_4_ * auVar76._0_4_;
    auVar65._4_4_ = auVar36._4_4_ * auVar76._4_4_;
    auVar65._8_4_ = auVar36._8_4_ * auVar76._8_4_;
    auVar65._12_4_ = auVar36._12_4_ * auVar76._12_4_;
    auVar60._4_4_ = fVar47;
    auVar60._0_4_ = fVar47;
    auVar60._8_4_ = fVar47;
    auVar60._12_4_ = fVar47;
    auVar27._4_4_ = fVar51;
    auVar27._0_4_ = fVar51;
    auVar27._8_4_ = fVar51;
    auVar27._12_4_ = fVar51;
    auVar70._0_4_ = -(uint)(fVar47 <= fVar51);
    auVar70._4_4_ = -(uint)(fVar47 <= fVar51);
    auVar70._8_4_ = -(uint)(fVar47 <= fVar51);
    auVar70._12_4_ = -(uint)(fVar47 <= fVar51);
    auVar36 = NEON_frecps(auVar65,auVar39,4);
    auVar27 = auVar27 ^ (auVar27 ^ auVar60) & ~auVar70;
    auVar61._4_4_ = fVar52;
    auVar61._0_4_ = fVar52;
    auVar61._8_4_ = fVar52;
    auVar61._12_4_ = fVar52;
    fVar32 = auVar65._0_4_ * auVar36._0_4_;
    fVar34 = auVar65._4_4_ * auVar36._4_4_;
    fVar44 = auVar65._8_4_ * auVar36._8_4_;
    fVar46 = auVar65._12_4_ * auVar36._12_4_;
    auVar77._0_4_ = -(uint)(auVar27._0_4_ <= fVar52);
    auVar77._4_4_ = -(uint)(auVar27._4_4_ <= fVar52);
    auVar77._8_4_ = -(uint)(auVar27._8_4_ <= fVar52);
    auVar77._12_4_ = -(uint)(auVar27._12_4_ <= fVar52);
    auVar27 = auVar27 ^ (auVar27 ^ auVar61) & auVar77;
    auVar62._0_4_ = (auVar69._4_4_ + fVar79) * fVar34;
    auVar62._4_4_ = fVar34 * 0.0;
    auVar62._8_4_ = (fVar18 + fVar64) * fVar34;
    auVar62._12_4_ = (fVar35 + -auVar69._8_4_) * fVar34;
    auVar66._0_4_ = (auVar58._0_4_ + fVar35) * fVar44;
    auVar66._4_4_ = (fVar18 + fVar64) * fVar44;
    auVar66._12_4_ = fVar31 * fVar44;
    auVar6._0_4_ = (fVar79 + auVar69._4_4_) * fVar32;
    auVar81._0_8_ = auVar6._0_8_ << 0x20;
    auVar81._8_4_ = (auVar58._0_4_ + fVar35) * fVar32;
    auVar81._12_4_ = (fVar18 + -fVar64) * fVar32;
    auVar40._0_4_ = (fVar18 - fVar64) * fVar46;
    auVar40._4_4_ = (fVar35 - auVar69._8_4_) * fVar46;
    auVar40._8_4_ = fVar31 * fVar46;
    auVar20._4_12_ = auVar81._4_12_;
    auVar20._0_4_ = SQRT(fVar47) * 0.5;
    auVar63._8_8_ = auVar62._8_8_;
    auVar63._4_4_ = SQRT(fVar51) * 0.5;
    auVar63._0_4_ = auVar62._0_4_;
    auVar66._8_4_ = SQRT(fVar52) * 0.5;
    auVar40._12_4_ = SQRT(fVar54) * 0.5;
    auVar28._0_4_ = -(uint)(auVar27._0_4_ <= fVar54);
    auVar28._4_4_ = -(uint)(auVar27._4_4_ <= fVar54);
    auVar28._8_4_ = -(uint)(auVar27._8_4_ <= fVar54);
    auVar28._12_4_ = -(uint)(auVar27._12_4_ <= fVar54);
    auVar20 = auVar20 ^ (auVar20 ^ auVar63) & auVar70;
    auVar20 = auVar20 ^ (auVar20 ^ auVar66) & auVar77;
    auVar20 = auVar20 ^ (auVar20 ^ auVar40) & auVar28;
  }
  plVar12[0x1b] = auVar20._8_8_;
  plVar12[0x1a] = auVar20._0_8_;
  if (*(char *)((long)plVar12 + 0xf4) == '\0') {
    *(undefined1 *)((long)plVar12 + 0xf4) = 1;
    (**(code **)(*plVar12 + 0x78))(plVar12);
  }
  if ((param_10 & 1) != 0) {
    plVar12[0x1d] = param_5._8_8_;
    plVar12[0x1c] = param_5._0_8_;
    if (*(char *)((long)plVar12 + 0xf4) == '\0') {
      *(undefined1 *)((long)plVar12 + 0xf4) = 1;
      (**(code **)(*plVar12 + 0x78))(plVar12);
    }
  }
  lVar9 = param_8[4];
  if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
    psVar2 = (short *)(lVar9 + 0x1a);
    sVar11 = *(short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar2;
      if (sVar3 == sVar11) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar5) {
          *psVar2 = sVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_00a9de58;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00a9de58:
        bVar5 = false;
      }
      if (bVar5) {
        lVar9 = *(long *)(lVar9 + 0x10);
        if (lVar9 != 0) {
          plVar13 = (long *)(lVar9 + -0x28);
          if (*(float *)(param_7 + 0x140) == 0.0) {
            auVar23._8_8_ = uVar80;
            auVar23._0_8_ = param_4._0_8_;
            FUN_01e0ec5c(auVar23,plVar13);
          }
          else {
            FUN_01e0ec5c(plVar13);
            FUN_01e0f680(plVar13);
          }
          lVar9 = *(long *)(lVar9 + 8);
          psVar2 = (short *)(lVar9 + 0x1a);
          do {
            sVar11 = *psVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar5) {
              *psVar2 = sVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar11 == 1) {
            *(undefined8 *)(lVar9 + 0x10) = 0;
            (**(code **)(*plVar13 + 0x50))(plVar13);
          }
          else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        break;
      }
      sVar11 = sVar3;
    } while (sVar3 != 0);
  }
  __src = (void *)(**(code **)(*plVar12 + 0x68))(plVar12);
  memcpy((void *)(param_7 + 0xc0),__src,0x40);
  if (plVar12 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00a9dcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar12 + 0x60))(plVar12);
  return;
}


