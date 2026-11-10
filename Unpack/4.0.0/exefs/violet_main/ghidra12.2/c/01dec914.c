/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dec914; name: FUN_01dec914
 */


void FUN_01dec914(undefined8 *param_1)

{
  undefined8 local_8;
  
  *param_1 = &DAT_04541de0;
  param_1[4] = &PTR_LAB_04541e18;
  param_1 = param_1 + 6;
  local_8 = *param_1;
  *param_1 = 0;
  FUN_014a3154(&local_8);
  FUN_014a3154(param_1);
  return;
}


