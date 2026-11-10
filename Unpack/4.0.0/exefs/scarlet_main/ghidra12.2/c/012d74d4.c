/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012d74d4; name: FUN_012d74d4
 */


void FUN_012d74d4(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  plVar1 = (long *)(param_1 + 0x40);
  lVar5 = *plVar1;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar5) {
    bVar4 = true;
LAB_012d7520:
    lVar5 = *(long *)(*(long *)(param_1 + 0x168) + param_2 * 8);
    lVar6 = *(long *)(lVar5 + 0x48);
    lVar3 = *(long *)(lVar5 + 0x50);
    if (lVar3 - lVar6 == -0x38) {
      while (lVar6 != lVar3) {
        lVar3 = lVar3 + -0x38;
        FUN_012d97a0(lVar3);
      }
      *(long *)(lVar5 + 0x50) = lVar6;
    }
    else {
      FUN_012d87bc((long *)(lVar5 + 0x48),1);
    }
    if (bVar4) {
      return;
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x48));
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
    if (cVar2 == '\0') goto LAB_012d751c;
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
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar3;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_012d751c;
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
LAB_012d751c:
  bVar4 = false;
  goto LAB_012d7520;
}


