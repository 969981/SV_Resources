/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010f8584; name: FUN_010f8584
 */


void FUN_010f8584(long param_1,uint param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  
  plVar1 = (long *)(param_1 + 0x70);
  lVar4 = nn::os::GetCurrentThread();
  do {
    lVar6 = *plVar1;
    lVar7 = *(long *)(param_1 + 0x78);
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x78) = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_010f85c0:
  while ((lVar6 != 0 && (lVar4 != lVar6))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x80));
    do {
      lVar6 = *plVar1;
      lVar7 = *(long *)(param_1 + 0x78);
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar6;
        *(long *)(param_1 + 0x78) = lVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  do {
    lVar2 = *plVar1;
    if (lVar2 != lVar6 || *(long *)(param_1 + 0x78) != lVar7) {
      bVar5 = false;
      ClearExclusiveLocal();
      goto LAB_010f85f0;
    }
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x74) = lVar7 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar5 = true;
LAB_010f85f0:
  if (!bVar5) {
    lVar6 = lVar2;
    lVar7 = *(long *)(param_1 + 0x78);
    goto LAB_010f85c0;
  }
  if (param_2 < (uint)((ulong)(*(long *)(param_1 + 0x38) - *(long *)(param_1 + 0x30)) >> 3)) {
    FUN_00eac828(*(undefined8 *)(*(long *)(param_1 + 0x30) + (ulong)param_2 * 8),param_3);
  }
  do {
    lVar4 = *plVar1;
    lVar6 = *(long *)(param_1 + 0x78);
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar4;
      *(long *)(param_1 + 0x78) = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    lVar7 = *plVar1;
    lVar2 = *(long *)(param_1 + 0x78);
    if (lVar7 != lVar4 || lVar2 != lVar6) {
      bVar5 = false;
      ClearExclusiveLocal();
      goto LAB_010f8660;
    }
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar4;
      *(long *)(param_1 + 0x74) = lVar6 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar5 = true;
LAB_010f8660:
  if (!bVar5) {
    do {
      lVar4 = *plVar1;
      lVar6 = *(long *)(param_1 + 0x78);
      if (lVar4 != lVar7 || lVar6 != lVar2) {
        bVar5 = false;
        ClearExclusiveLocal();
        goto joined_r0x010f86c4;
      }
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar7;
        *(long *)(param_1 + 0x74) = lVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar5 = true;
joined_r0x010f86c4:
    if (!bVar5) {
      do {
        lVar7 = *plVar1;
        lVar2 = *(long *)(param_1 + 0x78);
        if (lVar7 != lVar4 || lVar2 != lVar6) {
          bVar5 = false;
          ClearExclusiveLocal();
          lVar4 = lVar7;
          lVar6 = lVar2;
          goto joined_r0x010f86c4;
        }
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar4;
          *(long *)(param_1 + 0x74) = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar5 = true;
      lVar4 = lVar7;
      lVar6 = lVar2;
      goto joined_r0x010f86c4;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x80));
  return;
}


