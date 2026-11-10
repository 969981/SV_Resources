/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028bcd9c; name: FUN_028bcd9c
 */


void FUN_028bcd9c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  
  if (((DAT_04863a00 & 1) != 0) ||
     (iVar4 = __cxa_guard_acquire(&DAT_04863a00), puVar3 = PTR_DAT_047dd310, iVar4 == 0)) {
    return;
  }
  if (((*PTR_DAT_047dd308 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_047dd308), puVar1 = PTR_DAT_047d39b8, iVar4 != 0)) {
    if (((*PTR_DAT_047d39b0 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d39b0), puVar2 = PTR_DAT_047d39c8, iVar4 != 0)) {
      if (((*PTR_DAT_047d39c0 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar4 != 0)) {
        *(undefined8 *)puVar2 = 0;
        __cxa_guard_release(PTR_DAT_047d39c0);
      }
      *(undefined **)puVar1 = puVar2;
      __cxa_guard_release(PTR_DAT_047d39b0);
    }
    *(undefined **)puVar3 = puVar1;
    __cxa_guard_release(PTR_DAT_047dd308);
  }
  DAT_048639f8 = puVar3;
  __cxa_guard_release(&DAT_04863a00);
  return;
}


