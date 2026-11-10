/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00adf4b4; name: FUN_00adf4b4
 */


ulong FUN_00adf4b4(long param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long local_28;
  
  if (*(long *)(param_1 + 0x58) == 0) {
    local_28 = 0;
  }
  else {
    FUN_01c27dd8(&local_28);
    if (local_28 != 0) {
      uVar3 = (uint)*(byte *)(param_1 + 0xa10);
      if (*(byte *)(param_1 + 0xa10) == 0) {
LAB_00adf524:
        uVar2 = 0;
      }
      else {
        uVar3 = 1;
        if (*(long *)(param_1 + 0xa18) == 0) goto LAB_00adf524;
        uVar2 = 1;
        if (*(long *)(param_1 + 0xa18) != *(long *)(local_28 + 0x50)) {
          uVar2 = 2;
        }
      }
      if (*(char *)(param_1 + 0x1358) != '\0') {
        uVar3 = uVar3 + 1;
        if ((*(long *)(param_1 + 0x1360) != 0) &&
           (bVar1 = uVar2 != 1, uVar2 = 1,
           *(long *)(param_1 + 0x1360) != *(long *)(local_28 + 0x50) && bVar1)) {
          uVar2 = 2;
        }
      }
      if (*(char *)(param_1 + 0x1ca0) != '\0') {
        uVar3 = uVar3 + 1;
        if ((*(long *)(param_1 + 0x1ca8) != 0) &&
           (bVar1 = uVar2 != 1, uVar2 = 1,
           *(long *)(param_1 + 0x1ca8) != *(long *)(local_28 + 0x50) && bVar1)) {
          uVar2 = 2;
        }
      }
      if (*(char *)(param_1 + 0x25e8) != '\0') {
        uVar3 = uVar3 + 1;
        if ((*(long *)(param_1 + 0x25f0) != 0) &&
           (bVar1 = uVar2 != 1, uVar2 = 1,
           *(long *)(param_1 + 0x25f0) != *(long *)(local_28 + 0x50) && bVar1)) {
          uVar2 = 2;
        }
      }
      uVar4 = (ulong)(*(int *)(local_28 + 0xf8) <= (int)uVar3);
      goto LAB_00adf5ac;
    }
  }
  uVar2 = 2;
  uVar4 = 1;
LAB_00adf5ac:
  FUN_01c1abf8(&local_28);
  return uVar4 | (ulong)uVar2 << 0x20;
}


