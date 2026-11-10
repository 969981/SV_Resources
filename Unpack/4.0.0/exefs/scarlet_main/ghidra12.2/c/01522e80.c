/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01522e80; name: FUN_01522e80
 */


void FUN_01522e80(long param_1)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  plVar1 = (long *)(param_1 + 0x2e0);
  lVar5 = nn::os::GetCurrentThread();
  do {
    lVar7 = *plVar1;
    lVar9 = *(long *)(param_1 + 0x2e8);
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x2e8) = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01522eb0:
  while ((lVar7 != 0 && (lVar5 != lVar7))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2f0));
    do {
      lVar7 = *plVar1;
      lVar9 = *(long *)(param_1 + 0x2e8);
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar7;
        *(long *)(param_1 + 0x2e8) = lVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  do {
    lVar2 = *plVar1;
    if (lVar2 != lVar7 || *(long *)(param_1 + 0x2e8) != lVar9) {
      bVar6 = false;
      ClearExclusiveLocal();
      goto LAB_01522ee0;
    }
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x2e4) = lVar9 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar6 = true;
LAB_01522ee0:
  if (!bVar6) {
    lVar7 = lVar2;
    lVar9 = *(long *)(param_1 + 0x2e8);
    goto LAB_01522eb0;
  }
  uVar8 = *(ulong *)(param_1 + 0x168);
  if (((uint)(uVar8 >> 0x20) <
       (uint)((ulong)(*(long *)(DAT_0485a0e0 + 0xe0) - *(long *)(DAT_0485a0e0 + 0xd8)) >> 2)) &&
     (uVar3 = *(uint *)(*(long *)(DAT_0485a0e0 + 0xd8) + (uVar8 >> 0x20) * 4), -1 < (int)uVar3)) {
    *(ulong *)(*(long *)(*(long *)(DAT_0485a0e0 + 0x38) + (ulong)uVar3 * 0x20) + 0xd0) = uVar8;
  }
  do {
    lVar5 = *plVar1;
    lVar7 = *(long *)(param_1 + 0x2e8);
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar5;
      *(long *)(param_1 + 0x2e8) = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar9 = *plVar1;
    lVar2 = *(long *)(param_1 + 0x2e8);
    if (lVar9 != lVar5 || lVar2 != lVar7) {
      bVar6 = false;
      ClearExclusiveLocal();
      goto LAB_01522f6c;
    }
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar5;
      *(long *)(param_1 + 0x2e4) = lVar7 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar6 = true;
LAB_01522f6c:
  if (!bVar6) {
    do {
      lVar5 = *plVar1;
      lVar7 = *(long *)(param_1 + 0x2e8);
      if (lVar5 != lVar9 || lVar7 != lVar2) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto joined_r0x01522fcc;
      }
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar9;
        *(long *)(param_1 + 0x2e4) = lVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar6 = true;
joined_r0x01522fcc:
    if (!bVar6) {
      do {
        lVar9 = *plVar1;
        lVar2 = *(long *)(param_1 + 0x2e8);
        if (lVar9 != lVar5 || lVar2 != lVar7) {
          bVar6 = false;
          ClearExclusiveLocal();
          lVar5 = lVar9;
          lVar7 = lVar2;
          goto joined_r0x01522fcc;
        }
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar5;
          *(long *)(param_1 + 0x2e4) = lVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar6 = true;
      lVar5 = lVar9;
      lVar7 = lVar2;
      goto joined_r0x01522fcc;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x2f0));
  return;
}


