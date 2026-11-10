/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002492b0; name: FUN_002492b0
 */


void FUN_002492b0(undefined **param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  MemoryResource *pMVar6;
  
  if ((DAT_047ed3a8 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_047ed3a8);
    if (iVar3 != 0) {
      if (((DAT_047ed398 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_047ed398), iVar3 != 0)) {
        __cxa_guard_release(&DAT_047ed398);
      }
      DAT_047ed3a0 = &PTR_PTR_0448ac10;
      __cxa_guard_release(&DAT_047ed3a8);
    }
  }
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x47ed3a0,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      DAT_047ed3a0 = param_1;
    }
  } while (cVar1 != '\0');
  lVar4 = nn::util::pmr::GetDefaultResource();
  lVar5 = nn::util::pmr::NewDeleteResource();
  if (lVar4 == lVar5) {
    pMVar6 = (MemoryResource *)FUN_00249110();
    nn::util::pmr::SetDefaultResource(pMVar6);
    return;
  }
  return;
}


