/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c6a584; name: FUN_00c6a584
 */


void FUN_00c6a584(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  size_t __n;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar5 = (long *)(param_1 + 0x138);
  lVar4 = nn::os::GetCurrentThread();
  while (*plVar5 == 0) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = lVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_00c6a5c0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x140));
  do {
    if (*plVar5 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x140));
        while (*plVar5 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = lVar4;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_00c6a5c0;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = lVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_00c6a5c0:
  plVar5 = *(long **)(param_1 + 8);
  plVar7 = *(long **)(param_1 + 0x10);
  if (plVar5 != plVar7) {
    while ((long *)*plVar5 != param_2) {
      plVar5 = plVar5 + 1;
      if (plVar7 == plVar5) goto LAB_00c6a644;
    }
  }
  if (plVar5 != plVar7) {
    lVar4 = *plVar5;
    if ((*(byte *)(lVar4 + 0x30) < 0xb) && (*(char *)(lVar4 + 0x20) != *(char *)(lVar4 + 0x21))) {
      *(short *)(param_1 + 0x130) = *(short *)(param_1 + 0x130) + -1;
    }
    uVar6 = *(ulong *)(lVar4 + 0x28);
    if (((uint)uVar6 >> 3 & 1) != 0) {
      plVar5 = *(long **)(param_1 + 0x78);
      do {
        plVar7 = plVar5;
        if (*(long **)(param_1 + 0x80) == plVar7) goto LAB_00c6a6ec;
        plVar5 = plVar7 + 1;
      } while (*plVar7 != *(long *)(lVar4 + 8));
      __n = (long)*(long **)(param_1 + 0x80) - (long)plVar5;
      if (__n != 0) {
        memmove(plVar7,plVar5,__n);
      }
      *(size_t *)(param_1 + 0x80) = (long)plVar5 + (__n - 8);
      uVar6 = *(ulong *)(lVar4 + 0x28);
LAB_00c6a6ec:
      *(ulong *)(lVar4 + 0x58) = uVar6 >> 2 & 1;
      if (((uint)uVar6 >> 2 & 1) != 0) {
        FUN_00c43b2c((undefined8 *)(param_1 + 0x78),(long *)(lVar4 + 8));
      }
    }
    uVar3 = (**(code **)(*param_2 + 0x10))(param_2,*(undefined1 *)(param_1 + 0x133));
    FUN_00d727c8(param_1,uVar3,param_2);
    *(undefined1 *)(param_1 + 0x132) = 1;
  }
LAB_00c6a644:
  *(undefined8 *)(param_1 + 0x138) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x140));
  return;
}


