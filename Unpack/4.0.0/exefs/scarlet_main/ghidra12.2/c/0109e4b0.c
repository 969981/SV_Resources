/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0109e4b0; name: FUN_0109e4b0
 */


void FUN_0109e4b0(long param_1,ulong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (param_2 & 0xffffffff) * 0x18;
  uVar1 = FUN_02173564(*(undefined8 *)(*(long *)(param_1 + 0x60) + lVar4));
  FUN_014ed770(*(undefined8 *)(*(long *)(param_1 + 0x60) + lVar4),*(undefined8 *)(param_1 + 0x80),
               uVar1);
  if (((*PTR_DAT_047d8c98 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d8c98), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047dae08,PTR_DAT_047d8ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c98);
  }
  uVar3 = *(undefined8 *)PTR_DAT_047d8ca0;
  *(undefined8 *)PTR_DAT_047d8ca8 = uVar3;
  FUN_0217222c(uVar3,*(undefined8 *)(param_1 + 0x80),uVar1);
  FUN_019202d0(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x80));
  return;
}


