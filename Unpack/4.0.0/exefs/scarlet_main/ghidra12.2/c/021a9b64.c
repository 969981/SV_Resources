/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021a9b64; name: FUN_021a9b64
 */


undefined * FUN_021a9b64(void)

{
  undefined *puVar1;
  int iVar2;
  
  if (((*PTR_DAT_047dd6a0 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_047dd6a0), puVar1 = PTR_DAT_047dd6a8, iVar2 != 0)) {
    FUN_00fe370c();
    *(undefined **)puVar1 = PTR_DAT_047dd668;
    __cxa_guard_release(PTR_DAT_047dd6a0);
  }
  return PTR_DAT_047dd6a8;
}


