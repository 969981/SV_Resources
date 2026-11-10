/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012440f0; name: FUN_012440f0
 */


ulong FUN_012440f0(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (param_2 < 2) {
    uVar5 = 0;
  }
  else {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
    lVar1 = 0x3f;
    if ((param_2 << (LZCOUNT(param_2) & 0x3fU) & 0x7fffffffffffffff) != 0) {
      lVar1 = 0x40;
    }
    uVar4 = lVar1 - LZCOUNT(param_2);
    uVar6 = uVar4 >> 6;
    if ((uVar4 & 0x3f) != 0) {
      uVar6 = uVar6 + 1;
    }
    uVar8 = 0;
    if (uVar6 != 0) {
      uVar8 = uVar4 / uVar6;
    }
    uVar3 = *(ulong *)(param_1 + 8);
    uVar7 = uVar3 ^ *(ulong *)(param_1 + 0x10);
    uVar5 = uVar3 + *(ulong *)(param_1 + 0x10);
    uVar2 = 0;
    if (uVar6 <= uVar4) {
      uVar2 = 0xffffffffffffffff >> (-uVar8 & 0x3f);
    }
    uVar6 = uVar7 ^ (uVar3 >> 0x28 | uVar3 << 0x18) ^ uVar7 << 0x10;
    uVar4 = uVar7 >> 0x1b | uVar7 << 0x25;
    while (uVar5 = uVar5 & uVar2, param_2 <= uVar5) {
      uVar8 = uVar6 ^ uVar4;
      uVar5 = uVar6 + uVar4;
      uVar6 = uVar8 ^ (uVar6 >> 0x28 | uVar6 << 0x18) ^ uVar8 << 0x10;
      uVar4 = uVar8 >> 0x1b | uVar8 << 0x25;
    }
    *(ulong *)(param_1 + 8) = uVar6;
    *(ulong *)(param_1 + 0x10) = uVar4;
  }
  return uVar5;
}


