/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028b2348; name: FUN_028b2348
 */


void FUN_028b2348(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*PTR_DAT_047dd4c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047dd4c0), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047dd520,PTR_DAT_047dd4c8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047dd4c0);
  }
  *(undefined8 *)PTR_DAT_047dd4d0 = *(undefined8 *)PTR_DAT_047dd4c8;
  uVar2 = FUN_014b65d8();
  FUN_028b2624(uVar2,param_1);
  return;
}


