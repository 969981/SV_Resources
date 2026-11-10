/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018035dc; name: FUN_018035dc
 */


long FUN_018035dc(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((DAT_0483b190 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_0483b190);
    if (iVar2 != 0) {
      FUN_00100190(&LAB_02a3f0a4,&DAT_0483b180,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_0483b190);
    }
  }
  uVar3 = FUN_01803734(param_1);
  FUN_01803684(&DAT_0483b180,uVar3);
  lVar1 = 0;
  if (DAT_0483b180 != 0) {
    lVar1 = DAT_0483b180 + 0x20;
  }
  FUN_0100ba9c(lVar1);
  return DAT_0483b180;
}


