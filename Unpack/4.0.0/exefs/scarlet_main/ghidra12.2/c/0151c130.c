/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0151c130; name: FUN_0151c130
 */


undefined * FUN_0151c130(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (((*PTR_DAT_047d6530 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_047d6530), puVar2 = PTR_DAT_047d6548,
     puVar1 = PTR_DAT_047d6538, iVar3 != 0)) {
    if (((*PTR_DAT_047d6540 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d6540), iVar3 != 0)) {
      uVar4 = FUN_019dae00();
      *(undefined8 *)puVar2 = uVar4;
      __cxa_guard_release(PTR_DAT_047d6540);
    }
    *(undefined **)puVar1 = puVar2;
    __cxa_guard_release(PTR_DAT_047d6530);
  }
  return PTR_DAT_047d6538;
}


