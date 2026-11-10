/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012ae3b4; name: FUN_012ae3b4
 */


void FUN_012ae3b4(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  if ((*PTR_DAT_047dda30 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(PTR_DAT_047dda30);
    if (iVar3 != 0) {
      FUN_00100190(&LAB_02b6f3c8,PTR_DAT_047dda38,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047dda30);
    }
  }
  uVar4 = FUN_012b0b88(param_1);
  puVar2 = PTR_DAT_047dda38;
  FUN_012af290(PTR_DAT_047dda38,uVar4);
  lVar1 = 0;
  if (*(long *)puVar2 != 0) {
    lVar1 = *(long *)puVar2 + 0x20;
  }
  FUN_0100ba9c(lVar1);
  return;
}


