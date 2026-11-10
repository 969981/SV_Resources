/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003ec250; name: FUN_003ec250
 */


undefined4 FUN_003ec250(long param_1,long param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (param_3 != 0) {
    uVar7 = (ulong)(param_3 - 1U);
    uVar8 = -(ulong)(param_3 - 1U >> 0x1f) & 0xfffffffc00000000 | uVar7 << 2;
    uVar1 = *(uint *)(param_1 + uVar8);
    uVar2 = *(uint *)(param_2 + uVar8);
    bVar4 = uVar2 <= uVar1;
    bVar5 = uVar1 == uVar2;
    if (!bVar5) {
LAB_003ec29c:
      uVar6 = 0xffffffff;
      if (bVar4 && !bVar5) {
        uVar6 = 1;
      }
      return uVar6;
    }
    if (1 < param_3) {
      do {
        uVar3 = (int)uVar7 - 1;
        uVar7 = (ulong)uVar3;
        uVar1 = *(uint *)(param_1 + uVar7 * 4);
        uVar2 = *(uint *)(param_2 + uVar7 * 4);
        bVar4 = uVar2 <= uVar1;
        bVar5 = uVar1 == uVar2;
        if (!bVar5) goto LAB_003ec29c;
      } while (0 < (int)uVar3);
    }
  }
  return 0;
}


