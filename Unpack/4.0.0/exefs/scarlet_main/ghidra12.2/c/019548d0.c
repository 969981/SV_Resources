/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019548d0; name: FUN_019548d0
 */


undefined * FUN_019548d0(byte *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if ((1 < *param_1) ||
     (puVar2 = *(undefined **)(param_1 + 8), *(undefined **)(param_1 + 8) == (undefined *)0x0)) {
    if ((*PTR_DAT_047d63f0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d63f0);
      puVar2 = PTR_DAT_047d63f8;
      if (iVar1 != 0) {
        *(undefined8 *)PTR_DAT_047d63f8 = 0;
        *(undefined8 *)(puVar2 + 8) = 0;
        __cxa_guard_release(PTR_DAT_047d63f0);
      }
    }
    else {
      puVar2 = PTR_DAT_047d63f8;
    }
  }
  return puVar2;
}


