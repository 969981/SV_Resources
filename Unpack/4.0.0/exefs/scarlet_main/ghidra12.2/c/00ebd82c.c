/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ebd82c; name: FUN_00ebd82c
 */


void FUN_00ebd82c(long param_1,uint param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  char cVar6;
  long lVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  
  plVar1 = (long *)(param_1 + 0x70);
  lVar7 = nn::os::GetCurrentThread();
  do {
    lVar9 = *plVar1;
    lVar10 = *(long *)(param_1 + 0x78);
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar9;
      *(long *)(param_1 + 0x78) = lVar10;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_00ebd864:
  while ((lVar9 != 0 && (lVar7 != lVar9))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x80));
    do {
      lVar9 = *plVar1;
      lVar10 = *(long *)(param_1 + 0x78);
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar9;
        *(long *)(param_1 + 0x78) = lVar10;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  do {
    lVar3 = *plVar1;
    if (lVar3 != lVar9 || *(long *)(param_1 + 0x78) != lVar10) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_00ebd894;
    }
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar9;
      *(long *)(param_1 + 0x74) = lVar10 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar8 = true;
LAB_00ebd894:
  if (!bVar8) {
    lVar9 = lVar3;
    lVar10 = *(long *)(param_1 + 0x78);
    goto LAB_00ebd864;
  }
  plVar4 = *(long **)(param_1 + 0x30);
  plVar5 = *(long **)(param_1 + 0x38);
  if (plVar4 != plVar5) {
    uVar2 = 4;
    if ((param_2 & 1) == 0) {
      uVar2 = 0;
    }
    *(ulong *)(*plVar4 + 0x108) = *(ulong *)(*plVar4 + 0x108) & 0xfffffffffffffffb | uVar2;
    while (plVar4 = plVar4 + 1, plVar4 != plVar5) {
      *(ulong *)(*plVar4 + 0x108) = *(ulong *)(*plVar4 + 0x108) & 0xfffffffffffffffb | uVar2;
    }
  }
  do {
    lVar7 = *plVar1;
    lVar9 = *(long *)(param_1 + 0x78);
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x78) = lVar9;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  do {
    lVar10 = *plVar1;
    lVar3 = *(long *)(param_1 + 0x78);
    if (lVar10 != lVar7 || lVar3 != lVar9) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_00ebd8f0;
    }
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x74) = lVar9 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar8 = true;
LAB_00ebd8f0:
  if (!bVar8) {
    do {
      lVar7 = *plVar1;
      lVar9 = *(long *)(param_1 + 0x78);
      if (lVar7 != lVar10 || lVar9 != lVar3) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto joined_r0x00ebd954;
      }
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar10;
        *(long *)(param_1 + 0x74) = lVar3 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar8 = true;
joined_r0x00ebd954:
    if (!bVar8) {
      do {
        lVar10 = *plVar1;
        lVar3 = *(long *)(param_1 + 0x78);
        if (lVar10 != lVar7 || lVar3 != lVar9) {
          bVar8 = false;
          ClearExclusiveLocal();
          lVar7 = lVar10;
          lVar9 = lVar3;
          goto joined_r0x00ebd954;
        }
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = lVar7;
          *(long *)(param_1 + 0x74) = lVar9 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar8 = true;
      lVar7 = lVar10;
      lVar9 = lVar3;
      goto joined_r0x00ebd954;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x80));
  return;
}


