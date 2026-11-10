/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d7b1d4; name: FUN_01d7b1d4
 */


void FUN_01d7b1d4(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (((*param_2 == 0) || (*(long *)(*param_2 + 8) == 0)) ||
     (uVar1 = FUN_01d7b224(), (uVar1 & 1) == 0)) {
    return;
  }
  FUN_00e3369c(param_1,param_2);
  return;
}


