/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d06470; name: FUN_00d06470
 */


void FUN_00d06470(long *param_1,long param_2)

{
  void *__dest;
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  size_t __n;
  
  __n = *(ulong *)(param_2 + 0x10);
  if (__n == 0) {
    return;
  }
  if (0x3fe < __n) {
    __n = 0x3ff;
  }
  lVar4 = nn::os::GetCurrentThread();
  while (*param_1 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_00d064b8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 1));
  do {
    if (*param_1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 1));
        while (*param_1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar3) {
            *param_1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00d064b8;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00d064b8:
  lVar4 = param_1[3];
  iVar1 = *(int *)((long)param_1 + 0x1c);
  *(int *)((long)param_1 + 0x1c) = iVar1 + 1;
  *(int *)((long)param_1 + (long)(int)lVar4 * 0x404 + 0x20) = iVar1;
  __dest = (void *)((long)param_1 + (long)(int)lVar4 * 0x404 + 0x24);
  memcpy(__dest,*(void **)(param_2 + 8),__n);
  *(undefined1 *)((long)__dest + __n) = 0;
  iVar1 = 0;
  if ((int)param_1[3] < 0xf) {
    iVar1 = (int)param_1[3] + 1;
  }
  *(int *)(param_1 + 3) = iVar1;
  *param_1 = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 1));
  return;
}


