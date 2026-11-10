/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e398f8; name: FUN_00e398f8
 */


long FUN_00e398f8(long param_1)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  undefined1 auStack_28 [8];
  
  plVar1 = (long *)(param_1 + 0x110);
  lVar5 = *plVar1;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar5) {
    bVar4 = true;
LAB_00e3994c:
    lVar3 = FUN_00e399dc(param_1 + 0x108,auStack_28);
    if (lVar3 == 0) {
      lVar3 = FUN_00e3a488(param_1,*(undefined8 *)(param_1 + 8));
    }
    if (!bVar4) {
      *(undefined8 *)(param_1 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x118));
    }
    return lVar3;
  }
  lVar3 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar3;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_00e39940;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x118));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x118));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar3;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00e39940;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar3;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00e39940:
  bVar4 = false;
  goto LAB_00e3994c;
}


