/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011ef6ec; name: FUN_011ef6ec
 */


bool FUN_011ef6ec(long param_1)

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
  
  plVar1 = (long *)(param_1 + 0x40);
  lVar6 = nn::os::GetCurrentThread();
  do {
    lVar8 = *plVar1;
    lVar9 = *(long *)(param_1 + 0x48);
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar8;
      *(long *)(param_1 + 0x48) = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_011ef71c:
  while ((lVar8 != 0 && (lVar6 != lVar8))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
    do {
      lVar8 = *plVar1;
      lVar9 = *(long *)(param_1 + 0x48);
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar8;
        *(long *)(param_1 + 0x48) = lVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  do {
    lVar2 = *plVar1;
    if (lVar2 != lVar8 || *(long *)(param_1 + 0x48) != lVar9) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_011ef74c;
    }
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar8;
      *(long *)(param_1 + 0x44) = lVar9 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar7 = true;
LAB_011ef74c:
  if (!bVar7) {
    lVar8 = lVar2;
    lVar9 = *(long *)(param_1 + 0x48);
    goto LAB_011ef71c;
  }
  lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 0xf8);
  if ((lVar6 == 0) || (*(int *)(*(long *)(param_1 + 0x30) + 0x100) != *(int *)(lVar6 + 0x2c))) {
    lVar6 = 0;
  }
  else {
    lVar6 = FUN_00c41664();
  }
  lVar8 = *(long *)(param_1 + 0x38);
  do {
    lVar9 = *plVar1;
    lVar2 = *(long *)(param_1 + 0x48);
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar9;
      *(long *)(param_1 + 0x48) = lVar2;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar3 = *plVar1;
    lVar4 = *(long *)(param_1 + 0x48);
    if (lVar3 != lVar9 || lVar4 != lVar2) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_011ef7c4;
    }
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar9;
      *(long *)(param_1 + 0x44) = lVar2 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar7 = true;
LAB_011ef7c4:
  if (!bVar7) {
    do {
      lVar9 = *plVar1;
      lVar2 = *(long *)(param_1 + 0x48);
      if (lVar9 != lVar3 || lVar2 != lVar4) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto joined_r0x011ef83c;
      }
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar3;
        *(long *)(param_1 + 0x44) = lVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar7 = true;
joined_r0x011ef83c:
    if (!bVar7) {
      do {
        lVar3 = *plVar1;
        lVar4 = *(long *)(param_1 + 0x48);
        if (lVar3 != lVar9 || lVar4 != lVar2) {
          bVar7 = false;
          ClearExclusiveLocal();
          lVar9 = lVar3;
          lVar2 = lVar4;
          goto joined_r0x011ef83c;
        }
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar9;
          *(long *)(param_1 + 0x44) = lVar2 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar7 = true;
      lVar9 = lVar3;
      lVar2 = lVar4;
      goto joined_r0x011ef83c;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x50));
  return lVar8 == lVar6;
}


