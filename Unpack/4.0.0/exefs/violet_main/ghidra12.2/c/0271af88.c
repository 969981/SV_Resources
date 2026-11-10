/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0271af88; name: FUN_0271af88
 */


void FUN_0271af88(long param_1,short param_2)

{
  long *plVar1;
  LightEventType *pLVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ushort uVar6;
  short sVar7;
  uint uVar8;
  char cVar9;
  long lVar10;
  bool bVar11;
  long lVar12;
  uint *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  
  plVar1 = (long *)(param_1 + 0x450);
  lVar10 = nn::os::GetCurrentThread();
  do {
    lVar12 = *plVar1;
    lVar14 = *(long *)(param_1 + 0x458);
    cVar9 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = lVar12;
      *(long *)(param_1 + 0x458) = lVar14;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  pLVar2 = (LightEventType *)(param_1 + 0x460);
LAB_0271afc4:
  while ((lVar12 != 0 && (lVar10 != lVar12))) {
    nn::os::WaitLightEvent(pLVar2);
    do {
      lVar12 = *plVar1;
      lVar14 = *(long *)(param_1 + 0x458);
      cVar9 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar11) {
        *plVar1 = lVar12;
        *(long *)(param_1 + 0x458) = lVar14;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  do {
    lVar4 = *plVar1;
    if (lVar4 != lVar12 || *(long *)(param_1 + 0x458) != lVar14) {
      bVar11 = false;
      ClearExclusiveLocal();
      goto LAB_0271aff4;
    }
    cVar9 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = lVar12;
      *(long *)(param_1 + 0x454) = lVar14 + 1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  bVar11 = true;
LAB_0271aff4:
  if (!bVar11) {
    lVar12 = lVar4;
    lVar14 = *(long *)(param_1 + 0x458);
    goto LAB_0271afc4;
  }
  uVar6 = *(ushort *)(*(long *)(param_1 + 0xa0) + (long)param_2 * 2);
  puVar13 = *(uint **)(param_1 + 0x110);
  uVar17 = (ulong)(short)uVar6;
  uVar16 = uVar17 >> 5;
  uVar8 = 1 << (ulong)(uVar6 & 0x1f);
  if (((uVar8 & puVar13[uVar16]) == 0) && (*(uint **)(param_1 + 0x118) != puVar13)) {
    plVar3 = (long *)(*(long *)(param_1 + 0x68) + uVar17 * 0x40);
    *puVar13 = *puVar13 | *(uint *)*plVar3;
    lVar10 = *(long *)(param_1 + 0x110);
    if (1 < (ulong)(*(long *)(param_1 + 0x118) - lVar10 >> 2)) {
      *(uint *)(lVar10 + 4) = *(uint *)(lVar10 + 4) | *(uint *)(*plVar3 + 4);
      lVar10 = *(long *)(param_1 + 0x110);
      if (2 < (ulong)(*(long *)(param_1 + 0x118) - lVar10 >> 2)) {
        *(uint *)(lVar10 + 8) = *(uint *)(lVar10 + 8) | *(uint *)(*plVar3 + 8);
        lVar10 = *(long *)(param_1 + 0x110);
        if (3 < (ulong)(*(long *)(param_1 + 0x118) - lVar10 >> 2)) {
          *(uint *)(lVar10 + 0xc) = *(uint *)(lVar10 + 0xc) | *(uint *)(*plVar3 + 0xc);
          lVar10 = *(long *)(param_1 + 0x110);
          if (4 < (ulong)(*(long *)(param_1 + 0x118) - lVar10 >> 2)) {
            *(uint *)(lVar10 + 0x10) = *(uint *)(lVar10 + 0x10) | *(uint *)(*plVar3 + 0x10);
            lVar10 = *(long *)(param_1 + 0x110);
            if (5 < (ulong)(*(long *)(param_1 + 0x118) - lVar10 >> 2)) {
              *(uint *)(lVar10 + 0x14) = *(uint *)(lVar10 + 0x14) | *(uint *)(*plVar3 + 0x14);
              lVar10 = *(long *)(param_1 + 0x110);
              if (6 < (ulong)(*(long *)(param_1 + 0x118) - lVar10 >> 2)) {
                uVar15 = 6;
                do {
                  *(uint *)(lVar10 + uVar15 * 4) =
                       *(uint *)(lVar10 + uVar15 * 4) | *(uint *)(*plVar3 + uVar15 * 4);
                  uVar15 = uVar15 + 1;
                  lVar10 = *(long *)(param_1 + 0x110);
                } while (uVar15 < (ulong)(*(long *)(param_1 + 0x118) - lVar10 >> 2));
              }
            }
          }
        }
      }
    }
  }
  lVar10 = nn::os::GetCurrentThread();
  do {
    lVar12 = *plVar1;
    lVar14 = *(long *)(param_1 + 0x458);
    cVar9 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = lVar12;
      *(long *)(param_1 + 0x458) = lVar14;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  do {
    while ((lVar12 != 0 && (lVar10 != lVar12))) {
      nn::os::WaitLightEvent(pLVar2);
      do {
        lVar12 = *plVar1;
        lVar14 = *(long *)(param_1 + 0x458);
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar11) {
          *plVar1 = lVar12;
          *(long *)(param_1 + 0x458) = lVar14;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
    }
    do {
      lVar4 = *plVar1;
      if (lVar4 != lVar12 || *(long *)(param_1 + 0x458) != lVar14) {
        bVar11 = false;
        ClearExclusiveLocal();
        goto LAB_0271b188;
      }
      cVar9 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar11) {
        *plVar1 = lVar12;
        *(long *)(param_1 + 0x454) = lVar14 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    bVar11 = true;
LAB_0271b188:
    lVar12 = lVar4;
    lVar14 = *(long *)(param_1 + 0x458);
  } while (!bVar11);
  sVar7 = *(short *)(*(long *)(param_1 + 0xa0) + (long)param_2 * 2);
  lVar10 = *(long *)(param_1 + 0x210);
  do {
    lVar12 = *plVar1;
    lVar14 = *(long *)(param_1 + 0x458);
    cVar9 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = lVar12;
      *(long *)(param_1 + 0x458) = lVar14;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  do {
    lVar4 = *plVar1;
    lVar5 = *(long *)(param_1 + 0x458);
    if (lVar4 != lVar12 || lVar5 != lVar14) {
      bVar11 = false;
      ClearExclusiveLocal();
      goto LAB_0271b1dc;
    }
    cVar9 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = lVar12;
      *(long *)(param_1 + 0x454) = lVar14 + -1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  bVar11 = true;
LAB_0271b1dc:
  if (!bVar11) {
    do {
      lVar12 = *plVar1;
      lVar14 = *(long *)(param_1 + 0x458);
      if (lVar12 != lVar4 || lVar14 != lVar5) {
        bVar11 = false;
        ClearExclusiveLocal();
        goto joined_r0x0271b308;
      }
      cVar9 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar11) {
        *plVar1 = lVar4;
        *(long *)(param_1 + 0x454) = lVar5 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    bVar11 = true;
joined_r0x0271b308:
    if (!bVar11) {
      do {
        lVar4 = *plVar1;
        lVar5 = *(long *)(param_1 + 0x458);
        if (lVar4 != lVar12 || lVar5 != lVar14) {
          bVar11 = false;
          ClearExclusiveLocal();
          lVar12 = lVar4;
          lVar14 = lVar5;
          goto joined_r0x0271b308;
        }
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar11) {
          *plVar1 = lVar12;
          *(long *)(param_1 + 0x454) = lVar14 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      bVar11 = true;
      lVar12 = lVar4;
      lVar14 = lVar5;
      goto joined_r0x0271b308;
    }
  }
  nn::os::SignalLightEvent(pLVar2);
  memcpy((void *)(*(long *)(param_1 + 0x248) + uVar17 * 0x30),(void *)(lVar10 + (long)sVar7 * 0x30),
         0x30);
  *(uint *)(*(long *)(param_1 + 400) + uVar16 * 4) =
       *(uint *)(*(long *)(param_1 + 400) + uVar16 * 4) | uVar8;
  *(uint *)(*(long *)(param_1 + 0x1d0) + uVar16 * 4) =
       *(uint *)(*(long *)(param_1 + 0x1d0) + uVar16 * 4) | uVar8;
  do {
    lVar10 = *plVar1;
    lVar12 = *(long *)(param_1 + 0x458);
    cVar9 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = lVar10;
      *(long *)(param_1 + 0x458) = lVar12;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  do {
    lVar14 = *plVar1;
    lVar4 = *(long *)(param_1 + 0x458);
    if (lVar14 != lVar10 || lVar4 != lVar12) {
      bVar11 = false;
      ClearExclusiveLocal();
      goto LAB_0271b260;
    }
    cVar9 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = lVar10;
      *(long *)(param_1 + 0x454) = lVar12 + -1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  bVar11 = true;
LAB_0271b260:
  if (!bVar11) {
    do {
      lVar10 = *plVar1;
      lVar12 = *(long *)(param_1 + 0x458);
      if (lVar10 != lVar14 || lVar12 != lVar4) {
        bVar11 = false;
        ClearExclusiveLocal();
        goto joined_r0x0271b354;
      }
      cVar9 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar11) {
        *plVar1 = lVar14;
        *(long *)(param_1 + 0x454) = lVar4 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    bVar11 = true;
joined_r0x0271b354:
    if (!bVar11) {
      do {
        lVar14 = *plVar1;
        lVar4 = *(long *)(param_1 + 0x458);
        if (lVar14 != lVar10 || lVar4 != lVar12) {
          bVar11 = false;
          ClearExclusiveLocal();
          lVar10 = lVar14;
          lVar12 = lVar4;
          goto joined_r0x0271b354;
        }
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar11) {
          *plVar1 = lVar10;
          *(long *)(param_1 + 0x454) = lVar12 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      bVar11 = true;
      lVar10 = lVar14;
      lVar12 = lVar4;
      goto joined_r0x0271b354;
    }
  }
  nn::os::SignalLightEvent(pLVar2);
  return;
}


