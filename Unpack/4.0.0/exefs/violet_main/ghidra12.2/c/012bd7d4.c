/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012bd7d4; name: FUN_012bd7d4
 */


void FUN_012bd7d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 *local_20;
  undefined8 uStack_18;
  
  if ((*PTR_DAT_047e23d8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047e23d8);
    if (iVar1 != 0) {
      FUN_00100190(PTR_LAB_047e2470,PTR_DAT_047e23e0,&PTR_LOOP_04483000,param_3);
      __cxa_guard_release(PTR_DAT_047e23d8);
    }
  }
  DAT_04863910 = *(undefined8 *)PTR_DAT_047e23e0;
  local_20 = &LAB_02c7d5ac;
  uStack_18 = param_2;
  FUN_02c7c8a8(DAT_04863910,param_1,1,param_3,&local_20);
  return;
}


