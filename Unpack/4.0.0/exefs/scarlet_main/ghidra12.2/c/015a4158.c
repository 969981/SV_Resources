/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015a4158; name: FUN_015a4158
 */


void FUN_015a4158(long param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  LightEventType *pLVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 local_38;
  
  plVar6 = (long *)(param_1 + 0x30);
  lVar5 = *plVar6;
  local_38 = param_2;
  lVar2 = nn::os::GetCurrentThread();
  if (lVar2 == lVar5) {
    plVar6 = (long *)(param_1 + 0x98);
    lVar5 = *plVar6;
    lVar2 = nn::os::GetCurrentThread();
    if (lVar2 != lVar5) {
      lVar2 = nn::os::GetCurrentThread();
LAB_015a422c:
      if (*plVar6 == 0) goto code_r0x015a4234;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xa0));
      do {
        if (*plVar6 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xa0));
            while (*plVar6 == 0) {
              cVar1 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar4) {
                *plVar6 = lVar2;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 == '\0') goto LAB_015a423c;
            }
          } while( true );
        }
        cVar1 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar2;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_015a423c:
      bVar4 = false;
      goto LAB_015a4240;
    }
    plVar6 = (long *)0x0;
    bVar4 = true;
LAB_015a4240:
    if (*(long *)(param_1 + 0xb8) == *(long *)(param_1 + 0xc0)) {
      FUN_015a47f0(param_1 + 0xb0,&local_38);
    }
    else {
      FUN_015a4700();
    }
    if (bVar4) {
      return;
    }
    *plVar6 = 0;
    pLVar3 = (LightEventType *)(plVar6 + 1);
LAB_015a41b8:
    nn::os::SignalLightEvent(pLVar3);
    return;
  }
  lVar2 = nn::os::GetCurrentThread();
  while (*plVar6 == 0) {
    cVar1 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar4) {
      *plVar6 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_015a41a0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
  do {
    if (*plVar6 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
        while (*plVar6 == 0) {
          cVar1 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = lVar2;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_015a41a0;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar4) {
      *plVar6 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_015a41a0:
  FUN_015a42d4(param_1,local_38);
  pLVar3 = (LightEventType *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = 0;
  goto LAB_015a41b8;
code_r0x015a4234:
  cVar1 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
  if (bVar4) {
    *plVar6 = lVar2;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_015a423c;
  goto LAB_015a422c;
}


