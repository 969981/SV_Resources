/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003b9420; name: FUN_003b9420
 */


long FUN_003b9420(int *param_1,void *param_2,ulong param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int local_2b0 [84];
  ulong local_160;
  undefined1 auStack_158 [296];
  
  lVar4 = *(long *)(param_1 + 0x21e);
  if ((*(byte *)(lVar4 + 0x49) & 1) == 0) {
    local_2b0[0] = *param_1;
    if (0x20 < param_3) {
      return 0;
    }
    memcpy(auStack_158,param_2,param_3);
    local_160 = param_3;
    FUN_0047e5c0(*(undefined8 *)(lVar4 + 0x378));
    lVar4 = FUN_00451a40(*(undefined8 *)(*(long *)(param_1 + 0x21e) + 0x28),local_2b0);
    if (lVar4 != 0) {
      piVar1 = (int *)(lVar4 + 0x1d0);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      FUN_0047e600(*(undefined8 *)(*(long *)(param_1 + 0x21e) + 0x378));
      return lVar4;
    }
    FUN_0047e600(*(undefined8 *)(*(long *)(param_1 + 0x21e) + 0x378));
    piVar1 = (int *)(*(long *)(param_1 + 0x21e) + 0x88);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar4 = *(long *)(param_1 + 0x21e);
  }
  if (*(code **)(lVar4 + 0x68) == (code *)0x0) {
    return 0;
  }
  local_2b0[0] = 1;
  lVar4 = (**(code **)(lVar4 + 0x68))(param_1,param_2,param_3 & 0xffffffff,local_2b0);
  if (lVar4 == 0) {
    return 0;
  }
  piVar1 = (int *)(*(long *)(param_1 + 0x21e) + 0x98);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (local_2b0[0] != 0) {
    piVar1 = (int *)(lVar4 + 0x1d0);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if ((*(byte *)(*(long *)(param_1 + 0x21e) + 0x49) >> 1 & 1) == 0) {
    FUN_003b9570(*(long *)(param_1 + 0x21e),lVar4);
    return lVar4;
  }
  return lVar4;
}


