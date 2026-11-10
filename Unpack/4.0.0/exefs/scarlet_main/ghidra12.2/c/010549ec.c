/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010549ec; name: FUN_010549ec
 */


void FUN_010549ec(undefined8 param_1,undefined4 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = param_3;
  if ((DAT_04842108 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04842108);
    uVar2 = param_3 & 0xffffffff;
    if (iVar1 != 0) {
      FUN_00100190(&LAB_02b6f660,&DAT_048420f8,&PTR_LOOP_04483000,param_2);
      __cxa_guard_release(&DAT_04842108);
      uVar2 = param_3 & 0xffffffff;
    }
  }
  DAT_04842110 = DAT_048420f8;
  FUN_01054a8c(DAT_048420f8,param_1,uVar2,param_2);
  return;
}


