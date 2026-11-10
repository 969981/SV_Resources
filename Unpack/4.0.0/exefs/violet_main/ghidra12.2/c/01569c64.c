/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01569c64; name: FUN_01569c64
 */


void FUN_01569c64(long param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 0x248) == '\0') {
    *(undefined4 *)(param_1 + 0x24c) = param_2;
    *(undefined1 *)(param_1 + 0x248) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0x24c) = param_2;
  return;
}


