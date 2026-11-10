/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01990ce8; name: FUN_01990ce8
 */


short FUN_01990ce8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined2 local_4c;
  undefined1 *local_48;
  undefined2 *puStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 auStack_24 [4];
  
  if (((*PTR_DAT_047d6c20 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c20);
  }
  *(undefined8 *)PTR_DAT_047d6c30 = *(undefined8 *)PTR_DAT_047d6c28;
  uVar2 = FUN_016a9610();
  local_48 = auStack_24;
  puStack_40 = &local_4c;
  local_4c = (ushort)local_4c._1_1_ << 8;
  local_38 = param_2;
  uStack_30 = param_3;
  FUN_01990d98(uVar2,&local_48);
  return local_4c;
}


