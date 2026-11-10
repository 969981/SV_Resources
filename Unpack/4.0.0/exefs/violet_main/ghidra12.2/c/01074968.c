/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01074968; name: FUN_01074968
 */


void FUN_01074968(long param_1,undefined8 param_2)

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
    if (cVar5 == '\0') goto LAB_010749a4;
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
          if (cVar5 == '\0') goto LAB_010749a4;
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
LAB_010749a4:
  lVar6 = *(long *)(param_1 + 0x1d8);
  lVar8 = *(long *)(param_1 + 0x1e0);
  uVar2 = 0;
  if (lVar8 - lVar6 != 0) {
    uVar2 = (lVar8 - lVar6 >> 3) * 0x33 - 1;
  }
  uVar9 = *(long *)(param_1 + 0x218) + *(long *)(param_1 + 0x210);
  if (uVar2 == uVar9) {
    FUN_01074c94(param_1 + 0x1d0);
    uVar9 = *(long *)(param_1 + 0x210) + *(long *)(param_1 + 0x218);
    lVar6 = *(long *)(param_1 + 0x1d8);
    lVar8 = *(long *)(param_1 + 0x1e0);
  }
  if (lVar8 == lVar6) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(lVar6 + (uVar9 / 0x33) * 8) + (uVar9 % 0x33) * 0x50;
  }
  FUN_01074b54(param_1 + 0x220,lVar6,param_2);
  *(long *)(param_1 + 0x218) = *(long *)(param_1 + 0x218) + 1;
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
      goto LAB_01074aa8;
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
LAB_01074aa8:
  if (!bVar7) {
    do {
      lVar6 = *plVar1;
      lVar8 = *(long *)(param_1 + 0x138);
      if (lVar6 != lVar3 || lVar8 != lVar4) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto joined_r0x01074b14;
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
joined_r0x01074b14:
    if (!bVar7) {
      do {
        lVar3 = *plVar1;
        lVar4 = *(long *)(param_1 + 0x138);
        if (lVar3 != lVar6 || lVar4 != lVar8) {
          bVar7 = false;
          ClearExclusiveLocal();
          lVar6 = lVar3;
          lVar8 = lVar4;
          goto joined_r0x01074b14;
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
      goto joined_r0x01074b14;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x140));
  return;
}


