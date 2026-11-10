/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0179d050; name: FUN_0179d050
 */


void FUN_0179d050(undefined8 param_1,long param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  bool bVar6;
  long *plVar7;
  long local_38;
  
  plVar5 = (long *)(param_2 + 0xb108);
  lVar3 = *plVar5;
  lVar2 = nn::os::GetCurrentThread();
  if (lVar2 == lVar3) {
    plVar5 = (long *)0x0;
    bVar6 = true;
LAB_0179d0a8:
    plVar4 = (long *)(param_2 + 0xb120);
    plVar7 = (long *)(param_2 + 0xb128);
    if (*plVar4 == *plVar7) {
      FUN_0179d1e8(plVar4);
      lVar2 = *plVar7;
      *(undefined8 *)(lVar2 + -0x40) = 0;
      *(undefined8 *)(lVar2 + -0x38) = 0;
      *(undefined8 *)(lVar2 + -0x60) = 0;
      *(undefined8 *)(lVar2 + -0x58) = 0;
      if (*(char *)(lVar2 + -0x50) == '\0') {
        *(undefined1 *)(lVar2 + -0x50) = 1;
      }
    }
    else {
      FUN_0179e498(plVar4,*plVar7 + -0x60);
    }
    if (*(long *)(param_2 + 0xb4e0) == 0) {
      local_38 = (*plVar7 - *plVar4 >> 5) * -0x5555555555555555;
      FUN_0179d230(param_2 + 0xb4b0,&local_38);
    }
    FUN_0179d1e0(param_1,(*plVar7 - *plVar4 >> 5) * -0x5555555555555555);
    if (bVar6) {
      return;
    }
    *plVar5 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar5 + 1));
    return;
  }
  lVar2 = nn::os::GetCurrentThread();
  while (*plVar5 == 0) {
    cVar1 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar6) {
      *plVar5 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_0179d0a0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0xb110));
  do {
    if (*plVar5 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0xb110));
        while (*plVar5 == 0) {
          cVar1 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar6) {
            *plVar5 = lVar2;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_0179d0a0;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar6) {
      *plVar5 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_0179d0a0:
  bVar6 = false;
  goto LAB_0179d0a8;
}


