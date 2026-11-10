/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00efa1d0; name: FUN_00efa1d0
 */


uint FUN_00efa1d0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x180) == 0) {
    uVar4 = 1;
LAB_00efa23c:
    return uVar4 & 1;
  }
  plVar1 = (long *)(param_1 + 0x348);
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_00efa208;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x350));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x350));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00efa208;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00efa208:
  if (((*(long *)(param_1 + 0x308) == 0) ||
      ((*(byte *)(*(long *)(param_1 + 0x308) + 0x1e8) & 1) == 0)) ||
     (*(long *)(param_1 + 0x340) == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00efa2a4();
  }
  *(undefined8 *)(param_1 + 0x348) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x350));
  goto LAB_00efa23c;
}


