/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f378c4; name: FUN_00f378c4
 */


void FUN_00f378c4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  
  plVar1 = (long *)(param_1 + 0x318);
  lVar4 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_00f378f4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 800));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 800));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00f378f4;
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
LAB_00f378f4:
  if ((*(long *)(param_1 + 0x498) != 0) && (**(char **)(*(long *)(param_1 + 0x498) + 0x38) != '\0'))
  {
    FUN_00f379e4(param_1);
    *(undefined1 *)(param_1 + 0x628) = 1;
    *(undefined1 *)(param_1 + 0x629) = 1;
    if (*(long **)(param_1 + 0x30) != *(long **)(param_1 + 0x28)) {
      *(undefined1 *)(**(long **)(param_1 + 0x28) + 0x50) = 1;
      if (1 < (ulong)(*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28) >> 3)) {
        *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x50) = 1;
        lVar4 = *(long *)(param_1 + 0x28);
        if (2 < (ulong)(*(long *)(param_1 + 0x30) - lVar4 >> 3)) {
          uVar5 = 2;
          do {
            *(undefined1 *)(*(long *)(lVar4 + uVar5 * 8) + 0x50) = 1;
            lVar4 = *(long *)(param_1 + 0x28);
            uVar5 = uVar5 + 1;
          } while (uVar5 < (ulong)(*(long *)(param_1 + 0x30) - lVar4 >> 3));
        }
      }
    }
  }
  return;
}


