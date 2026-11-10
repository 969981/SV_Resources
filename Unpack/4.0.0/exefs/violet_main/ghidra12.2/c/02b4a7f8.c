/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b4a7f8; name: FUN_02b4a7f8
 */


void FUN_02b4a7f8(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = (**(code **)(**(long **)(*(long *)(param_1 + 200) + 0x48) + 0x68))();
  uVar3 = *(undefined8 *)(lVar2 + 0x30);
  *(ulong *)(param_1 + 0x118) = *(ulong *)(lVar2 + 0x38) & 0xffffffff;
  *(undefined8 *)(param_1 + 0x110) = uVar3;
  if (((*PTR_DAT_047d4df8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  lVar2 = *(long *)PTR_DAT_047d4e00;
  *(long *)PTR_DAT_047d4e08 = lVar2;
  FUN_011d930c(*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x38) + 0x48) + 0x148),param_1 + -0x20);
  return;
}


