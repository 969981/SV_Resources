/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01576750; name: FUN_01576750
 */


void FUN_01576750(undefined4 param_1)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  undefined1 local_18 [4];
  undefined4 local_14;
  
  if ((*PTR_DAT_047d89f8 & 1) == 0) {
    local_14 = param_1;
    iVar2 = __cxa_guard_acquire(PTR_DAT_047d89f8);
    param_1 = local_14;
    if (iVar2 != 0) {
      FUN_00100190(PTR_LAB_047d8ed8,PTR_DAT_047d8a00,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d89f8);
      param_1 = local_14;
    }
  }
  lVar3 = *(long *)PTR_DAT_047d8a00;
  *(long *)PTR_DAT_047d8a08 = lVar3;
  uVar1 = *(undefined1 *)(lVar3 + 0x2c);
  local_18[0] = (undefined1)param_1;
  *(undefined1 *)(lVar3 + 0x2c) = local_18[0];
  if (*(code **)(lVar3 + 0x30) != (code *)0x0) {
    local_14 = CONCAT31(local_14._1_3_,uVar1);
    (**(code **)(lVar3 + 0x30))(lVar3 + 0x50,&local_14,local_18);
  }
  return;
}


