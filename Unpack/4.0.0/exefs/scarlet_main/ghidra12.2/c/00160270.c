/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00160270; name: FUN_00160270
 */


void FUN_00160270(long param_1,uint param_2,long param_3)

{
  bool bVar1;
  ushort *puVar2;
  int iVar3;
  undefined1 uVar4;
  short sVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  ushort uVar15;
  ushort uVar16;
  uint uVar17;
  uint uVar18;
  ushort uVar19;
  int iVar20;
  ushort *puVar21;
  ulong uVar22;
  
  iVar20 = *(int *)(param_1 + 0x288);
  uVar10 = (ulong)iVar20;
  lVar9 = *(long *)(param_1 + 0x2a0);
  *(undefined2 *)(param_3 + uVar10 * 4 + 2) = 0xffff;
  uVar15 = *(short *)(param_3 + 6) + *(short *)(param_3 + 2);
  *(ushort *)(param_3 + 2) = uVar15;
  if (2 < iVar20) {
    iVar11 = 0;
    uVar17 = 1;
    iVar13 = 2;
    uVar16 = *(ushort *)(param_3 + 10);
    if (uVar16 <= uVar15) goto LAB_001602d8;
LAB_001602b8:
    lVar12 = (long)iVar11;
    iVar11 = iVar11 + 1;
    *(short *)(param_3 + lVar12 * 4 + 2) = (short)uVar17;
    lVar12 = param_3 + (long)iVar13 * 4;
    uVar16 = uVar15;
    if (iVar11 < (int)uVar17) goto LAB_001602ec;
LAB_001602d0:
    uVar15 = *(ushort *)(lVar12 + 2);
    do {
      iVar13 = iVar13 + 1;
      uVar18 = uVar17;
      uVar19 = uVar15;
      while( true ) {
        uVar17 = uVar18 + 1;
        *(ushort *)(param_3 + (long)(int)uVar18 * 4 + 2) = uVar19 + uVar16;
        if (iVar20 <= iVar13) goto LAB_00160354;
        uVar15 = *(ushort *)(param_3 + (long)iVar11 * 4 + 2);
        uVar16 = *(ushort *)(param_3 + (long)iVar13 * 4 + 2);
        if (uVar15 < uVar16) goto LAB_001602b8;
LAB_001602d8:
        iVar13 = iVar13 + 1;
        lVar12 = param_3 + (long)iVar13 * 4;
        if ((int)uVar17 <= iVar11) goto LAB_001602d0;
LAB_001602ec:
        puVar21 = (ushort *)(param_3 + (long)iVar11 * 4 + 2);
        uVar19 = *puVar21;
        uVar15 = *(ushort *)(lVar12 + 2);
        if (uVar15 <= uVar19) break;
        iVar11 = iVar11 + 1;
        *puVar21 = (ushort)uVar17;
        uVar18 = uVar17;
      }
    } while( true );
  }
  iVar11 = 0;
  uVar17 = 1;
LAB_00160354:
  if ((int)uVar17 < (int)(iVar20 - 1U)) {
    uVar18 = uVar17;
    if ((iVar20 + ~uVar17 & 1) != 0) {
      iVar13 = iVar11 + 1;
      lVar12 = (long)iVar11;
      iVar11 = iVar11 + 2;
      *(short *)(param_3 + lVar12 * 4 + 2) = (short)uVar17;
      *(short *)(param_3 + (long)iVar13 * 4 + 2) = (short)uVar17;
      uVar18 = uVar17 + 1;
    }
    if (iVar20 - 2U != uVar17) {
      do {
        iVar13 = iVar11 + 1;
        iVar8 = iVar11 + 2;
        sVar5 = (short)uVar18;
        *(short *)(param_3 + (long)iVar11 * 4 + 2) = sVar5;
        iVar3 = iVar11 + 3;
        iVar11 = iVar11 + 4;
        *(short *)(param_3 + (long)iVar13 * 4 + 2) = sVar5;
        uVar18 = uVar18 + 2;
        *(short *)(param_3 + (long)iVar8 * 4 + 2) = sVar5 + 1;
        *(short *)(param_3 + (long)iVar3 * 4 + 2) = sVar5 + 1;
      } while (iVar20 - 1U != uVar18);
    }
  }
  uVar17 = iVar20 - 2;
  uVar14 = (ulong)uVar17;
  iVar20 = iVar20 + -3;
  *(undefined2 *)(param_3 + (long)(int)uVar17 * 4 + 2) = 0;
  if (-1 < iVar20) {
    lVar12 = (long)iVar20 + 1;
    puVar21 = (ushort *)(param_3 + (long)iVar20 * 4 + 2);
    do {
      lVar12 = lVar12 + -1;
      *puVar21 = *(short *)(param_3 + (ulong)*puVar21 * 4 + 2) + 1;
      puVar21 = puVar21 + -2;
    } while (0 < lVar12);
  }
  uVar15 = *(ushort *)(param_3 + 2);
  uVar18 = 0;
  iVar13 = 1;
  iVar20 = 0;
  if (-1 < (int)uVar17) goto LAB_00160468;
LAB_00160494:
  iVar11 = (int)uVar10;
  uVar17 = iVar13 - iVar20;
  if (0 < (int)uVar17) goto LAB_001604b4;
LAB_00160448:
  uVar10 = uVar10 & 0xffffffff;
  do {
    uVar17 = (uint)uVar14;
    uVar18 = uVar18 + 1;
    iVar13 = iVar20 << 1;
    if (uVar18 == param_2) {
      iVar20 = (int)uVar10;
      if (0 < iVar20) {
        uVar16 = (ushort)param_2;
        uVar4 = (undefined1)param_2;
        if (iVar20 == 1) {
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          puVar21 = (ushort *)(param_3 + 4);
          do {
            puVar21[-1] = uVar16;
            lVar12 = lVar12 + 2;
            *(undefined1 *)(lVar9 + (ulong)puVar21[-2]) = uVar4;
            uVar19 = *puVar21;
            puVar21[1] = uVar16;
            puVar21 = puVar21 + 4;
            *(undefined1 *)(lVar9 + (ulong)uVar19) = uVar4;
          } while (uVar10 - (uVar10 & 1) != lVar12);
        }
        if ((uVar10 & 1) != 0) {
          puVar21 = (ushort *)(param_3 + lVar12 * 4);
          puVar21[1] = uVar16;
          *(undefined1 *)(lVar9 + (ulong)*puVar21) = uVar4;
        }
      }
      *(int *)(param_1 + (long)(int)param_2 * 4 + 0x200) = iVar20;
LAB_001605f0:
      *(uint *)(param_1 + 0x298) =
           (uint)*(ushort *)(param_3 + (long)(*(int *)(param_1 + 0x288) + -1) * 4 + 2);
      *(uint *)(param_1 + 0x29c) = uVar15 + 1;
      return;
    }
    iVar20 = 0;
    if ((int)uVar17 < 0) goto LAB_00160494;
LAB_00160468:
    iVar11 = (int)uVar10;
    iVar20 = 0;
    puVar21 = (ushort *)(param_3 + 2) + (long)(int)uVar17 * 2;
    uVar22 = (long)(int)uVar17;
    while (uVar18 == *puVar21) {
      uVar14 = uVar22 - 1;
      iVar20 = iVar20 + 1;
      puVar21 = puVar21 + -2;
      bVar1 = (long)uVar22 < 1;
      uVar22 = uVar14;
      if (bVar1) goto LAB_00160494;
    }
    uVar14 = uVar22 & 0xffffffff;
    uVar17 = iVar13 - iVar20;
    if ((int)uVar17 < 1) goto LAB_00160448;
LAB_001604b4:
    uVar7 = (ulong)uVar17;
    uVar6 = iVar11 - uVar17;
    uVar10 = (ulong)uVar6;
    uVar22 = uVar7 & 3;
    uVar4 = (undefined1)uVar18;
    uVar16 = (ushort)uVar18;
    if (uVar7 - 1 < 3) {
      lVar12 = 0;
    }
    else {
      lVar12 = 0;
      do {
        iVar8 = uVar6 + (int)lVar12;
        lVar12 = lVar12 + 4;
        puVar21 = (ushort *)(param_3 + (long)iVar8 * 4);
        puVar21[1] = uVar16;
        *(undefined1 *)(lVar9 + (ulong)*puVar21) = uVar4;
        puVar21 = (ushort *)(param_3 + (long)(iVar8 + 1) * 4);
        puVar21[1] = uVar16;
        *(undefined1 *)(lVar9 + (ulong)*puVar21) = uVar4;
        puVar21 = (ushort *)(param_3 + (long)(iVar8 + 2) * 4);
        puVar21[1] = uVar16;
        puVar2 = (ushort *)(param_3 + (long)(iVar8 + 3) * 4);
        *(undefined1 *)(lVar9 + (ulong)*puVar21) = uVar4;
        puVar2[1] = uVar16;
        *(undefined1 *)(lVar9 + (ulong)*puVar2) = uVar4;
      } while (uVar7 - uVar22 != lVar12);
    }
    if ((uVar17 & 3) != 0) {
      iVar13 = (iVar20 + iVar11 + (int)lVar12) - iVar13;
      do {
        puVar21 = (ushort *)(param_3 + (long)iVar13 * 4);
        iVar13 = iVar13 + 1;
        uVar22 = uVar22 - 1;
        puVar21[1] = uVar16;
        *(undefined1 *)(lVar9 + (ulong)*puVar21) = uVar4;
      } while (uVar22 != 0);
    }
    *(uint *)(param_1 + (long)(int)uVar18 * 4 + 0x200) = uVar17;
    if (uVar6 == 0) goto LAB_001605f0;
  } while( true );
}


