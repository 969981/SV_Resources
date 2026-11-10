/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018dbb30; name: FUN_018dbb30
 */


void FUN_018dbb30(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 8);
  while (lVar5 = lVar6, lVar5 != param_2) {
    lVar4 = *(long *)(lVar5 + -0x48);
    lVar6 = lVar5 + -0x60;
    if (lVar4 != 0) {
      plVar1 = *(long **)(lVar5 + -0x30);
      *(long *)(lVar5 + -0x40) = lVar4;
      lVar5 = *(long *)(lVar5 + -0x38) - lVar4;
      uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
      if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
        (**(code **)(*plVar1 + 0x18))(plVar1,lVar4,lVar5,4);
      }
      else {
        FUN_00c48fe8(plVar1,lVar4,lVar5,4);
      }
    }
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}


