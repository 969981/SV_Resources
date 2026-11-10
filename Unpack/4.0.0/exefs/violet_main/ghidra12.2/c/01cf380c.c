/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01cf380c; name: FUN_01cf380c
 */


void FUN_01cf380c(long param_1)

{
  if (*(char *)(param_1 + 0x70) != '\0') {
    *(undefined1 *)(param_1 + 0x70) = 0;
  }
  FUN_01f6563c(param_1 + 0x60);
  FUN_01e7382c(param_1 + 0x50);
  FUN_01f656a4(param_1 + 0x40);
  FUN_01e72aa4(param_1 + 0x30);
  return;
}


