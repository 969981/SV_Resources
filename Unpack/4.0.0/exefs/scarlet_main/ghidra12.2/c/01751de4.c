/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01751de4; name: FUN_01751de4
 */


void FUN_01751de4(long param_1,undefined8 *param_2)

{
  undefined4 local_24;
  undefined4 local_8;
  undefined4 local_4;
  
  param_1 = param_1 + 0x68;
  local_8 = (undefined4)((ulong)*param_2 >> 0x20);
  local_4 = (undefined4)*param_2;
  local_24 = (undefined4)param_2[1];
  FUN_01eba4d4(param_1,&local_4);
  FUN_01eba4d4(param_1,&local_8);
  FUN_01eba4d4(param_1,&local_24);
  return;
}


