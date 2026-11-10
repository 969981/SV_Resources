/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0184ccb0; name: FUN_0184ccb0
 */


undefined * FUN_0184ccb0(byte *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if ((1 < *param_1) ||
     (puVar2 = *(undefined **)(param_1 + 8), *(undefined **)(param_1 + 8) == (undefined *)0x0)) {
    if ((*PTR_DAT_047d7bc0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d7bc0);
      puVar2 = PTR_DAT_047d7bc8;
      if (iVar1 != 0) {
        *(undefined8 *)(PTR_DAT_047d7bc8 + 0x10) = 0;
        *(undefined8 *)(puVar2 + 0x18) = 0;
        *(undefined8 *)puVar2 = 0;
        *(undefined8 *)(puVar2 + 8) = 0;
        __cxa_guard_release(PTR_DAT_047d7bc0);
      }
    }
    else {
      puVar2 = PTR_DAT_047d7bc8;
    }
  }
  return puVar2;
}


