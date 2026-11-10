/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01bab91c; name: FUN_01bab91c
 */


void FUN_01bab91c(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = FUN_01bab960(param_2);
  if ((uVar1 & 1) == 0) {
    return;
  }
  FUN_01471fa4(param_1,param_2);
  return;
}


