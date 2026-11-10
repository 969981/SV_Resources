/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0168bdb0; name: FUN_0168bdb0
 */


long FUN_0168bdb0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((DAT_04838d00 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04838d00);
    if (iVar2 != 0) {
      FUN_00100190(&LAB_00ada26c,&DAT_04838cf0,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04838d00);
    }
  }
  uVar3 = FUN_0168bf14(param_1,param_2);
  FUN_0168be64(&DAT_04838cf0,uVar3);
  lVar1 = 0;
  if (DAT_04838cf0 != 0) {
    lVar1 = DAT_04838cf0 + 0x20;
  }
  FUN_0100ba9c(lVar1);
  return DAT_04838cf0;
}


