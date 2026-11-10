/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a72c3c; name: FUN_02a72c3c
 */


undefined8 FUN_02a72c3c(undefined8 param_1,long *param_2,undefined8 param_3)

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
  if (lVar4 == lVar6) {
    plVar8 = (long *)0x0;
    bVar9 = true;
  }
  else {
    lVar4 = nn::os::GetCurrentThread();
    do {
      if (*plVar8 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x34));
          while (*plVar8 == 0) {
            cVar2 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar9) {
              *plVar8 = lVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_02a72c90;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar9) {
        *plVar8 = lVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_02a72c90:
    bVar9 = false;
  }
  lVar6 = *param_2;
  plVar1 = (long *)(lVar6 + 0x30);
  lVar7 = *plVar1;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 == lVar7) {
    uVar5 = FUN_02a72dac(param_1,lVar6,param_3,1);
  }
  else {
    lVar4 = nn::os::GetCurrentThread();
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x38));
          while (*plVar1 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_02a72cc4;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_02a72cc4:
    uVar5 = FUN_02a731b8(param_1,lVar6,param_3,1);
    *(undefined8 *)(lVar6 + 0x30) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0x38));
  }
  local_58 = uVar5;
  FUN_00e2bc48(param_2 + 0x36,&local_58);
  if (!bVar9) {
    *plVar8 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar8 + 1));
  }
  return uVar5;
}


