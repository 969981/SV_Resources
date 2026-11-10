/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b79670; name: FUN_01b79670
 */


undefined8 FUN_01b79670(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00c92df0(param_1,1,0);
  uVar3 = FUN_00c92df0(param_1,2,0);
  if (((DAT_04809698 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04809698), iVar2 != 0)) {
    __cxa_guard_release(&DAT_04809698,uVar3);
  }
  FUN_01b796f8(uVar1,uVar3);
  return 0;
}


