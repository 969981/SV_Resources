/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ea60f0; name: FUN_01ea60f0
 */


ulong FUN_01ea60f0(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  
  plVar1 = (long *)(param_1 + 0x300);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_01ea612c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x308));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x308));
        while (*plVar1 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01ea612c;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01ea612c:
  plVar1 = (long *)*param_2;
  plVar3 = (long *)param_2[1];
  plVar7 = plVar1;
  if ((plVar1 != plVar3) && (*plVar1 != *param_3)) {
    do {
      plVar7 = plVar7 + 0xb;
      if (plVar3 == plVar7) {
        plVar7 = plVar3;
        goto LAB_01ea6164;
      }
    } while (*plVar7 != *param_3);
  }
LAB_01ea6164:
  uVar2 = 0;
  if (plVar3 != plVar7) {
    uVar2 = (ulong)(uint)((int)((ulong)((long)plVar7 - (long)plVar1) >> 3) * -0x45d1745d) << 0x20;
  }
  *(undefined8 *)(param_1 + 0x300) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x308));
  return uVar2 | plVar3 != plVar7;
}


