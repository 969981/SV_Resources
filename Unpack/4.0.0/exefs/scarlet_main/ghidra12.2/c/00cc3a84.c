/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cc3a84; name: FUN_00cc3a84
 */


void FUN_00cc3a84(undefined1 param_1 [16],long param_2,short param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ushort uVar4;
  uint uVar5;
  char cVar6;
  long lVar7;
  bool bVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  uint *puVar13;
  ulong uVar14;
  
  plVar1 = (long *)(param_2 + 0x450);
  lVar7 = nn::os::GetCurrentThread();
  do {
    lVar9 = *plVar1;
    lVar11 = *(long *)(param_2 + 0x458);
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar9;
      *(long *)(param_2 + 0x458) = lVar11;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_00cc3ac4:
  while ((lVar9 != 0 && (lVar7 != lVar9))) {
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x460));
    do {
      lVar9 = *plVar1;
      lVar11 = *(long *)(param_2 + 0x458);
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar9;
        *(long *)(param_2 + 0x458) = lVar11;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  do {
    lVar3 = *plVar1;
    if (lVar3 != lVar9 || *(long *)(param_2 + 0x458) != lVar11) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_00cc3af4;
    }
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar9;
      *(long *)(param_2 + 0x454) = lVar11 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar8 = true;
LAB_00cc3af4:
  if (!bVar8) {
    lVar9 = lVar3;
    lVar11 = *(long *)(param_2 + 0x458);
    goto LAB_00cc3ac4;
  }
  uVar4 = *(ushort *)(*(long *)(param_2 + 0xa0) + (long)param_3 * 2);
  puVar13 = *(uint **)(param_2 + 0x110);
  uVar12 = (ulong)(short)uVar4;
  uVar5 = 1 << (ulong)(uVar4 & 0x1f);
  uVar10 = uVar12 >> 5;
  if (((uVar5 & puVar13[uVar10]) == 0) && (*(uint **)(param_2 + 0x118) != puVar13)) {
    plVar2 = (long *)(*(long *)(param_2 + 0x68) + uVar12 * 0x40);
    *puVar13 = *puVar13 | *(uint *)*plVar2;
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
                uVar14 = 6;
                do {
                  *(uint *)(lVar7 + uVar14 * 4) =
                       *(uint *)(lVar7 + uVar14 * 4) | *(uint *)(*plVar2 + uVar14 * 4);
                  uVar14 = uVar14 + 1;
                  lVar7 = *(long *)(param_2 + 0x110);
                } while (uVar14 < (ulong)(*(long *)(param_2 + 0x118) - lVar7 >> 2));
              }
            }
          }
        }
      }
    }
  }
  lVar7 = *(long *)(param_2 + 0x248) + uVar12 * 0x30;
  *(long *)(lVar7 + 0x28) = param_1._8_8_;
  *(long *)(lVar7 + 0x20) = param_1._0_8_;
  *(uint *)(*(long *)(param_2 + 0x1d0) + uVar10 * 4) =
       *(uint *)(*(long *)(param_2 + 0x1d0) + uVar10 * 4) | uVar5;
  do {
    lVar7 = *plVar1;
    lVar9 = *(long *)(param_2 + 0x458);
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar7;
      *(long *)(param_2 + 0x458) = lVar9;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  do {
    lVar11 = *plVar1;
    lVar3 = *(long *)(param_2 + 0x458);
    if (lVar11 != lVar7 || lVar3 != lVar9) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_00cc3b94;
    }
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar7;
      *(long *)(param_2 + 0x454) = lVar9 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar8 = true;
LAB_00cc3b94:
  if (!bVar8) {
    do {
      lVar7 = *plVar1;
      lVar9 = *(long *)(param_2 + 0x458);
      if (lVar7 != lVar11 || lVar9 != lVar3) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto joined_r0x00cc3d30;
      }
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar11;
        *(long *)(param_2 + 0x454) = lVar3 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar8 = true;
joined_r0x00cc3d30:
    if (!bVar8) {
      do {
        lVar11 = *plVar1;
        lVar3 = *(long *)(param_2 + 0x458);
        if (lVar11 != lVar7 || lVar3 != lVar9) {
          bVar8 = false;
          ClearExclusiveLocal();
          lVar7 = lVar11;
          lVar9 = lVar3;
          goto joined_r0x00cc3d30;
        }
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = lVar7;
          *(long *)(param_2 + 0x454) = lVar9 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar8 = true;
      lVar7 = lVar11;
      lVar9 = lVar3;
      goto joined_r0x00cc3d30;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x460));
  return;
}


