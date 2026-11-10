/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01cf8ef4; name: FUN_01cf8ef4
 */


void FUN_01cf8ef4(undefined1 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 local_8;
  
  local_8 = FUN_01cfacb4(param_3,*param_2,param_2[1]);
  *param_1 = 1;
  FUN_01cfad04(param_1 + 8,&local_8);
  return;
}


