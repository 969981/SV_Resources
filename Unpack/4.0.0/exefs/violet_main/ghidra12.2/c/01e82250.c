/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e82250; name: FUN_01e82250
 */


void FUN_01e82250(long param_1)

{
  FUN_01e82294(param_1 + 0xf0);
  if (*(int *)(param_1 + 0x48) - 1U < 3) {
    FUN_01e80f78(param_1);
    return;
  }
  return;
}


