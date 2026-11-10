/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006c6e28; name: FUN_006c6e28
 */


void FUN_006c6e28(undefined4 *param_1)

{
  *param_1 = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 2),false,0);
  nn::os::InitializeConditionVariable((ConditionVariableType *)(param_1 + 10));
  return;
}


