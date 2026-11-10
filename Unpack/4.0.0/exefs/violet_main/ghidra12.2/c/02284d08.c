/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02284d08; name: FUN_02284d08
 */


void FUN_02284d08(long *param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  
  lVar3 = nn::os::GetCurrentThread();
  do {
    lVar6 = *param_1;
    lVar4 = param_1[1];
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar5) {
      *param_1 = lVar6;
      param_1[1] = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_02284d3c:
  while ((lVar6 != 0 && (lVar3 != lVar6))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 2));
    do {
      lVar6 = *param_1;
      lVar4 = param_1[1];
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar5) {
        *param_1 = lVar6;
        param_1[1] = lVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  do {
    lVar1 = *param_1;
    if (lVar1 != lVar6 || param_1[1] != lVar4) {
      bVar5 = false;
      ClearExclusiveLocal();
      goto LAB_02284d6c;
    }
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar5) {
      *param_1 = lVar6;
      *(long *)((long)param_1 + 4) = lVar4 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  bVar5 = true;
LAB_02284d6c:
  if (!bVar5) {
    lVar6 = lVar1;
    lVar4 = param_1[1];
    goto LAB_02284d3c;
  }
  lVar3 = param_1[0x36];
  if (param_1[0x37] != lVar3) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      FUN_02284e80(param_2,lVar3 + lVar6);
      lVar3 = param_1[0x36];
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x30;
    } while (uVar7 < (ulong)((param_1[0x37] - lVar3 >> 4) * -0x5555555555555555));
  }
  do {
    lVar3 = *param_1;
    lVar6 = param_1[1];
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar5) {
      *param_1 = lVar3;
      param_1[1] = lVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  do {
    lVar4 = *param_1;
    lVar1 = param_1[1];
    if (lVar4 != lVar3 || lVar1 != lVar6) {
      bVar5 = false;
      ClearExclusiveLocal();
      goto joined_r0x02284e10;
    }
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar5) {
      *param_1 = lVar3;
      *(long *)((long)param_1 + 4) = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  bVar5 = true;
joined_r0x02284e10:
  do {
    if (bVar5) {
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 2));
      return;
    }
    do {
      lVar3 = *param_1;
      lVar6 = param_1[1];
      if (lVar3 != lVar4 || lVar6 != lVar1) {
        bVar5 = false;
        ClearExclusiveLocal();
        lVar4 = lVar3;
        lVar1 = lVar6;
        goto joined_r0x02284e10;
      }
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar5) {
        *param_1 = lVar4;
        *(long *)((long)param_1 + 4) = lVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    bVar5 = true;
    lVar4 = lVar3;
    lVar1 = lVar6;
  } while( true );
}


