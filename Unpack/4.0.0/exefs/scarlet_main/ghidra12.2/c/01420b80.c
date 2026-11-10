/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01420b80; name: FUN_01420b80
 */


void FUN_01420b80(long param_1,short param_2)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  size_t __n;
  long lVar5;
  ulong uVar6;
  short *psVar7;
  void *__dest;
  
  plVar1 = (long *)(param_1 + 0x180);
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_01420bb8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x188));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x188));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_01420bb8;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01420bb8:
  lVar5 = *(long *)(param_1 + 0x148);
  iVar2 = (int)((ulong)(*(long *)(param_1 + 0x150) - lVar5) >> 4) * -0x33333333;
  if (0 < iVar2) {
    uVar6 = 0;
    psVar7 = (short *)(lVar5 + 0x40);
    do {
      if (*psVar7 == param_2) {
        lVar5 = lVar5 + (uVar6 & 0xffffffff) * 0x50;
        iVar2 = *(int *)(lVar5 + 0x44) + -1;
        *(int *)(lVar5 + 0x44) = iVar2;
        if (iVar2 == 0) {
          __dest = (void *)(*(long *)(param_1 + 0x148) + (uVar6 & 0xffffffff) * 0x50);
          __n = *(long *)(param_1 + 0x150) - ((long)__dest + 0x50);
          if (__n != 0) {
            memmove(__dest,(void *)((long)__dest + 0x50),__n);
          }
          *(size_t *)(param_1 + 0x150) = (long)__dest + __n;
        }
        break;
      }
      uVar6 = uVar6 + 1;
      psVar7 = psVar7 + 0x28;
    } while ((long)iVar2 != uVar6);
  }
  *(undefined8 *)(param_1 + 0x180) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x188));
  return;
}


