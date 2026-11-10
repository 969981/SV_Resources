/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f9dd14; name: FUN_01f9dd14
 */


void FUN_01f9dd14(long param_1,byte param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  
  plVar1 = (long *)(param_1 + 0x450);
  lVar4 = nn::os::GetCurrentThread();
  do {
    lVar6 = *plVar1;
    lVar7 = *(long *)(param_1 + 0x458);
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x458) = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01f9dd4c:
  while ((lVar6 != 0 && (lVar4 != lVar6))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x460));
    do {
      lVar6 = *plVar1;
      lVar7 = *(long *)(param_1 + 0x458);
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar6;
        *(long *)(param_1 + 0x458) = lVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  do {
    lVar2 = *plVar1;
    if (lVar2 != lVar6 || *(long *)(param_1 + 0x458) != lVar7) {
      bVar5 = false;
      ClearExclusiveLocal();
      goto LAB_01f9dd7c;
    }
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x454) = lVar7 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar5 = true;
LAB_01f9dd7c:
  if (!bVar5) {
    lVar6 = lVar2;
    lVar7 = *(long *)(param_1 + 0x458);
    goto LAB_01f9dd4c;
  }
  *(byte *)(param_1 + 0x438) = param_2 & 1;
  do {
    lVar4 = *plVar1;
    lVar6 = *(long *)(param_1 + 0x458);
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar4;
      *(long *)(param_1 + 0x458) = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    lVar7 = *plVar1;
    lVar2 = *(long *)(param_1 + 0x458);
    if (lVar7 != lVar4 || lVar2 != lVar6) {
      bVar5 = false;
      ClearExclusiveLocal();
      goto joined_r0x01f9dde0;
    }
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar4;
      *(long *)(param_1 + 0x454) = lVar6 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar5 = true;
joined_r0x01f9dde0:
  do {
    if (bVar5) {
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x460));
      return;
    }
    do {
      lVar4 = *plVar1;
      lVar6 = *(long *)(param_1 + 0x458);
      if (lVar4 != lVar7 || lVar6 != lVar2) {
        bVar5 = false;
        ClearExclusiveLocal();
        lVar7 = lVar4;
        lVar2 = lVar6;
        goto joined_r0x01f9dde0;
      }
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar7;
        *(long *)(param_1 + 0x454) = lVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar5 = true;
    lVar7 = lVar4;
    lVar2 = lVar6;
  } while( true );
}


