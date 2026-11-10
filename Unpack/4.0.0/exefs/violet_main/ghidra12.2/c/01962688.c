/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01962688; name: FUN_01962688
 */


undefined8 FUN_01962688(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  
  lVar1 = *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8);
  lVar3 = 0;
  if (lVar1 != 0) {
    lVar3 = (lVar1 >> 3) * 0x55 + -1;
  }
  if ((ulong)(lVar3 - (*(long *)(param_1 + 0x48) + *(long *)(param_1 + 0x40))) < 0xaa) {
    return 0;
  }
  plVar5 = *(long **)(param_1 + 0x50);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x10) + -8);
  uVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
  if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
    (**(code **)(*plVar5 + 0x18))(plVar5,uVar4,0xff0,8);
  }
  else {
    FUN_00c48fe8(plVar5,uVar4,0xff0,8);
  }
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -8;
  return 1;
}


