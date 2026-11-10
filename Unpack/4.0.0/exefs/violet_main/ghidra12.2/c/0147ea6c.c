/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0147ea6c; name: FUN_0147ea6c
 */


void FUN_0147ea6c(long param_1,int param_2)

{
  if (*(int *)(param_1 + 0x2b0) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x2b0) = param_2;
  return;
}


