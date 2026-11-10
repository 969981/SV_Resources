/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01748190; name: FUN_01748190
 */


long FUN_01748190(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((DAT_04839ae8 & 1) == 0) && (param_1 = __cxa_guard_acquire(&DAT_04839ae8), (int)param_1 != 0)
     ) {
    FUN_00100190(&LAB_00b1dc18,&DAT_04839ad8,&PTR_LOOP_04483000);
    param_1 = __cxa_guard_release(&DAT_04839ae8);
  }
  DAT_04839ad0 = DAT_04839ad8;
  if (DAT_04839ad8 != 0) {
    return param_1;
  }
  uVar3 = FUN_0126a9c0();
  if ((DAT_04839ae8 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04839ae8);
    if (iVar2 != 0) {
      FUN_00100190(&LAB_00b1dc18,&DAT_04839ad8,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04839ae8);
    }
  }
  uVar3 = FUN_017483ac(uVar3);
  FUN_017482b4(&DAT_04839ad8,uVar3);
  lVar1 = 0;
  if (DAT_04839ad8 != 0) {
    lVar1 = DAT_04839ad8 + 0x20;
  }
  FUN_0100ba9c(lVar1);
  return DAT_04839ad8;
}


