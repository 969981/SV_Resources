/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cbead0; name: FUN_00cbead0
 */


long FUN_00cbead0(long param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = param_2[1];
  *(long *)(*param_2 + 8) = lVar1;
  *(long *)param_2[1] = *param_2;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -1;
  (**(code **)param_2[2])();
  plVar4 = *(long **)(param_1 + 0x18);
  uVar2 = (**(code **)(*plVar4 + 0xf8))(plVar4);
  if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
    (**(code **)(*plVar4 + 0x18))(plVar4,param_2,0x40,8);
    return lVar1;
  }
  FUN_00c48fe8(plVar4,param_2,0x40,8);
  return lVar1;
}


