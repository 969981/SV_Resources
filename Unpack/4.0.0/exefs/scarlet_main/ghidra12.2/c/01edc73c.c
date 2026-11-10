/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01edc73c; name: FUN_01edc73c
 */


uint FUN_01edc73c(ulong *param_1,ushort *param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar5 = (uint)*param_2;
  iVar4 = (uint)param_2[1] - (uint)*param_2;
  if (iVar4 != 0) {
    uVar1 = iVar4 + 1;
    if (uVar1 == 0) {
      uVar7 = *param_1;
      uVar5 = (int)param_1[1] + (int)uVar7;
      uVar6 = param_1[1] ^ uVar7;
      *param_1 = uVar6 ^ (uVar7 >> 0x28 | uVar7 << 0x18) ^ uVar6 << 0x10;
      param_1[1] = uVar6 >> 0x1b | uVar6 << 0x25;
    }
    else {
      lVar2 = 0x1f;
      if ((uVar1 << (ulong)((uint)LZCOUNT(uVar1) & 0x1f) & 0x7fffffff) != 0) {
        lVar2 = 0x20;
      }
      uVar6 = lVar2 - LZCOUNT(uVar1);
      uVar7 = uVar6 >> 6;
      if ((uVar6 & 0x3f) != 0) {
        uVar7 = uVar7 + 1;
      }
      uVar8 = 0;
      if (uVar7 != 0) {
        uVar8 = uVar6 / uVar7;
      }
      uVar3 = 0;
      if (uVar7 <= uVar6) {
        uVar3 = (uint)(0xffffffffffffffff >> (-uVar8 & 0x3f));
      }
      uVar7 = *param_1;
      uVar6 = param_1[1];
      do {
        uVar8 = uVar7 ^ uVar6;
        iVar4 = (int)uVar6;
        uVar6 = uVar8 >> 0x1b | uVar8 << 0x25;
        uVar5 = (int)uVar7 + iVar4 & uVar3;
        uVar7 = uVar8 ^ (uVar7 >> 0x28 | uVar7 << 0x18) ^ uVar8 << 0x10;
      } while (uVar1 <= uVar5);
      *param_1 = uVar7;
      param_1[1] = uVar6;
      uVar5 = *param_2 + uVar5;
    }
  }
  return uVar5;
}


