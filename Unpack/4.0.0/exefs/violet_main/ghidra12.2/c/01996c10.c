/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01996c10; name: FUN_01996c10
 */


void FUN_01996c10(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar2 = FUN_01996d20(param_2);
  if ((uVar2 & 1) != 0) {
    FUN_00ca1a30(param_1);
    return;
  }
  puVar3 = (undefined8 *)FUN_00c5e120(param_1,8,1);
  if (((*PTR_DAT_047d38a0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d38a0), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d3db0,PTR_DAT_047d38a8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d38a0);
  }
  *(undefined8 *)PTR_DAT_047d38b0 = *(undefined8 *)PTR_DAT_047d38a8;
  uVar4 = FUN_01996e14();
  FUN_01996d74(uVar4,param_2);
  *puVar3 = uVar4;
  FUN_00c5fc50(param_1,0xfff0b9d8,(long)DAT_04532b34);
  FUN_00c5e190(param_1,0xfffffffe);
  return;
}


