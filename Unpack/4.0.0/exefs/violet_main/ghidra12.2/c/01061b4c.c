/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01061b4c; name: FUN_01061b4c
 */


void FUN_01061b4c(long param_1)

{
  if (*(ulong *)(param_1 + 8) < *(ulong *)(param_1 + 0x10)) {
    FUN_02179a20();
  }
  else {
    FUN_02179b20();
  }
  return;
}


