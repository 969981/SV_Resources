/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00272a60; name: _INIT_8
 */


void _INIT_8(void)

{
  int iVar1;
  long lVar2;
  
  if (*(long *)PTR_DAT_047cbe70 == 0) {
    if (((*PTR_DAT_047cc340 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047cc340), iVar1 != 0)) {
      __cxa_guard_release(PTR_DAT_047cc340);
    }
    *(undefined **)PTR_DAT_047cbe70 = PTR_PTR_047cc348;
    lVar2 = *(long *)PTR_DAT_047cbb08;
  }
  else {
    lVar2 = *(long *)PTR_DAT_047cbb08;
  }
  if (lVar2 == 0) {
    if (((*PTR_DAT_047cc350 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047cc350), iVar1 != 0)) {
      __cxa_guard_release(PTR_DAT_047cc350);
    }
    *(undefined **)PTR_DAT_047cbb08 = PTR_PTR_047cc358;
  }
  DAT_047ee700 = &PTR_PTR_0448c598;
  return;
}


