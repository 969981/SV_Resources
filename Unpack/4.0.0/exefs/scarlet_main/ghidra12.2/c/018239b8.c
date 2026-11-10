/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018239b8; name: FUN_018239b8
 */


long FUN_018239b8(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((DAT_04840e50 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04840e50);
    if (iVar2 != 0) {
      FUN_00100190(&LAB_02b28708,&DAT_04840e40,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04840e50);
    }
  }
  uVar3 = FUN_01823b10(param_1);
  FUN_01823a60(&DAT_04840e40,uVar3);
  lVar1 = 0;
  if (DAT_04840e40 != 0) {
    lVar1 = DAT_04840e40 + 0x20;
  }
  FUN_0100ba9c(lVar1);
  return DAT_04840e40;
}


