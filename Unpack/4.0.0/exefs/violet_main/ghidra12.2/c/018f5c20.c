/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018f5c20; name: FUN_018f5c20
 */


undefined8 FUN_018f5c20(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  
  uVar3 = FUN_01672b10(param_1,1);
  iVar1 = FUN_00c92df0(param_1,2,0);
  uVar4 = FUN_015c2210(param_1,3);
  if (((DAT_04812e78 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04812e78), iVar2 != 0)) {
    DAT_04815c00 = 1;
    __cxa_guard_release(&DAT_04812e78,extraout_x1,uVar4);
  }
  FUN_018f5ccc(uVar3,(long)iVar1,uVar4);
  return 0;
}


