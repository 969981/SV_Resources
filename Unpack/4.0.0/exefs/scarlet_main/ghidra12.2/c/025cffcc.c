/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025cffcc; name: FUN_025cffcc
 */


void FUN_025cffcc(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar4 = FUN_011ef6ec();
  if ((uVar4 & 1) == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    return;
  }
  plVar1 = (long *)(param_2 + 0x40);
  lVar5 = nn::os::GetCurrentThread();
  do {
    lVar7 = *plVar1;
    lVar8 = *(long *)(param_2 + 0x48);
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      *(long *)(param_2 + 0x48) = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_025d000c:
  while ((lVar7 != 0 && (lVar5 != lVar7))) {
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x50));
    do {
      lVar7 = *plVar1;
      lVar8 = *(long *)(param_2 + 0x48);
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar7;
        *(long *)(param_2 + 0x48) = lVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  do {
    lVar2 = *plVar1;
    if (lVar2 != lVar7 || *(long *)(param_2 + 0x48) != lVar8) {
      bVar6 = false;
      ClearExclusiveLocal();
      goto LAB_025d003c;
    }
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      *(long *)(param_2 + 0x44) = lVar8 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar6 = true;
LAB_025d003c:
  if (!bVar6) {
    lVar7 = lVar2;
    lVar8 = *(long *)(param_2 + 0x48);
    goto LAB_025d000c;
  }
  uVar10 = *(undefined8 *)(*(long *)(param_2 + 0x38) + 0x148);
  uVar9 = *(undefined8 *)(*(long *)(param_2 + 0x38) + 0x140);
  *(undefined1 *)(param_1 + 2) = 1;
  param_1[1] = uVar10;
  *param_1 = uVar9;
  do {
    lVar5 = *plVar1;
    lVar7 = *(long *)(param_2 + 0x48);
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar5;
      *(long *)(param_2 + 0x48) = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    lVar8 = *plVar1;
    lVar2 = *(long *)(param_2 + 0x48);
    if (lVar8 != lVar5 || lVar2 != lVar7) {
      bVar6 = false;
      ClearExclusiveLocal();
      goto LAB_025d00bc;
    }
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar5;
      *(long *)(param_2 + 0x44) = lVar7 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar6 = true;
LAB_025d00bc:
  if (!bVar6) {
    do {
      lVar5 = *plVar1;
      lVar7 = *(long *)(param_2 + 0x48);
      if (lVar5 != lVar8 || lVar7 != lVar2) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto joined_r0x025d0120;
      }
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar8;
        *(long *)(param_2 + 0x44) = lVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar6 = true;
joined_r0x025d0120:
    if (!bVar6) {
      do {
        lVar8 = *plVar1;
        lVar2 = *(long *)(param_2 + 0x48);
        if (lVar8 != lVar5 || lVar2 != lVar7) {
          bVar6 = false;
          ClearExclusiveLocal();
          lVar5 = lVar8;
          lVar7 = lVar2;
          goto joined_r0x025d0120;
        }
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar5;
          *(long *)(param_2 + 0x44) = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar6 = true;
      lVar5 = lVar8;
      lVar7 = lVar2;
      goto joined_r0x025d0120;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x50));
  return;
}


