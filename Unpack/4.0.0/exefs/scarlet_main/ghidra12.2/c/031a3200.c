/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031a3200; name: FUN_031a3200
 */


void FUN_031a3200(long param_1,ulong param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  byte *pbVar15;
  byte *pbVar14;
  int iVar16;
  undefined1 local_25;
  undefined3 uStack_24;
  
  param_2 = param_2 & 0xffffffff;
  do {
    iVar16 = (int)param_2;
    uVar13 = (int)(iVar16 + param_3) >> 1;
    pbVar12 = (byte *)(param_1 +
                      ((-(ulong)(uVar13 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar13 << 3) -
                      (long)(int)uVar13));
    bVar3 = *pbVar12;
    bVar4 = pbVar12[1];
    uVar10 = (ulong)param_3;
    do {
      pbVar12 = (byte *)(param_1 + -7 +
                        ((-(param_2 >> 0x1f) & 0xfffffff800000000 | param_2 << 3) -
                        (long)(int)param_2));
      do {
        pbVar11 = pbVar12;
        pbVar12 = pbVar11 + 7;
        bVar8 = pbVar11[8] < bVar4;
        if (*pbVar12 != bVar3) {
          bVar8 = *pbVar12 < bVar3;
        }
        uVar13 = (uint)param_2;
        param_2 = (ulong)(uVar13 + 1);
      } while (bVar8);
      uVar5 = uVar10 << 3;
      uVar6 = uVar10 >> 0x1f;
      iVar9 = (int)uVar10;
      uVar10 = (ulong)(iVar9 + 1);
      pbVar14 = (byte *)(param_1 + 7 + ((-uVar6 & 0xfffffff800000000 | uVar5) - (long)iVar9));
      do {
        pbVar15 = pbVar14;
        pbVar14 = pbVar15 + -7;
        iVar9 = (int)uVar10;
        uVar7 = iVar9 - 1;
        uVar10 = (ulong)uVar7;
        bVar8 = bVar4 < pbVar15[-6];
        if (bVar3 != *pbVar14) {
          bVar8 = bVar3 < *pbVar14;
        }
      } while (bVar8);
      if ((int)uVar13 <= (int)uVar7) {
        if (uVar13 != uVar7) {
          uVar1 = *(undefined4 *)pbVar14;
          uStack_24 = (undefined3)((uint)*(undefined4 *)(pbVar15 + -4) >> 8);
          uVar2 = *(undefined4 *)pbVar12;
          *(undefined4 *)(pbVar15 + -4) = *(undefined4 *)(pbVar11 + 10);
          *(undefined4 *)pbVar14 = uVar2;
          local_25 = (undefined1)((uint)uVar1 >> 0x18);
          *(uint *)(pbVar11 + 10) = CONCAT31(uStack_24,local_25);
          *(undefined4 *)pbVar12 = uVar1;
        }
        uVar10 = (ulong)(iVar9 - 2);
        uVar13 = uVar13 + 1;
      }
      param_2 = (ulong)uVar13;
    } while ((int)uVar13 <= (int)uVar10);
    if (iVar16 < (int)uVar10) {
      FUN_031a3200(param_1);
    }
  } while ((int)uVar13 < (int)param_3);
  return;
}


