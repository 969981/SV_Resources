/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00df47dc; name: FUN_00df47dc
 */


void FUN_00df47dc(long param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  
  plVar1 = (long *)(param_1 + 0x130);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_1 + 0x138) == 0) {
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar6;
      *(undefined8 *)(param_1 + 0x138) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_00df4818;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x140));
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0x138) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x140));
        while (*plVar1 == 0 && *(long *)(param_1 + 0x138) == 0) {
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar6;
            *(undefined8 *)(param_1 + 0x138) = 0;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_00df4818;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar6;
      *(undefined8 *)(param_1 + 0x138) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_00df4818:
  lVar6 = *(long *)(param_1 + 0x160);
  lVar8 = *(long *)(param_1 + 0x168);
  uVar2 = 0;
  if (lVar8 - lVar6 != 0) {
    uVar2 = (lVar8 - lVar6 >> 3) * 0x38 - 1;
  }
  uVar9 = *(long *)(param_1 + 0x1a0) + *(long *)(param_1 + 0x198);
  if (uVar2 == uVar9) {
    FUN_00df4af8(param_1 + 0x158);
    uVar9 = *(long *)(param_1 + 0x198) + *(long *)(param_1 + 0x1a0);
    lVar6 = *(long *)(param_1 + 0x160);
    lVar8 = *(long *)(param_1 + 0x168);
  }
  if (lVar8 == lVar6) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(lVar6 + (uVar9 / 0x38) * 8) + (uVar9 % 0x38) * 0x48;
  }
  FUN_00df49c0(param_1 + 0x1a8,lVar6,param_2);
  *(long *)(param_1 + 0x1a0) = *(long *)(param_1 + 0x1a0) + 1;
  do {
    lVar6 = *plVar1;
    lVar8 = *(long *)(param_1 + 0x138);
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x138) = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar3 = *plVar1;
    lVar4 = *(long *)(param_1 + 0x138);
    if (lVar3 != lVar6 || lVar4 != lVar8) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_00df4918;
    }
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x134) = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar7 = true;
LAB_00df4918:
  if (!bVar7) {
    do {
      lVar6 = *plVar1;
      lVar8 = *(long *)(param_1 + 0x138);
      if (lVar6 != lVar3 || lVar8 != lVar4) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto joined_r0x00df4980;
      }
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x134) = lVar4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar7 = true;
joined_r0x00df4980:
    if (!bVar7) {
      do {
        lVar3 = *plVar1;
        lVar4 = *(long *)(param_1 + 0x138);
        if (lVar3 != lVar6 || lVar4 != lVar8) {
          bVar7 = false;
          ClearExclusiveLocal();
          lVar6 = lVar3;
          lVar8 = lVar4;
          goto joined_r0x00df4980;
        }
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x134) = lVar8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar7 = true;
      lVar6 = lVar3;
      lVar8 = lVar4;
      goto joined_r0x00df4980;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x140));
  return;
}


