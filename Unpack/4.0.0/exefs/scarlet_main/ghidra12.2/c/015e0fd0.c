/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015e0fd0; name: FUN_015e0fd0
 */


void FUN_015e0fd0(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  size_t __n;
  long lVar4;
  undefined1 auStack_58 [8];
  long local_50;
  undefined1 **ppuStack_48;
  undefined1 *local_28;
  
  plVar1 = (long *)(param_1 + 0x28);
  lVar4 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_015e100c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x30));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x30));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_015e100c;
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
LAB_015e100c:
  plVar1 = *(long **)(param_1 + 0x40);
  do {
    if (plVar1 == *(long **)(param_1 + 0x48)) {
LAB_015e1078:
      *(undefined8 *)(param_1 + 0x28) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x30));
      return;
    }
    if (*plVar1 == param_2) {
      local_28 = auStack_58;
      local_50 = param_2 + 0x108;
      ppuStack_48 = &local_28;
      FUN_015e10e4(local_50,&local_50);
      __n = (*(long *)(param_1 + 0x48) - (long)plVar1) - 8;
      if (__n != 0) {
        memmove(plVar1,plVar1 + 1,__n);
      }
      *(size_t *)(param_1 + 0x48) = (long)plVar1 + __n;
      goto LAB_015e1078;
    }
    plVar1 = plVar1 + 1;
  } while( true );
}


