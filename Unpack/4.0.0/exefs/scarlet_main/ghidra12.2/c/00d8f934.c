/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d8f934; name: FUN_00d8f934
 */


long FUN_00d8f934(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  
  plVar1 = (long *)(param_1 + 0x280);
  lVar6 = nn::os::GetCurrentThread();
  do {
    lVar8 = *plVar1;
    lVar9 = *(long *)(param_1 + 0x288);
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar8;
      *(long *)(param_1 + 0x288) = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_00d8f964:
  while ((lVar8 != 0 && (lVar6 != lVar8))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x290));
    do {
      lVar8 = *plVar1;
      lVar9 = *(long *)(param_1 + 0x288);
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar8;
        *(long *)(param_1 + 0x288) = lVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  do {
    lVar2 = *plVar1;
    if (lVar2 != lVar8 || *(long *)(param_1 + 0x288) != lVar9) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_00d8f994;
    }
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar8;
      *(long *)(param_1 + 0x284) = lVar9 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar7 = true;
LAB_00d8f994:
  if (!bVar7) {
    lVar8 = lVar2;
    lVar9 = *(long *)(param_1 + 0x288);
    goto LAB_00d8f964;
  }
  lVar6 = *(long *)(param_1 + 0x120);
  lVar8 = *(long *)(param_1 + 0x128);
  do {
    lVar9 = *plVar1;
    lVar2 = *(long *)(param_1 + 0x288);
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar9;
      *(long *)(param_1 + 0x288) = lVar2;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar3 = *plVar1;
    lVar4 = *(long *)(param_1 + 0x288);
    if (lVar3 != lVar9 || lVar4 != lVar2) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_00d8f9e8;
    }
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar9;
      *(long *)(param_1 + 0x284) = lVar2 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar7 = true;
LAB_00d8f9e8:
  if (!bVar7) {
    do {
      lVar9 = *plVar1;
      lVar2 = *(long *)(param_1 + 0x288);
      if (lVar9 != lVar3 || lVar2 != lVar4) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto joined_r0x00d8fa58;
      }
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar3;
        *(long *)(param_1 + 0x284) = lVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar7 = true;
joined_r0x00d8fa58:
    if (!bVar7) {
      do {
        lVar3 = *plVar1;
        lVar4 = *(long *)(param_1 + 0x288);
        if (lVar3 != lVar9 || lVar4 != lVar2) {
          bVar7 = false;
          ClearExclusiveLocal();
          lVar9 = lVar3;
          lVar2 = lVar4;
          goto joined_r0x00d8fa58;
        }
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar9;
          *(long *)(param_1 + 0x284) = lVar2 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar7 = true;
      lVar9 = lVar3;
      lVar2 = lVar4;
      goto joined_r0x00d8fa58;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x290));
  return lVar8 - lVar6 >> 3;
}


