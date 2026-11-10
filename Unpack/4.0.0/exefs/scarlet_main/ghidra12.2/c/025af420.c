/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025af420; name: FUN_025af420
 */


void FUN_025af420(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((DAT_048521c0 & 1) != 0) ||
     (iVar2 = __cxa_guard_acquire(&DAT_048521c0), puVar1 = PTR_DAT_047d3988, iVar2 == 0)) {
    return;
  }
  if (((*PTR_DAT_047d3980 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d3980), iVar2 != 0))
  {
    uVar3 = FUN_01adab84();
    *(undefined8 *)puVar1 = uVar3;
    __cxa_guard_release(PTR_DAT_047d3980);
  }
  DAT_048521b8 = puVar1;
  __cxa_guard_release(&DAT_048521c0);
  return;
}


