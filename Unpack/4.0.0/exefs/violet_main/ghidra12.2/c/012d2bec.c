/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


