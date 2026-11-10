/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c6f700; name: FUN_01c6f700
 */


undefined8 FUN_01c6f700(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  
  uVar1 = FUN_00c92df0(param_1,1,0);
  uVar2 = FUN_00c92df0(param_1,2,0);
  uVar4 = FUN_00c92df0(param_1,3,0);
  if ((DAT_04814c88 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_04814c88);
    if (iVar3 != 0) {
      __cxa_guard_release(&DAT_04814c88,extraout_x1,uVar4);
    }
  }
  uVar1 = FUN_01c6f7b4(uVar1,uVar2,uVar4);
  FUN_00c5d960(param_1,uVar1);
  return 1;
}


