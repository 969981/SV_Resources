/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01699abc; name: FUN_01699abc
 */


long FUN_01699abc(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((DAT_04837228 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04837228);
    if (iVar2 != 0) {
      FUN_00100190(&LAB_00a8b6e0,&DAT_04837218,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04837228);
    }
  }
  uVar3 = FUN_01699dc0(param_1);
  FUN_01699b64(&DAT_04837218,uVar3);
  lVar1 = 0;
  if (DAT_04837218 != 0) {
    lVar1 = DAT_04837218 + 0x20;
  }
  FUN_0100ba9c(lVar1);
  return DAT_04837218;
}


