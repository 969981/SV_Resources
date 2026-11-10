/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028f8f90; name: FUN_028f8f90
 */


undefined * FUN_028f8f90(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (((*PTR_DAT_047dd5c8 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_047dd5c8), puVar2 = PTR_DAT_047dd5e0,
     puVar1 = PTR_DAT_047dd5d0, iVar3 != 0)) {
    if (((*PTR_DAT_047dd5d8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047dd5d8), iVar3 != 0)) {
      uVar4 = FUN_0219eba8();
      *(undefined8 *)puVar2 = uVar4;
      __cxa_guard_release(PTR_DAT_047dd5d8);
    }
    *(undefined **)puVar1 = puVar2;
    __cxa_guard_release(PTR_DAT_047dd5c8);
  }
  return PTR_DAT_047dd5d0;
}


