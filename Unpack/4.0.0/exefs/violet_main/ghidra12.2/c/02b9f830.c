/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b9f830; name: FUN_02b9f830
 */


undefined8 FUN_02b9f830(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  undefined8 uVar10;
  
  plVar1 = (long *)(param_1 + 0x280);
  lVar4 = nn::os::GetCurrentThread();
  do {
    lVar6 = *plVar1;
    lVar8 = *(long *)(param_1 + 0x288);
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x288) = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_02b9f868:
  while ((lVar6 != 0 && (lVar4 != lVar6))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x290));
    do {
      lVar6 = *plVar1;
      lVar8 = *(long *)(param_1 + 0x288);
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar6;
        *(long *)(param_1 + 0x288) = lVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  do {
    lVar2 = *plVar1;
    if (lVar2 != lVar6 || *(long *)(param_1 + 0x288) != lVar8) {
      bVar5 = false;
      ClearExclusiveLocal();
      goto LAB_02b9f898;
    }
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x284) = lVar8 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar5 = true;
LAB_02b9f898:
  if (!bVar5) {
    lVar6 = lVar2;
    lVar8 = *(long *)(param_1 + 0x288);
    goto LAB_02b9f868;
  }
  plVar7 = *(long **)(param_1 + 0x120);
  if (plVar7 != *(long **)(param_1 + 0x128)) {
    iVar9 = 0;
    do {
      if (*(long *)(*plVar7 + 0x40) == *param_2) {
        *(int *)(param_1 + 0x270) = iVar9;
        uVar10 = 1;
        goto LAB_02b9f8f0;
      }
      plVar7 = plVar7 + 1;
      iVar9 = iVar9 + 1;
    } while (*(long **)(param_1 + 0x128) != plVar7);
  }
  uVar10 = 0;
LAB_02b9f8f0:
  do {
    lVar4 = *plVar1;
    lVar6 = *(long *)(param_1 + 0x288);
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar4;
      *(long *)(param_1 + 0x288) = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    lVar8 = *plVar1;
    lVar2 = *(long *)(param_1 + 0x288);
    if (lVar8 != lVar4 || lVar2 != lVar6) {
      bVar5 = false;
      ClearExclusiveLocal();
      goto LAB_02b9f92c;
    }
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar4;
      *(long *)(param_1 + 0x284) = lVar6 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar5 = true;
LAB_02b9f92c:
  if (!bVar5) {
    do {
      lVar4 = *plVar1;
      lVar6 = *(long *)(param_1 + 0x288);
      if (lVar4 != lVar8 || lVar6 != lVar2) {
        bVar5 = false;
        ClearExclusiveLocal();
        goto joined_r0x02b9f998;
      }
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8;
        *(long *)(param_1 + 0x284) = lVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar5 = true;
joined_r0x02b9f998:
    if (!bVar5) {
      do {
        lVar8 = *plVar1;
        lVar2 = *(long *)(param_1 + 0x288);
        if (lVar8 != lVar4 || lVar2 != lVar6) {
          bVar5 = false;
          ClearExclusiveLocal();
          lVar4 = lVar8;
          lVar6 = lVar2;
          goto joined_r0x02b9f998;
        }
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar4;
          *(long *)(param_1 + 0x284) = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar5 = true;
      lVar4 = lVar8;
      lVar6 = lVar2;
      goto joined_r0x02b9f998;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x290));
  return uVar10;
}


