/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0155680c; name: FUN_0155680c
 */


void FUN_0155680c(long param_1)

{
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_0155756c((long *)(param_1 + 0x40),param_1 + 0x58);
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_0155756c((long *)(param_1 + 0x48),param_1 + 0x90);
  }
  if (*(long *)(param_1 + 0x50) == 0) {
    return;
  }
  FUN_0155756c((long *)(param_1 + 0x50),param_1 + 200);
  return;
}


