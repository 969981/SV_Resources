/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03086d6c; name: FUN_03086d6c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03086d6c(long *param_1,long *param_2,undefined8 *param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  void *pvVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  float fVar15;
  float fVar18;
  float fVar19;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar22;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  int iVar23;
  float fVar24;
  int iVar26;
  float fVar27;
  int iVar28;
  float fVar29;
  undefined1 auVar25 [16];
  byte bVar32;
  byte bVar33;
  byte bVar34;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  byte bVar35;
  float fVar36;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar12 = *param_1;
  if ((*(byte *)(param_2 + 0x1e) & 1) == 0) {
    if (lVar12 != 0) {
      lVar13 = *param_2;
      uVar8 = *(undefined8 *)(lVar13 + 0x20);
      *(undefined8 *)(lVar13 + 0x20) = 0;
      plVar5 = *(long **)(lVar12 + 0x20);
      *(undefined8 *)(lVar12 + 0x20) = uVar8;
      if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
        plVar6 = plVar5 + 2;
        do {
          lVar9 = *plVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))();
        }
      }
      *(undefined1 *)(lVar12 + 0x30) = 1;
      uVar1 = *(uint *)(lVar12 + 0x40);
      if (0 < (int)uVar1) {
        uVar14 = 0;
        do {
          lVar9 = *(long *)(lVar12 + 0x38);
          plVar5 = (long *)(lVar9 + uVar14 * 0x18);
          if (*plVar5 != 0) {
            lVar10 = *(long *)(*(long *)(lVar13 + 0x38) + uVar14 * 0x18);
            *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar14 * 0x18) = 0;
            plVar6 = (long *)*plVar5;
            *plVar5 = lVar10;
            if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
              plVar5 = plVar6 + 2;
              do {
                lVar10 = *plVar5;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
                if (bVar3) {
                  *plVar5 = lVar10 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar10 + -1 == 0) {
                (**(code **)(*plVar6 + 0x18))();
              }
            }
            *(undefined1 *)(lVar9 + uVar14 * 0x18 + 0x10) = 1;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 != uVar1);
      }
    }
  }
  else {
    if (lVar12 == 0) {
      plVar5 = (long *)0x0;
    }
    else {
      if (*(char *)(param_3 + 2) == '\x01') {
        uVar8 = *param_3;
      }
      else {
        uVar8 = FUN_0307f764(param_3);
      }
      FUN_0086fc44(uVar8,(int)param_1[3]);
      plVar5 = (long *)*param_1;
      *(undefined4 *)(param_1 + 3) = 0xffffffff;
    }
    plVar6 = (long *)*param_2;
    plVar7 = plVar5;
    if (plVar5 != plVar6) {
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar6 = plVar6 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plVar5 = (long *)*param_1;
        plVar6 = (long *)*param_2;
      }
      *param_1 = (long)plVar6;
      plVar7 = plVar6;
      if (plVar5 != (long *)0x0) {
        if (plVar5[1] != 0) {
          plVar6 = plVar5 + 2;
          do {
            lVar12 = *plVar6;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = lVar12 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar12 + -1 == 0) {
            (**(code **)(*plVar5 + 0x18))();
          }
        }
        plVar7 = (long *)*param_1;
      }
    }
    if (plVar7 != (long *)0x0) {
      lVar12 = param_1[6];
      plVar7[0xd] = param_1[7];
      plVar7[0xc] = lVar12;
      lVar12 = param_1[8];
      plVar7[0xf] = param_1[9];
      plVar7[0xe] = lVar12;
      lVar12 = param_1[10];
      plVar7[0x11] = param_1[0xb];
      plVar7[0x10] = lVar12;
      lVar12 = param_1[0xc];
      plVar7[0x13] = param_1[0xd];
      plVar7[0x12] = lVar12;
      lVar12 = param_1[0xe];
      plVar7[0x15] = param_1[0xf];
      plVar7[0x14] = lVar12;
      lVar12 = param_1[0x10];
      plVar7[0x17] = param_1[0x11];
      plVar7[0x16] = lVar12;
      lVar13 = *param_1;
      lVar12 = *(long *)(lVar13 + 0x20);
      auVar20 = *(undefined1 (*) [16])(*(long *)(lVar12 + 0x68) + 0x90);
      auVar16 = *(undefined1 (*) [16])(*(long *)(lVar12 + 0x68) + 0xa0);
      fVar15 = auVar16._0_4_;
      fVar22 = auVar20._0_4_;
      iVar23 = -(uint)(fVar15 < fVar22);
      fVar18 = auVar16._4_4_;
      fVar36 = auVar20._4_4_;
      iVar26 = -(uint)(fVar18 < fVar36);
      fVar19 = auVar16._8_4_;
      fVar39 = auVar20._8_4_;
      iVar28 = -(uint)(fVar19 < fVar39);
      if (CONCAT13((byte)((uint)iVar26 >> 0x18) | (byte)((uint)iVar23 >> 0x18) |
                   (byte)((uint)iVar28 >> 0x18),
                   CONCAT12((byte)((uint)iVar26 >> 0x10) | (byte)((uint)iVar23 >> 0x10) |
                            (byte)((uint)iVar28 >> 0x10),
                            CONCAT11((byte)((uint)iVar26 >> 8) | (byte)((uint)iVar23 >> 8) |
                                     (byte)((uint)iVar28 >> 8),
                                     (byte)iVar26 | (byte)iVar23 | (byte)iVar28))) == 0) {
        fVar24 = (fVar22 + fVar15) * 0.5;
        fVar27 = (fVar36 + fVar18) * 0.5;
        fVar29 = (fVar39 + fVar19) * 0.5;
        fVar15 = (fVar15 - fVar22) * 0.5;
        fVar18 = (fVar18 - fVar36) * 0.5;
        fVar19 = (fVar19 - fVar39) * 0.5;
        auVar16 = *(undefined1 (*) [16])(lVar13 + 0x70);
        fVar36 = ABS(*(float *)(lVar13 + 0x60) * fVar15) + ABS(auVar16._0_4_ * fVar18) +
                 ABS(*(float *)(lVar13 + 0x80) * fVar19);
        fVar39 = ABS(*(float *)(lVar13 + 100) * fVar15) + ABS(auVar16._4_4_ * fVar18) +
                 ABS(*(float *)(lVar13 + 0x84) * fVar19);
        fVar40 = ABS(*(float *)(lVar13 + 0x68) * fVar15) + ABS(auVar16._8_4_ * fVar18) +
                 ABS(*(float *)(lVar13 + 0x88) * fVar19);
        fVar41 = ABS(*(float *)(lVar13 + 0x6c) * fVar15) + ABS(auVar16._12_4_ * fVar18) +
                 ABS(*(float *)(lVar13 + 0x8c) * fVar19);
        fVar15 = (float)*(undefined8 *)(lVar13 + 0x90) +
                 *(float *)(lVar13 + 0x80) * fVar29 +
                 *(float *)(lVar13 + 0x60) * fVar24 + auVar16._0_4_ * fVar27;
        fVar18 = (float)((ulong)*(undefined8 *)(lVar13 + 0x90) >> 0x20) +
                 *(float *)(lVar13 + 0x84) * fVar29 +
                 *(float *)(lVar13 + 100) * fVar24 + auVar16._4_4_ * fVar27;
        fVar19 = (float)*(undefined8 *)(lVar13 + 0x98) +
                 *(float *)(lVar13 + 0x88) * fVar29 +
                 *(float *)(lVar13 + 0x68) * fVar24 + auVar16._8_4_ * fVar27;
        fVar22 = (float)((ulong)*(undefined8 *)(lVar13 + 0x98) >> 0x20) +
                 *(float *)(lVar13 + 0x8c) * fVar29 +
                 *(float *)(lVar13 + 0x6c) * fVar24 + auVar16._12_4_ * fVar27;
        auVar16._0_4_ = fVar15 + fVar36;
        auVar16._4_4_ = fVar18 + fVar39;
        auVar16._8_4_ = fVar19 + fVar40;
        auVar16._12_4_ = fVar22 + fVar41;
        auVar20._0_4_ = fVar15 - fVar36;
        auVar20._4_4_ = fVar18 - fVar39;
        auVar20._8_4_ = fVar19 - fVar40;
        auVar20._12_4_ = fVar22 - fVar41;
      }
      uStack_78 = auVar20._8_8_;
      local_80 = auVar20._0_8_;
      uStack_68 = auVar16._8_8_;
      uStack_70 = auVar16._0_8_;
      if (*(char *)(param_3 + 2) == '\x01') {
        uVar8 = *param_3;
      }
      else {
        uVar8 = FUN_0307f764(param_3);
        lVar12 = *(long *)(*param_1 + 0x20);
      }
      uVar4 = FUN_0086f578(uVar8,&local_80,*(undefined4 *)(lVar12 + 0x17c));
      *(undefined4 *)(param_1 + 3) = uVar4;
    }
  }
  lVar12 = param_1[1];
  if ((*(byte *)(param_2 + 0x1e) >> 1 & 1) == 0) {
    if (lVar12 != 0) {
      uVar8 = *(undefined8 *)(param_2[1] + 0x20);
      *(undefined8 *)(param_2[1] + 0x20) = 0;
      plVar5 = *(long **)(lVar12 + 0x20);
      *(undefined8 *)(lVar12 + 0x20) = uVar8;
      if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
        plVar6 = plVar5 + 2;
        do {
          lVar13 = *plVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = lVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar13 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))();
        }
      }
      *(undefined1 *)(lVar12 + 0x30) = 1;
    }
  }
  else {
    if (lVar12 == 0) {
      plVar5 = (long *)0x0;
    }
    else {
      if (*(char *)(param_3 + 2) == '\x01') {
        uVar8 = *param_3;
      }
      else {
        uVar8 = FUN_0307f764(param_3);
      }
      FUN_0086fc44(uVar8,(int)param_1[3]);
      plVar5 = (long *)param_1[1];
      *(undefined4 *)(param_1 + 3) = 0xffffffff;
    }
    plVar6 = (long *)param_2[1];
    plVar7 = plVar5;
    if (plVar5 != plVar6) {
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar6 = plVar6 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plVar5 = (long *)param_1[1];
        plVar6 = (long *)param_2[1];
      }
      param_1[1] = (long)plVar6;
      plVar7 = plVar6;
      if (plVar5 != (long *)0x0) {
        if (plVar5[1] != 0) {
          plVar6 = plVar5 + 2;
          do {
            lVar12 = *plVar6;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = lVar12 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar12 + -1 == 0) {
            (**(code **)(*plVar5 + 0x18))();
          }
        }
        plVar7 = (long *)param_1[1];
      }
    }
    if (plVar7 != (long *)0x0) {
      *(char *)(plVar7 + 8) = (char)param_1[0x12];
      lVar12 = param_1[0x14];
      plVar7[0xb] = param_1[0x15];
      plVar7[10] = lVar12;
      lVar13 = param_1[1];
      lVar12 = *(long *)(lVar13 + 0x20);
      auVar20 = *(undefined1 (*) [16])(*(long *)(lVar12 + 0x38) + 0x70);
      auVar16 = *(undefined1 (*) [16])(*(long *)(lVar12 + 0x38) + 0x80);
      bVar32 = *(byte *)(lVar13 + 0x40);
      if (CONCAT31(0,bVar32) != 0) {
        auVar31[4] = bVar32;
        auVar31._0_4_ = CONCAT31(0,bVar32);
        auVar31._5_3_ = 0;
        auVar31[8] = bVar32;
        auVar31._9_3_ = 0;
        auVar31[0xc] = bVar32;
        auVar31._13_3_ = 0;
        auVar30._8_8_ = _UNK_03cabbd8;
        auVar30._0_8_ = _DAT_03cabbd0;
        iVar23 = -(uint)bVar32;
        auVar37._8_8_ = _UNK_03cabbc8;
        auVar37._0_8_ = _DAT_03cabbc0;
        auVar44._8_8_ = _UNK_03cab238;
        auVar44._0_8_ = _DAT_03cab230;
        auVar45._8_8_ = _UNK_03cac2d8;
        auVar45._0_8_ = _DAT_03cac2d0;
        auVar42 = NEON_ushl(auVar44,auVar31,4);
        auVar43._0_4_ = -(uint)(-1 < auVar42._0_4_);
        auVar43._4_4_ = -(uint)(-1 < auVar42._4_4_);
        auVar43._8_4_ = -(uint)(-1 < auVar42._8_4_);
        auVar43._12_4_ = -(uint)(-1 < auVar42._8_8_);
        auVar47._4_4_ = iVar23;
        auVar47._0_4_ = iVar23;
        auVar47._8_4_ = iVar23;
        auVar47._12_4_ = iVar23;
        auVar42 = NEON_ushl(auVar45,auVar31,4);
        auVar46._8_8_ = _UNK_03cabec8;
        auVar46._0_8_ = _DAT_03cabec0;
        auVar25._0_4_ = -(uint)(-1 < auVar42._0_4_);
        auVar25._4_4_ = -(uint)(-1 < auVar42._4_4_);
        auVar25._8_4_ = -(uint)(-1 < auVar42._8_4_);
        auVar25._12_4_ = -(uint)(-1 < auVar42._8_8_);
        auVar44 = NEON_ushl(auVar46,auVar47,4);
        auVar47 = a64_TBL(ZEXT816(0),auVar20,auVar30);
        auVar31 = a64_TBL(ZEXT816(0),auVar16,auVar30);
        auVar42 = a64_TBL(ZEXT816(0),auVar20,auVar37);
        auVar38 = a64_TBL(ZEXT816(0),auVar16,auVar37);
        auVar16 = auVar16 ^ (auVar16 ^ auVar31) & ~auVar43;
        auVar42 = auVar42 ^ (auVar42 ^ auVar47 ^ (auVar47 ^ auVar20) & auVar43) & auVar25;
        auVar16 = auVar16 ^ (auVar16 ^ auVar38) & ~auVar25;
        auVar38._0_3_ = auVar42._0_3_;
        bVar32 = (byte)((uint)(auVar44._0_4_ << 0x1f) >> 0x18);
        auVar38[3] = bVar32 ^ auVar42[3];
        auVar38[4] = auVar42[4];
        auVar38[5] = auVar42[5];
        auVar38[6] = auVar42[6];
        bVar33 = (byte)((uint)(auVar44._4_4_ << 0x1f) >> 0x18);
        auVar38[7] = bVar33 ^ auVar42[7];
        auVar38[8] = auVar42[8];
        auVar38[9] = auVar42[9];
        auVar38[10] = auVar42[10];
        bVar34 = (byte)((uint)(auVar44._8_4_ << 0x1f) >> 0x18);
        auVar38[0xb] = bVar34 ^ auVar42[0xb];
        auVar38[0xc] = auVar42[0xc];
        auVar38[0xd] = auVar42[0xd];
        auVar38[0xe] = auVar42[0xe];
        bVar35 = (byte)((uint)(auVar44._12_4_ << 0x1f) >> 0x18);
        auVar38[0xf] = bVar35 ^ auVar42[0xf];
        auVar42._0_3_ = auVar16._0_3_;
        auVar42[3] = auVar16[3] ^ bVar32;
        auVar42[4] = auVar16[4];
        auVar42[5] = auVar16[5];
        auVar42[6] = auVar16[6];
        auVar42[7] = auVar16[7] ^ bVar33;
        auVar42[8] = auVar16[8];
        auVar42[9] = auVar16[9];
        auVar42[10] = auVar16[10];
        auVar42[0xb] = auVar16[0xb] ^ bVar34;
        auVar42[0xc] = auVar16[0xc];
        auVar42[0xd] = auVar16[0xd];
        auVar42[0xe] = auVar16[0xe];
        auVar42[0xf] = auVar16[0xf] ^ bVar35;
        auVar20 = NEON_fmin(auVar38,auVar42,4);
        auVar16 = NEON_fmax(auVar38,auVar42,4);
      }
      auVar42 = *(undefined1 (*) [16])(lVar13 + 0x50);
      auVar21._0_8_ = CONCAT44(auVar20._4_4_ + auVar42._4_4_,auVar20._0_4_ + auVar42._0_4_);
      auVar21._8_4_ = auVar20._8_4_ + auVar42._8_4_;
      auVar21._12_4_ = auVar20._12_4_ + auVar42._12_4_;
      auVar17._0_8_ = CONCAT44(auVar16._4_4_ + auVar42._4_4_,auVar16._0_4_ + auVar42._0_4_);
      auVar17._8_4_ = auVar16._8_4_ + auVar42._8_4_;
      auVar17._12_4_ = auVar16._12_4_ + auVar42._12_4_;
      uStack_78 = auVar21._8_8_;
      uStack_68 = auVar17._8_8_;
      local_80 = auVar21._0_8_;
      uStack_70 = auVar17._0_8_;
      if (*(char *)(param_3 + 2) == '\x01') {
        uVar8 = *param_3;
      }
      else {
        uVar8 = FUN_0307f764(param_3);
        lVar12 = *(long *)(param_1[1] + 0x20);
      }
      uVar4 = FUN_0086f578(uVar8,&local_80,*(undefined4 *)(lVar12 + 0x94));
      *(undefined4 *)(param_1 + 3) = uVar4;
    }
  }
  if ((*(byte *)(param_2 + 0x1e) >> 2 & 1) == 0) {
    lVar12 = param_1[2];
    if (lVar12 != 0) {
      uVar8 = *(undefined8 *)(param_2[2] + 0x20);
      *(undefined8 *)(param_2[2] + 0x20) = 0;
      plVar5 = *(long **)(lVar12 + 0x20);
      *(undefined8 *)(lVar12 + 0x20) = uVar8;
      if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
        plVar6 = plVar5 + 2;
        do {
          lVar13 = *plVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = lVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar13 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))();
        }
      }
      *(undefined1 *)(lVar12 + 0x30) = 1;
    }
  }
  else {
    plVar7 = (long *)param_1[2];
    plVar5 = (long *)param_2[2];
    plVar6 = plVar7;
    if (plVar7 != plVar5) {
      if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
        plVar5 = plVar5 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plVar7 = (long *)param_1[2];
        plVar5 = (long *)param_2[2];
      }
      param_1[2] = (long)plVar5;
      plVar6 = plVar5;
      if (plVar7 != (long *)0x0) {
        if (plVar7[1] != 0) {
          plVar5 = plVar7 + 2;
          do {
            lVar12 = *plVar5;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar3) {
              *plVar5 = lVar12 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar12 + -1 == 0) {
            (**(code **)(*plVar7 + 0x18))();
          }
        }
        plVar6 = (long *)param_1[2];
      }
    }
    if (plVar6 != (long *)0x0) {
      lVar12 = param_1[6];
      plVar6[9] = param_1[7];
      plVar6[8] = lVar12;
      lVar12 = param_1[8];
      plVar6[0xb] = param_1[9];
      plVar6[10] = lVar12;
      lVar12 = param_1[10];
      plVar6[0xd] = param_1[0xb];
      plVar6[0xc] = lVar12;
      auVar16 = *(undefined1 (*) [16])(param_1 + 0xc);
      plVar6[0xf] = auVar16._8_8_;
      plVar6[0xe] = auVar16._0_8_;
    }
  }
  *(byte *)(param_1 + 0x1e) = *(byte *)(param_1 + 0x1e) | *(byte *)(param_2 + 0x1e);
  if (param_2 != param_1) {
    iVar23 = (int)param_2[0x17];
    pvVar11 = (void *)param_2[0x16];
    if ((int)(*(uint *)((long)param_1 + 0xbc) & 0x7fffffff) < iVar23) {
      FUN_0307e760(param_1 + 0x16,PTR_PTR_047d1a50,(long)iVar23);
    }
    memcpy((void *)param_1[0x16],pvVar11,(long)iVar23 << 3);
    lVar12 = param_1[0x18];
    *(int *)(param_1 + 0x17) = iVar23;
    if ((lVar12 != 0) && (*(int *)(lVar12 + 4) != -2)) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar12,0);
      param_1[0x18] = (long)&DAT_03d7702c;
      *(undefined4 *)(param_1 + 0x19) = 0;
    }
    if (*(int *)(param_2[0x18] + 4) == -2) {
      param_1[0x18] = (long)&DAT_03d7702c;
      *(undefined4 *)(param_1 + 0x19) = 0;
    }
    else {
      *(int *)(param_1 + 0x19) = (int)param_2[0x19];
      pvVar11 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                  (PTR_PTR_047d1a50,(long)(int)param_2[0x19] * 8 + 8);
      param_1[0x18] = (long)pvVar11;
      memcpy(pvVar11,(void *)param_2[0x18],(long)(int)param_2[0x19] * 8 + 8);
    }
  }
  FUN_0307e80c(param_1 + 0x1a,param_2 + 0x1a);
  return;
}


