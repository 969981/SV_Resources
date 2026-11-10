/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003f2ca0; name: FUN_003f2ca0
 */


long FUN_003f2ca0(long *param_1,uint param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    return 0xffffffff;
  }
  if ((int)*(uint *)(param_1 + 1) < 1) {
    return 0;
  }
  lVar5 = 0;
  uVar6 = (ulong)param_2;
  uVar7 = (ulong)*(uint *)(param_1 + 1);
  do {
    uVar3 = uVar7 - 1;
    uVar2 = (ulong)*(uint *)(*param_1 + -4 + uVar7 * 4) | lVar5 << 0x20;
    uVar4 = 0;
    if (uVar6 != 0) {
      uVar4 = uVar2 / uVar6;
    }
    lVar5 = uVar2 - uVar4 * uVar6;
    bVar1 = 0 < (long)uVar7;
    uVar7 = uVar3;
  } while (uVar3 != 0 && bVar1);
  return lVar5;
}


