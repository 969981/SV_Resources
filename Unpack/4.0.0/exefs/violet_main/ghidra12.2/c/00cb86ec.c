/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cb86ec; name: FUN_00cb86ec
 */


bool FUN_00cb86ec(long param_1,ulong *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  ulong *puVar5;
  bool bVar6;
  long lVar7;
  bool bVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong *puVar12;
  ulong uVar13;
  
  plVar1 = (long *)(param_1 + 0x760);
  lVar7 = nn::os::GetCurrentThread();
  do {
    lVar9 = *plVar1;
    lVar11 = *(long *)(param_1 + 0x768);
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar9;
      *(long *)(param_1 + 0x768) = lVar11;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00cb8724:
  while ((lVar9 != 0 && (lVar7 != lVar9))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x770));
    do {
      lVar9 = *plVar1;
      lVar11 = *(long *)(param_1 + 0x768);
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar9;
        *(long *)(param_1 + 0x768) = lVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  do {
    lVar2 = *plVar1;
    if (lVar2 != lVar9 || *(long *)(param_1 + 0x768) != lVar11) {
      bVar6 = false;
      ClearExclusiveLocal();
      goto LAB_00cb8754;
    }
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar9;
      *(long *)(param_1 + 0x764) = lVar11 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar6 = true;
LAB_00cb8754:
  if (!bVar6) {
    lVar9 = lVar2;
    lVar11 = *(long *)(param_1 + 0x768);
    goto LAB_00cb8724;
  }
  puVar12 = *(ulong **)(param_1 + 0x780);
  lVar7 = (long)*(ulong **)(param_1 + 0x788) - (long)puVar12;
  uVar10 = *param_2;
  if (lVar7 != 0) {
    uVar13 = lVar7 >> 4;
    puVar5 = puVar12 + (uVar13 >> 1) * 2 + 2;
    uVar4 = (uVar13 >> 1 ^ 0xffffffffffffffff) + uVar13;
    if (uVar10 <= puVar12[(uVar13 >> 1) * 2]) {
      puVar5 = puVar12;
      uVar4 = uVar13 >> 1;
    }
    while (puVar12 = puVar5, uVar4 != 0) {
      uVar13 = uVar4 >> 1;
      puVar5 = puVar12 + uVar13 * 2 + 2;
      uVar4 = uVar4 + (uVar4 >> 1 ^ 0xffffffffffffffff);
      if (uVar10 <= puVar12[uVar13 * 2]) {
        puVar5 = puVar12;
        uVar4 = uVar13;
      }
    }
  }
  if (puVar12 == *(ulong **)(param_1 + 0x788)) {
    bVar6 = false;
  }
  else {
    bVar6 = *puVar12 == uVar10;
  }
  do {
    lVar7 = *plVar1;
    lVar9 = *(long *)(param_1 + 0x768);
    cVar3 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x768) = lVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    lVar11 = *plVar1;
    lVar2 = *(long *)(param_1 + 0x768);
    if (lVar11 != lVar7 || lVar2 != lVar9) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_00cb87c4;
    }
    cVar3 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x764) = lVar9 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar8 = true;
LAB_00cb87c4:
  if (!bVar8) {
    do {
      lVar7 = *plVar1;
      lVar9 = *(long *)(param_1 + 0x768);
      if (lVar7 != lVar11 || lVar9 != lVar2) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto joined_r0x00cb8884;
      }
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar11;
        *(long *)(param_1 + 0x764) = lVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar8 = true;
joined_r0x00cb8884:
    if (!bVar8) {
      do {
        lVar11 = *plVar1;
        lVar2 = *(long *)(param_1 + 0x768);
        if (lVar11 != lVar7 || lVar2 != lVar9) {
          bVar8 = false;
          ClearExclusiveLocal();
          lVar7 = lVar11;
          lVar9 = lVar2;
          goto joined_r0x00cb8884;
        }
        cVar3 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = lVar7;
          *(long *)(param_1 + 0x764) = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar8 = true;
      lVar7 = lVar11;
      lVar9 = lVar2;
      goto joined_r0x00cb8884;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x770));
  return bVar6;
}


