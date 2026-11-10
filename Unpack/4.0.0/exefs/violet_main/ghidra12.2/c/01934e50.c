/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01934e50; name: FUN_01934e50
 */


void FUN_01934e50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 auStack_34 [4];
  
  if (((*PTR_DAT_047d6c20 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c20);
  }
  *(undefined8 *)PTR_DAT_047d6c30 = *(undefined8 *)PTR_DAT_047d6c28;
  uVar2 = FUN_016a9610();
  local_60 = auStack_34;
  uStack_58 = param_1;
  local_50 = param_2;
  uStack_48 = param_3;
  local_40 = param_4;
  FUN_01934f08(uVar2,&local_60);
  return;
}


