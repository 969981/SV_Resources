/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02bfaeac; name: FUN_02bfaeac
 */


void FUN_02bfaeac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = 0;
  *param_2 = uVar1;
  uVar1 = param_1[1];
  param_1[1] = 0;
  param_2[1] = uVar1;
  return;
}


