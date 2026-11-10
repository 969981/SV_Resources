/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d242b8; name: FUN_01d242b8
 */


void FUN_01d242b8(undefined8 param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = FUN_01741ea0();
  uVar1 = *(undefined1 *)(lVar3 + 0x3d0);
  if ((DAT_04842108 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04842108);
    if (iVar2 != 0) {
      FUN_00100190(&LAB_02b6f660,&DAT_048420f8,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04842108);
    }
  }
  DAT_04842110 = DAT_048420f8;
  FUN_01054a8c(DAT_048420f8,param_1,uVar1,param_2);
  return;
}


