/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0042a980; name: FUN_0042a980
 */


uint FUN_0042a980(long param_1,long param_2,int param_3,uint param_4)

{
  byte *pbVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  uint local_60 [16];
  
  uVar7 = 0;
  uVar9 = 0;
  lVar6 = 0;
  uVar11 = 0;
  param_4 = ~param_4;
  uVar5 = 0;
  do {
    uVar8 = (uint)uVar9;
    if ((uVar8 < 0x1c) && (uVar4 = (uint)uVar7, uVar4 < 0x38)) {
      uVar3 = param_4;
      if (uVar4 != 0x37) {
        uVar3 = 0xffffffff;
      }
      uVar10 = uVar7 + 1;
      uVar11 = (ulong)(*(byte *)(param_2 + uVar7) & uVar3) << (uVar9 & 0x3f) | uVar11;
      uVar3 = (uint)(uVar9 + 8);
      if ((uVar8 < 0x14) && (uVar4 < 0x37)) {
        pbVar1 = (byte *)(param_2 + uVar10);
        uVar3 = param_4;
        if (uVar10 != 0x37) {
          uVar3 = 0xffffffff;
        }
        uVar10 = uVar7 + 2;
        uVar11 = (ulong)(*pbVar1 & uVar3) << (uVar9 + 8 & 0x3f) | uVar11;
        uVar3 = (uint)(uVar9 + 0x10);
        if ((uVar8 < 0xc) && (uVar4 < 0x36)) {
          pbVar1 = (byte *)(param_2 + uVar10);
          uVar3 = param_4;
          if (uVar10 != 0x37) {
            uVar3 = 0xffffffff;
          }
          uVar10 = uVar7 + 3;
          uVar11 = (ulong)(*pbVar1 & uVar3) << (uVar9 + 0x10 & 0x3f) | uVar11;
          uVar3 = (uint)(uVar9 + 0x18);
          if ((uVar8 < 4) && (uVar4 < 0x35)) {
            uVar4 = param_4;
            if (uVar10 != 0x37) {
              uVar4 = 0xffffffff;
            }
            uVar11 = (ulong)(*(byte *)(param_2 + uVar10) & uVar4) << (uVar9 + 0x18 & 0x3f) | uVar11;
            uVar10 = uVar7 + 4;
            uVar3 = uVar8 + 0x20;
          }
        }
      }
      uVar8 = uVar3;
      uVar7 = uVar10 & 0xffffffff;
    }
    uVar10 = uVar11 & 0xfffffff;
    if (0xe < uVar5) {
      uVar10 = uVar11;
    }
    uVar2 = uVar5 + 1;
    *(int *)(param_1 + uVar5 * 4) = (int)uVar10;
    uVar9 = (ulong)(uVar8 - 0x1c);
    lVar12 = (lVar6 + (uVar10 & 0xffffffff)) - (ulong)(uint)(&DAT_03cf2a80)[uVar5];
    uVar11 = uVar11 >> 0x1c;
    lVar6 = lVar12 >> 0x20;
    uVar5 = uVar2;
  } while (uVar2 != 0x10);
  if (param_3 == 0) {
    FUN_0042a790(local_60,param_1,param_1);
    FUN_0042a4b0(local_60);
    uVar8 = (local_60[0] & 1) - 1;
  }
  else {
    uVar8 = 0xffffffff;
  }
  uVar4 = (uint)((ulong)lVar12 >> 0x20);
  return (int)((uint)uVar11 - 1 & ((uint)uVar11 ^ 0xffffffff)) >> 0x1f &
         ((int)(uVar4 - 1 & (uVar4 ^ 0xffffffff)) >> 0x1f ^ 0xffffffffU) & uVar8;
}


