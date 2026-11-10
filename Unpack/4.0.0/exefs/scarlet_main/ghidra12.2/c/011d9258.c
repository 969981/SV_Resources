/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011d9258; name: FUN_011d9258
 */


void FUN_011d9258(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = (**(code **)(**(long **)(*(long *)(param_1 + 0xe8) + 0x48) + 0x68))();
  uVar3 = *(undefined8 *)(lVar2 + 0x30);
  *(ulong *)(param_1 + 0x138) = *(ulong *)(lVar2 + 0x38) & 0xffffffff;
  *(undefined8 *)(param_1 + 0x130) = uVar3;
  if (((*PTR_DAT_047d4df8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  lVar2 = *(long *)PTR_DAT_047d4e00;
  *(long *)PTR_DAT_047d4e08 = lVar2;
  FUN_011d930c(*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x38) + 0x48) + 0x148),param_1);
  return;
}


