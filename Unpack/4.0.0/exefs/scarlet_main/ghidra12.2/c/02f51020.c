/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f51020; name: FUN_02f51020
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f51020(long param_1,uint param_2)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar22;
  
  uVar10 = _UNK_03cab898;
  uVar9 = _DAT_03cab890;
  if (0 < (int)param_2) {
    iVar16 = -1;
    iVar17 = 0;
    uVar11 = 0;
    iVar15 = 0;
    uVar18 = 0x7fffffff;
    iVar13 = -1;
    iVar14 = -1;
    uVar12 = (ulong)param_2;
    do {
      uVar5 = *(uint *)(param_1 + 0x24 + uVar12 * 4);
      iVar19 = (int)(uVar12 - 1);
      uVar3 = uVar5;
      iVar7 = iVar19;
      if ((int)uVar5 <= (int)uVar11) {
        uVar3 = uVar11;
        iVar7 = iVar13;
      }
      uVar4 = uVar18;
      iVar8 = iVar16;
      if ((int)uVar5 <= (int)uVar18) {
        uVar4 = uVar5;
        iVar8 = iVar19;
      }
      if ((int)uVar5 < 1) {
        iVar14 = iVar19;
      }
      else {
        iVar15 = iVar15 + 1;
        iVar17 = uVar5 + iVar17;
        uVar18 = uVar4;
        iVar16 = iVar8;
        uVar11 = uVar3;
        iVar13 = iVar7;
      }
      bVar1 = 1 < (long)uVar12;
      uVar12 = uVar12 - 1;
    } while (bVar1);
    uVar18 = iVar17 >> 3;
    if ((int)param_2 <= iVar17 >> 3) {
      uVar18 = param_2;
    }
    if ((int)uVar18 < 2) {
      uVar18 = 1;
    }
    if ((int)uVar18 < iVar15) {
      lVar2 = param_1 + 0x28;
      iVar15 = *(int *)(lVar2 + (long)iVar16 * 4);
      *(undefined4 *)(lVar2 + (long)iVar16 * 4) = 0;
      *(int *)(lVar2 + (long)iVar13 * 4) = *(int *)(lVar2 + (long)iVar13 * 4) + iVar15;
    }
    else if ((0xe < (int)uVar11) && (iVar15 < (int)uVar18)) {
      lVar2 = param_1 + 0xb0;
      puVar6 = (undefined8 *)(lVar2 + (long)iVar13 * 0x10);
      uVar21 = puVar6[1];
      uVar20 = *puVar6;
      fVar22 = (float)_DAT_03cabd80;
      uVar12 = (ulong)_DAT_03cabd80 >> 0x20;
      puVar6 = (undefined8 *)(lVar2 + (long)iVar14 * 0x10);
      puVar6[1] = CONCAT44((float)((ulong)uVar21 >> 0x20) + (float)((ulong)_UNK_03cabd88 >> 0x20),
                           (float)uVar21 + (float)_UNK_03cabd88);
      *puVar6 = CONCAT44((float)((ulong)uVar20 >> 0x20) + (float)uVar12,(float)uVar20 + fVar22);
      puVar6 = (undefined8 *)(lVar2 + (long)iVar13 * 0x10);
      uVar21 = puVar6[1];
      uVar20 = *puVar6;
      puVar6 = (undefined8 *)(lVar2 + (long)iVar13 * 0x10);
      puVar6[1] = CONCAT44((float)((ulong)uVar21 >> 0x20) + (float)((ulong)uVar10 >> 0x20),
                           (float)uVar21 + (float)uVar10);
      *puVar6 = CONCAT44((float)((ulong)uVar20 >> 0x20) + (float)((ulong)uVar9 >> 0x20),
                         (float)uVar20 + (float)uVar9);
      *(uint *)(param_1 + 0x28 + (long)iVar13 * 4) = uVar11 >> 1;
      *(uint *)(param_1 + 0x28 + (long)iVar14 * 4) = uVar11 >> 1;
    }
    uVar12 = 0;
    do {
      if (*(int *)(param_1 + 0xb0 + uVar12 * 4 + -0x88) == 0) {
        puVar6 = (undefined8 *)(param_1 + 0xb0 + uVar12 * 0x10);
        puVar6[1] = 0x4b0000004b000000;
        *puVar6 = 0x4b0000004b000000;
      }
      uVar12 = uVar12 + 1;
    } while (param_2 != uVar12);
  }
  return;
}


