/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e0675c; name: FUN_01e0675c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e0675c(long *param_1,undefined1 *param_2,byte param_3)

{
  short *psVar1;
  byte *pbVar2;
  int *piVar3;
  long *plVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  undefined1 auVar8 [12];
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *puVar18;
  byte *pbVar19;
  long *plVar20;
  undefined1 (*pauVar21) [16];
  undefined8 *puVar22;
  short sVar23;
  long *plVar24;
  undefined8 *puVar25;
  ulong uVar26;
  long *plVar27;
  long lVar28;
  undefined8 *puVar29;
  long lVar30;
  undefined8 *puVar31;
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [12];
  undefined1 auVar45 [16];
  float fVar47;
  undefined1 auVar46 [16];
  int iVar48;
  int iVar50;
  int iVar51;
  undefined1 auVar49 [16];
  int iVar52;
  float fVar53;
  undefined1 auVar54 [12];
  float fVar59;
  undefined1 auVar55 [16];
  float fVar60;
  float fVar61;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  int iVar62;
  float fVar63;
  int iVar69;
  int iVar71;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  int iVar73;
  undefined1 auVar67 [16];
  float fVar70;
  float fVar72;
  float fVar74;
  undefined1 auVar68 [16];
  float fVar75;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar84 [16];
  undefined1 auVar83 [16];
  undefined1 auVar82 [16];
  undefined1 auVar81 [16];
  undefined1 auVar88 [16];
  undefined1 auVar87 [16];
  undefined1 auVar86 [16];
  undefined1 auVar85 [16];
  undefined1 auVar89 [16];
  float fVar90;
  undefined1 auVar91 [12];
  float fVar98;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [12];
  float fVar112;
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  float fVar113;
  float fVar114;
  float fVar116;
  float fVar117;
  float fVar118;
  undefined1 auVar115 [16];
  undefined1 auVar119 [16];
  float local_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float local_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  undefined8 local_130;
  float fStack_128;
  float fStack_124;
  float local_120;
  float fStack_11c;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  byte *local_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  long *local_88;
  undefined8 uStack_80;
  byte local_74 [4];
  undefined8 auStack_70 [2];
  
  lVar30 = *param_1;
  local_a0 = local_74;
  puVar31 = (undefined8 *)(lVar30 + 0x58);
  if ((undefined8 *)*puVar31 == (undefined8 *)0x0) {
    puVar22 = puVar31;
LAB_01e067d4:
    puVar29 = (undefined8 *)*puVar31;
    local_74[0] = param_3;
    if (puVar29 == (undefined8 *)0x0) {
      puVar25 = (undefined8 *)(lVar30 + 0x60);
      puVar29 = (undefined8 *)(**(code **)(*(long *)*puVar25 + 0x10))((long *)*puVar25,0x60,8);
      if (puVar29 == (undefined8 *)0x0) {
        (**(code **)(*(long *)*puVar25 + 0xe8))();
      }
      FUN_00d75208(puVar25,puVar29 + 4,&local_a0);
      *puVar29 = 0;
      puVar29[1] = 0;
      puVar29[2] = puVar22;
      *puVar31 = puVar29;
      puVar22 = puVar29;
      if (**(long **)(lVar30 + 0x50) != 0) {
        *(long *)(lVar30 + 0x50) = **(long **)(lVar30 + 0x50);
        puVar22 = (undefined8 *)*puVar31;
      }
      FUN_010108e0(*(undefined8 *)(lVar30 + 0x58),puVar22);
      *(long *)(lVar30 + 0x80) = *(long *)(lVar30 + 0x80) + 1;
    }
    puVar18 = PTR_FloatDegree180_047d2390;
    puVar17 = PTR_AngleIndexHalfRound_047d2388;
    uVar16 = _UNK_03cac218;
    uVar15 = _DAT_03cac210;
    uVar14 = _UNK_03cabb08;
    uVar13 = _DAT_03cabb00;
    uVar12 = _UNK_03cab3a8;
    uVar11 = _DAT_03cab3a0;
    puVar31 = (undefined8 *)puVar29[6];
    if (puVar31 != puVar29 + 5) {
      auVar45 = NEON_fmov(0x3f800000,4);
      auVar76 = NEON_fmov(0x40800000,4);
      do {
        plVar24 = puVar31 + 2;
        lVar30 = *plVar24;
        if ((lVar30 != 0) && (*(short *)(lVar30 + 0x1a) != 0)) {
          psVar1 = (short *)(lVar30 + 0x1a);
          fStack_b8 = (float)uVar12;
          fStack_b4 = (float)((ulong)uVar12 >> 0x20);
          local_c0 = (float)uVar11;
          fStack_bc = (float)((ulong)uVar11 >> 0x20);
          fStack_a8 = auVar45._8_4_;
          fStack_a4 = auVar45._12_4_;
          fStack_b0 = auVar45._0_4_;
          fStack_ac = auVar45._4_4_;
          fStack_c8 = (float)uVar16;
          fStack_c4 = (float)((ulong)uVar16 >> 0x20);
          local_d0 = (float)uVar15;
          fStack_cc = (float)((ulong)uVar15 >> 0x20);
          fStack_e8 = auVar76._8_4_;
          fStack_e4 = auVar76._12_4_;
          local_f0 = auVar76._0_4_;
          fStack_ec = auVar76._4_4_;
          fStack_d8 = (float)uVar14;
          fStack_d4 = (float)((ulong)uVar14 >> 0x20);
          local_e0 = (float)uVar13;
          fStack_dc = (float)((ulong)uVar13 >> 0x20);
          sVar23 = *(short *)(lVar30 + 0x1a);
LAB_01e06924:
          sVar5 = *psVar1;
          if (sVar5 == sVar23) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar7) {
              *psVar1 = sVar23 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 != '\0') goto LAB_01e06970;
            bVar7 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_01e06970:
            bVar7 = false;
          }
          if (!bVar7) goto code_r0x01e06978;
          lVar30 = *(long *)(lVar30 + 0x10);
          if (lVar30 != 0) {
            if ((long *)*plVar24 == (long *)0x0) {
              local_130 = 0;
            }
            else {
              local_130 = *(long *)*plVar24;
            }
            plVar20 = *(long **)param_1[1];
            (**(code **)(*plVar20 + 0x18))(&local_a0);
            local_88 = (long *)0x0;
            uStack_80 = 0;
            plVar4 = (long *)0x0;
            if (plVar20 != (long *)0x0) {
              plVar4 = plVar20 + 5;
            }
            if (*(long **)(local_a0 + 0x10) == plVar4) {
              FUN_00c9ea00(&local_88,&local_a0);
            }
            pbVar19 = local_a0;
            if (local_a0 != (byte *)0x0) {
              pbVar2 = local_a0 + 0x18;
              do {
                sVar23 = *(short *)pbVar2;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(pbVar2,0x10);
                if (bVar7) {
                  *(short *)pbVar2 = sVar23 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (sVar23 == 1) {
                pbVar2 = local_a0 + 0x1c;
                do {
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(pbVar2,0x10);
                  if (bVar7) {
                    pbVar2[0] = 0xff;
                    pbVar2[1] = 0xff;
                    pbVar2[2] = 0xff;
                    pbVar2[3] = 0xff;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (*(int *)pbVar2 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar48 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar48 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar28 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar28;
                  auStack_70[0] = *(undefined8 *)pbVar19;
                  FUN_00c44438(lVar28 + 0x8040,auStack_70);
                }
              }
              else if (sVar23 == 0) goto LAB_01e06bd8;
            }
            plVar4 = local_88;
            plVar20 = (long *)(lVar30 + -0x28);
            if (local_88 == (long *)0x0) {
              if (local_130 != 0) goto LAB_01e06ac4;
            }
            else {
              plVar27 = local_88 + 3;
              lVar30 = *local_88;
              do {
                sVar23 = (short)*plVar27;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                if (bVar7) {
                  *(short *)plVar27 = sVar23 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (sVar23 == 1) {
                piVar3 = (int *)((long)local_88 + 0x1c);
                do {
                  iVar48 = *piVar3;
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                  if (bVar7) {
                    *piVar3 = -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (iVar48 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar48 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar48 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar28 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar28;
                  local_a0 = (byte *)*plVar4;
                  FUN_00c44438(lVar28 + 0x8040,&local_a0);
                }
              }
              else if (sVar23 == 0) goto LAB_01e06bd8;
              if (local_130 != lVar30) {
LAB_01e06ac4:
                lVar30 = (**(code **)(**(long **)param_1[1] + 0x68))();
                auVar49 = *(undefined1 (*) [16])(lVar30 + 0x30);
                pauVar21 = (undefined1 (*) [16])(**(code **)(**(long **)param_1[1] + 0x68))();
                auVar65 = *pauVar21;
                uVar9 = *(undefined8 *)pauVar21[1];
                uVar10 = *(undefined8 *)(pauVar21[1] + 8);
                auVar119 = pauVar21[2];
                lVar30 = (**(code **)(*plVar20 + 0x68))();
                local_120 = auVar49._0_4_;
                fStack_11c = auVar49._4_4_;
                local_120 = *(float *)(lVar30 + 0x30) - local_120;
                fStack_11c = *(float *)(lVar30 + 0x34) - fStack_11c;
                fVar47 = *(float *)(lVar30 + 0x38) - auVar49._8_4_;
                auVar49._0_4_ = local_120 * local_120 + fStack_11c * fStack_11c;
                auVar49._4_4_ = fVar47 * fVar47 + 0.0;
                auVar49._8_4_ = local_120 * local_120 + fStack_11c * fStack_11c;
                auVar49._12_4_ = fVar47 * fVar47 + 0.0;
                auVar49 = NEON_ext(auVar49,auVar49,4,1);
                fVar32 = auVar49._0_4_ + auVar49._4_4_;
                if ((fVar32 < *(float *)param_1[2] * *(float *)param_1[2]) &&
                   (fVar32 < 3.4028235e+38)) {
                  local_150 = auVar65._0_4_;
                  fStack_14c = auVar65._4_4_;
                  fStack_148 = auVar65._8_4_;
                  fStack_144 = auVar65._12_4_;
                  local_140 = (float)uVar9;
                  fStack_13c = (float)((ulong)uVar9 >> 0x20);
                  fStack_138 = (float)uVar10;
                  fStack_134 = (float)((ulong)uVar10 >> 0x20);
                  local_130._0_4_ = auVar119._0_4_;
                  local_130._4_4_ = auVar119._4_4_;
                  fStack_128 = auVar119._8_4_;
                  fStack_124 = auVar119._12_4_;
                  auVar33._0_4_ = local_150 * local_150 + fStack_14c * fStack_14c;
                  auVar33._4_4_ = fStack_148 * fStack_148 + fStack_144 * fStack_144;
                  auVar33._8_4_ = local_150 * local_150 + fStack_14c * fStack_14c;
                  auVar33._12_4_ = fStack_148 * fStack_148 + fStack_144 * fStack_144;
                  auVar49 = NEON_ext(auVar33,auVar33,4,1);
                  auVar34._0_4_ = auVar49._0_4_ + auVar49._4_4_;
                  auVar34._4_4_ = auVar49._8_4_ + auVar49._12_4_;
                  auVar34._8_4_ = auVar49._0_4_ + auVar49._4_4_;
                  auVar34._12_4_ = auVar49._8_4_ + auVar49._12_4_;
                  auVar49 = NEON_frsqrte(auVar34,4);
                  auVar64._0_4_ = auVar34._0_4_ * auVar49._0_4_;
                  auVar64._4_4_ = auVar34._4_4_ * auVar49._4_4_;
                  auVar64._8_4_ = auVar34._8_4_ * auVar49._8_4_;
                  auVar64._12_4_ = auVar34._12_4_ * auVar49._12_4_;
                  auVar65 = NEON_frsqrts(auVar49,auVar64,4);
                  auVar55._0_4_ = auVar49._0_4_ * auVar65._0_4_;
                  auVar55._4_4_ = auVar49._4_4_ * auVar65._4_4_;
                  auVar55._8_4_ = auVar49._8_4_ * auVar65._8_4_;
                  auVar55._12_4_ = auVar49._12_4_ * auVar65._12_4_;
                  auVar66._0_4_ = auVar34._0_4_ * auVar55._0_4_;
                  auVar66._4_4_ = auVar34._4_4_ * auVar55._4_4_;
                  auVar66._8_4_ = auVar34._8_4_ * auVar55._8_4_;
                  auVar66._12_4_ = auVar34._12_4_ * auVar55._12_4_;
                  iVar48 = -(uint)(auVar34._0_4_ == 0.0);
                  iVar50 = -(uint)(auVar34._4_4_ == 0.0);
                  iVar51 = -(uint)(auVar34._8_4_ == 0.0);
                  iVar52 = -(uint)(auVar34._12_4_ == 0.0);
                  auVar49 = NEON_frsqrts(auVar55,auVar66,4);
                  auVar35._0_4_ = local_140 * local_140 + fStack_13c * fStack_13c;
                  auVar35._4_4_ = fStack_138 * fStack_138 + fStack_134 * fStack_134;
                  auVar35._8_4_ = local_140 * local_140 + fStack_13c * fStack_13c;
                  auVar35._12_4_ = fStack_138 * fStack_138 + fStack_134 * fStack_134;
                  auVar65 = NEON_ext(auVar35,auVar35,4,1);
                  local_150 = local_150 * auVar55._0_4_ * auVar49._0_4_;
                  fStack_14c = fStack_14c * auVar55._4_4_ * auVar49._4_4_;
                  fStack_148 = fStack_148 * auVar55._8_4_ * auVar49._8_4_;
                  fStack_144 = fStack_144 * auVar55._12_4_ * auVar49._12_4_;
                  auVar36._0_4_ = auVar65._0_4_ + auVar65._4_4_;
                  auVar36._4_4_ = auVar65._8_4_ + auVar65._12_4_;
                  auVar36._8_4_ = auVar65._0_4_ + auVar65._4_4_;
                  auVar36._12_4_ = auVar65._8_4_ + auVar65._12_4_;
                  auVar49 = NEON_frsqrte(auVar36,4);
                  auVar92._0_4_ = auVar36._0_4_ * auVar49._0_4_;
                  auVar92._4_4_ = auVar36._4_4_ * auVar49._4_4_;
                  auVar92._8_4_ = auVar36._8_4_ * auVar49._8_4_;
                  auVar92._12_4_ = auVar36._12_4_ * auVar49._12_4_;
                  auVar65 = NEON_frsqrts(auVar49,auVar92,4);
                  auVar77._0_4_ = auVar49._0_4_ * auVar65._0_4_;
                  auVar77._4_4_ = auVar49._4_4_ * auVar65._4_4_;
                  auVar77._8_4_ = auVar49._8_4_ * auVar65._8_4_;
                  auVar77._12_4_ = auVar49._12_4_ * auVar65._12_4_;
                  auVar93._0_4_ = auVar36._0_4_ * auVar77._0_4_;
                  auVar93._4_4_ = auVar36._4_4_ * auVar77._4_4_;
                  auVar93._8_4_ = auVar36._8_4_ * auVar77._8_4_;
                  auVar93._12_4_ = auVar36._12_4_ * auVar77._12_4_;
                  iVar62 = -(uint)(auVar36._0_4_ == 0.0);
                  iVar69 = -(uint)(auVar36._4_4_ == 0.0);
                  iVar71 = -(uint)(auVar36._8_4_ == 0.0);
                  iVar73 = -(uint)(auVar36._12_4_ == 0.0);
                  auVar49 = NEON_frsqrts(auVar77,auVar93,4);
                  auVar37._0_4_ =
                       (float)local_130 * (float)local_130 + local_130._4_4_ * local_130._4_4_;
                  auVar37._4_4_ = fStack_128 * fStack_128 + fStack_124 * fStack_124;
                  auVar37._8_4_ =
                       (float)local_130 * (float)local_130 + local_130._4_4_ * local_130._4_4_;
                  auVar37._12_4_ = fStack_128 * fStack_128 + fStack_124 * fStack_124;
                  auVar65 = NEON_ext(auVar37,auVar37,4,1);
                  local_140 = local_140 * auVar77._0_4_ * auVar49._0_4_;
                  fStack_13c = fStack_13c * auVar77._4_4_ * auVar49._4_4_;
                  fStack_138 = fStack_138 * auVar77._8_4_ * auVar49._8_4_;
                  fStack_134 = fStack_134 * auVar77._12_4_ * auVar49._12_4_;
                  auVar38._0_4_ = auVar65._0_4_ + auVar65._4_4_;
                  auVar38._4_4_ = auVar65._8_4_ + auVar65._12_4_;
                  auVar38._8_4_ = auVar65._0_4_ + auVar65._4_4_;
                  auVar38._12_4_ = auVar65._8_4_ + auVar65._12_4_;
                  auVar49 = NEON_frsqrte(auVar38,4);
                  auVar105._0_4_ = auVar38._0_4_ * auVar49._0_4_;
                  auVar105._4_4_ = auVar38._4_4_ * auVar49._4_4_;
                  auVar105._8_4_ = auVar38._8_4_ * auVar49._8_4_;
                  auVar105._12_4_ = auVar38._12_4_ * auVar49._12_4_;
                  auVar65 = NEON_frsqrts(auVar49,auVar105,4);
                  auVar99._0_4_ = auVar49._0_4_ * auVar65._0_4_;
                  auVar99._4_4_ = auVar49._4_4_ * auVar65._4_4_;
                  auVar99._8_4_ = auVar49._8_4_ * auVar65._8_4_;
                  auVar99._12_4_ = auVar49._12_4_ * auVar65._12_4_;
                  auVar106._0_4_ = auVar38._0_4_ * auVar99._0_4_;
                  auVar106._4_4_ = auVar38._4_4_ * auVar99._4_4_;
                  auVar106._8_4_ = auVar38._8_4_ * auVar99._8_4_;
                  auVar106._12_4_ = auVar38._12_4_ * auVar99._12_4_;
                  auVar49 = NEON_frsqrts(auVar99,auVar106,4);
                  fVar63 = (float)CONCAT13((byte)((uint)local_150 >> 0x18) &
                                           ~(byte)((uint)iVar48 >> 0x18),
                                           CONCAT12((byte)((uint)local_150 >> 0x10) &
                                                    ~(byte)((uint)iVar48 >> 0x10),
                                                    CONCAT11((byte)((uint)local_150 >> 8) &
                                                             ~(byte)((uint)iVar48 >> 8),
                                                             SUB41(local_150,0) & ~(byte)iVar48)));
                  auVar104._0_8_ =
                       CONCAT17((byte)((uint)fStack_14c >> 0x18) & ~(byte)((uint)iVar50 >> 0x18),
                                CONCAT16((byte)((uint)fStack_14c >> 0x10) &
                                         ~(byte)((uint)iVar50 >> 0x10),
                                         CONCAT15((byte)((uint)fStack_14c >> 8) &
                                                  ~(byte)((uint)iVar50 >> 8),
                                                  CONCAT14(SUB41(fStack_14c,0) & ~(byte)iVar50,
                                                           fVar63))));
                  auVar104[8] = SUB41(fStack_148,0) & ~(byte)iVar51;
                  auVar104[9] = (byte)((uint)fStack_148 >> 8) & ~(byte)((uint)iVar51 >> 8);
                  auVar104[10] = (byte)((uint)fStack_148 >> 0x10) & ~(byte)((uint)iVar51 >> 0x10);
                  auVar104[0xb] = (byte)((uint)fStack_148 >> 0x18) & ~(byte)((uint)iVar51 >> 0x18);
                  auVar107[0xc] = SUB41(fStack_144,0) & ~(byte)iVar52;
                  auVar107._0_12_ = auVar104;
                  auVar107[0xd] = (byte)((uint)fStack_144 >> 8) & ~(byte)((uint)iVar52 >> 8);
                  auVar107[0xe] = (byte)((uint)fStack_144 >> 0x10) & ~(byte)((uint)iVar52 >> 0x10);
                  auVar107[0xf] = (byte)((uint)fStack_144 >> 0x18) & ~(byte)((uint)iVar52 >> 0x18);
                  iVar48 = -(uint)(auVar38._0_4_ == 0.0);
                  iVar50 = -(uint)(auVar38._4_4_ == 0.0);
                  iVar51 = -(uint)(auVar38._8_4_ == 0.0);
                  fVar75 = (float)CONCAT13((byte)((uint)local_140 >> 0x18) &
                                           ~(byte)((uint)iVar62 >> 0x18),
                                           CONCAT12((byte)((uint)local_140 >> 0x10) &
                                                    ~(byte)((uint)iVar62 >> 0x10),
                                                    CONCAT11((byte)((uint)local_140 >> 8) &
                                                             ~(byte)((uint)iVar62 >> 8),
                                                             SUB41(local_140,0) & ~(byte)iVar62)));
                  auVar78._0_8_ =
                       CONCAT17((byte)((uint)fStack_13c >> 0x18) & ~(byte)((uint)iVar69 >> 0x18),
                                CONCAT16((byte)((uint)fStack_13c >> 0x10) &
                                         ~(byte)((uint)iVar69 >> 0x10),
                                         CONCAT15((byte)((uint)fStack_13c >> 8) &
                                                  ~(byte)((uint)iVar69 >> 8),
                                                  CONCAT14(SUB41(fStack_13c,0) & ~(byte)iVar69,
                                                           fVar75))));
                  auVar78[8] = SUB41(fStack_138,0) & ~(byte)iVar71;
                  auVar78[9] = (byte)((uint)fStack_138 >> 8) & ~(byte)((uint)iVar71 >> 8);
                  auVar78[10] = (byte)((uint)fStack_138 >> 0x10) & ~(byte)((uint)iVar71 >> 0x10);
                  auVar78[0xb] = (byte)((uint)fStack_138 >> 0x18) & ~(byte)((uint)iVar71 >> 0x18);
                  auVar78[0xc] = SUB41(fStack_134,0) & ~(byte)iVar73;
                  auVar78[0xd] = (byte)((uint)fStack_134 >> 8) & ~(byte)((uint)iVar73 >> 8);
                  auVar78[0xe] = (byte)((uint)fStack_134 >> 0x10) & ~(byte)((uint)iVar73 >> 0x10);
                  auVar78[0xf] = (byte)((uint)fStack_134 >> 0x18) & ~(byte)((uint)iVar73 >> 0x18);
                  local_130._0_4_ = (float)local_130 * auVar99._0_4_ * auVar49._0_4_;
                  local_130._4_4_ = local_130._4_4_ * auVar99._4_4_ * auVar49._4_4_;
                  fStack_128 = fStack_128 * auVar99._8_4_ * auVar49._8_4_;
                  auVar49 = NEON_ext(auVar78,auVar78,8,1);
                  fVar90 = (float)CONCAT13((byte)((uint)(float)local_130 >> 0x18) &
                                           ~(byte)((uint)iVar48 >> 0x18),
                                           CONCAT12((byte)((uint)(float)local_130 >> 0x10) &
                                                    ~(byte)((uint)iVar48 >> 0x10),
                                                    CONCAT11((byte)((uint)(float)local_130 >> 8) &
                                                             ~(byte)((uint)iVar48 >> 8),
                                                             SUB41((float)local_130,0) &
                                                             ~(byte)iVar48)));
                  auVar91._0_8_ =
                       CONCAT17((byte)((uint)local_130._4_4_ >> 0x18) &
                                ~(byte)((uint)iVar50 >> 0x18),
                                CONCAT16((byte)((uint)local_130._4_4_ >> 0x10) &
                                         ~(byte)((uint)iVar50 >> 0x10),
                                         CONCAT15((byte)((uint)local_130._4_4_ >> 8) &
                                                  ~(byte)((uint)iVar50 >> 8),
                                                  CONCAT14(SUB41(local_130._4_4_,0) & ~(byte)iVar50,
                                                           fVar90))));
                  auVar91[8] = SUB41(fStack_128,0) & ~(byte)iVar51;
                  auVar91[9] = (byte)((uint)fStack_128 >> 8) & ~(byte)((uint)iVar51 >> 8);
                  auVar91[10] = (byte)((uint)fStack_128 >> 0x10) & ~(byte)((uint)iVar51 >> 0x10);
                  auVar91[0xb] = (byte)((uint)fStack_128 >> 0x18) & ~(byte)((uint)iVar51 >> 0x18);
                  fVar32 = (float)((ulong)auVar78._0_8_ >> 0x20);
                  fVar61 = auVar91._8_4_;
                  fVar53 = fStack_b0 + local_c0 * fVar63 + local_d0 * fVar32 + local_e0 * fVar61;
                  fVar59 = fStack_ac + fStack_bc * fVar63 + fStack_cc * fVar32 + fStack_dc * fVar61;
                  fVar60 = fStack_a8 + fStack_b8 * fVar63 + fStack_c8 * fVar32 + fStack_d8 * fVar61;
                  fVar61 = fStack_a4 + fStack_b4 * fVar63 + fStack_c4 * fVar32 + fStack_d4 * fVar61;
                  auVar119 = NEON_ext(auVar107,auVar107,8,1);
                  fVar98 = (float)((ulong)auVar91._0_8_ >> 0x20);
                  fVar32 = auVar49._0_4_;
                  auVar67._0_4_ = SQRT(fVar53) * 0.5 * local_f0;
                  auVar67._4_4_ = SQRT(fVar59) * 0.5 * fStack_ec;
                  auVar67._8_4_ = SQRT(fVar60) * 0.5 * fStack_e8;
                  auVar67._12_4_ = SQRT(fVar61) * 0.5 * fStack_e4;
                  auVar49 = NEON_frecpe(auVar67,4);
                  auVar65 = NEON_frecps(auVar49,auVar67,4);
                  auVar100._0_4_ = auVar49._0_4_ * auVar65._0_4_;
                  auVar100._4_4_ = auVar49._4_4_ * auVar65._4_4_;
                  auVar100._8_4_ = auVar49._8_4_ * auVar65._8_4_;
                  auVar100._12_4_ = auVar49._12_4_ * auVar65._12_4_;
                  auVar49 = NEON_frecps(auVar100,auVar67,4);
                  fVar113 = auVar119._0_4_ + fVar90;
                  auVar8._8_4_ = fVar32 + -fVar98;
                  auVar8._4_4_ = fVar113;
                  fVar63 = auVar100._0_4_ * auVar49._0_4_;
                  fVar70 = auVar100._4_4_ * auVar49._4_4_;
                  fVar72 = auVar100._8_4_ * auVar49._8_4_;
                  fVar74 = auVar100._12_4_ * auVar49._12_4_;
                  fVar112 = (float)((ulong)auVar104._0_8_ >> 0x20);
                  fVar114 = (float)((uint)fVar53 ^
                                   ((uint)fVar53 ^ (uint)fVar59) & -(uint)(fVar53 <= fVar59));
                  fVar116 = (float)((uint)fVar53 ^
                                   ((uint)fVar53 ^ (uint)fVar59) & -(uint)(fVar53 <= fVar59));
                  fVar117 = (float)((uint)fVar53 ^
                                   ((uint)fVar53 ^ (uint)fVar59) & -(uint)(fVar53 <= fVar59));
                  fVar118 = (float)((uint)fVar53 ^
                                   ((uint)fVar53 ^ (uint)fVar59) & -(uint)(fVar53 <= fVar59));
                  auVar8._0_4_ = (fVar112 + fVar75) * fVar63;
                  auVar108._0_8_ = auVar8._0_8_ << 0x20;
                  auVar108._8_4_ = fVar113 * fVar63;
                  auVar108._12_4_ = (fVar32 + -fVar98) * fVar63;
                  auVar109._4_12_ = auVar108._4_12_;
                  auVar109._0_4_ = SQRT(fVar53) * 0.5;
                  auVar94._0_4_ = (auVar119._0_4_ + fVar90) * fVar72;
                  auVar94._4_4_ = (fVar32 + fVar98) * fVar72;
                  auVar94._12_4_ = (fVar112 - fVar75) * fVar72;
                  auVar68._0_4_ = (fVar32 - fVar98) * fVar74;
                  auVar68._4_4_ = (fVar90 - auVar104._8_4_) * fVar74;
                  auVar68._8_4_ = (fVar112 - fVar75) * fVar74;
                  auVar65._4_4_ = SQRT(fVar59) * 0.5;
                  auVar65._0_4_ = (fVar112 + fVar75) * fVar70;
                  auVar65._8_4_ = (fVar32 + fVar98) * fVar70;
                  auVar65._12_4_ = (fVar90 + -auVar104._8_4_) * fVar70;
                  auVar111._4_4_ = -(uint)(fVar53 <= fVar59);
                  auVar111._0_4_ = -(uint)(fVar53 <= fVar59);
                  auVar111._8_4_ = -(uint)(fVar53 <= fVar59);
                  auVar111._12_4_ = -(uint)(fVar53 <= fVar59);
                  auVar94._8_4_ = SQRT(fVar60) * 0.5;
                  auVar68._12_4_ = SQRT(fVar61) * 0.5;
                  auVar119._4_4_ = -(uint)(fVar116 <= fVar60);
                  auVar119._0_4_ = -(uint)(fVar114 <= fVar60);
                  auVar119._8_4_ = -(uint)(fVar117 <= fVar60);
                  auVar119._12_4_ = -(uint)(fVar118 <= fVar60);
                  auVar94 = auVar94 ^ (auVar94 ^ auVar109 ^ (auVar109 ^ auVar65) & auVar111) &
                                      ~auVar119;
                  auVar56._0_4_ =
                       -(uint)((float)((uint)fVar114 ^
                                      ((uint)fVar114 ^ (uint)fVar60) & -(uint)(fVar114 <= fVar60))
                              <= fVar61);
                  auVar56._4_4_ =
                       -(uint)((float)((uint)fVar116 ^
                                      ((uint)fVar116 ^ (uint)fVar60) & -(uint)(fVar116 <= fVar60))
                              <= fVar61);
                  auVar56._8_4_ =
                       -(uint)((float)((uint)fVar117 ^
                                      ((uint)fVar117 ^ (uint)fVar60) & -(uint)(fVar117 <= fVar60))
                              <= fVar61);
                  auVar56._12_4_ =
                       -(uint)((float)((uint)fVar118 ^
                                      ((uint)fVar118 ^ (uint)fVar60) & -(uint)(fVar118 <= fVar60))
                              <= fVar61);
                  fVar59 = (float)NEON_ucvtf(*(undefined4 *)puVar17);
                  auVar94 = auVar94 ^ (auVar94 ^ auVar68) & auVar56;
                  fVar63 = auVar94._8_4_;
                  auVar101._4_4_ = fVar63;
                  auVar101._0_4_ = fVar63;
                  auVar101._8_4_ = fVar63;
                  auVar101._12_4_ = fVar63;
                  auVar119 = NEON_ext(auVar101,auVar94,0xc,1);
                  auVar39._0_4_ = local_120 * local_120 + fStack_11c * fStack_11c;
                  auVar39._4_4_ = fVar47 * fVar47 + 0.0;
                  auVar39._8_4_ = local_120 * local_120 + fStack_11c * fStack_11c;
                  auVar39._12_4_ = fVar47 * fVar47 + 0.0;
                  auVar49 = NEON_ext(auVar39,auVar39,4,1);
                  fVar61 = auVar94._4_4_;
                  auVar110._4_4_ = fVar61;
                  auVar110._0_4_ = fVar61;
                  auVar110._8_4_ = fVar61;
                  auVar110._12_4_ = fVar61;
                  fVar70 = auVar94._12_4_;
                  auVar111 = NEON_ext(auVar110,auVar119,0xc,1);
                  auVar40._0_4_ = auVar49._0_4_ + auVar49._4_4_;
                  auVar40._4_4_ = auVar49._8_4_ + auVar49._12_4_;
                  auVar40._8_4_ = auVar49._0_4_ + auVar49._4_4_;
                  auVar40._12_4_ = auVar49._8_4_ + auVar49._12_4_;
                  auVar49 = NEON_frsqrte(auVar40,4);
                  auVar95._0_4_ = auVar40._0_4_ * auVar49._0_4_;
                  auVar95._4_4_ = auVar40._4_4_ * auVar49._4_4_;
                  auVar95._8_4_ = auVar40._8_4_ * auVar49._8_4_;
                  auVar95._12_4_ = auVar40._12_4_ * auVar49._12_4_;
                  auVar65 = NEON_frsqrts(auVar49,auVar95,4);
                  auVar79._0_4_ = auVar49._0_4_ * auVar65._0_4_;
                  auVar79._4_4_ = auVar49._4_4_ * auVar65._4_4_;
                  auVar79._8_4_ = auVar49._8_4_ * auVar65._8_4_;
                  auVar79._12_4_ = auVar49._12_4_ * auVar65._12_4_;
                  auVar96._0_4_ = auVar40._0_4_ * auVar79._0_4_;
                  auVar96._4_4_ = auVar40._4_4_ * auVar79._4_4_;
                  auVar96._8_4_ = auVar40._8_4_ * auVar79._8_4_;
                  auVar96._12_4_ = auVar40._12_4_ * auVar79._12_4_;
                  iVar48 = -(uint)(auVar40._0_4_ == 0.0);
                  iVar50 = -(uint)(auVar40._4_4_ == 0.0);
                  iVar51 = -(uint)(auVar40._8_4_ == 0.0);
                  iVar52 = -(uint)(auVar40._12_4_ == 0.0);
                  auVar49 = NEON_frsqrts(auVar79,auVar96,4);
                  local_120 = local_120 * auVar79._0_4_ * auVar49._0_4_;
                  fStack_11c = fStack_11c * auVar79._4_4_ * auVar49._4_4_;
                  fVar47 = fVar47 * auVar79._8_4_ * auVar49._8_4_;
                  fVar32 = auVar79._12_4_ * auVar49._12_4_ * 0.0;
                  fVar60 = auVar94._0_4_;
                  auVar81._0_4_ = -fVar60;
                  fVar72 = -fVar61;
                  auVar80._8_4_ = -fVar63;
                  auVar80._4_4_ = auVar80._8_4_;
                  auVar80._0_4_ = auVar80._8_4_;
                  auVar80._12_4_ = auVar80._8_4_;
                  fVar53 = (float)CONCAT13((byte)((uint)local_120 >> 0x18) &
                                           ~(byte)((uint)iVar48 >> 0x18),
                                           CONCAT12((byte)((uint)local_120 >> 0x10) &
                                                    ~(byte)((uint)iVar48 >> 0x10),
                                                    CONCAT11((byte)((uint)local_120 >> 8) &
                                                             ~(byte)((uint)iVar48 >> 8),
                                                             SUB41(local_120,0) & ~(byte)iVar48)));
                  auVar44._0_8_ =
                       CONCAT17((byte)((uint)fStack_11c >> 0x18) & ~(byte)((uint)iVar50 >> 0x18),
                                CONCAT16((byte)((uint)fStack_11c >> 0x10) &
                                         ~(byte)((uint)iVar50 >> 0x10),
                                         CONCAT15((byte)((uint)fStack_11c >> 8) &
                                                  ~(byte)((uint)iVar50 >> 8),
                                                  CONCAT14(SUB41(fStack_11c,0) & ~(byte)iVar50,
                                                           fVar53))));
                  auVar44[8] = SUB41(fVar47,0) & ~(byte)iVar51;
                  auVar44[9] = (byte)((uint)fVar47 >> 8) & ~(byte)((uint)iVar51 >> 8);
                  auVar44[10] = (byte)((uint)fVar47 >> 0x10) & ~(byte)((uint)iVar51 >> 0x10);
                  auVar44[0xb] = (byte)((uint)fVar47 >> 0x18) & ~(byte)((uint)iVar51 >> 0x18);
                  auVar46[0xc] = SUB41(fVar32,0) & ~(byte)iVar52;
                  auVar46._0_12_ = auVar44;
                  auVar46[0xd] = (byte)((uint)fVar32 >> 8) & ~(byte)((uint)iVar52 >> 8);
                  auVar46[0xe] = (byte)((uint)fVar32 >> 0x10) & ~(byte)((uint)iVar52 >> 0x10);
                  auVar46[0xf] = (byte)((uint)fVar32 >> 0x18) & ~(byte)((uint)iVar52 >> 0x18);
                  auVar81._4_12_ = auVar80._4_12_;
                  auVar83._0_8_ = auVar81._0_8_;
                  auVar83._8_4_ = fVar72;
                  auVar83._12_4_ = auVar80._8_4_;
                  auVar82._8_8_ = auVar83._8_8_;
                  auVar82._4_4_ = auVar80._8_4_;
                  auVar82._0_4_ = auVar81._0_4_;
                  auVar84._0_12_ = auVar82._0_12_;
                  auVar84._12_4_ = auVar80._8_4_;
                  auVar115._0_4_ =
                       _DAT_03caa5b0 * fVar70 + fVar60 * _DAT_03cab640 * 0.0 +
                       (float)DAT_03cab620 * auVar111._0_4_ * _DAT_03cab640 +
                       (float)_DAT_03caad80 * auVar119._0_4_;
                  auVar115._4_4_ =
                       _UNK_03caa5b4 * fVar70 + fVar61 * _UNK_03cab644 * 0.0 +
                       DAT_03cab620._4_4_ * auVar111._4_4_ * _UNK_03cab644 +
                       (float)((ulong)_DAT_03caad80 >> 0x20) * auVar119._4_4_;
                  auVar115._8_4_ =
                       _UNK_03caa5b8 * fVar70 + fVar63 * _UNK_03cab648 * 0.0 +
                       (float)DAT_03cab628 * auVar111._8_4_ * _UNK_03cab648 +
                       (float)_UNK_03caad88 * auVar119._8_4_;
                  auVar115._12_4_ =
                       _UNK_03caa5bc * fVar70 + fVar60 * _UNK_03cab64c * 0.0 +
                       DAT_03cab628._4_4_ * auVar111._12_4_ * _UNK_03cab64c +
                       (float)((ulong)_UNK_03caad88 >> 0x20) * auVar119._12_4_;
                  auVar57._4_4_ = auVar115._8_4_;
                  auVar57._0_4_ = auVar115._8_4_;
                  auVar57._8_4_ = auVar115._8_4_;
                  auVar57._12_4_ = auVar115._8_4_;
                  auVar49 = NEON_ext(auVar57,auVar115,0xc,1);
                  auVar102._4_4_ = auVar115._4_4_;
                  auVar102._0_4_ = auVar115._4_4_;
                  auVar102._8_4_ = auVar115._4_4_;
                  auVar102._12_4_ = auVar115._4_4_;
                  auVar119 = NEON_ext(auVar84,auVar84,8,1);
                  fVar32 = auVar119._0_4_;
                  auVar85._4_12_ = auVar84._4_12_;
                  auVar85._0_4_ = fVar32;
                  auVar87._0_8_ = auVar85._0_8_;
                  auVar87._8_4_ = auVar119._8_4_;
                  auVar87._12_4_ = auVar80._8_4_;
                  auVar86._8_8_ = auVar87._8_8_;
                  auVar86._4_4_ = auVar81._0_4_;
                  auVar86._0_4_ = fVar32;
                  auVar88._0_12_ = auVar86._0_12_;
                  auVar88._12_4_ = fVar72;
                  auVar111 = NEON_ext(auVar102,auVar49,0xc,1);
                  auVar65 = NEON_ext(auVar88,auVar119,8,1);
                  auVar65 = NEON_ext(auVar65,auVar65,0xc,1);
                  fVar32 = (auVar81._0_4_ * auVar115._12_4_ +
                            fVar70 * auVar115._0_4_ * _DAT_03cab640 +
                           auVar65._0_4_ * auVar111._0_4_ * _DAT_03cab640) - auVar49._0_4_ * fVar32;
                  fVar47 = (fVar72 * auVar115._12_4_ + fVar70 * auVar115._4_4_ * _UNK_03cab644 +
                           auVar65._4_4_ * auVar111._4_4_ * _UNK_03cab644) -
                           auVar49._4_4_ * auVar119._4_4_;
                  fVar60 = (auVar80._8_4_ * auVar115._12_4_ +
                            fVar70 * auVar115._8_4_ * _UNK_03cab648 +
                           auVar65._8_4_ * auVar111._8_4_ * _UNK_03cab648) -
                           auVar49._8_4_ * auVar119._8_4_;
                  auVar41._0_4_ = fVar32 * fVar32 + fVar47 * fVar47;
                  auVar41._4_4_ = fVar60 * fVar60 + 0.0;
                  auVar41._8_4_ = fVar32 * fVar32 + fVar47 * fVar47;
                  auVar41._12_4_ = fVar60 * fVar60 + 0.0;
                  auVar49 = NEON_ext(auVar41,auVar41,4,1);
                  auVar42._0_4_ = auVar49._0_4_ + auVar49._4_4_;
                  auVar42._4_4_ = auVar49._8_4_ + auVar49._12_4_;
                  auVar42._8_4_ = auVar49._0_4_ + auVar49._4_4_;
                  auVar42._12_4_ = auVar49._8_4_ + auVar49._12_4_;
                  auVar49 = NEON_frsqrte(auVar42,4);
                  auVar97._0_4_ = auVar42._0_4_ * auVar49._0_4_;
                  auVar97._4_4_ = auVar42._4_4_ * auVar49._4_4_;
                  auVar97._8_4_ = auVar42._8_4_ * auVar49._8_4_;
                  auVar97._12_4_ = auVar42._12_4_ * auVar49._12_4_;
                  auVar65 = NEON_frsqrts(auVar49,auVar97,4);
                  auVar89._0_4_ = auVar49._0_4_ * auVar65._0_4_;
                  auVar89._4_4_ = auVar49._4_4_ * auVar65._4_4_;
                  auVar89._8_4_ = auVar49._8_4_ * auVar65._8_4_;
                  auVar89._12_4_ = auVar49._12_4_ * auVar65._12_4_;
                  auVar103._0_4_ = auVar42._0_4_ * auVar89._0_4_;
                  auVar103._4_4_ = auVar42._4_4_ * auVar89._4_4_;
                  auVar103._8_4_ = auVar42._8_4_ * auVar89._8_4_;
                  auVar103._12_4_ = auVar42._12_4_ * auVar89._12_4_;
                  iVar48 = -(uint)(auVar42._0_4_ == 0.0);
                  iVar50 = -(uint)(auVar42._4_4_ == 0.0);
                  iVar51 = -(uint)(auVar42._8_4_ == 0.0);
                  iVar52 = -(uint)(auVar42._12_4_ == 0.0);
                  auVar49 = NEON_frsqrts(auVar89,auVar103,4);
                  uVar26 = (ulong)((fVar59 / *(float *)puVar18) * *(float *)param_1[3]);
                  fVar32 = fVar32 * auVar89._0_4_ * auVar49._0_4_;
                  fVar47 = fVar47 * auVar89._4_4_ * auVar49._4_4_;
                  fVar60 = fVar60 * auVar89._8_4_ * auVar49._8_4_;
                  fVar59 = auVar89._12_4_ * auVar49._12_4_ * 0.0;
                  fVar32 = (float)CONCAT13((byte)((uint)fVar32 >> 0x18) &
                                           ~(byte)((uint)iVar48 >> 0x18),
                                           CONCAT12((byte)((uint)fVar32 >> 0x10) &
                                                    ~(byte)((uint)iVar48 >> 0x10),
                                                    CONCAT11((byte)((uint)fVar32 >> 8) &
                                                             ~(byte)((uint)iVar48 >> 8),
                                                             SUB41(fVar32,0) & ~(byte)iVar48)));
                  auVar54._0_8_ =
                       CONCAT17((byte)((uint)fVar47 >> 0x18) & ~(byte)((uint)iVar50 >> 0x18),
                                CONCAT16((byte)((uint)fVar47 >> 0x10) &
                                         ~(byte)((uint)iVar50 >> 0x10),
                                         CONCAT15((byte)((uint)fVar47 >> 8) &
                                                  ~(byte)((uint)iVar50 >> 8),
                                                  CONCAT14(SUB41(fVar47,0) & ~(byte)iVar50,fVar32)))
                               );
                  auVar54[8] = SUB41(fVar60,0) & ~(byte)iVar51;
                  auVar54[9] = (byte)((uint)fVar60 >> 8) & ~(byte)((uint)iVar51 >> 8);
                  auVar54[10] = (byte)((uint)fVar60 >> 0x10) & ~(byte)((uint)iVar51 >> 0x10);
                  auVar54[0xb] = (byte)((uint)fVar60 >> 0x18) & ~(byte)((uint)iVar51 >> 0x18);
                  auVar58[0xc] = SUB41(fVar59,0) & ~(byte)iVar52;
                  auVar58._0_12_ = auVar54;
                  auVar58[0xd] = (byte)((uint)fVar59 >> 8) & ~(byte)((uint)iVar52 >> 8);
                  auVar58[0xe] = (byte)((uint)fVar59 >> 0x10) & ~(byte)((uint)iVar52 >> 0x10);
                  auVar58[0xf] = (byte)((uint)fVar59 >> 0x18) & ~(byte)((uint)iVar52 >> 0x18);
                  fVar53 = fVar53 * fVar32;
                  fVar32 = (float)((ulong)auVar44._0_8_ >> 0x20) *
                           (float)((ulong)auVar54._0_8_ >> 0x20);
                  fVar47 = auVar44._8_4_ * auVar54._8_4_;
                  fVar59 = auVar46._12_4_ * auVar58._12_4_;
                  auVar43._0_4_ = fVar53 + fVar32;
                  auVar43._4_4_ = fVar47 + fVar59;
                  auVar43._8_4_ = fVar53 + fVar32;
                  auVar43._12_4_ = fVar47 + fVar59;
                  auVar49 = NEON_ext(auVar43,auVar43,4,1);
                  if (*(float *)(PTR_SinCosSampleTable_047d2398 + (uVar26 >> 0x18 & 0xff) * 0x10) +
                      (float)((uint)uVar26 & 0xffffff) * 5.9604645e-08 *
                      *(float *)((long)(PTR_SinCosSampleTable_047d2398 +
                                       (uVar26 >> 0x18 & 0xff) * 0x10) + 8) <
                      auVar49._0_4_ + auVar49._4_4_) {
                    local_a0 = (byte *)CONCAT71(local_a0._1_7_,local_74[0]);
                    local_98 = (undefined8 *)0x0;
                    uStack_90 = 0;
                    FUN_00d0a71c(&local_98,plVar24);
                    *param_2 = local_a0._0_1_;
                    FUN_00d0a34c(param_2 + 8,&local_98);
                    puVar22 = local_98;
                    if (local_98 != (undefined8 *)0x0) {
                      psVar1 = (short *)(local_98 + 3);
                      do {
                        sVar23 = *psVar1;
                        cVar6 = '\x01';
                        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                        if (bVar7) {
                          *psVar1 = sVar23 + -1;
                          cVar6 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar6 != '\0');
                      if (sVar23 == 1) {
                        piVar3 = (int *)((long)local_98 + 0x1c);
                        do {
                          iVar48 = *piVar3;
                          cVar6 = '\x01';
                          bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                          if (bVar7) {
                            *piVar3 = -1;
                            cVar6 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar6 != '\0');
                        if (iVar48 != -1) {
                          if (((*PTR_DAT_047d3908 & 1) == 0) &&
                             (iVar48 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar48 != 0)) {
                            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                            __cxa_guard_release(PTR_DAT_047d3908);
                          }
                          lVar30 = *(long *)PTR_DAT_047d3910;
                          *(long *)PTR_DAT_047d3918 = lVar30;
                          local_88 = (long *)*puVar22;
                          FUN_00c44438(lVar30 + 0x8040,&local_88);
                        }
                      }
                      else if (sVar23 == 0) {
LAB_01e06bd8:
                    /* WARNING: Subroutine does not return */
                        nn::diag::detail::AbortImpl
                                  ("count != std::numeric_limits<uint16_t>::max()",
                                   "ReleaseWeakReference",
                                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                                   ,0x33,"Reference counter underflows.");
                      }
                    }
                  }
                }
              }
            }
            (**(code **)(*plVar20 + 0x60))();
          }
        }
LAB_01e06838:
        puVar31 = (undefined8 *)puVar31[1];
      } while (puVar31 != puVar29 + 5);
    }
    return;
  }
  puVar29 = (undefined8 *)(lVar30 + 0x58);
  puVar22 = (undefined8 *)*puVar31;
  do {
    if (param_3 < *(byte *)(puVar22 + 4)) {
      puVar25 = (undefined8 *)*puVar22;
      if (puVar25 == (undefined8 *)0x0) {
        puVar31 = puVar22;
        goto LAB_01e067d4;
      }
      puVar29 = puVar22;
    }
    else {
      puVar31 = puVar29;
      if (param_3 <= *(byte *)(puVar22 + 4)) goto LAB_01e067d4;
      puVar31 = puVar22 + 1;
      puVar25 = (undefined8 *)*puVar31;
      puVar29 = puVar31;
      if (puVar25 == (undefined8 *)0x0) goto LAB_01e067d4;
    }
    puVar22 = puVar25;
  } while( true );
code_r0x01e06978:
  sVar23 = sVar5;
  if (sVar5 == 0) goto LAB_01e06838;
  goto LAB_01e06924;
}


