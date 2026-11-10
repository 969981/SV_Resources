/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005459bc; name: FUN_005459bc
 */


void FUN_005459bc(long param_1,MultiWaitHolderType *param_2)

{
  nn::os::InitializeMultiWaitHolder(param_2,(EventType *)(param_1 + 0x10));
  return;
}


