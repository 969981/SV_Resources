/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021d9ec4; name: FUN_021d9ec4
 */


void FUN_021d9ec4(long param_1,long param_2)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  plVar1 = (long *)(param_1 + 0x20);
  lVar7 = *plVar1;
  lVar5 = nn::os::GetCurrentThread();
  if (lVar5 == lVar7) {
    if (param_2 == 0) {
      return;
    }
    bVar2 = *(byte *)(param_2 + -1);
    *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + -1;
    uVar6 = *(ulong *)((param_2 - (ulong)bVar2) + -0x10);
    lVar5 = uVar6 + 0x18;
    if (uVar6 < 0x11) {
      lVar5 = 0x28;
    }
    *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) - lVar5;
    FUN_00c6c244(param_1 + 0x38);
    return;
  }
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_021d9f0c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x28));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x28));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_021d9f0c;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_021d9f0c:
  if (param_2 != 0) {
    bVar2 = *(byte *)(param_2 + -1);
    *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + -1;
    uVar6 = *(ulong *)((param_2 - (ulong)bVar2) + -0x10);
    lVar5 = uVar6 + 0x18;
    if (uVar6 < 0x11) {
      lVar5 = 0x28;
    }
    *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) - lVar5;
    FUN_00c6c244(param_1 + 0x38);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x28));
  return;
}


