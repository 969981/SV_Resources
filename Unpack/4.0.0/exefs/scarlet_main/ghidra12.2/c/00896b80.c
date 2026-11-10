/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00896b80; name: FUN_00896b80
 */


undefined * FUN_00896b80(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  if (((*PTR_DAT_047d2190 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_047d2190), puVar2 = PTR_DAT_047d2198,
     puVar1 = PTR_DAT_047d20a0, iVar3 != 0)) {
    if (((*PTR_DAT_047d2098 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d2098), iVar3 != 0)) {
      *(undefined8 *)puVar1 = 0;
      __cxa_guard_release(PTR_DAT_047d2098);
    }
    *(undefined **)puVar2 = puVar1;
    __cxa_guard_release(PTR_DAT_047d2190);
  }
  return PTR_DAT_047d2198;
}


