/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e0b660; name: FUN_01e0b660
 */


undefined8 FUN_01e0b660(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  undefined1 *local_48;
  long lStack_40;
  char *local_38;
  undefined1 local_18;
  undefined7 uStack_17;
  
  plVar1 = (long *)(param_1 + 0x80);
  do {
    lVar5 = *plVar1;
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar5;
      *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x88);
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 == lVar5) {
    bVar7 = true;
  }
  else {
    lVar5 = nn::os::GetCurrentThread();
    do {
      lVar4 = *plVar1;
      lVar6 = *(long *)(param_1 + 0x88);
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar4;
        *(long *)(param_1 + 0x88) = lVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      while ((lVar4 != 0 && (lVar5 != lVar4))) {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x90));
        do {
          lVar4 = *plVar1;
          lVar6 = *(long *)(param_1 + 0x88);
          cVar3 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar4;
            *(long *)(param_1 + 0x88) = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      do {
        lVar2 = *plVar1;
        if (lVar2 != lVar4 || *(long *)(param_1 + 0x88) != lVar6) {
          bVar7 = false;
          ClearExclusiveLocal();
          goto LAB_01e0b6e4;
        }
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar4;
          *(long *)(param_1 + 0x84) = lVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar7 = true;
LAB_01e0b6e4:
      lVar4 = lVar2;
      lVar6 = *(long *)(param_1 + 0x88);
    } while (!bVar7);
    bVar7 = false;
  }
  local_18 = 0;
  local_48 = &local_18;
  local_38 = "SEE98F136C36D8AA0";
  lStack_40 = param_1;
  FUN_01e0b7e0(*(undefined8 *)(param_1 + 0x100),&local_48);
  if (!bVar7) {
    do {
      lVar5 = *plVar1;
      lVar4 = *(long *)(param_1 + 0x88);
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar5;
        *(long *)(param_1 + 0x88) = lVar4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      lVar6 = *plVar1;
      lVar2 = *(long *)(param_1 + 0x88);
      if (lVar6 != lVar5 || lVar2 != lVar4) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto joined_r0x01e0b760;
      }
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar5;
        *(long *)(param_1 + 0x84) = lVar4 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar7 = true;
joined_r0x01e0b760:
    if (!bVar7) {
      do {
        lVar5 = *plVar1;
        lVar4 = *(long *)(param_1 + 0x88);
        if (lVar5 != lVar6 || lVar4 != lVar2) {
          bVar7 = false;
          ClearExclusiveLocal();
          lVar6 = lVar5;
          lVar2 = lVar4;
          goto joined_r0x01e0b760;
        }
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar6;
          *(long *)(param_1 + 0x84) = lVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar7 = true;
      lVar6 = lVar5;
      lVar2 = lVar4;
      goto joined_r0x01e0b760;
    }
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x90));
  }
  return CONCAT71(uStack_17,local_18);
}


