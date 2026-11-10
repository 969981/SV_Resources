/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bb4aec; name: FUN_00bb4aec
 */


undefined8 FUN_00bb4aec(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  
  if (0 < *(int *)(param_2 + 0x58)) {
    lVar2 = 0;
    do {
      uVar1 = FUN_00bb4aec(param_1,*(undefined8 *)(*(long *)(param_2 + 0x60) + lVar2 * 8 + 8),
                           param_3,param_4);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_2 + 0x58));
  }
  if (0 < *(int *)(param_2 + 0x40)) {
    lVar2 = 0;
    do {
      uVar1 = FUN_00bb4bb0(param_1,*(undefined8 *)(*(long *)(param_2 + 0x48) + lVar2 * 8 + 8),
                           param_3,param_4);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_2 + 0x40));
  }
  return 1;
}


