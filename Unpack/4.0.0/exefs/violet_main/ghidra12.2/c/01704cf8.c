/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01704cf8; name: FUN_01704cf8
 */


void FUN_01704cf8(long param_1,undefined4 param_2)

{
  if (*(long *)(param_1 + 0x1b8) != 0) {
    *(undefined4 *)(param_1 + 0x170) = param_2;
    *(undefined4 *)(*(long *)(param_1 + 0x1b8) + 0x30) = param_2;
  }
  return;
}


