/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021555c4; name: FUN_021555c4
 */


undefined * FUN_021555c4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  
  if (((*PTR_DAT_047d8ff0 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8ff0), puVar2 = PTR_DAT_047d9008,
     puVar1 = PTR_DAT_047d8ff8, iVar4 != 0)) {
    if (((*PTR_DAT_047d9000 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d9000), puVar3 = PTR_DAT_047d9018, iVar4 != 0)) {
      if (((*PTR_DAT_047d9010 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_047d9010), iVar4 != 0)) {
        uVar5 = FUN_00ea2d24();
        *(undefined8 *)puVar3 = uVar5;
        __cxa_guard_release(PTR_DAT_047d9010);
      }
      *(undefined **)puVar2 = puVar3;
      __cxa_guard_release(PTR_DAT_047d9000);
    }
    *(undefined **)puVar1 = puVar2;
    __cxa_guard_release(PTR_DAT_047d8ff0);
  }
  return PTR_DAT_047d8ff8;
}


