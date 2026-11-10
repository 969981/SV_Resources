/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d172e8; name: FUN_00d172e8
 */


void FUN_00d172e8(undefined1 param_1 [16],long param_2,short param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ushort uVar4;
  char cVar5;
  long lVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  uint *puVar11;
  ulong uVar12;
  
  plVar1 = (long *)(param_2 + 0x450);
  lVar6 = nn::os::GetCurrentThread();
  do {
    lVar8 = *plVar1;
    lVar10 = *(long *)(param_2 + 0x458);
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar8;
      *(long *)(param_2 + 0x458) = lVar10;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_00d17328:
  while ((lVar8 != 0 && (lVar6 != lVar8))) {
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x460));
    do {
      lVar8 = *plVar1;
      lVar10 = *(long *)(param_2 + 0x458);
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar8;
        *(long *)(param_2 + 0x458) = lVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  do {
    lVar3 = *plVar1;
    if (lVar3 != lVar8 || *(long *)(param_2 + 0x458) != lVar10) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_00d17358;
    }
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar8;
      *(long *)(param_2 + 0x454) = lVar10 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar7 = true;
LAB_00d17358:
  if (!bVar7) {
    lVar8 = lVar3;
    lVar10 = *(long *)(param_2 + 0x458);
    goto LAB_00d17328;
  }
  uVar4 = *(ushort *)(*(long *)(param_2 + 0xa0) + (long)param_3 * 2);
  uVar9 = (ulong)(short)uVar4;
  puVar11 = *(uint **)(param_2 + 0x110);
  if (((*(uint *)((long)puVar11 + (uVar9 >> 3 & 0x1ffffffffffffffc)) >> (ulong)(uVar4 & 0x1f) & 1)
       == 0) && (*(uint **)(param_2 + 0x118) != puVar11)) {
    plVar2 = (long *)(*(long *)(param_2 + 0x68) + uVar9 * 0x40);
    *puVar11 = *puVar11 | *(uint *)*plVar2;
    lVar6 = *(long *)(param_2 + 0x110);
    if (1 < (ulong)(*(long *)(param_2 + 0x118) - lVar6 >> 2)) {
      *(uint *)(lVar6 + 4) = *(uint *)(lVar6 + 4) | *(uint *)(*plVar2 + 4);
      lVar6 = *(long *)(param_2 + 0x110);
      if (2 < (ulong)(*(long *)(param_2 + 0x118) - lVar6 >> 2)) {
        *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | *(uint *)(*plVar2 + 8);
        lVar6 = *(long *)(param_2 + 0x110);
        if (3 < (ulong)(*(long *)(param_2 + 0x118) - lVar6 >> 2)) {
          *(uint *)(lVar6 + 0xc) = *(uint *)(lVar6 + 0xc) | *(uint *)(*plVar2 + 0xc);
          lVar6 = *(long *)(param_2 + 0x110);
          if (4 < (ulong)(*(long *)(param_2 + 0x118) - lVar6 >> 2)) {
            *(uint *)(lVar6 + 0x10) = *(uint *)(lVar6 + 0x10) | *(uint *)(*plVar2 + 0x10);
            lVar6 = *(long *)(param_2 + 0x110);
            if (5 < (ulong)(*(long *)(param_2 + 0x118) - lVar6 >> 2)) {
              *(uint *)(lVar6 + 0x14) = *(uint *)(lVar6 + 0x14) | *(uint *)(*plVar2 + 0x14);
              lVar6 = *(long *)(param_2 + 0x110);
              if (6 < (ulong)(*(long *)(param_2 + 0x118) - lVar6 >> 2)) {
                uVar12 = 6;
                do {
                  *(uint *)(lVar6 + uVar12 * 4) =
                       *(uint *)(lVar6 + uVar12 * 4) | *(uint *)(*plVar2 + uVar12 * 4);
                  uVar12 = uVar12 + 1;
                  lVar6 = *(long *)(param_2 + 0x110);
                } while (uVar12 < (ulong)(*(long *)(param_2 + 0x118) - lVar6 >> 2));
              }
            }
          }
        }
      }
    }
  }
  lVar6 = *(long *)(param_2 + 0x248) + uVar9 * 0x30;
  *(long *)(lVar6 + 0x18) = param_1._8_8_;
  *(long *)(lVar6 + 0x10) = param_1._0_8_;
  do {
    lVar6 = *plVar1;
    lVar8 = *(long *)(param_2 + 0x458);
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar6;
      *(long *)(param_2 + 0x458) = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar10 = *plVar1;
    lVar3 = *(long *)(param_2 + 0x458);
    if (lVar10 != lVar6 || lVar3 != lVar8) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_00d173e4;
    }
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar6;
      *(long *)(param_2 + 0x454) = lVar8 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar7 = true;
LAB_00d173e4:
  if (!bVar7) {
    do {
      lVar6 = *plVar1;
      lVar8 = *(long *)(param_2 + 0x458);
      if (lVar6 != lVar10 || lVar8 != lVar3) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto joined_r0x00d17580;
      }
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar10;
        *(long *)(param_2 + 0x454) = lVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar7 = true;
joined_r0x00d17580:
    if (!bVar7) {
      do {
        lVar10 = *plVar1;
        lVar3 = *(long *)(param_2 + 0x458);
        if (lVar10 != lVar6 || lVar3 != lVar8) {
          bVar7 = false;
          ClearExclusiveLocal();
          lVar6 = lVar10;
          lVar8 = lVar3;
          goto joined_r0x00d17580;
        }
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar6;
          *(long *)(param_2 + 0x454) = lVar8 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar7 = true;
      lVar6 = lVar10;
      lVar8 = lVar3;
      goto joined_r0x00d17580;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x460));
  return;
}


