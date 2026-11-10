/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01daa83c; name: FUN_01daa83c
 */


void FUN_01daa83c(byte *param_1)

{
  int iVar1;
  
  if ((((*param_1 < 2) && (*(long *)(param_1 + 8) != 0)) || ((*PTR_DAT_047d42e0 & 1) != 0)) ||
     (iVar1 = __cxa_guard_acquire(PTR_DAT_047d42e0), iVar1 == 0)) {
    return;
  }
  *(undefined8 *)PTR_DAT_047d42e8 = 0;
  __cxa_guard_release(PTR_DAT_047d42e0);
  return;
}


