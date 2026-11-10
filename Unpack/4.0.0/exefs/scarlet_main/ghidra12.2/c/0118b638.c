/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0118b638; name: FUN_0118b638
 */


undefined8 FUN_0118b638(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*PTR_DAT_047e2520 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047e2520), iVar1 != 0))
  {
    uVar2 = FUN_028ffe68();
    *(undefined8 *)PTR_DAT_047e2528 = uVar2;
    __cxa_guard_release(PTR_DAT_047e2520);
  }
  while( true ) {
    if (param_1 == (long *)0x0) {
      return 0;
    }
    if (param_1 == (long *)PTR_DAT_047e2528) break;
    param_1 = (long *)*param_1;
  }
  return 1;
}


