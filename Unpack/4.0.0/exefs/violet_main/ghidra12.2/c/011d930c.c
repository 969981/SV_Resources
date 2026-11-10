/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011d930c; name: FUN_011d930c
 */


void FUN_011d930c(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  bool bVar7;
  float fVar8;
  uint local_4c;
  long local_48;
  
  plVar5 = (long *)(param_1 + 0x30);
  lVar4 = *plVar5;
  local_48 = param_2;
  lVar2 = nn::os::GetCurrentThread();
  if (lVar2 != lVar4) {
    lVar2 = nn::os::GetCurrentThread();
LAB_011d9348:
    if (*plVar5 == 0) goto code_r0x011d9350;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
    do {
      if (*plVar5 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
          while (*plVar5 == 0) {
            cVar1 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar7) {
              *plVar5 = lVar2;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_011d9358;
          }
        } while( true );
      }
      cVar1 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar7) {
        *plVar5 = lVar2;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_011d9358:
    bVar7 = false;
    plVar6 = plVar5;
    goto LAB_011d9360;
  }
  plVar6 = (long *)0x0;
  bVar7 = true;
LAB_011d9360:
  lVar4 = *plVar5;
  lVar2 = nn::os::GetCurrentThread();
  if (lVar2 == lVar4) {
    plVar5 = (long *)0x0;
    bVar3 = true;
LAB_011d938c:
    fVar8 = *(float *)(local_48 + 0x138) / 50.0;
    local_4c = (int)(*(float *)(local_48 + 0x130) / 50.0) & 0xffffU | (int)fVar8 << 0x10;
    FUN_011d94a0(fVar8,*(undefined4 *)(local_48 + 0x134),param_1 + 0x48,&local_4c,&local_48);
    if (!bVar3) {
      *plVar5 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar5 + 1));
    }
    if (!bVar7) {
      *plVar6 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar6 + 1));
    }
    return;
  }
  lVar2 = nn::os::GetCurrentThread();
  while (*plVar5 == 0) {
    cVar1 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_011d9388;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
  do {
    if (*plVar5 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
        while (*plVar5 == 0) {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar2;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_011d9388;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_011d9388:
  bVar3 = false;
  goto LAB_011d938c;
code_r0x011d9350:
  cVar1 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar5,0x10);
  if (bVar7) {
    *plVar5 = lVar2;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_011d9358;
  goto LAB_011d9348;
}


