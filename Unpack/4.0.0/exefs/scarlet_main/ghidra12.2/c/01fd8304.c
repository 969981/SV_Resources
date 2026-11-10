/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01fd8304; name: FUN_01fd8304
 */


undefined8 FUN_01fd8304(long param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  
  plVar4 = (long *)(param_1 + 0xa0);
  lVar3 = nn::os::GetCurrentThread();
  while (*plVar4 == 0) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_01fd8334;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xa8));
  do {
    if (*plVar4 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xa8));
        while (*plVar4 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar3;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_01fd8334;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_01fd8334:
  if ((*(long *)(param_1 + 0x1b8) == *(long *)(param_1 + 0x1b0)) &&
     (*(long *)(param_1 + 0x158) == *(long *)(param_1 + 0x48) - *(long *)(param_1 + 0x40) >> 4)) {
    uVar7 = 1;
    plVar4 = *(long **)(param_1 + 0x128);
    while( true ) {
      plVar5 = plVar4;
      if (plVar5 == (long *)(param_1 + 0x130)) goto LAB_01fd8358;
      if ((char)plVar5[5] == '\0') break;
      plVar4 = (long *)plVar5[1];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)plVar5[2];
        if (*(long **)plVar5[2] != plVar5) {
          lVar3 = plVar5[2];
          while( true ) {
            plVar4 = *(long **)(lVar3 + 0x10);
            if (*plVar4 == lVar3) break;
            lVar3 = *(long *)(lVar3 + 0x10);
          }
        }
      }
      else {
        plVar5 = (long *)*plVar4;
        if (((plVar5 != (long *)0x0) &&
            (plVar6 = (long *)*plVar5, plVar4 = plVar5, plVar6 != (long *)0x0)) &&
           (plVar5 = (long *)*plVar6, plVar4 = plVar6, plVar5 != (long *)0x0)) {
          for (plVar6 = (long *)*plVar5; plVar4 = plVar5, plVar6 != (long *)0x0;
              plVar6 = (long *)*plVar6) {
            plVar5 = plVar6;
          }
        }
      }
    }
  }
  uVar7 = 0;
LAB_01fd8358:
  *(undefined8 *)(param_1 + 0xa0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xa8));
  return uVar7;
}


