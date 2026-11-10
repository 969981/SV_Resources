/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004edfc0; name: _INIT_53
 */


void _INIT_53(void)

{
  undefined *puVar1;
  int iVar2;
  
  if (((*PTR_DAT_047cdaa8 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_047cdaa8), puVar1 = PTR_DAT_047cdab0, iVar2 != 0)) {
    *(undefined **)PTR_DAT_047cdab0 = PTR_LAB_047cdab8;
    *(undefined8 *)(puVar1 + 8) = 0;
    __cxa_guard_release(PTR_DAT_047cdaa8);
    FUN_0052d9a0(PTR_DAT_047cdab0);
    return;
  }
  FUN_0052d9a0(PTR_DAT_047cdab0);
  return;
}


