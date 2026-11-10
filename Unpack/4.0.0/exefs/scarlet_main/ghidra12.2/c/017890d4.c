/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017890d4; name: FUN_017890d4
 */


long FUN_017890d4(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((DAT_04839b78 & 1) == 0) && (param_1 = __cxa_guard_acquire(&DAT_04839b78), (int)param_1 != 0)
     ) {
    FUN_00100190(&LAB_00b1ecf8,&DAT_04839b68,&PTR_LOOP_04483000);
    param_1 = __cxa_guard_release(&DAT_04839b78);
  }
  DAT_04839b60 = DAT_04839b68;
  if (DAT_04839b68 != 0) {
    return param_1;
  }
  uVar3 = FUN_0126a9c0();
  if ((DAT_04839b78 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04839b78);
    if (iVar2 != 0) {
      FUN_00100190(&LAB_00b1ecf8,&DAT_04839b68,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04839b78);
    }
  }
  uVar3 = FUN_017892f0(uVar3);
  FUN_017891f8(&DAT_04839b68,uVar3);
  lVar1 = 0;
  if (DAT_04839b68 != 0) {
    lVar1 = DAT_04839b68 + 0x20;
  }
  FUN_0100ba9c(lVar1);
  return DAT_04839b68;
}


