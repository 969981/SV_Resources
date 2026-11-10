/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b97470; name: FUN_02b97470
 */


bool FUN_02b97470(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  
  plVar1 = (long *)(param_1 + 0x450);
  lVar5 = nn::os::GetCurrentThread();
  do {
    lVar7 = *plVar1;
    lVar8 = *(long *)(param_1 + 0x458);
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x458) = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_02b974a0:
  while ((lVar7 != 0 && (lVar5 != lVar7))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x460));
    do {
      lVar7 = *plVar1;
      lVar8 = *(long *)(param_1 + 0x458);
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar7;
        *(long *)(param_1 + 0x458) = lVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  do {
    lVar2 = *plVar1;
    if (lVar2 != lVar7 || *(long *)(param_1 + 0x458) != lVar8) {
      bVar6 = false;
      ClearExclusiveLocal();
      goto LAB_02b974d0;
    }
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x454) = lVar8 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar6 = true;
LAB_02b974d0:
  if (!bVar6) {
    lVar7 = lVar2;
    lVar8 = *(long *)(param_1 + 0x458);
    goto LAB_02b974a0;
  }
  cVar3 = *(char *)(param_1 + 0x438);
  do {
    lVar5 = *plVar1;
    lVar7 = *(long *)(param_1 + 0x458);
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar5;
      *(long *)(param_1 + 0x458) = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar8 = *plVar1;
    lVar2 = *(long *)(param_1 + 0x458);
    if (lVar8 != lVar5 || lVar2 != lVar7) {
      bVar6 = false;
      ClearExclusiveLocal();
      goto joined_r0x02b97530;
    }
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar5;
      *(long *)(param_1 + 0x454) = lVar7 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar6 = true;
joined_r0x02b97530:
  do {
    if (bVar6) {
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x460));
      return cVar3 != '\0';
    }
    do {
      lVar5 = *plVar1;
      lVar7 = *(long *)(param_1 + 0x458);
      if (lVar5 != lVar8 || lVar7 != lVar2) {
        bVar6 = false;
        ClearExclusiveLocal();
        lVar8 = lVar5;
        lVar2 = lVar7;
        goto joined_r0x02b97530;
      }
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar8;
        *(long *)(param_1 + 0x454) = lVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar6 = true;
    lVar8 = lVar5;
    lVar2 = lVar7;
  } while( true );
}


