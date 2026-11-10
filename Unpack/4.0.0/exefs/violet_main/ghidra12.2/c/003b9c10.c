/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003b9c10; name: FUN_003b9c10
 */


undefined8 FUN_003b9c10(long param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  
  if ((((*(long *)(param_1 + 0x5d0) != 0) && ((*(byte *)(param_1 + 0x44) & 1) == 0)) &&
      (iVar4 = FUN_003c38d0(param_1), iVar4 == 0)) && (iVar4 = FUN_003c3900(param_1), iVar4 == 0)) {
    FUN_003b9ad0(*(undefined8 *)(param_1 + 0x878),*(undefined8 *)(param_1 + 0x5d0),1);
  }
  if ((**(long **)(param_1 + 0x660) == *(long *)(param_1 + 8)) ||
     (uVar5 = FUN_003b50f0(param_1), (int)uVar5 != 0)) {
    if (param_2 != 0) {
      piVar1 = (int *)(param_2 + 0x1d0);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *(undefined8 *)(param_1 + 0x670) = *(undefined8 *)(param_2 + 0x1c8);
    }
    FUN_003b8e30(*(undefined8 *)(param_1 + 0x5d0));
    uVar5 = 1;
    *(long *)(param_1 + 0x5d0) = param_2;
  }
  return uVar5;
}


