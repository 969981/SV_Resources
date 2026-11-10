/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01be3500; name: FUN_01be3500
 */


undefined8 * FUN_01be3500(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_0480e810 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0480e810);
      if (iVar1 != 0) {
        DAT_0480e7f0 = 0;
        DAT_0480e800 = 0;
        DAT_0480e808 = 0;
        DAT_0480e7e0 = PTR_DAT_047d53f0 + 0x10;
        DAT_0480e7e8 = 0;
        FUN_00100190(&LAB_01bb6250,&DAT_0480e7e0,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_0480e810);
      }
      puVar2 = &DAT_0480e7e0;
    }
    else {
      puVar2 = &DAT_0480e7e0;
    }
  }
  return puVar2;
}


