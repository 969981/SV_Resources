/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00892df0; name: FUN_00892df0
 */


void FUN_00892df0(long param_1)

{
  if (*(char *)(param_1 + 0x18c) == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x18c) = 0;
  FUN_00893d78(*(undefined8 *)(param_1 + 0xb8));
  return;
}


