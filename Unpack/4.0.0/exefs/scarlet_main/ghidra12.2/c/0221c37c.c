/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0221c37c; name: FUN_0221c37c
 */


void FUN_0221c37c(long param_1)

{
  SemaphoreType *pSVar1;
  ulong uVar2;
  
  pSVar1 = (SemaphoreType *)(param_1 + 0x438);
  uVar2 = nn::os::TryAcquireSemaphore(pSVar1);
  if ((uVar2 & 1) == 0) {
    nn::os::AcquireSemaphore(pSVar1);
  }
  FUN_0221c3c8(param_1 + 0x400,*(undefined8 *)(param_1 + 0x400));
  FUN_014ec164(param_1);
  nn::os::ReleaseSemaphore(pSVar1);
  return;
}


