/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028f484c; name: FUN_028f484c
 */


void FUN_028f484c(long param_1)

{
  SemaphoreType *pSVar1;
  ulong uVar2;
  
  pSVar1 = (SemaphoreType *)(param_1 + 0x438);
  uVar2 = nn::os::TryAcquireSemaphore(pSVar1);
  if ((uVar2 & 1) == 0) {
    nn::os::AcquireSemaphore(pSVar1);
  }
  FUN_028f4894(param_1 + 0x400);
  FUN_014ec164(param_1);
  nn::os::ReleaseSemaphore(pSVar1);
  return;
}


