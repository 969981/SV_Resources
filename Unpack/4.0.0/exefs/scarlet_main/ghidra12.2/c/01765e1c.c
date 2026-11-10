/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01765e1c; name: FUN_01765e1c
 */


void FUN_01765e1c(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((DAT_048427e8 & 1) != 0) ||
     (iVar2 = __cxa_guard_acquire(&DAT_048427e8), puVar1 = PTR_DAT_047ddd60, iVar2 == 0)) {
    return;
  }
  if (((*PTR_DAT_047ddd58 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047ddd58), iVar2 != 0))
  {
    uVar3 = FUN_02258b4c();
    *(undefined8 *)puVar1 = uVar3;
    __cxa_guard_release(PTR_DAT_047ddd58);
  }
  DAT_048427e0 = puVar1;
  __cxa_guard_release(&DAT_048427e8);
  return;
}


