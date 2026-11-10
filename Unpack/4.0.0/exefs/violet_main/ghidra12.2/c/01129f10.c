/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01129f10; name: FUN_01129f10
 */


ulong FUN_01129f10(long param_1)

{
  ulong uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    if ((((*(int *)(param_1 + 0x1c) != 0) || (*(int *)(param_1 + 0x11c) != 0)) ||
        (*(int *)(param_1 + 300) == 0)) ||
       ((*(int *)(param_1 + 0x40) == 0 || (*(uint *)(param_1 + 8) <= *(int *)(param_1 + 0xc) + 2U)))
       ) {
      return 0;
    }
    if (*(int *)(param_1 + 0x68c) == 0) {
      uVar1 = FUN_00101f80(param_1,0);
      return uVar1;
    }
    uVar1 = (ulong)(*(int *)(param_1 + 0x68c) - 1);
  }
  return uVar1;
}


