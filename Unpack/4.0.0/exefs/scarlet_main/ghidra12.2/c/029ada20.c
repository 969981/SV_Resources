/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029ada20; name: FUN_029ada20
 */


void FUN_029ada20(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (((DAT_0486acd0 & 1) != 0) ||
     (iVar3 = __cxa_guard_acquire(&DAT_0486acd0), puVar2 = PTR_DAT_047d8dd0, iVar3 == 0)) {
    return;
  }
  if (((*PTR_DAT_047d8dc8 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_047d8dc8), puVar1 = PTR_DAT_047d3988, iVar3 != 0)) {
    if (((*PTR_DAT_047d3980 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3980), iVar3 != 0)) {
      uVar4 = FUN_01adab84();
      *(undefined8 *)puVar1 = uVar4;
      __cxa_guard_release(PTR_DAT_047d3980);
    }
    *(undefined **)puVar2 = puVar1;
    __cxa_guard_release(PTR_DAT_047d8dc8);
  }
  DAT_0486acc8 = puVar2;
  __cxa_guard_release(&DAT_0486acd0);
  return;
}


