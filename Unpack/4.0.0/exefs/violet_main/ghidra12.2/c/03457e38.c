/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03457e38; name: FUN_03457e38
 */


undefined8 FUN_03457e38(long *param_1,ushort param_2,ushort param_3,undefined4 param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  
  lVar4 = FUN_01065210(*(undefined8 *)PTR_DAT_047e2fe8,0x36,0xc);
  *(ushort *)(lVar4 + 8) = param_2 & 1;
  piVar1 = (int *)((long)param_1 + 0x9c);
  *(ushort *)(lVar4 + 10) = param_3 & 1;
  *(undefined4 *)(lVar4 + 4) = param_4;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (*param_1 == param_1[1]) {
    if (*PTR_DAT_047e6980 == '\0') {
      return 1;
    }
  }
  else {
    FUN_01065210(param_1,0,4);
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
      uVar5 = 0;
      do {
        nn::os::SleepThread((uVar5 >> 7) * 1000000);
        uVar5 = (ulong)((int)uVar5 + 1);
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
      return 1;
    }
  }
  FUN_0344f608(param_1,0,1);
  return 1;
}


