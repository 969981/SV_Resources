/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ffe338; name: FUN_00ffe338
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ffe338(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auVar8 [12];
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  ulong uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  uint uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 in_q4 [16];
  undefined1 auVar36 [12];
  float fVar31;
  undefined1 auVar32 [16];
  undefined1 auVar34 [16];
  undefined1 auVar33 [16];
  undefined1 auVar35 [16];
  
  iVar2 = *(int *)(param_2 + 0x3c);
  iVar1 = iVar2 + 0xf;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  uVar28 = iVar1 >> 4;
  if (uVar28 < 4) {
    uVar28 = 0;
    uVar12 = 1;
  }
  else if (uVar28 < 8) {
    uVar12 = 2;
    uVar28 = 1;
  }
  else if (uVar28 < 0x10) {
    uVar12 = 3;
    uVar28 = 2;
  }
  else if (uVar28 < 0x20) {
    uVar12 = 4;
    uVar28 = 3;
  }
  else if (uVar28 < 0x40) {
    uVar12 = 5;
    uVar28 = 4;
  }
  else {
    uVar15 = uVar28 >> 5;
    uVar28 = 4;
    do {
      uVar12 = uVar28;
      uVar28 = uVar12 + 1;
      bVar11 = 3 < uVar15;
      uVar15 = uVar15 >> 1;
    } while (bVar11);
    uVar12 = uVar12 + 2;
  }
  lVar22 = *(long *)(param_1 + 0xb0);
  if (5 < uVar28) {
    uVar12 = 6;
  }
  uVar23 = (ulong)uVar12;
  *(ulong *)(lVar22 + 0x90) = uVar23;
  plVar21 = (long *)(lVar22 + 0x98);
  uVar16 = *(long *)(lVar22 + 0xa0) - *plVar21 >> 3;
  if (uVar16 < uVar23) {
    FUN_00c6e61c(plVar21,uVar23 - uVar16);
  }
  else if (uVar23 < uVar16) {
    *(ulong *)(lVar22 + 0xa0) = *plVar21 + uVar23 * 8;
  }
  *(undefined8 *)*plVar21 = 0;
  if (uVar12 == 1) {
    uVar16 = 1;
  }
  else {
    *(undefined8 *)(*plVar21 + 8) = 1;
    if (uVar12 == 2) {
      uVar16 = 5;
    }
    else {
      *(undefined8 *)(*plVar21 + 0x10) = 5;
      if (uVar12 == 3) {
        uVar16 = 0x15;
      }
      else {
        *(undefined8 *)(*plVar21 + 0x18) = 0x15;
        if (uVar12 == 4) {
          uVar16 = 0x55;
        }
        else {
          *(undefined8 *)(*plVar21 + 0x20) = 0x55;
          if (uVar12 == 5) {
            uVar16 = 0x155;
          }
          else {
            *(undefined8 *)(*plVar21 + 0x28) = 0x155;
            if (uVar12 == 6) {
              uVar16 = 0x555;
            }
            else {
              uVar18 = 6;
              uVar16 = 0x555;
              do {
                *(ulong *)(*plVar21 + uVar18 * 8) = uVar16;
                uVar3 = uVar18 & 0x3f;
                uVar4 = uVar18 & 0x3f;
                uVar18 = uVar18 + 1;
                uVar16 = ((1L << uVar3) << uVar4) + uVar16;
              } while (uVar23 != uVar18);
            }
          }
        }
      }
    }
  }
  lVar17 = *(long *)(lVar22 + 0x58);
  uVar18 = *(long *)(lVar22 + 0x60) - lVar17 >> 3;
  if (uVar18 < uVar16) {
    FUN_00fff8dc((long *)(lVar22 + 0x58),uVar16 - uVar18);
  }
  else if (uVar16 < uVar18) {
    *(ulong *)(lVar22 + 0x60) = lVar17 + uVar16 * 8;
  }
  lVar17 = *(long *)(param_1 + 0xb0);
  plVar21 = (long *)(lVar17 + 0x40);
  lVar22 = nn::os::GetCurrentThread();
  while (*plVar21 == 0) {
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar21,0x10);
    if (bVar11) {
      *plVar21 = lVar22;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_00ffe4c8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar17 + 0x48));
  do {
    if (*plVar21 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar17 + 0x48));
        while (*plVar21 == 0) {
          cVar5 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar11) {
            *plVar21 = lVar22;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_00ffe4c8;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar21,0x10);
    if (bVar11) {
      *plVar21 = lVar22;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_00ffe4c8:
  if (*(int *)(lVar17 + 0xd0) != 0) {
    puVar14 = *(undefined8 **)(lVar17 + 0x58);
    uVar16 = *(long *)(lVar17 + 0x60) - (long)puVar14;
    if (0 < (long)uVar16) {
      uVar16 = uVar16 >> 3;
      uVar18 = uVar16 - (uVar16 != 0);
      uVar28 = ((int)uVar16 - (uint)(uVar16 != 0)) + 1;
      if ((uVar28 & 3) != 0) {
        lVar22 = -((ulong)uVar28 & 3);
        puVar13 = puVar14;
        do {
          uVar16 = uVar16 - 1;
          bVar11 = lVar22 != -1;
          lVar22 = lVar22 + 1;
          puVar14 = puVar13 + 1;
          *puVar13 = 0;
          puVar13 = puVar14;
        } while (bVar11);
      }
      if (2 < uVar18) {
        lVar22 = uVar16 + 4;
        do {
          lVar22 = lVar22 + -4;
          *puVar14 = 0;
          puVar14[1] = 0;
          puVar14[2] = 0;
          puVar14[3] = 0;
          puVar14 = puVar14 + 4;
        } while (4 < lVar22);
      }
    }
    *(undefined4 *)(lVar17 + 0xd0) = 0;
  }
  *(undefined8 *)(lVar17 + 0x40) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar17 + 0x48));
  auVar36 = in_q4._4_12_;
  plVar21 = (long *)(param_1 + 0xb8);
  uVar16 = *(long *)(param_1 + 0xc0) - *plVar21 >> 2;
  if (uVar16 < uVar23) {
    FUN_0100a984(plVar21,uVar23 - uVar16);
    auVar36 = in_q4._4_12_;
  }
  else if (uVar23 < uVar16) {
    *(ulong *)(param_1 + 0xc0) = *plVar21 + uVar23 * 4;
  }
  uVar28 = (uint)((long)(int)uVar12 + -1);
  if (uVar12 < 2) {
    *(undefined4 *)(*plVar21 + (long)(int)uVar28 * 4) = 0;
  }
  else {
    fVar31 = *(float *)(param_2 + 0x20) * 0.25;
    if ((int)uVar28 < 2) {
      uVar28 = 1;
    }
    auVar29._0_4_ = fVar31 * fVar31 + fVar31 * fVar31;
    auVar29._4_4_ = 0;
    auVar29._8_4_ = fVar31 * fVar31 + fVar31 * fVar31;
    auVar29._12_4_ = 0;
    auVar29 = NEON_ext(auVar29,auVar29,4,1);
    *(float *)*plVar21 = SQRT(auVar29._0_4_ + auVar29._4_4_) * 3.0;
    if (2 < (int)uVar12) {
      fVar31 = fVar31 * 0.5;
      auVar30._0_4_ = fVar31 * fVar31 + fVar31 * fVar31;
      auVar30._4_4_ = 0;
      auVar30._8_4_ = fVar31 * fVar31 + fVar31 * fVar31;
      auVar30._12_4_ = 0;
      auVar29 = NEON_ext(auVar30,auVar30,4,1);
      auVar36 = (undefined1  [12])0x0;
      *(float *)(*plVar21 + 4) = SQRT(auVar29._0_4_ + auVar29._4_4_) * 3.0;
      if (uVar28 != 2) {
        fVar31 = fVar31 * 0.5;
        auVar35._0_4_ = fVar31 * fVar31 + fVar31 * fVar31;
        auVar35._4_4_ = 0;
        auVar35._8_4_ = fVar31 * fVar31 + fVar31 * fVar31;
        auVar35._12_4_ = 0;
        auVar29 = NEON_ext(auVar35,auVar35,4,1);
        auVar36 = (undefined1  [12])0x0;
        *(float *)(*plVar21 + 8) = SQRT(auVar29._0_4_ + auVar29._4_4_) * 3.0;
        if (uVar28 != 3) {
          fVar31 = fVar31 * 0.5;
          auVar24._0_4_ = fVar31 * fVar31 + fVar31 * fVar31;
          auVar24._4_4_ = 0;
          auVar24._8_4_ = fVar31 * fVar31 + fVar31 * fVar31;
          auVar24._12_4_ = 0;
          auVar29 = NEON_ext(auVar24,auVar24,4,1);
          auVar36 = (undefined1  [12])0x0;
          *(float *)(*plVar21 + 0xc) = SQRT(auVar29._0_4_ + auVar29._4_4_) * 3.0;
          if (uVar28 != 4) {
            fVar31 = fVar31 * 0.5;
            auVar25._0_4_ = fVar31 * fVar31 + fVar31 * fVar31;
            auVar25._4_4_ = 0;
            auVar25._8_4_ = fVar31 * fVar31 + fVar31 * fVar31;
            auVar25._12_4_ = 0;
            auVar29 = NEON_ext(auVar25,auVar25,4,1);
            auVar36 = (undefined1  [12])0x0;
            *(float *)(*plVar21 + 0x10) = SQRT(auVar29._0_4_ + auVar29._4_4_) * 3.0;
            if (uVar28 != 5) {
              uVar16 = 5;
              do {
                fVar31 = fVar31 * 0.5;
                auVar26._0_4_ = fVar31 * fVar31 + fVar31 * fVar31;
                auVar26._4_4_ = 0;
                auVar26._8_4_ = fVar31 * fVar31 + fVar31 * fVar31;
                auVar26._12_4_ = 0;
                auVar29 = NEON_ext(auVar26,auVar26,4,1);
                auVar36 = (undefined1  [12])0x0;
                *(float *)(*plVar21 + uVar16 * 4) = SQRT(auVar29._0_4_ + auVar29._4_4_) * 3.0;
                uVar16 = uVar16 + 1;
              } while (uVar28 != uVar16);
            }
          }
        }
      }
    }
    *(undefined4 *)(*plVar21 + ((long)(int)uVar12 + -1) * 4) = 0;
    uVar16 = (ulong)(uVar12 - 2);
    lVar22 = *plVar21;
    *(float *)(lVar22 + uVar16 * 4) =
         *(float *)(lVar22 + uVar16 * 4) +
         *(float *)(lVar22 + ((long)((uVar16 << 0x20) + 0x100000000) >> 0x1e));
    if (2 < (int)uVar12) {
      lVar22 = uVar16 - 1;
      lVar17 = *plVar21;
      *(float *)(lVar17 + lVar22 * 4) =
           *(float *)(lVar17 + lVar22 * 4) +
           *(float *)(lVar17 + ((lVar22 << 0x20) + 0x100000000 >> 0x1e));
      if (0 < (int)lVar22) {
        lVar22 = uVar16 - 2;
        lVar17 = *plVar21;
        *(float *)(lVar17 + lVar22 * 4) =
             *(float *)(lVar17 + lVar22 * 4) +
             *(float *)(lVar17 + ((lVar22 << 0x20) + 0x100000000 >> 0x1e));
        if (0 < (int)lVar22) {
          lVar22 = uVar16 - 3;
          lVar17 = *plVar21;
          *(float *)(lVar17 + lVar22 * 4) =
               *(float *)(lVar17 + lVar22 * 4) +
               *(float *)(lVar17 + ((lVar22 << 0x20) + 0x100000000 >> 0x1e));
          if (0 < (int)lVar22) {
            uVar23 = uVar16 - 4;
            lVar22 = *plVar21;
            *(float *)(lVar22 + uVar23 * 4) =
                 *(float *)(lVar22 + uVar23 * 4) +
                 *(float *)(lVar22 + ((long)((uVar23 << 0x20) + 0x100000000) >> 0x1e));
            if (0 < (int)uVar23) {
              lVar22 = (uVar16 << 0x20) + -0x400000000;
              lVar17 = uVar16 * 4 + -0x14;
              do {
                lVar19 = *plVar21;
                lVar20 = lVar22 >> 0x1e;
                uVar28 = (int)uVar23 - 1;
                uVar23 = (ulong)uVar28;
                lVar22 = lVar22 + -0x100000000;
                *(float *)(lVar19 + lVar17) =
                     *(float *)(lVar19 + lVar17) + *(float *)(lVar19 + lVar20);
                lVar17 = lVar17 + -4;
              } while (0 < (int)uVar28);
            }
          }
        }
      }
    }
  }
  auVar27._0_4_ = *(undefined4 *)(param_2 + 0x20);
  auVar27._4_4_ = *(undefined4 *)(param_2 + 0x28);
  auVar27._8_4_ = *(uint *)(param_2 + 0x24);
  auVar27._12_4_ = 0;
  auVar32._0_8_ = auVar36._0_8_ << 0x20;
  auVar32._12_4_ = auVar36._8_4_;
  auVar32._8_4_ = 0;
  auVar36._4_8_ = auVar32._8_8_;
  auVar36._0_4_ = auVar27._0_4_;
  auVar29 = NEON_ext(ZEXT816(0),auVar27,4,1);
  auVar30 = NEON_ext(auVar29,ZEXT816(0),0xc,1);
  auVar33._0_8_ = auVar36._0_8_ << 0x20;
  auVar33._8_4_ = auVar27._4_4_;
  auVar33._12_4_ = auVar27._4_4_;
  auVar8._8_4_ = 0;
  auVar8._0_8_ = auVar33._8_8_;
  auVar34._0_12_ = auVar8 << 0x40;
  auVar34._12_4_ = 0;
  auVar29 = NEON_ext(ZEXT816(0),ZEXT416(*(uint *)(param_2 + 0x24)) << 0x20,0xc,1);
  auVar35 = NEON_ext(auVar34,ZEXT816(0),4,1);
  *(long *)(param_1 + 0x108) = auVar30._8_8_;
  *(long *)(param_1 + 0x100) = auVar30._0_8_;
  *(long *)(param_1 + 0x118) = auVar35._8_8_;
  *(long *)(param_1 + 0x110) = auVar35._0_8_;
  uVar10 = _UNK_03cabe58;
  uVar9 = _DAT_03cabe50;
  *(long *)(param_1 + 0x128) = auVar29._8_8_;
  *(long *)(param_1 + 0x120) = auVar29._0_8_;
  *(undefined8 *)(param_1 + 0x138) = uVar10;
  *(undefined8 *)(param_1 + 0x130) = uVar9;
  uVar6 = *(undefined4 *)(param_2 + 0x100);
  uVar7 = *(undefined4 *)(param_2 + 0x104);
  uVar28 = *(uint *)(param_2 + 0x118);
  *(ulong *)(param_1 + 0x148) = (ulong)uVar28;
  *(undefined4 *)(param_1 + 0x140) = uVar6;
  *(undefined4 *)(param_1 + 0x144) = uVar7;
  *(uint *)(param_1 + 0x138) = uVar28;
  *(undefined4 *)(param_1 + 0x13c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x130) = uVar6;
  *(undefined4 *)(param_1 + 0x134) = uVar7;
  return;
}


