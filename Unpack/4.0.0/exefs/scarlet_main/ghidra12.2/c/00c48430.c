/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c48430; name: FUN_00c48430
 */


void FUN_00c48430(long param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  
  plVar1 = (long *)(param_1 + 0x1d0);
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_00c48470;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1d8));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1d8));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00c48470;
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
LAB_00c48470:
  puVar6 = *(undefined8 **)(param_1 + 0xc0);
  puVar2 = *(undefined8 **)(param_1 + 200);
  lVar5 = param_1 + 0x40;
  if ((puVar6 != puVar2) && (FUN_00c495e0(lVar5,*puVar6), puVar6 + 1 != puVar2)) {
    FUN_00c495e0(lVar5,puVar6[1]);
    for (puVar6 = puVar6 + 2; puVar6 != puVar2; puVar6 = puVar6 + 1) {
      FUN_00c495e0(lVar5,*puVar6);
    }
  }
  puVar6 = *(undefined8 **)(param_1 + 0xf8);
  puVar2 = *(undefined8 **)(param_1 + 0x100);
  if (puVar6 != puVar2) {
    FUN_00c493f0(lVar5,*puVar6);
    if (puVar6 + 1 != puVar2) {
      FUN_00c493f0(lVar5,puVar6[1]);
      for (puVar6 = puVar6 + 2; puVar6 != puVar2; puVar6 = puVar6 + 1) {
        FUN_00c493f0(lVar5,*puVar6);
      }
    }
    puVar6 = *(undefined8 **)(param_1 + 0xf8);
  }
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 **)(param_1 + 0x100) = puVar6;
  if ((*(long *)(param_1 + 0x48) == *(long *)(param_1 + 0x50)) && (param_1 != param_2)) {
    FUN_00c495e0(lVar5,param_2);
  }
  if (((*(long *)(param_1 + 0x80) == *(long *)(param_1 + 0x88)) && (param_1 != param_3)) &&
     (*(long *)(param_1 + 0xf8) == *(long *)(param_1 + 0x100))) {
    FUN_00c493f0(lVar5,param_3);
  }
  *(ulong *)(param_1 + 0x1b8) = *(ulong *)(param_1 + 0x1b8) & 0xfffffffffffffffc | 1;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1d8));
  return;
}


