/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cc3788; name: FUN_00cc3788
 */


void FUN_00cc3788(undefined1 param_1 [16],long param_2,short param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ushort uVar4;
  uint uVar5;
  char cVar6;
  undefined8 *puVar7;
  long lVar8;
  bool bVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  uint *puVar14;
  ulong uVar15;
  
  plVar1 = (long *)(param_2 + 0x450);
  lVar8 = nn::os::GetCurrentThread();
  do {
    lVar10 = *plVar1;
    lVar12 = *(long *)(param_2 + 0x458);
    cVar6 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar10;
      *(long *)(param_2 + 0x458) = lVar12;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_00cc37c8:
  while ((lVar10 != 0 && (lVar8 != lVar10))) {
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x460));
    do {
      lVar10 = *plVar1;
      lVar12 = *(long *)(param_2 + 0x458);
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = lVar10;
        *(long *)(param_2 + 0x458) = lVar12;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  do {
    lVar3 = *plVar1;
    if (lVar3 != lVar10 || *(long *)(param_2 + 0x458) != lVar12) {
      bVar9 = false;
      ClearExclusiveLocal();
      goto LAB_00cc37f8;
    }
    cVar6 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar10;
      *(long *)(param_2 + 0x454) = lVar12 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar9 = true;
LAB_00cc37f8:
  if (!bVar9) {
    lVar10 = lVar3;
    lVar12 = *(long *)(param_2 + 0x458);
    goto LAB_00cc37c8;
  }
  uVar4 = *(ushort *)(*(long *)(param_2 + 0xa0) + (long)param_3 * 2);
  puVar14 = *(uint **)(param_2 + 0x110);
  uVar13 = (ulong)(short)uVar4;
  uVar5 = 1 << (ulong)(uVar4 & 0x1f);
  uVar11 = uVar13 >> 5;
  if (((uVar5 & puVar14[uVar11]) == 0) && (*(uint **)(param_2 + 0x118) != puVar14)) {
    plVar2 = (long *)(*(long *)(param_2 + 0x68) + uVar13 * 0x40);
    *puVar14 = *puVar14 | *(uint *)*plVar2;
    lVar8 = *(long *)(param_2 + 0x110);
    if (1 < (ulong)(*(long *)(param_2 + 0x118) - lVar8 >> 2)) {
      *(uint *)(lVar8 + 4) = *(uint *)(lVar8 + 4) | *(uint *)(*plVar2 + 4);
      lVar8 = *(long *)(param_2 + 0x110);
      if (2 < (ulong)(*(long *)(param_2 + 0x118) - lVar8 >> 2)) {
        *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) | *(uint *)(*plVar2 + 8);
        lVar8 = *(long *)(param_2 + 0x110);
        if (3 < (ulong)(*(long *)(param_2 + 0x118) - lVar8 >> 2)) {
          *(uint *)(lVar8 + 0xc) = *(uint *)(lVar8 + 0xc) | *(uint *)(*plVar2 + 0xc);
          lVar8 = *(long *)(param_2 + 0x110);
          if (4 < (ulong)(*(long *)(param_2 + 0x118) - lVar8 >> 2)) {
            *(uint *)(lVar8 + 0x10) = *(uint *)(lVar8 + 0x10) | *(uint *)(*plVar2 + 0x10);
            lVar8 = *(long *)(param_2 + 0x110);
            if (5 < (ulong)(*(long *)(param_2 + 0x118) - lVar8 >> 2)) {
              *(uint *)(lVar8 + 0x14) = *(uint *)(lVar8 + 0x14) | *(uint *)(*plVar2 + 0x14);
              lVar8 = *(long *)(param_2 + 0x110);
              if (6 < (ulong)(*(long *)(param_2 + 0x118) - lVar8 >> 2)) {
                uVar15 = 6;
                do {
                  *(uint *)(lVar8 + uVar15 * 4) =
                       *(uint *)(lVar8 + uVar15 * 4) | *(uint *)(*plVar2 + uVar15 * 4);
                  uVar15 = uVar15 + 1;
                  lVar8 = *(long *)(param_2 + 0x110);
                } while (uVar15 < (ulong)(*(long *)(param_2 + 0x118) - lVar8 >> 2));
              }
            }
          }
        }
      }
    }
  }
  puVar7 = (undefined8 *)(*(long *)(param_2 + 0x248) + uVar13 * 0x30);
  puVar7[1] = param_1._8_8_;
  *puVar7 = param_1._0_8_;
  *(uint *)(*(long *)(param_2 + 400) + uVar11 * 4) =
       *(uint *)(*(long *)(param_2 + 400) + uVar11 * 4) | uVar5;
  do {
    lVar8 = *plVar1;
    lVar10 = *(long *)(param_2 + 0x458);
    cVar6 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar8;
      *(long *)(param_2 + 0x458) = lVar10;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  do {
    lVar12 = *plVar1;
    lVar3 = *(long *)(param_2 + 0x458);
    if (lVar12 != lVar8 || lVar3 != lVar10) {
      bVar9 = false;
      ClearExclusiveLocal();
      goto LAB_00cc3898;
    }
    cVar6 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar8;
      *(long *)(param_2 + 0x454) = lVar10 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar9 = true;
LAB_00cc3898:
  if (!bVar9) {
    do {
      lVar8 = *plVar1;
      lVar10 = *(long *)(param_2 + 0x458);
      if (lVar8 != lVar12 || lVar10 != lVar3) {
        bVar9 = false;
        ClearExclusiveLocal();
        goto joined_r0x00cc3a34;
      }
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = lVar12;
        *(long *)(param_2 + 0x454) = lVar3 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar9 = true;
joined_r0x00cc3a34:
    if (!bVar9) {
      do {
        lVar12 = *plVar1;
        lVar3 = *(long *)(param_2 + 0x458);
        if (lVar12 != lVar8 || lVar3 != lVar10) {
          bVar9 = false;
          ClearExclusiveLocal();
          lVar8 = lVar12;
          lVar10 = lVar3;
          goto joined_r0x00cc3a34;
        }
        cVar6 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar9) {
          *plVar1 = lVar8;
          *(long *)(param_2 + 0x454) = lVar10 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar9 = true;
      lVar8 = lVar12;
      lVar10 = lVar3;
      goto joined_r0x00cc3a34;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x460));
  return;
}


