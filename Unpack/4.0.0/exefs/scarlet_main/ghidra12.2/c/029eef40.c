/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029eef40; name: FUN_029eef40
 */


bool FUN_029eef40(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  
  plVar1 = (long *)(param_1 + 0x1e0);
  lVar5 = nn::os::GetCurrentThread();
  do {
    lVar7 = *plVar1;
    lVar8 = *(long *)(param_1 + 0x1e8);
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x1e8) = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_029eef70:
  while ((lVar7 != 0 && (lVar5 != lVar7))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1f0));
    do {
      lVar7 = *plVar1;
      lVar8 = *(long *)(param_1 + 0x1e8);
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7;
        *(long *)(param_1 + 0x1e8) = lVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  do {
    lVar2 = *plVar1;
    if (lVar2 != lVar7 || *(long *)(param_1 + 0x1e8) != lVar8) {
      bVar4 = false;
      ClearExclusiveLocal();
      goto LAB_029eefa0;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x1e4) = lVar8 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar4 = true;
LAB_029eefa0:
  if (!bVar4) {
    lVar7 = lVar2;
    lVar8 = *(long *)(param_1 + 0x1e8);
    goto LAB_029eef70;
  }
  if (*(long *)(param_1 + 0x108) == *(long *)(param_1 + 0x100)) {
    bVar4 = *(long *)(param_1 + 0x140) == *(long *)(param_1 + 0x138);
  }
  else {
    bVar4 = false;
  }
  do {
    lVar5 = *plVar1;
    lVar7 = *(long *)(param_1 + 0x1e8);
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar5;
      *(long *)(param_1 + 0x1e8) = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    lVar8 = *plVar1;
    lVar2 = *(long *)(param_1 + 0x1e8);
    if (lVar8 != lVar5 || lVar2 != lVar7) {
      bVar6 = false;
      ClearExclusiveLocal();
      goto LAB_029ef008;
    }
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar5;
      *(long *)(param_1 + 0x1e4) = lVar7 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar6 = true;
LAB_029ef008:
  if (!bVar6) {
    do {
      lVar5 = *plVar1;
      lVar7 = *(long *)(param_1 + 0x1e8);
      if (lVar5 != lVar8 || lVar7 != lVar2) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto joined_r0x029ef070;
      }
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar8;
        *(long *)(param_1 + 0x1e4) = lVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar6 = true;
joined_r0x029ef070:
    if (!bVar6) {
      do {
        lVar8 = *plVar1;
        lVar2 = *(long *)(param_1 + 0x1e8);
        if (lVar8 != lVar5 || lVar2 != lVar7) {
          bVar6 = false;
          ClearExclusiveLocal();
          lVar5 = lVar8;
          lVar7 = lVar2;
          goto joined_r0x029ef070;
        }
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar5;
          *(long *)(param_1 + 0x1e4) = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar6 = true;
      lVar5 = lVar8;
      lVar7 = lVar2;
      goto joined_r0x029ef070;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1f0));
  return bVar4;
}


