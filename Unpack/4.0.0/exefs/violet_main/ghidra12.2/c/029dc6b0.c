/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029dc6b0; name: FUN_029dc6b0
 */


void FUN_029dc6b0(long *param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = param_1[1] - *param_1 >> 3;
  if (uVar1 < param_2) {
    FUN_029dccec(param_1,param_2 - uVar1);
    return;
  }
  if (uVar1 == param_2) {
    return;
  }
  FUN_0104145c(param_1,*param_1 + param_2 * 8);
  return;
}


