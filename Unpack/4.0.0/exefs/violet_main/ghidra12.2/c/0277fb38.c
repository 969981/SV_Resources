/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0277fb38; name: FUN_0277fb38
 */


void FUN_0277fb38(long param_1,short param_2,void *param_3)

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
  uint *puVar12;
  ulong uVar13;
  ulong uVar14;
  
  plVar1 = (long *)(param_1 + 0x450);
  lVar7 = nn::os::GetCurrentThread();
  do {
    lVar9 = *plVar1;
    lVar11 = *(long *)(param_1 + 0x458);
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar9;
      *(long *)(param_1 + 0x458) = lVar11;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_0277fb74:
  while ((lVar9 != 0 && (lVar7 != lVar9))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x460));
    do {
      lVar9 = *plVar1;
      lVar11 = *(long *)(param_1 + 0x458);
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar9;
        *(long *)(param_1 + 0x458) = lVar11;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  do {
    lVar3 = *plVar1;
    if (lVar3 != lVar9 || *(long *)(param_1 + 0x458) != lVar11) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_0277fba4;
    }
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar9;
      *(long *)(param_1 + 0x454) = lVar11 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar8 = true;
LAB_0277fba4:
  if (!bVar8) {
    lVar9 = lVar3;
    lVar11 = *(long *)(param_1 + 0x458);
    goto LAB_0277fb74;
  }
  uVar4 = *(ushort *)(*(long *)(param_1 + 0xa0) + (long)param_2 * 2);
  puVar12 = *(uint **)(param_1 + 0x110);
  uVar10 = (ulong)(short)uVar4;
  uVar14 = uVar10 >> 5;
  uVar5 = 1 << (ulong)(uVar4 & 0x1f);
  if (((uVar5 & puVar12[uVar14]) == 0) && (*(uint **)(param_1 + 0x118) != puVar12)) {
    plVar2 = (long *)(*(long *)(param_1 + 0x68) + uVar10 * 0x40);
    *puVar12 = *puVar12 | *(uint *)*plVar2;
    lVar7 = *(long *)(param_1 + 0x110);
    if (1 < (ulong)(*(long *)(param_1 + 0x118) - lVar7 >> 2)) {
      *(uint *)(lVar7 + 4) = *(uint *)(lVar7 + 4) | *(uint *)(*plVar2 + 4);
      lVar7 = *(long *)(param_1 + 0x110);
      if (2 < (ulong)(*(long *)(param_1 + 0x118) - lVar7 >> 2)) {
        *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) | *(uint *)(*plVar2 + 8);
        lVar7 = *(long *)(param_1 + 0x110);
        if (3 < (ulong)(*(long *)(param_1 + 0x118) - lVar7 >> 2)) {
          *(uint *)(lVar7 + 0xc) = *(uint *)(lVar7 + 0xc) | *(uint *)(*plVar2 + 0xc);
          lVar7 = *(long *)(param_1 + 0x110);
          if (4 < (ulong)(*(long *)(param_1 + 0x118) - lVar7 >> 2)) {
            *(uint *)(lVar7 + 0x10) = *(uint *)(lVar7 + 0x10) | *(uint *)(*plVar2 + 0x10);
            lVar7 = *(long *)(param_1 + 0x110);
            if (5 < (ulong)(*(long *)(param_1 + 0x118) - lVar7 >> 2)) {
              *(uint *)(lVar7 + 0x14) = *(uint *)(lVar7 + 0x14) | *(uint *)(*plVar2 + 0x14);
              lVar7 = *(long *)(param_1 + 0x110);
              if (6 < (ulong)(*(long *)(param_1 + 0x118) - lVar7 >> 2)) {
                uVar13 = 6;
                do {
                  *(uint *)(lVar7 + uVar13 * 4) =
                       *(uint *)(lVar7 + uVar13 * 4) | *(uint *)(*plVar2 + uVar13 * 4);
                  uVar13 = uVar13 + 1;
                  lVar7 = *(long *)(param_1 + 0x110);
                } while (uVar13 < (ulong)(*(long *)(param_1 + 0x118) - lVar7 >> 2));
              }
            }
          }
        }
      }
    }
  }
  memcpy((void *)(*(long *)(param_1 + 0x248) + uVar10 * 0x30),param_3,0x30);
  *(uint *)(*(long *)(param_1 + 400) + uVar14 * 4) =
       *(uint *)(*(long *)(param_1 + 400) + uVar14 * 4) | uVar5;
  *(uint *)(*(long *)(param_1 + 0x1d0) + uVar14 * 4) =
       *(uint *)(*(long *)(param_1 + 0x1d0) + uVar14 * 4) | uVar5;
  do {
    lVar7 = *plVar1;
    lVar9 = *(long *)(param_1 + 0x458);
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x458) = lVar9;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  do {
    lVar11 = *plVar1;
    lVar3 = *(long *)(param_1 + 0x458);
    if (lVar11 != lVar7 || lVar3 != lVar9) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_0277fc58;
    }
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x454) = lVar9 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar8 = true;
LAB_0277fc58:
  if (!bVar8) {
    do {
      lVar7 = *plVar1;
      lVar9 = *(long *)(param_1 + 0x458);
      if (lVar7 != lVar11 || lVar9 != lVar3) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto joined_r0x0277fdf0;
      }
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar11;
        *(long *)(param_1 + 0x454) = lVar3 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar8 = true;
joined_r0x0277fdf0:
    if (!bVar8) {
      do {
        lVar11 = *plVar1;
        lVar3 = *(long *)(param_1 + 0x458);
        if (lVar11 != lVar7 || lVar3 != lVar9) {
          bVar8 = false;
          ClearExclusiveLocal();
          lVar7 = lVar11;
          lVar9 = lVar3;
          goto joined_r0x0277fdf0;
        }
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = lVar7;
          *(long *)(param_1 + 0x454) = lVar9 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar8 = true;
      lVar7 = lVar11;
      lVar9 = lVar3;
      goto joined_r0x0277fdf0;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x460));
  return;
}


