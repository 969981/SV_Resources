/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021dab7c; name: FUN_021dab7c
 */


void * FUN_021dab7c(long param_1,void *param_2,long param_3)

{
  size_t *psVar1;
  char cVar2;
  size_t sVar3;
  void *__dest;
  long lVar4;
  ulong uVar5;
  size_t __n;
  bool bVar6;
  
  psVar1 = (size_t *)(param_1 + 0x20);
  __n = *psVar1;
  sVar3 = nn::os::GetCurrentThread();
  if (sVar3 != __n) {
    __n = nn::os::GetCurrentThread();
LAB_021dabb8:
    if (*psVar1 == 0) goto code_r0x021dabc0;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x28));
    do {
      if (*psVar1 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x28));
          while (*psVar1 == 0) {
            cVar2 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = __n;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_021dabc8;
          }
        } while( true );
      }
      cVar2 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = __n;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_021dabc8:
    bVar6 = false;
    goto LAB_021dabcc;
  }
  bVar6 = true;
LAB_021dabcc:
  if (param_2 == (void *)0x0) {
    if (param_3 == 0) {
      param_2 = (void *)0x0;
      goto LAB_021dac6c;
    }
    lVar4 = 0x10;
LAB_021dac00:
    __dest = (void *)FUN_00c86974(param_1 + 0x38,param_3,lVar4);
    if ((param_2 != (void *)0x0) && (__dest != (void *)0x0)) {
      memmove(__dest,param_2,__n);
      uVar5 = (ulong)*(byte *)((long)param_2 + -1);
      goto LAB_021dac2c;
    }
  }
  else {
    uVar5 = (ulong)*(byte *)((long)param_2 + -1);
    __n = *(long *)((long)param_2 + (-0x10 - uVar5)) -
          (ulong)*(byte *)((long)param_2 + (-3 - uVar5));
    if (param_3 - 1U < __n) goto LAB_021dac6c;
    __dest = (void *)0x0;
    if (param_3 != 0) {
      lVar4 = 1L << ((ulong)*(byte *)((long)param_2 + (-2 - uVar5)) & 0x3f);
      goto LAB_021dac00;
    }
LAB_021dac2c:
    *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + -1;
    uVar5 = *(ulong *)((long)param_2 + (-0x10 - uVar5));
    lVar4 = uVar5 + 0x18;
    if (uVar5 < 0x11) {
      lVar4 = 0x28;
    }
    *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) - lVar4;
    FUN_00c6c244(param_1 + 0x38);
  }
  param_2 = __dest;
LAB_021dac6c:
  if (!bVar6) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x28));
  }
  return param_2;
code_r0x021dabc0:
  cVar2 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
  if (bVar6) {
    *psVar1 = __n;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_021dabc8;
  goto LAB_021dabb8;
}


