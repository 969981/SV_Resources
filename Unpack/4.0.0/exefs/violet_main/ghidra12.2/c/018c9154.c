/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018c9154; name: FUN_018c9154
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_018c9154(long *param_1,byte param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  short sVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  float *pfVar20;
  ulong uVar21;
  long *plVar22;
  undefined8 *puVar23;
  long lVar24;
  undefined8 *puVar25;
  undefined1 auVar26 [16];
  float fVar27;
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  undefined1 auVar31 [12];
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar32 [16];
  int iVar36;
  undefined1 auVar37 [12];
  int iVar40;
  undefined1 auVar38 [16];
  int iVar41;
  int iVar42;
  undefined1 auVar39 [16];
  float fVar53;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar48 [16];
  undefined1 auVar47 [16];
  undefined1 auVar46 [16];
  undefined1 auVar45 [16];
  undefined1 auVar52 [16];
  undefined1 auVar51 [16];
  undefined1 auVar50 [16];
  undefined1 auVar49 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar60;
  float fVar61;
  float fVar62;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  byte *local_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  byte local_6c [4];
  undefined8 local_68;
  
  lVar24 = *param_1;
  local_88 = local_6c;
  puVar25 = (undefined8 *)(lVar24 + 0x58);
  if ((undefined8 *)*puVar25 == (undefined8 *)0x0) {
    puVar18 = puVar25;
LAB_018c91cc:
    puVar23 = (undefined8 *)*puVar25;
    local_6c[0] = param_2;
    if (puVar23 == (undefined8 *)0x0) {
      puVar19 = (undefined8 *)(lVar24 + 0x60);
      puVar23 = (undefined8 *)(**(code **)(*(long *)*puVar19 + 0x10))((long *)*puVar19,0x60,8);
      if (puVar23 == (undefined8 *)0x0) {
        (**(code **)(*(long *)*puVar19 + 0xe8))();
      }
      FUN_00d75208(puVar19,puVar23 + 4,&local_88);
      *puVar23 = 0;
      puVar23[1] = 0;
      puVar23[2] = puVar18;
      *puVar25 = puVar23;
      puVar18 = puVar23;
      if (**(long **)(lVar24 + 0x50) != 0) {
        *(long *)(lVar24 + 0x50) = **(long **)(lVar24 + 0x50);
        puVar18 = (undefined8 *)*puVar25;
      }
      FUN_010108e0(*(undefined8 *)(lVar24 + 0x58),puVar18);
      *(long *)(lVar24 + 0x80) = *(long *)(lVar24 + 0x80) + 1;
    }
    puVar16 = PTR_SinCosSampleTable_047d2398;
    puVar15 = PTR_FloatDegree180_047d2390;
    puVar14 = PTR_AngleIndexHalfRound_047d2388;
    uVar13 = _UNK_03cab648;
    uVar12 = _DAT_03cab640;
    uVar11 = DAT_03cab628;
    uVar10 = DAT_03cab620;
    uVar9 = _UNK_03caad88;
    uVar8 = _DAT_03caad80;
    uVar7 = _UNK_03caa5b8;
    uVar6 = _DAT_03caa5b0;
    puVar25 = (undefined8 *)puVar23[6];
    do {
      if (puVar25 == puVar23 + 5) {
        return;
      }
      lVar24 = puVar25[2];
      if ((lVar24 != 0) && (*(short *)(lVar24 + 0x1a) != 0)) {
        psVar1 = (short *)(lVar24 + 0x1a);
        fStack_c8 = (float)uVar9;
        fStack_c4 = (float)((ulong)uVar9 >> 0x20);
        local_d0 = (float)uVar8;
        fStack_cc = (float)((ulong)uVar8 >> 0x20);
        fStack_b8 = (float)uVar11;
        fStack_b4 = (float)((ulong)uVar11 >> 0x20);
        local_c0 = (float)uVar10;
        fStack_bc = (float)((ulong)uVar10 >> 0x20);
        sVar17 = *(short *)(lVar24 + 0x1a);
        do {
          sVar3 = *psVar1;
          if (sVar3 == sVar17) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar17 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 != '\0') goto LAB_018c9358;
            bVar5 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_018c9358:
            bVar5 = false;
          }
          if (bVar5) {
            if (*(long *)(lVar24 + 0x10) != 0) {
              plVar22 = (long *)(*(long *)(lVar24 + 0x10) + -0x28);
              lVar24 = (**(code **)(*plVar22 + 0x68))(plVar22);
              pfVar20 = (float *)param_1[2];
              fVar29 = *(float *)(lVar24 + 0x30) - *pfVar20;
              fVar33 = *(float *)(lVar24 + 0x34) - pfVar20[1];
              fVar34 = *(float *)(lVar24 + 0x38) - pfVar20[2];
              fVar35 = 0.0 - pfVar20[3];
              auVar28._0_4_ = fVar29 * fVar29 + fVar33 * fVar33;
              auVar28._4_4_ = fVar34 * fVar34 + 0.0;
              auVar28._8_4_ = fVar29 * fVar29 + fVar33 * fVar33;
              auVar28._12_4_ = fVar34 * fVar34 + 0.0;
              auVar28 = NEON_ext(auVar28,auVar28,4,1);
              if (auVar28._0_4_ + auVar28._4_4_ < *(float *)param_1[4] * *(float *)param_1[4]) {
                auVar55._0_4_ = fVar29 * fVar29 + fVar33 * fVar33;
                auVar55._4_4_ = fVar34 * fVar34 + fVar35 * fVar35;
                auVar55._8_4_ = fVar29 * fVar29 + fVar33 * fVar33;
                auVar55._12_4_ = fVar34 * fVar34 + fVar35 * fVar35;
                auVar38 = NEON_ext(auVar55,auVar55,4,1);
                auVar28 = *(undefined1 (*) [16])param_1[3];
                fVar61 = auVar28._8_4_;
                auVar63._4_4_ = fVar61;
                auVar63._0_4_ = fVar61;
                auVar63._8_4_ = fVar61;
                auVar63._12_4_ = fVar61;
                fVar62 = auVar28._12_4_;
                auVar64 = NEON_ext(auVar63,auVar28,0xc,1);
                auVar66._0_4_ = auVar38._0_4_ + auVar38._4_4_;
                auVar66._4_4_ = auVar38._8_4_ + auVar38._12_4_;
                auVar66._8_4_ = auVar38._0_4_ + auVar38._4_4_;
                auVar66._12_4_ = auVar38._8_4_ + auVar38._12_4_;
                auVar38 = NEON_frsqrte(auVar66,4);
                fVar60 = auVar28._4_4_;
                auVar68._4_4_ = fVar60;
                auVar68._0_4_ = fVar60;
                auVar68._8_4_ = fVar60;
                auVar68._12_4_ = fVar60;
                auVar54._0_4_ = auVar66._0_4_ * auVar38._0_4_;
                auVar54._4_4_ = auVar66._4_4_ * auVar38._4_4_;
                auVar54._8_4_ = auVar66._8_4_ * auVar38._8_4_;
                auVar54._12_4_ = auVar66._12_4_ * auVar38._12_4_;
                auVar55 = NEON_frsqrts(auVar38,auVar54,4);
                auVar69 = NEON_ext(auVar68,auVar64,0xc,1);
                auVar43._0_4_ = auVar38._0_4_ * auVar55._0_4_;
                auVar43._4_4_ = auVar38._4_4_ * auVar55._4_4_;
                auVar43._8_4_ = auVar38._8_4_ * auVar55._8_4_;
                auVar43._12_4_ = auVar38._12_4_ * auVar55._12_4_;
                fVar71 = (float)uVar12;
                fVar72 = (float)((ulong)uVar12 >> 0x20);
                fVar73 = (float)uVar13;
                fVar74 = (float)((ulong)uVar13 >> 0x20);
                auVar56._0_4_ = auVar66._0_4_ * auVar43._0_4_;
                auVar56._4_4_ = auVar66._4_4_ * auVar43._4_4_;
                auVar56._8_4_ = auVar66._8_4_ * auVar43._8_4_;
                auVar56._12_4_ = auVar66._12_4_ * auVar43._12_4_;
                fVar27 = (float)NEON_ucvtf(*(undefined4 *)puVar14);
                iVar36 = -(uint)(auVar66._0_4_ == 0.0);
                iVar40 = -(uint)(auVar66._4_4_ == 0.0);
                iVar41 = -(uint)(auVar66._8_4_ == 0.0);
                iVar42 = -(uint)(auVar66._12_4_ == 0.0);
                auVar38 = NEON_frsqrts(auVar43,auVar56,4);
                fVar29 = fVar29 * auVar43._0_4_ * auVar38._0_4_;
                fVar33 = fVar33 * auVar43._4_4_ * auVar38._4_4_;
                fVar34 = fVar34 * auVar43._8_4_ * auVar38._8_4_;
                fVar35 = fVar35 * auVar43._12_4_ * auVar38._12_4_;
                fVar70 = auVar28._0_4_;
                auVar45._0_4_ = -fVar70;
                fVar53 = -fVar60;
                auVar44._8_4_ = -fVar61;
                auVar44._4_4_ = auVar44._8_4_;
                auVar44._0_4_ = auVar44._8_4_;
                auVar44._12_4_ = auVar44._8_4_;
                fVar30 = (float)CONCAT13((byte)((uint)fVar29 >> 0x18) &
                                         ~(byte)((uint)iVar36 >> 0x18),
                                         CONCAT12((byte)((uint)fVar29 >> 0x10) &
                                                  ~(byte)((uint)iVar36 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar29 >> 8) &
                                                           ~(byte)((uint)iVar36 >> 8),
                                                           SUB41(fVar29,0) & ~(byte)iVar36)));
                auVar31._0_8_ =
                     CONCAT17((byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18),
                              CONCAT16((byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar40 >> 0x10),
                                       CONCAT15((byte)((uint)fVar33 >> 8) &
                                                ~(byte)((uint)iVar40 >> 8),
                                                CONCAT14(SUB41(fVar33,0) & ~(byte)iVar40,fVar30))));
                auVar31[8] = SUB41(fVar34,0) & ~(byte)iVar41;
                auVar31[9] = (byte)((uint)fVar34 >> 8) & ~(byte)((uint)iVar41 >> 8);
                auVar31[10] = (byte)((uint)fVar34 >> 0x10) & ~(byte)((uint)iVar41 >> 0x10);
                auVar31[0xb] = (byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar41 >> 0x18);
                auVar32[0xc] = SUB41(fVar35,0) & ~(byte)iVar42;
                auVar32._0_12_ = auVar31;
                auVar32[0xd] = (byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar42 >> 8);
                auVar32[0xe] = (byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar42 >> 0x10);
                auVar32[0xf] = (byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar42 >> 0x18);
                auVar45._4_12_ = auVar44._4_12_;
                auVar47._0_8_ = auVar45._0_8_;
                auVar47._8_4_ = fVar53;
                auVar47._12_4_ = auVar44._8_4_;
                auVar46._8_8_ = auVar47._8_8_;
                auVar46._4_4_ = auVar44._8_4_;
                auVar46._0_4_ = auVar45._0_4_;
                auVar48._0_12_ = auVar46._0_12_;
                auVar48._12_4_ = auVar44._8_4_;
                fVar33 = (float)uVar6 * fVar62 + fVar70 * fVar71 * 0.0 +
                         local_c0 * auVar69._0_4_ * fVar71 + local_d0 * auVar64._0_4_;
                fVar34 = (float)((ulong)uVar6 >> 0x20) * fVar62 + fVar60 * fVar72 * 0.0 +
                         fStack_bc * auVar69._4_4_ * fVar72 + fStack_cc * auVar64._4_4_;
                fVar35 = (float)uVar7 * fVar62 + fVar61 * fVar73 * 0.0 +
                         fStack_b8 * auVar69._8_4_ * fVar73 + fStack_c8 * auVar64._8_4_;
                fVar70 = (float)((ulong)uVar7 >> 0x20) * fVar62 + fVar70 * fVar74 * 0.0 +
                         fStack_b4 * auVar69._12_4_ * fVar74 + fStack_c4 * auVar64._12_4_;
                auVar58._4_4_ = fVar35;
                auVar58._0_4_ = fVar35;
                auVar58._8_4_ = fVar35;
                auVar58._12_4_ = fVar35;
                auVar38._4_4_ = fVar34;
                auVar38._0_4_ = fVar33;
                auVar38._8_4_ = fVar35;
                auVar38._12_4_ = fVar70;
                auVar55 = NEON_ext(auVar58,auVar38,0xc,1);
                auVar65._4_4_ = fVar34;
                auVar65._0_4_ = fVar34;
                auVar65._8_4_ = fVar34;
                auVar65._12_4_ = fVar34;
                auVar38 = NEON_ext(auVar48,auVar48,8,1);
                fVar29 = auVar38._0_4_;
                auVar49._4_12_ = auVar48._4_12_;
                auVar49._0_4_ = fVar29;
                auVar51._0_8_ = auVar49._0_8_;
                auVar51._8_4_ = auVar38._8_4_;
                auVar51._12_4_ = auVar44._8_4_;
                auVar50._8_8_ = auVar51._8_8_;
                auVar50._4_4_ = auVar45._0_4_;
                auVar50._0_4_ = fVar29;
                auVar52._0_12_ = auVar50._0_12_;
                auVar52._12_4_ = fVar53;
                auVar66 = NEON_ext(auVar65,auVar55,0xc,1);
                auVar28 = NEON_ext(auVar52,auVar38,8,1);
                auVar28 = NEON_ext(auVar28,auVar28,0xc,1);
                fVar29 = (auVar45._0_4_ * fVar70 + fVar62 * fVar33 * fVar71 +
                         auVar28._0_4_ * auVar66._0_4_ * fVar71) - auVar55._0_4_ * fVar29;
                fVar33 = (fVar53 * fVar70 + fVar62 * fVar34 * fVar72 +
                         auVar28._4_4_ * auVar66._4_4_ * fVar72) - auVar55._4_4_ * auVar38._4_4_;
                fVar34 = (auVar44._8_4_ * fVar70 + fVar62 * fVar35 * fVar73 +
                         auVar28._8_4_ * auVar66._8_4_ * fVar73) - auVar55._8_4_ * auVar38._8_4_;
                auVar64._0_4_ = fVar29 * fVar29 + fVar33 * fVar33;
                auVar64._4_4_ = fVar34 * fVar34 + 0.0;
                auVar64._8_4_ = fVar29 * fVar29 + fVar33 * fVar33;
                auVar64._12_4_ = fVar34 * fVar34 + 0.0;
                auVar28 = NEON_ext(auVar64,auVar64,4,1);
                auVar69._0_4_ = auVar28._0_4_ + auVar28._4_4_;
                auVar69._4_4_ = auVar28._8_4_ + auVar28._12_4_;
                auVar69._8_4_ = auVar28._0_4_ + auVar28._4_4_;
                auVar69._12_4_ = auVar28._8_4_ + auVar28._12_4_;
                auVar28 = NEON_frsqrte(auVar69,4);
                auVar59._0_4_ = auVar69._0_4_ * auVar28._0_4_;
                auVar59._4_4_ = auVar69._4_4_ * auVar28._4_4_;
                auVar59._8_4_ = auVar69._8_4_ * auVar28._8_4_;
                auVar59._12_4_ = auVar69._12_4_ * auVar28._12_4_;
                auVar38 = NEON_frsqrts(auVar28,auVar59,4);
                auVar57._0_4_ = auVar28._0_4_ * auVar38._0_4_;
                auVar57._4_4_ = auVar28._4_4_ * auVar38._4_4_;
                auVar57._8_4_ = auVar28._8_4_ * auVar38._8_4_;
                auVar57._12_4_ = auVar28._12_4_ * auVar38._12_4_;
                auVar67._0_4_ = auVar69._0_4_ * auVar57._0_4_;
                auVar67._4_4_ = auVar69._4_4_ * auVar57._4_4_;
                auVar67._8_4_ = auVar69._8_4_ * auVar57._8_4_;
                auVar67._12_4_ = auVar69._12_4_ * auVar57._12_4_;
                iVar36 = -(uint)(auVar69._0_4_ == 0.0);
                iVar40 = -(uint)(auVar69._4_4_ == 0.0);
                iVar41 = -(uint)(auVar69._8_4_ == 0.0);
                iVar42 = -(uint)(auVar69._12_4_ == 0.0);
                auVar28 = NEON_frsqrts(auVar57,auVar67,4);
                uVar21 = (ulong)((fVar27 / *(float *)puVar15) * *(float *)param_1[5]);
                fVar29 = fVar29 * auVar57._0_4_ * auVar28._0_4_;
                fVar33 = fVar33 * auVar57._4_4_ * auVar28._4_4_;
                fVar34 = fVar34 * auVar57._8_4_ * auVar28._8_4_;
                fVar35 = auVar57._12_4_ * auVar28._12_4_ * 0.0;
                fVar29 = (float)CONCAT13((byte)((uint)fVar29 >> 0x18) &
                                         ~(byte)((uint)iVar36 >> 0x18),
                                         CONCAT12((byte)((uint)fVar29 >> 0x10) &
                                                  ~(byte)((uint)iVar36 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar29 >> 8) &
                                                           ~(byte)((uint)iVar36 >> 8),
                                                           SUB41(fVar29,0) & ~(byte)iVar36)));
                auVar37._0_8_ =
                     CONCAT17((byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18),
                              CONCAT16((byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar40 >> 0x10),
                                       CONCAT15((byte)((uint)fVar33 >> 8) &
                                                ~(byte)((uint)iVar40 >> 8),
                                                CONCAT14(SUB41(fVar33,0) & ~(byte)iVar40,fVar29))));
                auVar37[8] = SUB41(fVar34,0) & ~(byte)iVar41;
                auVar37[9] = (byte)((uint)fVar34 >> 8) & ~(byte)((uint)iVar41 >> 8);
                auVar37[10] = (byte)((uint)fVar34 >> 0x10) & ~(byte)((uint)iVar41 >> 0x10);
                auVar37[0xb] = (byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar41 >> 0x18);
                auVar39[0xc] = SUB41(fVar35,0) & ~(byte)iVar42;
                auVar39._0_12_ = auVar37;
                auVar39[0xd] = (byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar42 >> 8);
                auVar39[0xe] = (byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar42 >> 0x10);
                auVar39[0xf] = (byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar42 >> 0x18);
                fVar30 = fVar30 * fVar29;
                fVar29 = (float)((ulong)auVar31._0_8_ >> 0x20) *
                         (float)((ulong)auVar37._0_8_ >> 0x20);
                fVar33 = auVar31._8_4_ * auVar37._8_4_;
                fVar34 = auVar32._12_4_ * auVar39._12_4_;
                auVar26._0_4_ = fVar30 + fVar29;
                auVar26._4_4_ = fVar33 + fVar34;
                auVar26._8_4_ = fVar30 + fVar29;
                auVar26._12_4_ = fVar33 + fVar34;
                auVar28 = NEON_ext(auVar26,auVar26,4,1);
                if (*(float *)(puVar16 + (uVar21 >> 0x18 & 0xff) * 0x10) +
                    (float)((uint)uVar21 & 0xffffff) * 5.9604645e-08 *
                    *(float *)((long)(puVar16 + (uVar21 >> 0x18 & 0xff) * 0x10) + 8) <
                    auVar28._0_4_ + auVar28._4_4_) {
                  lVar24 = param_1[1];
                  local_88 = (byte *)CONCAT71(local_88._1_7_,local_6c[0]);
                  local_80 = (undefined8 *)0x0;
                  uStack_78 = 0;
                  FUN_00d0a71c(&local_80,puVar25 + 2);
                  FUN_017c8178(lVar24,&local_88);
                  puVar18 = local_80;
                  if (local_80 != (undefined8 *)0x0) {
                    psVar1 = (short *)(local_80 + 3);
                    do {
                      sVar17 = *psVar1;
                      cVar4 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                      if (bVar5) {
                        *psVar1 = sVar17 + -1;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                    if (sVar17 == 1) {
                      piVar2 = (int *)((long)local_80 + 0x1c);
                      do {
                        iVar36 = *piVar2;
                        cVar4 = '\x01';
                        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                        if (bVar5) {
                          *piVar2 = -1;
                          cVar4 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar4 != '\0');
                      if (iVar36 != -1) {
                        if (((*PTR_DAT_047d3908 & 1) == 0) &&
                           (iVar36 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar36 != 0)) {
                          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                          __cxa_guard_release(PTR_DAT_047d3908);
                        }
                        lVar24 = *(long *)PTR_DAT_047d3910;
                        *(long *)PTR_DAT_047d3918 = lVar24;
                        local_68 = *puVar18;
                        FUN_00c44438(lVar24 + 0x8040,&local_68);
                      }
                    }
                    else if (sVar17 == 0) {
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
              (**(code **)(*plVar22 + 0x60))();
            }
            break;
          }
          sVar17 = sVar3;
        } while (sVar3 != 0);
      }
      puVar25 = (undefined8 *)puVar25[1];
    } while( true );
  }
  puVar23 = (undefined8 *)(lVar24 + 0x58);
  puVar18 = (undefined8 *)*puVar25;
  do {
    if (param_2 < *(byte *)(puVar18 + 4)) {
      puVar19 = (undefined8 *)*puVar18;
      if (puVar19 == (undefined8 *)0x0) {
        puVar25 = puVar18;
        goto LAB_018c91cc;
      }
      puVar23 = puVar18;
    }
    else {
      puVar25 = puVar23;
      if (param_2 <= *(byte *)(puVar18 + 4)) goto LAB_018c91cc;
      puVar25 = puVar18 + 1;
      puVar19 = (undefined8 *)*puVar25;
      puVar23 = puVar25;
      if (puVar19 == (undefined8 *)0x0) goto LAB_018c91cc;
    }
    puVar18 = puVar19;
  } while( true );
}


