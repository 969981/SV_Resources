/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01105e4c; name: FUN_01105e4c
 */


void FUN_01105e4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_18;
  
  local_18 = param_2;
  nn::os::AcquireSemaphore((SemaphoreType *)(param_1 + 0xc68));
  FUN_011061c0(param_1 + 0xc00,&local_18,param_3);
  nn::os::ReleaseSemaphore((SemaphoreType *)(param_1 + 0xc68));
  return;
}


