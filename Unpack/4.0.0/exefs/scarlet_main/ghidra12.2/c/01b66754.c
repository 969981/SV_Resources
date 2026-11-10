/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b66754; name: FUN_01b66754
 */


undefined8 FUN_01b66754(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if ((*param_1 != 0) && (puVar3 = *(undefined8 **)(*param_1 + 8), puVar3 != (undefined8 *)0x0)) {
    puVar4 = (undefined8 *)PTR_DAT_047d4af0;
    if (((*PTR_DAT_047d4ae8 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047d4ae8), puVar4 = (undefined8 *)PTR_DAT_047d4af0,
       iVar1 != 0)) {
      uVar2 = FUN_01b3fb0c();
      *(undefined8 *)PTR_DAT_047d4af0 = uVar2;
      __cxa_guard_release(PTR_DAT_047d4ae8);
      puVar4 = (undefined8 *)PTR_DAT_047d4af0;
    }
    do {
      if (puVar3 == puVar4) {
        return 1;
      }
      puVar3 = (undefined8 *)*puVar3;
    } while (puVar3 != (undefined8 *)0x0);
  }
  return 0;
}


