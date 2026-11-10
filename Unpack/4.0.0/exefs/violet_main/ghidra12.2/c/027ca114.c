/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027ca114; name: FUN_027ca114
 */


void FUN_027ca114(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((*PTR_DAT_047da868 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047da868);
    if (iVar1 != 0) {
      FUN_00100190(PTR_LAB_047daa50,PTR_DAT_047da870,&PTR_LOOP_04483000,param_4);
      __cxa_guard_release(PTR_DAT_047da868);
    }
  }
  lVar3 = *(long *)PTR_DAT_047da870;
  *(long *)PTR_DAT_047da878 = lVar3;
  uVar2 = FUN_027d5f8c(*(undefined8 *)(lVar3 + 0x28),param_2,param_3,param_4);
  FUN_027d6128(param_1,uVar2);
  FUN_027d61b4(*param_1);
  return;
}


