/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0299eb94; name: FUN_0299eb94
 */


void FUN_0299eb94(long param_1)

{
  int iVar1;
  long lVar2;
  
  FUN_0299ced8(*(undefined8 *)(param_1 + 0x200),0xffffffffffffffff);
  if (((*PTR_DAT_047d8a70 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8a70), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047ddc70,PTR_DAT_047d8a78,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8a70);
  }
  lVar2 = *(long *)PTR_DAT_047d8a78;
  *(long *)PTR_DAT_047d8a80 = lVar2;
  if ((lVar2 == 0) || (*(char *)(lVar2 + 0x28) == '\0')) {
    return;
  }
  nn::os::LockMutex((MutexType *)(lVar2 + 0x460));
  FUN_029a599c(lVar2);
  nn::os::UnlockMutex((MutexType *)(lVar2 + 0x460));
  return;
}


