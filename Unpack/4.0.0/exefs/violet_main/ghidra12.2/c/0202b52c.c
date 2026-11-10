/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0202b52c; name: FUN_0202b52c
 */


bool FUN_0202b52c(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined2 local_18;
  undefined1 local_16;
  
  if ((*PTR_DAT_047d8c00 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047d8c00);
    if (iVar1 != 0) {
      FUN_00100190(param_1,param_2,PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c00);
    }
  }
  lVar2 = *(long *)PTR_DAT_047d8c08;
  *(long *)PTR_DAT_047d8c10 = lVar2;
  local_16 = 0;
  local_18 = 0;
  iVar1 = FUN_00cf1f38(param_1,param_2,*(undefined8 *)(lVar2 + 0x70),param_3,param_4,1,0,&local_18);
  return iVar1 != 0;
}


