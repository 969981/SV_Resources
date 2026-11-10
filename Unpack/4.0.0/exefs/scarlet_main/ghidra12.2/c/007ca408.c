/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ca408; name: FUN_007ca408
 */


void FUN_007ca408(long param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_2;
  nn::os::GetThreadAvailableCoreMask();
  nn::os::SetThreadCoreMask(*(ThreadType **)(param_1 + 0xd0),-1,(ulong)uVar1);
  return;
}


