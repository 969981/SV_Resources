/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003dede0; name: FUN_003dede0
 */


void FUN_003dede0(undefined8 *param_1,int param_2,uint param_3,uint param_4,byte param_5)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  bool bVar5;
  byte *pbVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  pbVar6 = (byte *)*param_1;
  bVar2 = param_5 & 0xc0 | (param_2 != 0) << 5;
  bVar3 = (byte)param_4;
  if ((int)param_4 < 0x1f) {
    *pbVar6 = bVar2 | bVar3 & 0x1f;
  }
  else {
    *pbVar6 = bVar2 | 0x1f;
    uVar1 = 0;
    uVar8 = param_4;
    do {
      uVar9 = uVar1;
      uVar8 = uVar8 >> 7;
      uVar1 = uVar9 + 1;
    } while (uVar8 != 0);
    uVar11 = uVar1;
    if ((uVar9 & 1) == 0) {
      param_4 = (int)param_4 >> 7;
      pbVar6[uVar1] = bVar3 & 0x7f;
      uVar11 = uVar9;
      uVar9 = uVar9 - 1;
    }
    if ((int)uVar1 != 1) {
      uVar11 = uVar11 & 0xffffffff;
      lVar10 = uVar9 - uVar1;
      do {
        bVar5 = lVar10 != 0;
        (pbVar6 + uVar9)[1] = (byte)param_4 & 0x7f | ((int)uVar11 != (int)uVar1) << 7;
        uVar8 = param_4 >> 7;
        uVar11 = (ulong)((int)uVar9 - 1);
        param_4 = (int)param_4 >> 0xe;
        lVar10 = lVar10 + -2;
        pbVar6[uVar9] = bVar5 << 7 | (byte)uVar8 & 0x7f;
        bVar5 = 1 < (long)uVar9;
        uVar9 = uVar9 - 2;
      } while (bVar5);
    }
    pbVar6 = pbVar6 + uVar1;
  }
  pbVar4 = pbVar6 + 1;
  if (param_2 == 2) {
    *pbVar4 = 0x80;
    *param_1 = pbVar6 + 2;
    return;
  }
  if ((int)param_3 < 0x80) {
    *pbVar4 = (byte)param_3;
    *param_1 = pbVar6 + 2;
    return;
  }
  uVar1 = 0;
  uVar9 = (ulong)param_3;
  do {
    uVar7 = uVar1;
    uVar1 = uVar7 + 1;
    uVar11 = uVar9 >> 8;
    uVar9 = uVar9 >> 8;
  } while ((int)uVar11 != 0);
  *pbVar4 = (byte)uVar1 | 0x80;
  uVar9 = uVar1 & 3;
  uVar11 = uVar7;
  if (uVar9 != 0) {
    do {
      uVar11 = uVar1;
      pbVar4[uVar11] = (byte)param_3;
      param_3 = (int)param_3 >> 8;
      uVar9 = uVar9 - 1;
      uVar1 = uVar11 - 1;
    } while (uVar9 != 0);
    uVar11 = uVar11 - 2;
  }
  if (2 < (uint)uVar7) {
    do {
      uVar8 = (param_3 & 0xff00ff00) >> 8 | (param_3 & 0xff00ff) << 8;
      *(uint *)(pbVar4 + (uVar11 - 2)) = uVar8 >> 0x10 | uVar8 << 0x10;
      param_3 = (int)param_3 >> 0x1f;
      bVar5 = 3 < (long)uVar11;
      uVar11 = uVar11 - 4;
    } while (bVar5);
  }
  *param_1 = pbVar4 + uVar7 + 2;
  return;
}


