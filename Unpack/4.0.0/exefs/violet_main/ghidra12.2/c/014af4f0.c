/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014af4f0; name: FUN_014af4f0
 */


void FUN_014af4f0(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  undefined8 local_58;
  long lStack_50;
  undefined8 **local_48;
  undefined8 *local_28;
  
  lVar7 = *param_3;
  local_28 = &local_58;
  local_48 = &local_28;
  plVar1 = (long *)(lVar7 + 0x110);
  lVar6 = *plVar1;
  local_58 = param_5;
  lStack_50 = lVar7 + 0x108;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar6) {
    bVar5 = true;
LAB_014af554:
    FUN_014af60c(&lStack_50,lVar7 + 0x128);
    FUN_014af60c(&lStack_50,lVar7 + 0x160);
    if ((*(byte *)(lVar7 + 0x360) & 7) != 0) {
      pcVar4 = *(code **)(lVar7 + 0x1b0);
      if ((*(ulong *)(lVar7 + 0x1b8) & 1) != 0) {
        pcVar4 = *(code **)(pcVar4 + *(long *)(lVar7 + 0x108 +
                                              ((long)*(ulong *)(lVar7 + 0x1b8) >> 1)));
      }
      (*pcVar4)();
    }
    if (!bVar5) {
      *(undefined8 *)(lVar7 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar7 + 0x118));
    }
    return;
  }
  lVar3 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar3;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_014af550;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x118));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x118));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar3;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_014af550;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar3;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_014af550:
  bVar5 = false;
  goto LAB_014af554;
}


