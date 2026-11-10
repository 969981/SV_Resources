/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a321d4; name: FUN_00a321d4
 */


ulong FUN_00a321d4(ulong param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  
  if ((int)param_1 != 0) {
    uVar1 = (int)param_1 + 1;
    if (uVar1 == 0) {
      iVar5 = (int)DAT_04540818;
      iVar7 = (int)DAT_04540820;
      uVar8 = DAT_04540820 ^ DAT_04540818;
      DAT_04540818 = uVar8 ^ (DAT_04540818 >> 0x28 | DAT_04540818 << 0x18) ^ uVar8 << 0x10;
      DAT_04540820 = uVar8 >> 0x1b | uVar8 << 0x25;
      return (ulong)(uint)(iVar7 + iVar5);
    }
    lVar2 = 0x1f;
    if ((uVar1 << (ulong)((uint)LZCOUNT(uVar1) & 0x1f) & 0x7fffffff) != 0) {
      lVar2 = 0x20;
    }
    uVar6 = lVar2 - LZCOUNT(uVar1);
    uVar8 = uVar6 >> 6;
    if ((uVar6 & 0x3f) != 0) {
      uVar8 = uVar8 + 1;
    }
    uVar4 = 0;
    if (uVar8 != 0) {
      uVar4 = uVar6 / uVar8;
    }
    uVar3 = 0;
    if (uVar8 <= uVar6) {
      uVar3 = 0xffffffffffffffff >> (-uVar4 & 0x3f);
    }
    do {
      uVar8 = DAT_04540818 ^ DAT_04540820;
      param_1 = DAT_04540818 + DAT_04540820;
      DAT_04540820 = uVar8 >> 0x1b | uVar8 << 0x25;
      param_1 = param_1 & uVar3;
      DAT_04540818 = uVar8 ^ (DAT_04540818 >> 0x28 | DAT_04540818 << 0x18) ^ uVar8 << 0x10;
    } while (uVar1 <= (uint)param_1);
  }
  return param_1;
}


