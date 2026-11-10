/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008fc640; name: _INIT_138
 */


void _INIT_138(void)

{
  undefined *puVar1;
  int iVar2;
  
  if (((*PTR_DAT_047d4178 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_047d4178), puVar1 = PTR_DAT_047d4180, iVar2 != 0)) {
    *(undefined8 *)PTR_DAT_047d4180 = 0;
    *(undefined8 *)(puVar1 + 8) = 0;
    __cxa_guard_release(PTR_DAT_047d4178);
    return;
  }
  return;
}


