/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03240a30; name: FUN_03240a30
 */


void FUN_03240a30(long *param_1,undefined8 param_2)

{
  undefined8 local_8;
  
  local_8 = param_2;
  (**(code **)(*param_1 + 0x60))();
  (**(code **)(*param_1 + 0x20))(param_1,&local_8,1,8);
  return;
}


