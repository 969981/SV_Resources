/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f6998; name: FUN_001f6998
 */


undefined8 FUN_001f6998(undefined8 param_1,long param_2,long param_3,uint param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  byte local_30 [16];
  
  uVar8 = param_2 + 1;
  uVar6 = 0x3f;
  if (param_4 != 0) {
    uVar6 = 0xf;
  }
  uVar7 = (ulong)uVar6;
  uVar9 = uVar8 - uVar7;
  if (uVar8 < uVar7) {
    lVar3 = 1;
  }
  else if (uVar9 < 0x80) {
    lVar3 = 2;
  }
  else {
    uVar1 = 1;
    do {
      uVar10 = uVar1;
      uVar11 = uVar9 >> 0xe;
      uVar9 = uVar9 >> 7;
      uVar1 = uVar10 + 1;
    } while (uVar11 != 0);
    if (0xf < uVar1) {
      return 0xfffffdf5;
    }
    lVar3 = uVar10 + 2;
  }
  local_30[0] = (byte)(0x100040 >> (ulong)((param_4 & 3) << 3));
  if (2 < param_4) {
    local_30[0] = 0;
  }
  uVar9 = uVar8 - uVar7;
  if (uVar8 < uVar7) {
    local_30[0] = local_30[0] & ((byte)uVar6 ^ 0xff) | (byte)uVar8;
  }
  else {
    local_30[0] = local_30[0] | (byte)uVar6;
    pbVar4 = (byte *)((ulong)local_30 | 1);
    pbVar5 = pbVar4;
    uVar8 = uVar9;
    if (0x7f < uVar9) {
      do {
        uVar9 = uVar8 >> 7;
        uVar7 = uVar8 >> 0xe;
        pbVar4 = pbVar5 + 1;
        *pbVar5 = (byte)uVar8 | 0x80;
        pbVar5 = pbVar4;
        uVar8 = uVar9;
      } while (uVar7 != 0);
    }
    *pbVar4 = (byte)uVar9;
  }
  uVar2 = FUN_001f4310(param_1,local_30,lVar3);
  if ((int)uVar2 == 0) {
    uVar2 = FUN_001f7c64(param_1,*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x18));
  }
  return uVar2;
}


