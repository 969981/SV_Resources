/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0193d1ec; name: FUN_0193d1ec
 */


void FUN_0193d1ec(long param_1)

{
  if (*(int *)(param_1 + 0x48) != 0) {
    return;
  }
  if (*(char *)(param_1 + 0xd0) != '\0') {
    *(undefined1 *)(param_1 + 0xd0) = 0;
  }
  FUN_01e81578(param_1 + 0xe0);
  *(undefined4 *)(param_1 + 0x48) = 2;
  FUN_0174a3b8(param_1);
  return;
}


