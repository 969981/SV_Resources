/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01804818; name: FUN_01804818
 */


long FUN_01804818(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((DAT_0483ace8 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_0483ace8);
    if (iVar2 != 0) {
      FUN_00100190(&LAB_02a1f4a8,&DAT_0483acd8,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_0483ace8);
    }
  }
  uVar3 = FUN_01804988(param_1);
  FUN_018048c0(&DAT_0483acd8,uVar3);
  lVar1 = 0;
  if (DAT_0483acd8 != 0) {
    lVar1 = DAT_0483acd8 + 0x20;
  }
  FUN_0100ba9c(lVar1);
  return DAT_0483acd8;
}


