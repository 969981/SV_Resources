/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f6d78c; name: FUN_01f6d78c
 */


undefined8 FUN_01f6d78c(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  if (*(long *)(param_1 + 0x50) == 0) {
    FUN_01f6da10(&local_40,*(undefined8 *)(param_1 + 8));
    lVar3 = local_40;
    local_40 = 0;
    lVar2 = *(long *)(param_1 + 0x50);
    *(long *)(param_1 + 0x50) = lVar3;
    if (lVar2 == 0) {
      *(undefined8 *)(param_1 + 0x58) = local_38;
      *(undefined8 *)(param_1 + 0x60) = local_30;
      *(undefined8 *)(param_1 + 0x68) = local_28;
      if (lVar3 == 0) {
        return 0;
      }
    }
    else {
      FUN_01cf3674(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0x60) = local_30;
      *(undefined8 *)(param_1 + 0x68) = local_28;
      *(undefined8 *)(param_1 + 0x58) = local_38;
      if (*(long *)(param_1 + 0x50) == 0) {
        return 0;
      }
    }
    local_40 = 0;
    uVar1 = FUN_01f6dab4();
    if ((uVar1 & 1) != 0) {
      return 1;
    }
    lVar3 = *(long *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = 0;
    if (lVar3 != 0) {
      FUN_01cf3674(param_1 + 0x58);
    }
  }
  return 0;
}


