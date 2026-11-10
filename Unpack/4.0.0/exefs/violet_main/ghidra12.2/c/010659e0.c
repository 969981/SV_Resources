/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010659e0; name: FUN_010659e0
 */


undefined1  [16] FUN_010659e0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  auVar3 = FUN_00ddf004();
  if (((*PTR_DAT_047d8a48 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8a48), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047dcf08,PTR_DAT_047d8a50,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8a48);
  }
  uVar2 = *(undefined8 *)PTR_DAT_047d8a50;
  *(undefined8 *)PTR_DAT_047d8a58 = uVar2;
  iVar1 = FUN_01065a90(uVar2,param_1);
  if (-1 < iVar1) {
    *(int *)(*(long *)(param_1 + 0x1f8) + 0x58) = iVar1;
  }
  auVar3._8_8_ = auVar3._8_8_ & 0xffffffff;
  return auVar3;
}


