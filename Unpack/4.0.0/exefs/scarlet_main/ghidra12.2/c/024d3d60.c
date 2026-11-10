/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024d3d60; name: FUN_024d3d60
 */


void FUN_024d3d60(undefined1 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 local_30 [16];
  
  local_30 = FUN_024d9e7c(param_3,*param_2,param_2[1]);
  *param_1 = 1;
  FUN_00d200a4(param_1 + 8,local_30);
  return;
}


