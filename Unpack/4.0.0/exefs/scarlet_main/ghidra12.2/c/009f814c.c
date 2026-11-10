/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 009f814c; name: FUN_009f814c
 */


void FUN_009f814c(long param_1)

{
  int iVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x48) + 0x8ad) = 1;
  }
  *(undefined1 *)(param_1 + 0x68) = 1;
  if (((*PTR_DAT_047d6e90 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d6e90), iVar1 != 0))
  {
    FUN_00100190(&LAB_00b0a8ac,PTR_DAT_047d6e98,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6e90);
  }
  lVar2 = *(long *)PTR_DAT_047d6e98;
  *(long *)PTR_DAT_047d6ea0 = lVar2;
  if (lVar2 == 0) {
    return;
  }
  FUN_00b09660();
  return;
}


