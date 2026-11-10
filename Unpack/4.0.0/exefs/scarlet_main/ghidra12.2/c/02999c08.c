/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02999c08; name: FUN_02999c08
 */


void FUN_02999c08(long *param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x140))();
  uVar2 = (**(code **)(*param_1 + 0x658))(param_1);
  FUN_02999c50(uVar1,uVar2);
  return;
}


