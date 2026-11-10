/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01092a4c; name: FUN_01092a4c
 */


void FUN_01092a4c(long param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  
  lVar4 = nn::os::GetCurrentThread();
  puVar3 = PTR_DAT_047dccb0;
  do {
    lVar5 = *(long *)puVar3;
    lVar6 = *(long *)(puVar3 + 8);
    cVar2 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar7) {
      *(long *)puVar3 = lVar5;
      *(long *)(puVar3 + 8) = lVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  do {
    while ((lVar5 != 0 && (lVar4 != lVar5))) {
      nn::os::WaitLightEvent((LightEventType *)(puVar3 + 0x10));
      do {
        lVar5 = *(long *)puVar3;
        lVar6 = *(long *)(puVar3 + 8);
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar7) {
          *(long *)puVar3 = lVar5;
          *(long *)(puVar3 + 8) = lVar6;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    do {
      lVar1 = *(long *)puVar3;
      if (lVar1 != lVar5 || *(long *)(puVar3 + 8) != lVar6) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto LAB_01092abc;
      }
      cVar2 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar7) {
        *(long *)puVar3 = lVar5;
        *(long *)(puVar3 + 4) = lVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    bVar7 = true;
LAB_01092abc:
    lVar5 = lVar1;
    lVar6 = *(long *)(puVar3 + 8);
  } while (!bVar7);
  if (*(long *)(param_1 + 0x460) == *(long *)(*param_2 + 0x460)) {
    FUN_00ee7970(*(long *)(param_1 + 0x460),*(undefined4 *)(param_1 + 0x468),
                 *(undefined4 *)(*param_2 + 0x468));
  }
  do {
    lVar4 = *(long *)puVar3;
    lVar5 = *(long *)(puVar3 + 8);
    cVar2 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar7) {
      *(long *)puVar3 = lVar4;
      *(long *)(puVar3 + 8) = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  do {
    lVar6 = *(long *)puVar3;
    lVar1 = *(long *)(puVar3 + 8);
    if (lVar6 != lVar4 || lVar1 != lVar5) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto joined_r0x01092b2c;
    }
    cVar2 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar7) {
      *(long *)puVar3 = lVar4;
      *(long *)(puVar3 + 4) = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  bVar7 = true;
joined_r0x01092b2c:
  do {
    if (bVar7) {
      nn::os::SignalLightEvent((LightEventType *)(puVar3 + 0x10));
      return;
    }
    do {
      lVar4 = *(long *)puVar3;
      lVar5 = *(long *)(puVar3 + 8);
      if (lVar4 != lVar6 || lVar5 != lVar1) {
        bVar7 = false;
        ClearExclusiveLocal();
        lVar6 = lVar4;
        lVar1 = lVar5;
        goto joined_r0x01092b2c;
      }
      cVar2 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar7) {
        *(long *)puVar3 = lVar6;
        *(long *)(puVar3 + 4) = lVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    bVar7 = true;
    lVar6 = lVar4;
    lVar1 = lVar5;
  } while( true );
}


