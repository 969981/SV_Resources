/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01bb6bc4; name: FUN_01bb6bc4
 */


undefined8 FUN_01bb6bc4(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (((*PTR_DAT_047d5408 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_047d5408), puVar2 = PTR_DAT_047d5420, iVar3 != 0)) {
    if (((*PTR_DAT_047d5418 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d5418), puVar1 = PTR_DAT_047d3988, iVar3 != 0)) {
      if (((*PTR_DAT_047d3980 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3980), iVar3 != 0)) {
        uVar4 = FUN_01adab84();
        *(undefined8 *)puVar1 = uVar4;
        __cxa_guard_release(PTR_DAT_047d3980);
      }
      *(undefined **)puVar2 = puVar1;
      __cxa_guard_release(PTR_DAT_047d5418);
    }
    *(undefined **)PTR_DAT_047d5410 = puVar2;
    __cxa_guard_release(PTR_DAT_047d5408);
  }
  while( true ) {
    if (param_1 == (long *)0x0) {
      return 0;
    }
    if (param_1 == (long *)PTR_DAT_047d5410) break;
    param_1 = (long *)*param_1;
  }
  return 1;
}


