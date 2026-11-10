/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01827b8c; name: FUN_01827b8c
 */


undefined * FUN_01827b8c(byte *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if ((1 < *param_1) ||
     (puVar2 = *(undefined **)(param_1 + 8), *(undefined **)(param_1 + 8) == (undefined *)0x0)) {
    if (((*PTR_DAT_047d3940 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047d3940), puVar2 = PTR_DAT_047d3948, iVar1 != 0)) {
      FUN_015c486c(PTR_DAT_047d3948);
      FUN_00100190(PTR_FUN_047d3950,puVar2,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3940);
    }
    else {
      puVar2 = PTR_DAT_047d3948;
    }
  }
  return puVar2;
}


