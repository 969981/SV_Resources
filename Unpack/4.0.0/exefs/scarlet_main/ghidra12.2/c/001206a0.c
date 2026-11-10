/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001206a0; name: FUN_001206a0
 */


void FUN_001206a0(long param_1,ulong param_2)

{
  nn::os::SetThreadCoreMask((ThreadType *)(*(long *)(param_1 + 0x1f8) + 0x18),-1,param_2);
  return;
}


