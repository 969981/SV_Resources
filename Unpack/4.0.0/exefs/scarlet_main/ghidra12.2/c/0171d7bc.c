/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0171d7bc; name: FUN_0171d7bc
 */


void FUN_0171d7bc(long param_1,long param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  
  plVar1 = (long *)(param_1 + 0x110);
  lVar5 = *plVar1;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar5) {
    bVar4 = true;
LAB_0171d80c:
    if ((param_2 != param_3) &&
       (FUN_0171d8ec(param_1,*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10),
                     *(undefined4 *)(param_2 + 0x14)), param_2 + 0x18 != param_3)) {
      FUN_0171d8ec(param_1,*(undefined8 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x28),
                   *(undefined4 *)(param_2 + 0x2c));
      for (param_2 = param_2 + 0x30; param_2 != param_3; param_2 = param_2 + 0x18) {
        FUN_0171d8ec(param_1,*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10),
                     *(undefined4 *)(param_2 + 0x14));
      }
    }
    if (bVar4) {
      return;
    }
    *(undefined8 *)(param_1 + 0x110) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x118));
    return;
  }
  lVar3 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar3;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_0171d808;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x118));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x118));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar3;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_0171d808;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar3;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_0171d808:
  bVar4 = false;
  goto LAB_0171d80c;
}


