/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ef78d8; name: FUN_00ef78d8
 */


ulong FUN_00ef78d8(ulong *param_1,uint param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (param_2 == 0) {
    uVar6 = *param_1;
    uVar5 = (ulong)(uint)((int)param_1[1] + (int)uVar6);
    uVar4 = param_1[1] ^ uVar6;
    *param_1 = uVar4 ^ (uVar6 >> 0x28 | uVar6 << 0x18) ^ uVar4 << 0x10;
    param_1[1] = uVar4 >> 0x1b | uVar4 << 0x25;
  }
  else if (param_2 == 1) {
    uVar5 = 0;
  }
  else {
    lVar1 = 0x1f;
    if ((param_2 << (ulong)((uint)LZCOUNT(param_2) & 0x1f) & 0x7fffffff) != 0) {
      lVar1 = 0x20;
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
    uVar3 = *param_1;
    uVar7 = uVar3 ^ param_1[1];
    uVar5 = uVar3 + param_1[1];
    uVar2 = 0;
    if (uVar6 <= uVar4) {
      uVar2 = 0xffffffffffffffff >> (-uVar8 & 0x3f);
    }
    uVar6 = uVar7 ^ (uVar3 >> 0x28 | uVar3 << 0x18) ^ uVar7 << 0x10;
    uVar4 = uVar7 >> 0x1b | uVar7 << 0x25;
    while (uVar5 = uVar5 & uVar2, param_2 <= (uint)uVar5) {
      uVar8 = uVar6 ^ uVar4;
      uVar5 = uVar6 + uVar4;
      uVar6 = uVar8 ^ (uVar6 >> 0x28 | uVar6 << 0x18) ^ uVar8 << 0x10;
      uVar4 = uVar8 >> 0x1b | uVar8 << 0x25;
    }
    *param_1 = uVar6;
    param_1[1] = uVar4;
  }
  return uVar5 & 0xffffffff;
}


