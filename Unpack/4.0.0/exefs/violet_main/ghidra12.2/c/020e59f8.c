/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020e59f8; name: FUN_020e59f8
 */


undefined1 FUN_020e59f8(undefined4 param_1)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 local_28;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  *(undefined8 *)PTR_DAT_047d4ca8 = *(undefined8 *)PTR_DAT_047d4ca0;
  lVar2 = FUN_020e5ab8();
  local_28 = (**(code **)(**(long **)(lVar2 + 0x40) + 0x38))(*(long **)(lVar2 + 0x40),param_1);
  puVar3 = (undefined1 *)
           (**(code **)(**(long **)(lVar2 + 0x40) + 0x40))(*(long **)(lVar2 + 0x40),&local_28);
  return *puVar3;
}


