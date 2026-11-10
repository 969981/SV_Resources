/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007d8da8; name: FUN_007d8da8
 */


void FUN_007d8da8(long param_1,undefined4 param_2)

{
  *(undefined1 *)(param_1 + 0x780) = 0;
  if (*(int *)(param_1 + 0x784) == 0) {
    *(undefined4 *)(param_1 + 0x784) = param_2;
    return;
  }
  return;
}


