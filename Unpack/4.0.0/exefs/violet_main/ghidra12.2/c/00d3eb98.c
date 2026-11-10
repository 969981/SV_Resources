/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d3eb98; name: FUN_00d3eb98
 */


void FUN_00d3eb98(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  *(undefined2 *)(param_1 + 0x7c1) = 0x100;
  *(undefined1 *)(param_1 + 0x7c3) = 0;
  plVar1 = (long *)(param_1 + 0x708);
  lVar5 = *plVar1;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 == lVar5) {
    cVar2 = *(char *)(param_1 + 0x720);
LAB_00d3ebd4:
    if (cVar2 == '\0') {
      FUN_00e5ad48(param_1);
    }
    FUN_00e5af00(param_1);
    return;
  }
  lVar4 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_00d3ec10;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x710));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x710));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00d3ec10;
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
LAB_00d3ec10:
  cVar2 = *(char *)(param_1 + 0x720);
  *(undefined8 *)(param_1 + 0x708) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x710));
  goto LAB_00d3ebd4;
}


