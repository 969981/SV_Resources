/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0297e99c; name: FUN_0297e99c
 */


void FUN_0297e99c(long param_1,int param_2)

{
  if (param_2 < 4) {
    param_1 = param_1 + (long)param_2 * 4;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  }
  return;
}


