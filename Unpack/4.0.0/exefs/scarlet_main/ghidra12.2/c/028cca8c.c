/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028cca8c; name: FUN_028cca8c
 */


undefined8 * FUN_028cca8c(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((DAT_04865f00 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&DAT_04865f00), puVar1 = PTR_DAT_047dd328, iVar2 != 0)) {
    if (((*PTR_DAT_047dd320 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047dd320), iVar2 != 0)) {
      uVar3 = FUN_0221b138();
      *(undefined8 *)puVar1 = uVar3;
      __cxa_guard_release(PTR_DAT_047dd320);
    }
    DAT_04865ef8 = puVar1;
    __cxa_guard_release(&DAT_04865f00);
  }
  return &DAT_04865ef8;
}


