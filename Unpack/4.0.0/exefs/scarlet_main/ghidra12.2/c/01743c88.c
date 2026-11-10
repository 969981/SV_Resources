/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01743c88; name: FUN_01743c88
 */


void FUN_01743c88(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  if ((*PTR_DAT_047d7430 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(PTR_DAT_047d7430);
    if (iVar3 != 0) {
      FUN_00100190(&LAB_02b6f450,PTR_DAT_047d7438,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7430);
    }
  }
  uVar4 = FUN_0174498c(param_1);
  puVar2 = PTR_DAT_047d7438;
  FUN_01743e68(PTR_DAT_047d7438,uVar4);
  lVar1 = 0;
  if (*(long *)puVar2 != 0) {
    lVar1 = *(long *)puVar2 + 0x20;
  }
  FUN_0100ba9c(lVar1);
  return;
}


