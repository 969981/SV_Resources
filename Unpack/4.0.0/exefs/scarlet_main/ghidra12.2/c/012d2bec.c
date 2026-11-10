/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012d2bec; name: FUN_012d2bec
 */


void FUN_012d2bec(MultiWaitHolderType *param_1,long param_2)

{
  FUN_012d2c2c(param_1 + 0x40);
  param_1[0x48] = (MultiWaitHolderType)0x0;
  nn::os::InitializeMultiWaitHolder(param_1,(EventType *)(param_2 + 0x40));
  nn::os::SetMultiWaitHolderUserData(param_1,(ulong)param_1);
  return;
}


