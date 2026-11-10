/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02699900; name: FUN_02699900
 */


undefined8 FUN_02699900(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*PTR_DAT_047dd120 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047dd120), iVar1 != 0))
  {
    uVar2 = FUN_00ea2d24();
    *(undefined8 *)PTR_DAT_047dd128 = uVar2;
    __cxa_guard_release(PTR_DAT_047dd120);
  }
  while( true ) {
    if (param_1 == (long *)0x0) {
      return 0;
    }
    if (param_1 == (long *)PTR_DAT_047dd128) break;
    param_1 = (long *)*param_1;
  }
  return 1;
}


