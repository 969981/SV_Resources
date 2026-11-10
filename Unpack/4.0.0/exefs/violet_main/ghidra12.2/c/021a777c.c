/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021a777c; name: FUN_021a777c
 */


void FUN_021a777c(long param_1)

{
  SemaphoreType *pSVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  pSVar1 = (SemaphoreType *)(param_1 + 0x438);
  uVar2 = nn::os::TryAcquireSemaphore(pSVar1);
  if ((uVar2 & 1) == 0) {
    nn::os::AcquireSemaphore(pSVar1);
  }
  lVar4 = *(long *)(param_1 + 0x400);
  lVar3 = *(long *)(param_1 + 0x408);
  while (lVar3 != lVar4) {
    lVar3 = lVar3 + -8;
    FUN_012eadc8(lVar3);
  }
  *(long *)(param_1 + 0x408) = lVar4;
  FUN_014ec164(param_1);
  nn::os::ReleaseSemaphore(pSVar1);
  return;
}


