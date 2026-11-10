/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029a28ec; name: FUN_029a28ec
 */


undefined * FUN_029a28ec(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  
  if (((*PTR_DAT_047ddc60 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_047ddc60), puVar3 = PTR_DAT_047ddc68,
     puVar2 = PTR_DAT_047d9168, iVar4 != 0)) {
    if (((*PTR_DAT_047d9160 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d9160), puVar1 = PTR_DAT_047d3988, iVar4 != 0)) {
      if (((*PTR_DAT_047d3980 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3980), iVar4 != 0)) {
        uVar5 = FUN_01adab84();
        *(undefined8 *)puVar1 = uVar5;
        __cxa_guard_release(PTR_DAT_047d3980);
      }
      *(undefined **)puVar2 = puVar1;
      __cxa_guard_release(PTR_DAT_047d9160);
    }
    *(undefined **)puVar3 = puVar2;
    __cxa_guard_release(PTR_DAT_047ddc60);
  }
  return PTR_DAT_047ddc68;
}


