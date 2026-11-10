/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010e0a44; name: FUN_010e0a44
 */


void FUN_010e0a44(long param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  plVar6 = *(long **)(param_1 + 8);
  while (plVar1 = plVar6, plVar1 != param_2) {
    plVar6 = plVar1 + -7;
    lVar5 = *plVar6;
    if (lVar5 != 0) {
      lVar4 = plVar1[-6];
      if (lVar4 == lVar5) {
        lVar4 = lVar5;
      }
      else {
        do {
          lVar4 = lVar4 + -0x40;
          FUN_00faeeac(lVar4);
        } while (lVar5 != lVar4);
        lVar4 = *plVar6;
      }
      plVar1[-6] = lVar5;
      lVar5 = plVar1[-5];
      plVar1 = (long *)plVar1[-4];
      uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
      if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
        (**(code **)(*plVar1 + 0x18))(plVar1,lVar4,lVar5 - lVar4,8);
      }
      else {
        FUN_00c48fe8(plVar1,lVar4,lVar5 - lVar4,8);
      }
    }
  }
  *(long **)(param_1 + 8) = param_2;
  return;
}


