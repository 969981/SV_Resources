/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015a289c; name: FUN_015a289c
 */


void FUN_015a289c(long param_1,undefined8 param_2)

{
  void *__src;
  char cVar1;
  size_t __n;
  long lVar2;
  void *__dest;
  long lVar3;
  bool bVar4;
  long *plVar5;
  
  plVar5 = (long *)(param_1 + 0x208);
  lVar3 = *plVar5;
  lVar2 = nn::os::GetCurrentThread();
  if (lVar2 == lVar3) {
    plVar5 = (long *)0x0;
    bVar4 = true;
LAB_015a28e8:
    __dest = (void *)FUN_028bfd70(*(undefined8 *)(param_1 + 0x220),*(undefined8 *)(param_1 + 0x228),
                                  param_2);
    lVar2 = *(long *)(param_1 + 0x228) - (long)__dest;
    if (lVar2 != 0) {
      __src = (void *)((long)__dest + lVar2);
      __n = *(long *)(param_1 + 0x228) - (long)__src;
      if (__n != 0) {
        memmove(__dest,__src,__n);
      }
      *(size_t *)(param_1 + 0x228) = (long)__dest + __n;
    }
    if (bVar4) {
      return;
    }
    *plVar5 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar5 + 1));
    return;
  }
  lVar2 = nn::os::GetCurrentThread();
  while (*plVar5 == 0) {
    cVar1 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar4) {
      *plVar5 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_015a28e4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x210));
  do {
    if (*plVar5 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x210));
        while (*plVar5 == 0) {
          cVar1 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar4) {
            *plVar5 = lVar2;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_015a28e4;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar4) {
      *plVar5 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_015a28e4:
  bVar4 = false;
  goto LAB_015a28e8;
}


