/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007cddb4; name: FUN_007cddb4
 */


void FUN_007cddb4(long param_1,int param_2)

{
  if (*(int *)(param_1 + 0x68) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x68) = param_2;
  FUN_007d44f0(*(undefined8 *)(param_1 + 0x10));
  return;
}


