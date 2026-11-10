/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c8314c; name: FUN_01c8314c
 */


void FUN_01c8314c(undefined1 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 local_24;
  undefined8 local_8;
  
  local_24 = param_4;
  local_8 = FUN_01c83fb8(param_3,*param_2,param_2[1],&local_24);
  *param_1 = 1;
  FUN_01c83ff4(param_1 + 8,&local_8);
  return;
}


