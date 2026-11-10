/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008887b4; name: FUN_008887b4
 */


long FUN_008887b4(long param_1,ushort param_2)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  byte *pbVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  pbVar7 = *(byte **)(param_1 + (ulong)param_2 * 8 + 0x18a8);
  bVar1 = *(byte *)(param_1 + (ulong)param_2 + 0x1888);
  lVar3 = *(long *)(param_1 + 0x1bf0);
  uVar6 = (ulong)*pbVar7;
  uVar4 = (uint)*pbVar7;
  if (1 < bVar1) {
    uVar8 = (uint)bVar1;
    if (bVar1 < 3) {
      uVar8 = 2;
    }
    fVar11 = *(float *)(lVar3 + uVar6 * 0x1c + 0xc);
    if (bVar1 == 2) {
      lVar9 = 1;
    }
    else {
      uVar2 = 0;
      do {
        uVar10 = uVar2;
        fVar12 = *(float *)(lVar3 + (ulong)pbVar7[uVar10 + 1] * 0x1c + 0xc);
        uVar5 = (uint)pbVar7[uVar10 + 1];
        if (fVar12 <= fVar11) {
          uVar5 = (uint)uVar6;
        }
        if (fVar12 <= fVar11) {
          fVar12 = fVar11;
        }
        fVar13 = *(float *)(lVar3 + (ulong)pbVar7[uVar10 + 2] * 0x1c + 0xc);
        fVar11 = fVar13;
        if (fVar13 <= fVar12) {
          fVar11 = fVar12;
        }
        uVar4 = (uint)pbVar7[uVar10 + 2];
        if (fVar13 <= fVar12) {
          uVar4 = uVar5;
        }
        uVar6 = (ulong)uVar4;
        uVar2 = uVar10 + 2;
      } while (((ulong)uVar8 - 1 & 0xfffffffffffffffe) != uVar10 + 2);
      lVar9 = uVar10 + 3;
    }
    if (((ulong)uVar8 - 1 & 1) != 0) {
      uVar8 = (uint)pbVar7[lVar9];
      if (*(float *)(lVar3 + (ulong)pbVar7[lVar9] * 0x1c + 0xc) <= fVar11) {
        uVar8 = uVar4;
      }
      uVar6 = (ulong)uVar8;
    }
  }
  return lVar3 + uVar6 * 0x1c;
}


