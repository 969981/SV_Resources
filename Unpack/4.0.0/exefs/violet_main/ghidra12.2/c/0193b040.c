/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0193b040; name: FUN_0193b040
 */


undefined8 FUN_0193b040(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  
  uVar1 = FUN_00c92df0(param_1,1,0);
  uVar2 = FUN_00c92df0(param_1,2,0);
  uVar4 = FUN_00c92df0(param_1,3,0);
  if (((DAT_04810aa0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04810aa0), iVar3 != 0)) {
    __cxa_guard_release(&DAT_04810aa0,extraout_x1,uVar4);
  }
  FUN_0193b0e8(uVar1,uVar2,uVar4);
  return 0;
}


