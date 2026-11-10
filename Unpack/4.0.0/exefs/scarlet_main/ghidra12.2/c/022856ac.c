/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022856ac; name: FUN_022856ac
 */


void FUN_022856ac(undefined1 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 local_8;
  
  local_8 = FUN_022898b8(param_3,*param_2,param_2[1]);
  *param_1 = 1;
  FUN_016b6fd8(param_1 + 8,&local_8);
  return;
}


