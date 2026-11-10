/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e8152c; name: FUN_01e8152c
 */


void FUN_01e8152c(long param_1)

{
  if (*(int *)(param_1 + 0x48) == 0) {
    *(undefined1 *)(param_1 + 0xd0) = 0;
    FUN_01e81578(param_1 + 0xe0);
    *(undefined4 *)(param_1 + 0x48) = 2;
    FUN_01e80f78(param_1);
    return;
  }
  return;
}


