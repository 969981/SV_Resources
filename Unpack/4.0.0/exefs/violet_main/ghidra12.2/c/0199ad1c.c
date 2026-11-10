/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0199ad1c; name: FUN_0199ad1c
 */


void FUN_0199ad1c(long param_1)

{
  *(undefined8 *)(param_1 + 100) = 0x3f4ccccd3f4ccccd;
  if (*(int *)(param_1 + 0x28) == 1) {
    return;
  }
  *(undefined4 *)(param_1 + 0x28) = 1;
  FUN_0186cbc8();
  return;
}


