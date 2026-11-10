/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027871b8; name: FUN_027871b8
 */


void FUN_027871b8(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((DAT_0485dcd0 & 1) != 0) ||
     (iVar2 = __cxa_guard_acquire(&DAT_0485dcd0), puVar1 = PTR_DAT_047dd5e0, iVar2 == 0)) {
    return;
  }
  if (((*PTR_DAT_047dd5d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047dd5d8), iVar2 != 0))
  {
    uVar3 = FUN_0219eba8();
    *(undefined8 *)puVar1 = uVar3;
    __cxa_guard_release(PTR_DAT_047dd5d8);
  }
  DAT_0485dcc8 = puVar1;
  __cxa_guard_release(&DAT_0485dcd0);
  return;
}


