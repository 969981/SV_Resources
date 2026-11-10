/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d4d458; name: FUN_00d4d458
 */


undefined8 FUN_00d4d458(long *param_1,ulong param_2,uint param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  lVar4 = *param_1;
  lVar5 = param_1[1];
  if (lVar4 != lVar5) {
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
    if (0 < *piVar1) {
      uVar6 = 0;
      do {
        nn::os::SleepThread((uVar6 >> 7) * 1000000);
        uVar6 = (ulong)((int)uVar6 + 1);
      } while (0 < *piVar1);
    }
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
  if ((*PTR_DAT_047e6980 == '\0') && ((PTR_DAT_047e6ce8[0x35] != '\0' || ((param_2 & 1) == 0)))) {
    if (lVar4 != lVar5) {
      nn::os::SignalEvent((EventType *)PTR_DAT_047e6fe8);
    }
  }
  else {
    FUN_0344f608(param_1,param_3 & 1,1);
  }
  return 1;
}


