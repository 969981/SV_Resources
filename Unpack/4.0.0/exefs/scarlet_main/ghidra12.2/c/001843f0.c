/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001843f0; name: FUN_001843f0
 */


void FUN_001843f0(int *param_1,int *param_2,uint param_3,int param_4,int param_5)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  int *piVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  int iVar19;
  int iVar20;
  
  puVar10 = PTR_DAT_047cb928;
  puVar9 = PTR_DAT_047cb920;
  if ((-(ulong)(param_3 >> 0x1f) & 0xfffffffc00000000) == 0 && param_3 == 0) {
    iVar13 = 0;
  }
  else {
    uVar14 = (long)(int)param_3 * 4 - 4;
    uVar16 = (uVar14 >> 2) + 1;
    uVar17 = uVar16 & 3;
    piVar15 = param_1;
    if (uVar14 < 0xc) {
      iVar13 = 0;
    }
    else {
      iVar13 = 0;
      lVar18 = uVar16 - uVar17;
      do {
        iVar19 = *piVar15;
        piVar5 = piVar15 + 1;
        piVar1 = piVar15 + 2;
        piVar6 = piVar15 + 3;
        piVar15 = piVar15 + 4;
        iVar13 = *piVar6 + *piVar1 + *piVar5 + iVar19 + iVar13;
        lVar18 = lVar18 + -4;
      } while (lVar18 != 0);
    }
    if (uVar17 != 0) {
      lVar18 = -uVar17;
      do {
        iVar13 = *piVar15 + iVar13;
        bVar11 = lVar18 != -1;
        lVar18 = lVar18 + 1;
        piVar15 = piVar15 + 1;
      } while (bVar11);
    }
    iVar13 = iVar13 << 2;
  }
  uVar3 = iVar13 + param_3;
  if (uVar3 < 0x20) {
    iVar13 = *(int *)(PTR_DAT_047cb928 + (ulong)uVar3 * 4);
  }
  else {
    uVar4 = (int)LZCOUNT(uVar3) + 1;
    uVar2 = uVar3 << (ulong)(uVar4 & 0x1f);
    uVar7 = uVar2 >> 0x1a;
    iVar13 = (uVar4 * 0x2000 - (uint)*(ushort *)(PTR_DAT_047cb920 + (ulong)uVar7 * 2)) -
             (int)((ulong)((uint)*(ushort *)(PTR_DAT_047cb920 + (ulong)(uVar7 + 1) * 2) -
                          (uint)*(ushort *)(PTR_DAT_047cb920 + (ulong)uVar7 * 2)) *
                   (ulong)(uVar2 << 6) + 0x9fffffff >> 0x20);
  }
  if (0 < (int)param_3) {
    uVar14 = (ulong)param_3;
    iVar19 = 0;
    uVar16 = uVar14;
    piVar15 = param_2;
    do {
      uVar4 = *param_1 << 2 | 1;
      if (uVar4 < 0x20) {
        iVar20 = *(int *)(puVar10 + (ulong)uVar4 * 4);
      }
      else {
        uVar2 = (int)LZCOUNT(uVar4) + 1;
        uVar7 = uVar4 << (ulong)(uVar2 & 0x1f);
        uVar8 = uVar7 >> 0x1a;
        uVar12 = (uint)*(ushort *)(puVar9 + (ulong)uVar8 * 2);
        iVar20 = (uVar2 * 0x2000 - uVar12) -
                 (int)((ulong)(*(ushort *)(puVar9 + (ulong)(uVar8 + 1) * 2) - uVar12) *
                       (ulong)(uVar7 << 6) + 0x9fffffff >> 0x20);
      }
      iVar20 = (iVar20 - iVar13) * 0x20 >> 0xd;
      iVar19 = iVar19 + iVar20 * uVar4;
      param_1 = param_1 + 1;
      uVar16 = uVar16 - 1;
      *piVar15 = iVar20 + param_4;
      piVar15 = piVar15 + 1;
    } while (uVar16 != 0);
    if ((int)(uVar3 * param_5) < iVar19 && 0 < (int)param_3) {
      param_4 = param_4 + 0x100;
      uVar16 = uVar14 & 3;
      if (uVar14 - 1 < 3) {
        lVar18 = 0;
      }
      else {
        lVar18 = 0;
        piVar15 = param_2 + 2;
        do {
          lVar18 = lVar18 + 4;
          piVar15[-2] = param_4;
          piVar15[-1] = param_4;
          *piVar15 = param_4;
          piVar15[1] = param_4;
          piVar15 = piVar15 + 4;
        } while (uVar14 - uVar16 != lVar18);
      }
      if ((param_3 & 3) != 0) {
        piVar15 = param_2 + lVar18;
        do {
          uVar16 = uVar16 - 1;
          *piVar15 = param_4;
          piVar15 = piVar15 + 1;
        } while (uVar16 != 0);
      }
    }
  }
  return;
}


