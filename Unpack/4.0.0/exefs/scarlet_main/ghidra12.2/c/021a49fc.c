/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021a49fc; name: FUN_021a49fc
 */


undefined8 FUN_021a49fc(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  ulong local_28;
  
  plVar6 = (long *)(param_1 + 0xb108);
  lVar5 = *plVar6;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar5) {
    plVar6 = (long *)0x0;
    bVar2 = true;
LAB_021a4a50:
    local_28 = *param_2 - 1;
    if (local_28 <
        (ulong)((*(long *)(param_1 + 0xb128) - *(long *)(param_1 + 0xb120) >> 5) *
               -0x5555555555555555)) {
      FUN_021a59b0(param_1 + 0xb4b0,&local_28);
      if (0x40 < *(ulong *)(param_1 + 0xb4e0)) {
        *(ulong *)(param_1 + 0xb4e0) = *(ulong *)(param_1 + 0xb4e0) - 1;
        *(long *)(param_1 + 0xb4d8) = *(long *)(param_1 + 0xb4d8) + 1;
        FUN_021a5a44(param_1 + 0xb4b0);
      }
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
    if (!bVar2) {
      *plVar6 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar6 + 1));
    }
    return uVar4;
  }
  lVar3 = nn::os::GetCurrentThread();
  while (*plVar6 == 0) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_021a4a48;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xb110));
  do {
    if (*plVar6 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xb110));
        while (*plVar6 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar3;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_021a4a48;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_021a4a48:
  bVar2 = false;
  goto LAB_021a4a50;
}


