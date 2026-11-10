/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0214884c; name: FUN_0214884c
 */


undefined * FUN_0214884c(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((*PTR_DAT_047dd070 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_047dd070), puVar1 = PTR_DAT_047dd078, iVar2 != 0)) {
    uVar3 = FUN_00ea2d24();
    *(undefined8 *)puVar1 = uVar3;
    __cxa_guard_release(PTR_DAT_047dd070);
  }
  return PTR_DAT_047dd078;
}


