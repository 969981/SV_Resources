/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0111fa8c; name: FUN_0111fa8c
 */


undefined8 FUN_0111fa8c(undefined8 param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  bool bVar9;
  undefined8 local_58;
  
  plVar8 = param_2 + 0x33;
  lVar6 = *plVar8;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 != lVar6) {
    lVar4 = nn::os::GetCurrentThread();
LAB_0111fad0:
    if (*plVar8 == 0) goto code_r0x0111fad8;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x34));
    do {
      if (*plVar8 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x34));
          while (*plVar8 == 0) {
            cVar2 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar9) {
              *plVar8 = lVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_0111fae0;
          }
        } while( true );
      }
      cVar2 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar9) {
        *plVar8 = lVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_0111fae0:
    bVar9 = false;
    goto LAB_0111fae4;
  }
  plVar8 = (long *)0x0;
  bVar9 = true;
LAB_0111fae4:
  lVar6 = *param_2;
  plVar1 = (long *)(lVar6 + 0x30);
  lVar7 = *plVar1;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 == lVar7) {
    uVar5 = FUN_01121df4(param_1,lVar6,param_3,1);
LAB_0111fb3c:
    local_58 = uVar5;
    FUN_00e2bc48(param_2 + 0x36,&local_58);
    if (!bVar9) {
      *plVar8 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar8 + 1));
    }
    return uVar5;
  }
  lVar4 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_0111fb14;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x38));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x38));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_0111fb14;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_0111fb14:
  uVar5 = FUN_0111fc2c(param_1,lVar6,param_3,1);
  *(undefined8 *)(lVar6 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0x38));
  goto LAB_0111fb3c;
code_r0x0111fad8:
  cVar2 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(plVar8,0x10);
  if (bVar9) {
    *plVar8 = lVar4;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_0111fae0;
  goto LAB_0111fad0;
}


