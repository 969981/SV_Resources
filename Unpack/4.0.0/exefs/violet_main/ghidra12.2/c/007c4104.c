/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007c4104; name: FUN_007c4104
 */


void FUN_007c4104(undefined4 *param_1,int param_2,long param_3)

{
  if ((0 < param_2) && (param_3 != 0)) {
    *(long *)(param_1 + 2) = param_3;
    *param_1 = 0;
    param_1[1] = param_2;
  }
  return;
}


