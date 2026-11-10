/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00316170; name: FUN_00316170
 */


ulong FUN_00316170(int *param_1,int param_2)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  
  if ((uint)param_1[1] <= param_2 - 0x3eU) {
    return 0;
  }
  uVar3 = param_1[6];
  uVar1 = (param_1[1] - param_2) + *param_1 + 0x3d;
  uVar6 = 0;
  if (uVar3 != 0) {
    uVar6 = uVar1 / uVar3;
  }
  uVar7 = *(ulong *)(*(long *)(param_1 + 8) + (ulong)(uVar1 - uVar6 * uVar3) * 8);
  uVar1 = (uint)uVar7 & 3;
  if (1 < uVar1) {
    plVar2 = (long *)((uVar7 & 0xfffffffffffffffc) + 0x40);
    if (uVar1 == 2) {
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = *plVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    else {
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = *plVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  return uVar7;
}


