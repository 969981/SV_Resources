/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024e3140; name: FUN_024e3140
 */


undefined8 FUN_024e3140(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  
  uVar2 = FUN_024cb150(param_1,1);
  uVar3 = FUN_024cb150(param_1,2);
  if ((DAT_0484d610 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_0484d610);
    if (iVar1 != 0) {
      DAT_0484d600 = PTR_LAB_047df060;
      DAT_0484d608 = 0;
      __cxa_guard_release(&DAT_0484d610,extraout_x1,uVar3);
    }
  }
  FUN_024e31ec(&DAT_0484d600,uVar2,uVar3);
  FUN_00c46da0(param_1);
  return 1;
}


