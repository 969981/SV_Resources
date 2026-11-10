/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f848f4; name: FUN_00f848f4
 */


void FUN_00f848f4(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long *plStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long *local_48;
  
  plVar1 = (long *)(param_1 + 0x40);
  lVar7 = *plVar1;
  lVar5 = nn::os::GetCurrentThread();
  if (lVar5 == lVar7) {
    bVar4 = true;
  }
  else {
    lVar5 = nn::os::GetCurrentThread();
    bVar4 = false;
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x48));
        bVar4 = false;
        do {
          if (*plVar1 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x48));
              while (*plVar1 == 0) {
                cVar2 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar4) {
                  *plVar1 = lVar5;
                  cVar2 = ExclusiveMonitorsStatus();
                }
                bVar4 = false;
                if (cVar2 == '\0') goto LAB_00f8492c;
              }
            } while( true );
          }
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        break;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
LAB_00f8492c:
  local_78 = *param_2;
  uStack_70 = param_2[1];
  local_68 = param_2[2];
  plVar1 = (long *)param_2[3];
  plStack_60 = plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  local_58 = param_2[4];
  uStack_50 = param_2[5];
  plVar6 = (long *)param_2[6];
  local_48 = plVar6;
  if (plVar6 == (long *)0x0) {
    FUN_00f84a68(param_1,&local_78);
  }
  else {
    (**(code **)(*plVar6 + 0x18))(plVar6);
    FUN_00f84a68(param_1,&local_78);
    (**(code **)(*plVar6 + 0x20))(plVar6);
  }
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  if (!bVar4) {
    *(undefined8 *)(param_1 + 0x40) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x48));
    return;
  }
  return;
}


