/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e9444c; name: FUN_01e9444c
 */


void FUN_01e9444c(long param_1)

{
  if (*(char *)(param_1 + 0x54) != '\0') {
    **(undefined2 **)(param_1 + 0x30) = 0;
    *(undefined2 *)(param_1 + 0x52) = 0;
  }
  return;
}


