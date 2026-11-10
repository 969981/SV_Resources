/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f524cc; name: FUN_01f524cc
 */


void FUN_01f524cc(long param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  plVar1 = (long *)(param_1 + 0xf8);
  lVar5 = *plVar1;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 == lVar5) {
    bVar3 = true;
LAB_01f52518:
    if ((*(ulong *)(param_1 + 0xf0) <= param_2) ||
       ((param_2 < *(ulong *)(param_1 + 0x88) &&
        ((*(ulong *)(*(long *)(param_1 + 0x80) + (param_2 >> 3 & 0x1ffffffffffffff8)) >>
          (param_2 & 0x3f) & 1) != 0)))) {
      if (bVar3) {
        return;
      }
      *(undefined8 *)(param_1 + 0xf8) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x100));
      return;
    }
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x48) + param_2 * 0x10 + 8);
    if (param_2 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 4)) {
      FUN_01285250(param_1 + 0x48,param_2);
    }
    if (!bVar3) {
      *(undefined8 *)(param_1 + 0xf8) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x100));
    }
    FUN_01f58c54(*(undefined8 *)(param_1 + 0x40),uVar6);
    return;
  }
  lVar4 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_01f52514;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x100));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x100));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01f52514;
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
LAB_01f52514:
  bVar3 = false;
  goto LAB_01f52518;
}


