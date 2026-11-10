/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018c9e6c; name: FUN_018c9e6c
 */


void FUN_018c9e6c(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  size_t __n;
  long lVar3;
  long *__dest;
  long *plVar4;
  
  plVar4 = (long *)(param_1 + 0xe08);
  lVar3 = nn::os::GetCurrentThread();
  while (*plVar4 == 0) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_018c9ea4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xe10));
  do {
    if (*plVar4 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xe10));
        while (*plVar4 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar3;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_018c9ea4;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_018c9ea4:
  plVar4 = *(long **)(param_1 + 0xdc8);
  do {
    __dest = plVar4;
    if (*(long **)(param_1 + 0xdd0) == __dest) goto LAB_018c9ee4;
    plVar4 = __dest + 1;
  } while (*__dest != param_2);
  __n = (long)*(long **)(param_1 + 0xdd0) - (long)plVar4;
  if (__n != 0) {
    memmove(__dest,plVar4,__n);
  }
  *(size_t *)(param_1 + 0xdd0) = (long)plVar4 + (__n - 8);
LAB_018c9ee4:
  *(undefined8 *)(param_1 + 0xe08) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xe10));
  return;
}


