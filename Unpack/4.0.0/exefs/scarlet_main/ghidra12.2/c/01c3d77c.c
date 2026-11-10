/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c3d77c; name: FUN_01c3d77c
 */


undefined * FUN_01c3d77c(byte *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if ((1 < *param_1) ||
     (puVar2 = *(undefined **)(param_1 + 8), *(undefined **)(param_1 + 8) == (undefined *)0x0)) {
    if (((*PTR_DAT_047d5fe8 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047d5fe8), puVar2 = PTR_DAT_047d5ff0, iVar1 != 0)) {
      FUN_01c3f120(PTR_DAT_047d5ff0);
      FUN_00100190(&LAB_00965aa8,puVar2,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d5fe8);
    }
    else {
      puVar2 = PTR_DAT_047d5ff0;
    }
  }
  return puVar2;
}


