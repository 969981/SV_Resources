/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01786b8c; name: FUN_01786b8c
 */


long FUN_01786b8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((DAT_04839790 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04839790);
    if (iVar2 != 0) {
      FUN_00100190(&LAB_00b1baa8,&DAT_04839780,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04839790);
    }
  }
  uVar3 = FUN_01786d1c(param_1,param_2,param_3);
  FUN_01786c54(&DAT_04839780,uVar3);
  lVar1 = 0;
  if (DAT_04839780 != 0) {
    lVar1 = DAT_04839780 + 0x20;
  }
  FUN_0100ba9c(lVar1);
  return DAT_04839780;
}


