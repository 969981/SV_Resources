/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


