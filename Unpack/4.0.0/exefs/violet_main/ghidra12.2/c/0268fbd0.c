/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0268fbd0; name: FUN_0268fbd0
 */


undefined8 FUN_0268fbd0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  
  uVar2 = FUN_0268da20(param_1,1);
  uVar3 = FUN_00c646d0(param_1,2,0);
  if (((DAT_04856a80 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04856a80), iVar1 != 0)) {
    DAT_04856a70 = &LAB_02ba5198;
    DAT_04856a78 = 0;
    __cxa_guard_release(&DAT_04856a80,extraout_x1,uVar3);
  }
  FUN_0268faa0(&DAT_04856a70,uVar2,uVar3);
  return 0;
}


