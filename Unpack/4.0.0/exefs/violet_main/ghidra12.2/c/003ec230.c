/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003ec230; name: FUN_003ec230
 */


void FUN_003ec230(long param_1,int param_2)

{
  if ((param_2 == 0) || (*(int *)(param_1 + 8) == 0)) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 1;
  return;
}


