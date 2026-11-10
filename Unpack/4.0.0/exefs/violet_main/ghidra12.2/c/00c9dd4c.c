/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c9dd4c; name: FUN_00c9dd4c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c9dd4c(undefined1 param_1 [16],long param_2,short param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ushort uVar4;
  char cVar5;
  undefined8 uVar6;
  long lVar7;
  bool bVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  uint *puVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar28 [16];
  undefined1 auVar27 [16];
  undefined1 auVar26 [16];
  undefined1 auVar25 [16];
  undefined1 auVar32 [16];
  undefined1 auVar31 [16];
  undefined1 auVar30 [16];
  undefined1 auVar29 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  
  fVar21 = param_1._12_4_;
  fVar19 = param_1._8_4_;
  fVar17 = param_1._4_4_;
  fVar15 = param_1._0_4_;
  plVar1 = (long *)(param_2 + 0x450);
  lVar7 = nn::os::GetCurrentThread();
  do {
    lVar9 = *plVar1;
    lVar11 = *(long *)(param_2 + 0x458);
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar9;
      *(long *)(param_2 + 0x458) = lVar11;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_00c9dd8c:
  while ((lVar9 != 0 && (lVar7 != lVar9))) {
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x460));
    do {
      lVar9 = *plVar1;
      lVar11 = *(long *)(param_2 + 0x458);
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar9;
        *(long *)(param_2 + 0x458) = lVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  do {
    lVar3 = *plVar1;
    if (lVar3 != lVar9 || *(long *)(param_2 + 0x458) != lVar11) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_00c9ddbc;
    }
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar9;
      *(long *)(param_2 + 0x454) = lVar11 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar8 = true;
LAB_00c9ddbc:
  if (!bVar8) {
    lVar9 = lVar3;
    lVar11 = *(long *)(param_2 + 0x458);
    goto LAB_00c9dd8c;
  }
  uVar4 = *(ushort *)(*(long *)(param_2 + 0xa0) + (long)param_3 * 2);
  uVar10 = (ulong)(short)uVar4;
  puVar12 = *(uint **)(param_2 + 0x110);
  if (((*(uint *)((long)puVar12 + (uVar10 >> 3 & 0x1ffffffffffffffc)) >> (ulong)(uVar4 & 0x1f) & 1)
       == 0) && (*(uint **)(param_2 + 0x118) != puVar12)) {
    plVar2 = (long *)(*(long *)(param_2 + 0x68) + uVar10 * 0x40);
    *puVar12 = *puVar12 | *(uint *)*plVar2;
    lVar7 = *(long *)(param_2 + 0x110);
    if (1 < (ulong)(*(long *)(param_2 + 0x118) - lVar7 >> 2)) {
      *(uint *)(lVar7 + 4) = *(uint *)(lVar7 + 4) | *(uint *)(*plVar2 + 4);
      lVar7 = *(long *)(param_2 + 0x110);
      if (2 < (ulong)(*(long *)(param_2 + 0x118) - lVar7 >> 2)) {
        *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) | *(uint *)(*plVar2 + 8);
        lVar7 = *(long *)(param_2 + 0x110);
        if (3 < (ulong)(*(long *)(param_2 + 0x118) - lVar7 >> 2)) {
          *(uint *)(lVar7 + 0xc) = *(uint *)(lVar7 + 0xc) | *(uint *)(*plVar2 + 0xc);
          lVar7 = *(long *)(param_2 + 0x110);
          if (4 < (ulong)(*(long *)(param_2 + 0x118) - lVar7 >> 2)) {
            *(uint *)(lVar7 + 0x10) = *(uint *)(lVar7 + 0x10) | *(uint *)(*plVar2 + 0x10);
            lVar7 = *(long *)(param_2 + 0x110);
            if (5 < (ulong)(*(long *)(param_2 + 0x118) - lVar7 >> 2)) {
              *(uint *)(lVar7 + 0x14) = *(uint *)(lVar7 + 0x14) | *(uint *)(*plVar2 + 0x14);
              lVar7 = *(long *)(param_2 + 0x110);
              if (6 < (ulong)(*(long *)(param_2 + 0x118) - lVar7 >> 2)) {
                uVar13 = 6;
                do {
                  *(uint *)(lVar7 + uVar13 * 4) =
                       *(uint *)(lVar7 + uVar13 * 4) | *(uint *)(*plVar2 + uVar13 * 4);
                  uVar13 = uVar13 + 1;
                  lVar7 = *(long *)(param_2 + 0x110);
                } while (uVar13 < (ulong)(*(long *)(param_2 + 0x118) - lVar7 >> 2));
              }
            }
          }
        }
      }
    }
  }
  lVar7 = *(long *)(param_2 + 0x248) + uVar10 * 0x30;
  fVar20 = (float)*(undefined8 *)(lVar7 + 0x18);
  fVar22 = (float)((ulong)*(undefined8 *)(lVar7 + 0x18) >> 0x20);
  uVar6 = *(undefined8 *)*(undefined1 (*) [12])(lVar7 + 0x10);
  fVar16 = (float)uVar6;
  fVar18 = (float)((ulong)uVar6 >> 0x20);
  auVar34._4_4_ = fVar19;
  auVar34._0_4_ = fVar19;
  auVar34._8_4_ = fVar19;
  auVar34._12_4_ = fVar19;
  auVar24._4_4_ = fVar20;
  auVar24._0_4_ = fVar20;
  auVar24._8_4_ = fVar20;
  auVar24._12_4_ = fVar20;
  auVar25._4_12_ = auVar34._4_12_;
  auVar25._0_4_ = fVar15;
  auVar27._0_8_ = auVar25._0_8_;
  auVar27._8_4_ = fVar17;
  auVar27._12_4_ = fVar19;
  auVar26._8_8_ = auVar27._8_8_;
  auVar26._4_4_ = fVar19;
  auVar26._0_4_ = fVar15;
  auVar28._0_12_ = auVar26._0_12_;
  auVar28._12_4_ = fVar19;
  auVar34 = NEON_ext(auVar28,auVar28,8,1);
  auVar23._12_4_ = fVar22;
  auVar23._0_12_ = *(undefined1 (*) [12])(lVar7 + 0x10);
  auVar23 = NEON_ext(auVar24,auVar23,0xc,1);
  auVar33._4_4_ = fVar18;
  auVar33._0_4_ = fVar18;
  auVar33._8_4_ = fVar18;
  auVar33._12_4_ = fVar18;
  fVar14 = auVar34._0_4_;
  auVar29._4_12_ = auVar28._4_12_;
  auVar29._0_4_ = fVar14;
  auVar31._0_8_ = auVar29._0_8_;
  auVar31._8_4_ = auVar34._8_4_;
  auVar31._12_4_ = fVar19;
  auVar30._8_8_ = auVar31._8_8_;
  auVar30._4_4_ = fVar15;
  auVar30._0_4_ = fVar14;
  auVar32._0_12_ = auVar30._0_12_;
  auVar32._12_4_ = fVar17;
  auVar24 = NEON_ext(auVar33,auVar23,0xc,1);
  fVar35 = (float)_DAT_03cab640;
  fVar36 = (float)((ulong)_DAT_03cab640 >> 0x20);
  fVar37 = (float)((ulong)_UNK_03cab648 >> 0x20);
  auVar33 = NEON_ext(auVar32,auVar34,8,1);
  auVar33 = NEON_ext(auVar33,auVar33,0xc,1);
  *(ulong *)(lVar7 + 0x18) =
       CONCAT44((fVar21 * fVar22 + fVar15 * fVar16 * fVar37 +
                auVar33._12_4_ * auVar24._12_4_ * fVar37) - auVar23._12_4_ * auVar34._12_4_,
                (fVar19 * fVar22 + fVar21 * fVar20 * (float)_UNK_03cab648 +
                auVar33._8_4_ * auVar24._8_4_ * (float)_UNK_03cab648) -
                auVar23._8_4_ * auVar34._8_4_);
  *(ulong *)(lVar7 + 0x10) =
       CONCAT44((fVar17 * fVar22 + fVar21 * fVar18 * fVar36 + auVar33._4_4_ * auVar24._4_4_ * fVar36
                ) - auVar23._4_4_ * auVar34._4_4_,
                (fVar15 * fVar22 + fVar21 * fVar16 * fVar35 + auVar33._0_4_ * auVar24._0_4_ * fVar35
                ) - auVar23._0_4_ * fVar14);
  do {
    lVar7 = *plVar1;
    lVar9 = *(long *)(param_2 + 0x458);
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar7;
      *(long *)(param_2 + 0x458) = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar11 = *plVar1;
    lVar3 = *(long *)(param_2 + 0x458);
    if (lVar11 != lVar7 || lVar3 != lVar9) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_00c9dea0;
    }
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar7;
      *(long *)(param_2 + 0x454) = lVar9 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar8 = true;
LAB_00c9dea0:
  if (!bVar8) {
    do {
      lVar7 = *plVar1;
      lVar9 = *(long *)(param_2 + 0x458);
      if (lVar7 != lVar11 || lVar9 != lVar3) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto joined_r0x00c9df08;
      }
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar11;
        *(long *)(param_2 + 0x454) = lVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar8 = true;
joined_r0x00c9df08:
    if (!bVar8) {
      do {
        lVar11 = *plVar1;
        lVar3 = *(long *)(param_2 + 0x458);
        if (lVar11 != lVar7 || lVar3 != lVar9) {
          bVar8 = false;
          ClearExclusiveLocal();
          lVar7 = lVar11;
          lVar9 = lVar3;
          goto joined_r0x00c9df08;
        }
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = lVar7;
          *(long *)(param_2 + 0x454) = lVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar8 = true;
      lVar7 = lVar11;
      lVar9 = lVar3;
      goto joined_r0x00c9df08;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x460));
  return;
}


