/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016745bc; name: FUN_016745bc
 */


undefined1 FUN_016745bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined1 *local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined1 local_14 [4];
  
  if ((*PTR_DAT_047d6c20 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047d6c20);
    if (iVar1 != 0) {
      FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d6c20);
    }
  }
  lVar2 = *(long *)PTR_DAT_047d6c28;
  *(long *)PTR_DAT_047d6c30 = lVar2;
  local_30 = local_14;
  uStack_28 = param_2;
  local_20 = param_3;
  FUN_01674660(*(undefined8 *)(lVar2 + 0x460),&local_30);
  return local_14[0];
}


