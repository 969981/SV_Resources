/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021bea38; name: FUN_021bea38
 */


undefined8 FUN_021bea38(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (((*PTR_DAT_047dd748 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_047dd748), puVar2 = PTR_DAT_047d8d38, iVar3 != 0)) {
    if (((*PTR_DAT_047d8d30 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d8d30), puVar1 = PTR_DAT_047d3988, iVar3 != 0)) {
      if (((*PTR_DAT_047d3980 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3980), iVar3 != 0)) {
        uVar4 = FUN_01adab84();
        *(undefined8 *)puVar1 = uVar4;
        __cxa_guard_release(PTR_DAT_047d3980);
      }
      *(undefined **)puVar2 = puVar1;
      __cxa_guard_release(PTR_DAT_047d8d30);
    }
    *(undefined **)PTR_DAT_047dd750 = puVar2;
    __cxa_guard_release(PTR_DAT_047dd748);
  }
  while( true ) {
    if (param_1 == (long *)0x0) {
      return 0;
    }
    if (param_1 == (long *)PTR_DAT_047dd750) break;
    param_1 = (long *)*param_1;
  }
  return 1;
}


