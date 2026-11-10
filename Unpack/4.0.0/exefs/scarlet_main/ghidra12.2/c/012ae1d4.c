/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012ae1d4; name: FUN_012ae1d4
 */


void FUN_012ae1d4(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  if ((*PTR_DAT_047d88a0 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(PTR_DAT_047d88a0);
    if (iVar3 != 0) {
      FUN_00100190(PTR_LAB_047dbdd0,PTR_DAT_047d88a8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d88a0);
    }
  }
  uVar4 = FUN_012b09f8(param_1);
  puVar2 = PTR_DAT_047d88a8;
  FUN_012af038(PTR_DAT_047d88a8,uVar4);
  lVar1 = 0;
  if (*(long *)puVar2 != 0) {
    lVar1 = *(long *)puVar2 + 0x20;
  }
  FUN_0100ba9c(lVar1);
  return;
}


