/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ce9b8c; name: FUN_01ce9b8c
 */


void FUN_01ce9b8c(byte *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if ((1 < *param_1) ||
     (puVar2 = *(undefined **)(param_1 + 8), *(undefined **)(param_1 + 8) == (undefined *)0x0)) {
    if ((*PTR_DAT_047d42e0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d42e0);
      puVar2 = PTR_DAT_047d42e8;
      if (iVar1 != 0) {
        *(undefined8 *)PTR_DAT_047d42e8 = 0;
        __cxa_guard_release(PTR_DAT_047d42e0);
      }
    }
    else {
      puVar2 = PTR_DAT_047d42e8;
    }
  }
  FUN_01cea19c(puVar2);
  return;
}


