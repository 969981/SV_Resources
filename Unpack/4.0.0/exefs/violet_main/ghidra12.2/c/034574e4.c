/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034574e4; name: FUN_034574e4
 */


undefined4 FUN_034574e4(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  time_t tVar5;
  ulong uVar6;
  
  tVar5 = time((time_t *)0x0);
  *(time_t *)PTR_DAT_047e7068 = tVar5;
  if (PTR_DAT_047e6ce8[0x35] == '\0') {
    uVar4 = 1;
  }
  else {
    uVar4 = FUN_03513540(param_1 + 0x10);
  }
  if (*param_1 == param_1[1]) {
    if (*PTR_DAT_047e6980 == '\0') {
      return uVar4;
    }
  }
  else {
    FUN_01065210(param_1,0,4);
    piVar1 = (int *)((long)param_1 + 0x9c);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (*piVar1 < 1) {
      piVar1 = (int *)((long)param_1 + 0x7c);
      DataMemoryBarrier(2,3);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    else {
      uVar6 = 0;
      do {
        nn::os::SleepThread((uVar6 >> 7) * 1000000);
        uVar6 = (ulong)((int)uVar6 + 1);
      } while (0 < *piVar1);
      piVar1 = (int *)((long)param_1 + 0x7c);
      DataMemoryBarrier(2,3);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*PTR_DAT_047e6980 == '\0') {
      nn::os::SignalEvent((EventType *)PTR_DAT_047e6fe8);
      return uVar4;
    }
  }
  FUN_0344f608(param_1,0,1);
  return uVar4;
}


