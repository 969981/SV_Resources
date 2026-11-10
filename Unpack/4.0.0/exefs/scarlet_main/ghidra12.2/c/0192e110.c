/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0192e110; name: FUN_0192e110
 */


void FUN_0192e110(long param_1,ulong param_2,byte param_3)

{
  long *plVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  byte local_44 [4];
  ulong local_40;
  ulong *local_38;
  
  local_44[0] = param_3 & 1;
  plVar1 = (long *)(param_1 + 0xa0);
  local_40 = param_2;
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_0192e150;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xa8));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xa8));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_0192e150;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_0192e150:
  bVar3 = local_44[0];
  lVar5 = *(long *)(param_1 + 0x130);
  if (lVar5 != 0) {
    bVar4 = local_40 <= *(ulong *)(lVar5 + 0x20);
    lVar6 = param_1 + 0x130;
    if (bVar4) {
      lVar6 = lVar5;
    }
    while (lVar5 = *(long *)(lVar5 + (ulong)!bVar4 * 8), lVar5 != 0) {
      bVar4 = local_40 <= *(ulong *)(lVar5 + 0x20);
      if (bVar4) {
        lVar6 = lVar5;
      }
    }
    if ((lVar6 != param_1 + 0x130) && (*(ulong *)(lVar6 + 0x20) <= local_40)) {
      local_38 = &local_40;
      lVar5 = FUN_0192e4c4(param_1 + 0x128,&local_40,&local_38);
      *(byte *)(lVar5 + 0x28) = bVar3;
      goto LAB_0192e16c;
    }
  }
  FUN_0192e23c(param_1 + 0x128,&local_40,&local_40,local_44);
LAB_0192e16c:
  *(undefined8 *)(param_1 + 0xa0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xa8));
  return;
}


