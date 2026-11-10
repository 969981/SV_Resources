/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ba1004; name: FUN_02ba1004
 */


ulong FUN_02ba1004(ulong *param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar1 = param_2 + 1;
    if (uVar1 == 0) {
      uVar7 = *param_1;
      uVar6 = (ulong)(uint)((int)param_1[1] + (int)uVar7);
      uVar5 = param_1[1] ^ uVar7;
      *param_1 = uVar5 ^ (uVar7 >> 0x28 | uVar7 << 0x18) ^ uVar5 << 0x10;
      param_1[1] = uVar5 >> 0x1b | uVar5 << 0x25;
    }
    else {
      lVar2 = 0x1f;
      if ((uVar1 << (ulong)((uint)LZCOUNT(uVar1) & 0x1f) & 0x7fffffff) != 0) {
        lVar2 = 0x20;
      }
      uVar5 = lVar2 - LZCOUNT(uVar1);
      uVar7 = uVar5 >> 6;
      if ((uVar5 & 0x3f) != 0) {
        uVar7 = uVar7 + 1;
      }
      uVar9 = 0;
      if (uVar7 != 0) {
        uVar9 = uVar5 / uVar7;
      }
      uVar4 = *param_1;
      uVar8 = uVar4 ^ param_1[1];
      uVar6 = uVar4 + param_1[1];
      uVar3 = 0;
      if (uVar7 <= uVar5) {
        uVar3 = 0xffffffffffffffff >> (-uVar9 & 0x3f);
      }
      uVar7 = uVar8 ^ (uVar4 >> 0x28 | uVar4 << 0x18) ^ uVar8 << 0x10;
      uVar5 = uVar8 >> 0x1b | uVar8 << 0x25;
      while (uVar6 = uVar6 & uVar3, uVar1 <= (uint)uVar6) {
        uVar9 = uVar7 ^ uVar5;
        uVar6 = uVar7 + uVar5;
        uVar7 = uVar9 ^ (uVar7 >> 0x28 | uVar7 << 0x18) ^ uVar9 << 0x10;
        uVar5 = uVar9 >> 0x1b | uVar9 << 0x25;
      }
      *param_1 = uVar7;
      param_1[1] = uVar5;
    }
  }
  return uVar6 & 0xffffffff;
}


