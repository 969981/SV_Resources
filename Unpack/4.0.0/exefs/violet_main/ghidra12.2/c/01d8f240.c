/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d8f240; name: FUN_01d8f240
 */


undefined8 FUN_01d8f240(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  
  uVar2 = FUN_01d8f070(param_1,1);
  uVar3 = FUN_00c646d0(param_1,2,0);
  uVar4 = FUN_00c92df0(param_1,3,0);
  if ((DAT_04832b60 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04832b60);
    if (iVar1 != 0) {
      DAT_04832dc0 = 1;
      __cxa_guard_release(&DAT_04832b60,extraout_x1,uVar4);
    }
  }
  uVar2 = FUN_01d8f2fc(uVar2,uVar3,uVar4);
  FUN_00c5d960(param_1,uVar2);
  return 1;
}


