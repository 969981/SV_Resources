/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0024f200; name: FUN_0024f200
 */


undefined1 * FUN_0024f200(void)

{
  int iVar1;
  
  if (((DAT_047ed3b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_047ed3b0), iVar1 != 0)) {
    nn::os::InitializeMutex((MutexType *)&DAT_047ed3b8,false,0);
    FUN_00100190(PTR__Mutex_047cc198,&DAT_047ed3b8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_047ed3b0);
  }
  nn::os::LockMutex((MutexType *)&DAT_047ed3b8);
  if (DAT_047ed3d8 == '\0') {
    snprintf(&DAT_047ed3d8,0x40,"NPLN/%s (%s; %s)","1.8.3","Horizon","NX");
    DAT_047ed417 = 0;
  }
  nn::os::UnlockMutex((MutexType *)&DAT_047ed3b8);
  return &DAT_047ed3d8;
}


