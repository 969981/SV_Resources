/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f772b8; name: FUN_00f772b8
 */


void FUN_00f772b8(long param_1)

{
  int iVar1;
  uint *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((*(long *)(param_1 + 8) == 0) || ((*(byte *)(*(long *)(param_1 + 8) + 0x1e8) & 1) == 0)) {
    return;
  }
  if ((*PTR_DAT_047d8c40 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047d8c40);
    if (iVar1 != 0) {
      FUN_00100190(PTR_LAB_047d8e90,PTR_DAT_047d8c48,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c40);
    }
  }
  uVar4 = *(undefined8 *)PTR_DAT_047d8c48;
  *(undefined8 *)PTR_DAT_047d8c50 = uVar4;
  if ((*(long *)(param_1 + 8) == 0) || ((*(byte *)(*(long *)(param_1 + 8) + 0x1e8) & 1) == 0)) {
    lVar3 = 0;
  }
  else {
    puVar2 = (uint *)(**(code **)(**(long **)(param_1 + 8) + 0x70))();
    lVar3 = (long)puVar2 + (ulong)*puVar2;
  }
  FUN_00f7757c(uVar4,lVar3);
  FUN_00f773b0(0xffffffff,0xffffffff);
  FUN_00f775d8();
  return;
}


