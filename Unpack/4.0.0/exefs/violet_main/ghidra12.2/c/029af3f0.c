/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029af3f0; name: FUN_029af3f0
 */


void FUN_029af3f0(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  
  plVar1 = (long *)(param_1 + 0x70);
  lVar4 = nn::os::GetCurrentThread();
  do {
    lVar7 = *plVar1;
    lVar5 = *(long *)(param_1 + 0x78);
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x78) = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_029af428:
  while ((lVar7 != 0 && (lVar4 != lVar7))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x80));
    do {
      lVar7 = *plVar1;
      lVar5 = *(long *)(param_1 + 0x78);
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar7;
        *(long *)(param_1 + 0x78) = lVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  do {
    lVar2 = *plVar1;
    if (lVar2 != lVar7 || *(long *)(param_1 + 0x78) != lVar5) {
      bVar6 = false;
      ClearExclusiveLocal();
      goto LAB_029af458;
    }
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x74) = lVar5 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar6 = true;
LAB_029af458:
  if (!bVar6) {
    lVar7 = lVar2;
    lVar5 = *(long *)(param_1 + 0x78);
    goto LAB_029af428;
  }
  lVar4 = *(long *)(param_1 + 0x30);
  if ((int)((ulong)(*(long *)(param_1 + 0x38) - lVar4) >> 3) != 0) {
    lVar7 = 0;
    uVar8 = 0;
    do {
      FUN_029afa10(param_2,lVar4 + lVar7);
      lVar4 = *(long *)(param_1 + 0x30);
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 8;
    } while (uVar8 < ((ulong)(*(long *)(param_1 + 0x38) - lVar4) >> 3 & 0xffffffff));
  }
  do {
    lVar4 = *plVar1;
    lVar7 = *(long *)(param_1 + 0x78);
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar4;
      *(long *)(param_1 + 0x78) = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    lVar5 = *plVar1;
    lVar2 = *(long *)(param_1 + 0x78);
    if (lVar5 != lVar4 || lVar2 != lVar7) {
      bVar6 = false;
      ClearExclusiveLocal();
      goto joined_r0x029af4f4;
    }
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar4;
      *(long *)(param_1 + 0x74) = lVar7 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar6 = true;
joined_r0x029af4f4:
  do {
    if (bVar6) {
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x80));
      return;
    }
    do {
      lVar4 = *plVar1;
      lVar7 = *(long *)(param_1 + 0x78);
      if (lVar4 != lVar5 || lVar7 != lVar2) {
        bVar6 = false;
        ClearExclusiveLocal();
        lVar5 = lVar4;
        lVar2 = lVar7;
        goto joined_r0x029af4f4;
      }
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar5;
        *(long *)(param_1 + 0x74) = lVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar6 = true;
    lVar5 = lVar4;
    lVar2 = lVar7;
  } while( true );
}


