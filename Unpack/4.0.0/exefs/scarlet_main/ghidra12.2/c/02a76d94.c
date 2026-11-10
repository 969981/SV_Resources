/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a76d94; name: FUN_02a76d94
 */


undefined8 FUN_02a76d94(undefined8 param_1,long *param_2,undefined8 param_3)

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
            if (cVar2 == '\0') goto LAB_02a76de8;
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
LAB_02a76de8:
    bVar9 = false;
  }
  lVar6 = *param_2;
  plVar1 = (long *)(lVar6 + 0x30);
  lVar7 = *plVar1;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 == lVar7) {
    uVar5 = FUN_02a76f04(param_1,lVar6,param_3,1);
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
            if (cVar2 == '\0') goto LAB_02a76e1c;
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
LAB_02a76e1c:
    uVar5 = FUN_02a77310(param_1,lVar6,param_3,1);
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


