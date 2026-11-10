/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0299e5f8; name: FUN_0299e5f8
 */


bool FUN_0299e5f8(long param_1,long param_2)

{
  int iVar1;
  
  if (param_2 == -1) {
    return false;
  }
  iVar1 = (**(code **)(**(long **)(param_1 + 0x60) + 0x128))();
  return iVar1 == 1;
}


