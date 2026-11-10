/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00254798; name: FUN_00254798
 */


undefined8 * FUN_00254798(void)

{
  int iVar1;
  
  if (((DAT_047ed418 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_047ed418), iVar1 != 0)) {
    DAT_047ed428 = 0;
    DAT_047ed420 = 0;
    DAT_047ed430 = 0xffffffff;
    DAT_047ed438 = &DAT_047ed420;
    DAT_047ed440 = &DAT_047ed420;
    DAT_047ed448 = &DAT_047ed420;
    DAT_047ed458 = 0;
    DAT_047ed460 = FUN_01cf7e20();
    DAT_047ed468 = 0;
    DAT_047ed450 = &DAT_047ed458;
    nn::os::InitializeMutex((MutexType *)&DAT_047ed470,true,0);
    FUN_00100190(PTR_FUN_047cc1c0,&DAT_047ed420,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_047ed418);
  }
  return &DAT_047ed420;
}


