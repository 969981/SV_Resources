/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015c36bc; name: FUN_015c36bc
 */


void FUN_015c36bc(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *local_48;
  
  FUN_015c37c0(param_3);
  lVar5 = *param_1;
  plVar1 = (long *)(lVar5 + 0x40);
  lVar4 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_015c3704;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0x48));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0x48));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_015c3704;
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
LAB_015c3704:
  *(undefined4 *)(lVar5 + 0x60) = 11000;
  *(undefined8 *)(lVar5 + 0x40) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar5 + 0x48));
  local_48 = (long *)(*param_1 + 0x20);
  plVar1 = (long *)0x0;
  if (*param_1 != 0) {
    (**(code **)(*local_48 + 0x10))();
    plVar1 = local_48;
  }
  local_48 = plVar1;
  FUN_015c3dd0(param_2,&local_48);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x18))();
  }
  return;
}


