/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0277f810; name: FUN_0277f810
 */


undefined * FUN_0277f810(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  
  if (((*PTR_DAT_047dd508 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_047dd508), puVar3 = PTR_DAT_047dd510,
     puVar2 = PTR_DAT_047d8d38, iVar4 != 0)) {
    if (((*PTR_DAT_047d8d30 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8d30), puVar1 = PTR_DAT_047d3988, iVar4 != 0)) {
      if (((*PTR_DAT_047d3980 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3980), iVar4 != 0)) {
        uVar5 = FUN_01adab84();
        *(undefined8 *)puVar1 = uVar5;
        __cxa_guard_release(PTR_DAT_047d3980);
      }
      *(undefined **)puVar2 = puVar1;
      __cxa_guard_release(PTR_DAT_047d8d30);
    }
    *(undefined **)puVar3 = puVar2;
    __cxa_guard_release(PTR_DAT_047dd508);
  }
  return PTR_DAT_047dd510;
}


