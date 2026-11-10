/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0255cd9c; name: FUN_0255cd9c
 */


undefined8 * FUN_0255cd9c(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_0484fe58 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0484fe58);
      if (iVar1 != 0) {
        DAT_0484fe48 = 0;
        DAT_0484fe50 = 0;
        FUN_00100190(&LAB_02b9f7b0,&DAT_0484fe48,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_0484fe58);
      }
      puVar2 = &DAT_0484fe48;
    }
    else {
      puVar2 = &DAT_0484fe48;
    }
  }
  return puVar2;
}


