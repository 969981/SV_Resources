/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d19d4c; name: FUN_01d19d4c
 */


void FUN_01d19d4c(undefined1 *param_1,byte *param_2)

{
  int iVar1;
  undefined *puVar2;
  
  if ((1 < *param_2) ||
     (puVar2 = *(undefined **)(param_2 + 8), *(undefined **)(param_2 + 8) == (undefined *)0x0)) {
    if ((*PTR_DAT_047d3c18 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d3c18);
      puVar2 = PTR_DAT_047d3c20;
      if (iVar1 != 0) {
        *(undefined8 *)PTR_DAT_047d3c20 = 0;
        *(undefined8 *)(puVar2 + 8) = 0;
        __cxa_guard_release(PTR_DAT_047d3c18);
      }
    }
    else {
      puVar2 = PTR_DAT_047d3c20;
    }
  }
  FUN_01d1a224(puVar2);
  *param_1 = 1;
  FUN_01d1a238(param_1 + 8);
  return;
}


