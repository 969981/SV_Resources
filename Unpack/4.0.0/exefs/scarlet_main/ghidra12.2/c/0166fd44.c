/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0166fd44; name: FUN_0166fd44
 */


void FUN_0166fd44(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((DAT_04842828 & 1) != 0) ||
     (iVar2 = __cxa_guard_acquire(&DAT_04842828), puVar1 = PTR_DAT_047ddd60, iVar2 == 0)) {
    return;
  }
  if (((*PTR_DAT_047ddd58 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047ddd58), iVar2 != 0))
  {
    uVar3 = FUN_02258b4c();
    *(undefined8 *)puVar1 = uVar3;
    __cxa_guard_release(PTR_DAT_047ddd58);
  }
  DAT_04842820 = puVar1;
  __cxa_guard_release(&DAT_04842828);
  return;
}


