/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015e50d4; name: FUN_015e50d4
 */


void FUN_015e50d4(long param_1,long param_2)

{
  void *__src;
  char cVar1;
  bool bVar2;
  size_t __n;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long local_38;
  
  plVar5 = (long *)(param_1 + 0x2a0);
  local_38 = param_2;
  lVar3 = nn::os::GetCurrentThread();
  while (*plVar5 == 0) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_015e510c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2a8));
  do {
    if (*plVar5 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2a8));
        while (*plVar5 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = lVar3;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_015e510c;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_015e510c:
  plVar5 = *(long **)(param_1 + 0x1b0);
  plVar4 = *(long **)(param_1 + 0x1b8);
  if ((plVar5 != plVar4) && (*plVar5 != local_38)) {
    do {
      plVar5 = plVar5 + 1;
      if (plVar4 == plVar5) {
        plVar5 = plVar4;
        goto LAB_015e5128;
      }
    } while (*plVar5 != local_38);
  }
  if ((plVar5 != plVar4) && (plVar5 + 1 != plVar4)) {
    plVar7 = plVar5 + 2;
    while( true ) {
      plVar6 = plVar5;
      if (plVar7[-1] != local_38) {
        plVar6 = plVar5 + 1;
        *plVar5 = plVar7[-1];
      }
      plVar5 = plVar6;
      if (plVar4 == plVar7) break;
      plVar7 = plVar7 + 1;
    }
    plVar4 = *(long **)(param_1 + 0x1b8);
  }
LAB_015e5128:
  if ((long)plVar4 - (long)plVar5 != 0) {
    __src = (void *)((long)plVar5 + ((long)plVar4 - (long)plVar5));
    __n = (long)plVar4 - (long)__src;
    if (__n != 0) {
      memmove(plVar5,__src,__n);
    }
    *(size_t *)(param_1 + 0x1b8) = (long)plVar5 + __n;
  }
  FUN_015e5244(param_1 + 0x178,&local_38);
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x2a8));
  return;
}


