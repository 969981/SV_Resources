/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dba53c; name: FUN_01dba53c
 */


void FUN_01dba53c(undefined8 *param_1,undefined8 *param_2)

{
  *param_2 = *param_1;
  param_2[2] = 0;
  param_2[1] = 0;
  FUN_011a680c(param_2 + 1,param_1 + 1);
  return;
}


