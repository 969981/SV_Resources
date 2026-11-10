/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00361720; name: FUN_00361720
 */


bool FUN_00361720(long *param_1,long *param_2)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  
  uVar2 = *(uint *)(param_1 + 1);
  if (uVar2 == *(uint *)((long)param_1 + 0xc)) {
    uVar4 = uVar2 * 3 >> 1;
    if (uVar4 < uVar2 + 1) {
      uVar4 = uVar2 + 1;
    }
    *(uint *)((long)param_1 + 0xc) = uVar4;
    lVar3 = FUN_0038c7f0(*param_1,(ulong)uVar4 << 3);
    uVar2 = *(uint *)(param_1 + 1);
    *param_1 = lVar3;
    *(uint *)(param_2 + 1) = uVar2;
  }
  else {
    lVar3 = *param_1;
    *(uint *)(param_2 + 1) = uVar2;
  }
  if (uVar2 == 0) {
    uVar4 = 0;
  }
  else {
    lVar5 = *param_2;
    uVar6 = uVar2;
    do {
      uVar4 = uVar6;
      if (-1 < (int)(uVar6 - 1)) {
        uVar4 = uVar6 - 1;
      }
      uVar4 = (int)uVar4 >> 1;
      plVar7 = *(long **)(lVar3 + (ulong)uVar4 * 8);
      if (*plVar7 <= lVar5) {
        uVar4 = uVar6;
        break;
      }
      *(long **)(lVar3 + (ulong)uVar6 * 8) = plVar7;
      *(uint *)(plVar7 + 1) = uVar6;
      bVar1 = 2 < uVar6;
      uVar6 = uVar4;
    } while (bVar1);
  }
  *(long **)(lVar3 + (ulong)uVar4 * 8) = param_2;
  *(uint *)(param_2 + 1) = uVar4;
  *(uint *)(param_1 + 1) = uVar2 + 1;
  return uVar4 == 0;
}


