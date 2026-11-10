/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007b4e14; name: FUN_007b4e14
 */


void FUN_007b4e14(long param_1)

{
  FUN_0079b800();
  if (*(char *)(param_1 + 0x1232) != '\0') {
    FUN_0079d698(param_1);
    *(char *)(param_1 + 0x1232) = '\0';
  }
  return;
}


