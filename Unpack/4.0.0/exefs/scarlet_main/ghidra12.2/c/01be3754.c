/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01be3754; name: FUN_01be3754
 */


undefined8 * FUN_01be3754(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_0480e888 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0480e888);
      if (iVar1 != 0) {
        DAT_0480e858 = PTR_DAT_047d53f8 + 0x10;
        DAT_0480e868 = 0;
        DAT_0480e870 = 0;
        DAT_0480e878 = 0;
        DAT_0480e880 = 0;
        DAT_0480e860 = 0;
        FUN_00100190(FUN_01bb6044,&DAT_0480e858,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_0480e888);
      }
      puVar2 = &DAT_0480e858;
    }
    else {
      puVar2 = &DAT_0480e858;
    }
  }
  return puVar2;
}


