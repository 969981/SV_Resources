/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0179352c; name: FUN_0179352c
 */


long FUN_0179352c(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((DAT_0483a128 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_0483a128);
    if (iVar2 != 0) {
      FUN_00100190(&LAB_00b52dc4,&DAT_0483a118,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_0483a128);
    }
  }
  uVar3 = FUN_017935d4(param_1);
  FUN_01795034(&DAT_0483a118,uVar3);
  lVar1 = 0;
  if (DAT_0483a118 != 0) {
    lVar1 = DAT_0483a118 + 0x20;
  }
  FUN_0100ba9c(lVar1);
  return DAT_0483a118;
}


