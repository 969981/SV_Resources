/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012d6de0; name: FUN_012d6de0
 */


undefined8 FUN_012d6de0(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  bool bVar5;
  long lVar6;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *local_48;
  
  plVar1 = (long *)(param_1 + 0x40);
  lVar6 = *plVar1;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar6) {
    bVar5 = true;
LAB_012d6e30:
    local_60 = *param_2;
    uStack_58 = param_2[1];
    local_50 = param_2[2];
    local_48 = (long *)param_2[3];
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x18))();
    }
    uVar4 = FUN_012d75e8(param_1,&local_60);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    if (!bVar5) {
      *(undefined8 *)(param_1 + 0x40) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x48));
    }
    return uVar4;
  }
  lVar3 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar3;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_012d6e2c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x48));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x48));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar3;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_012d6e2c;
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
LAB_012d6e2c:
  bVar5 = false;
  goto LAB_012d6e30;
}


