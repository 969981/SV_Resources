/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c9a860; name: FUN_01c9a860
 */


void FUN_01c9a860(long param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_28;
  
  puVar3 = PTR_DAT_047d38f8;
  lVar6 = *(long *)PTR_DAT_047d38f8;
  lVar4 = nn::os::GetCurrentThread();
  local_28 = param_2;
  if (lVar4 == lVar6) {
    FUN_01c9a964(param_1 + 0x28,&local_28);
    return;
  }
  uVar5 = nn::os::GetCurrentThread();
  while (*(long *)puVar3 == 0) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar2) {
      *(undefined8 *)puVar3 = uVar5;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_01c9a8d0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(puVar3 + 8));
  do {
    if (*(long *)puVar3 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(puVar3 + 8));
        while (*(long *)puVar3 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar2) {
            *(undefined8 *)puVar3 = uVar5;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_01c9a8d0;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar2) {
      *(undefined8 *)puVar3 = uVar5;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_01c9a8d0:
  FUN_01c9a964(param_1 + 0x28,&local_28);
  *(undefined8 *)puVar3 = 0;
  nn::os::SignalLightEvent((LightEventType *)(puVar3 + 8));
  return;
}


