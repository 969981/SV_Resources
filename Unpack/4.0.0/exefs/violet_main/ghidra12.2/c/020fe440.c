/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020fe440; name: FUN_020fe440
 */


bool FUN_020fe440(long param_1)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  long *plVar5;
  
  plVar5 = (long *)FUN_0147ac98(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x30),
                                *(undefined1 *)(param_1 + 0x11c),0);
  uVar1 = *(uint *)(param_1 + 0x3dc);
  uVar3 = (**(code **)(*plVar5 + 0x560))(plVar5,8);
  bVar2 = uVar1 < uVar3;
  if (bVar2) {
    uVar4 = FUN_020fe4e8(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x290),
                         *(undefined1 *)(param_1 + 0x11c));
    FUN_01070a58(param_1 + 0x3b0,uVar4);
    FUN_00f63a6c(param_1 + 0x3b0,0);
    uVar4 = (**(code **)(*plVar5 + 0x560))(plVar5,8);
    *(undefined4 *)(param_1 + 0x3dc) = uVar4;
  }
  return bVar2;
}


