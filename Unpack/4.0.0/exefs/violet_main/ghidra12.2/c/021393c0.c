/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021393c0; name: FUN_021393c0
 */


void FUN_021393c0(long param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  
  if (((*PTR_DAT_047d8a48 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d8a48), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047dcf08,PTR_DAT_047d8a50,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8a48);
  }
  uVar3 = *(undefined8 *)PTR_DAT_047d8a50;
  *(undefined8 *)PTR_DAT_047d8a58 = uVar3;
  iVar2 = FUN_02139484(uVar3,param_2);
  plVar4 = (long *)(*(long *)(param_1 + 0x48) + (long)iVar2 * 0x50);
  plVar1 = (long *)plVar4[1];
  for (plVar4 = (long *)*plVar4; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    *(undefined4 *)(*plVar4 + 0xf0) = param_3;
  }
  return;
}


