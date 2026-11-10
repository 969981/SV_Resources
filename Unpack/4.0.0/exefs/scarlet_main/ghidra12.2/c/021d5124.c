/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021d5124; name: FUN_021d5124
 */


byte FUN_021d5124(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  byte bVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x138) == 0) {
    bVar5 = 0;
  }
  else {
    plVar1 = (long *)(param_1 + 0x148);
    lVar6 = *plVar1;
    lVar4 = nn::os::GetCurrentThread();
    if (lVar4 != lVar6) {
      lVar4 = nn::os::GetCurrentThread();
      while (*plVar1 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') goto LAB_021d516c;
      }
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x150));
      do {
        if (*plVar1 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x150));
            while (*plVar1 == 0) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = lVar4;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_021d516c;
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
LAB_021d516c:
      if (*(long *)(param_1 + 0x138) == 0) {
        bVar5 = 0;
      }
      else {
        bVar5 = *(byte *)(*(long *)(param_1 + 0x138) + 0x45) & 1;
      }
      *(undefined8 *)(param_1 + 0x148) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x150));
      return bVar5;
    }
    bVar5 = *(byte *)(*(long *)(param_1 + 0x138) + 0x45) & 1;
  }
  return bVar5;
}


