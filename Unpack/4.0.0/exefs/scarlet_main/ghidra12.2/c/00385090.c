/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00385090; name: FUN_00385090
 */


void FUN_00385090(long param_1,long param_2,int param_3)

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  
  if (-1 < param_3) {
    uVar2 = *(ushort *)(param_2 + 2);
    uVar16 = 0xffffffff;
    uVar10 = 0;
    iVar11 = 0x8a;
    if (uVar2 != 0) {
      iVar11 = 7;
    }
    iVar14 = 3;
    if (uVar2 != 0) {
      iVar14 = 4;
    }
    iVar6 = 0;
    do {
      uVar13 = (ulong)uVar2;
      uVar10 = uVar10 + 1;
      uVar3 = *(ushort *)(param_2 + uVar10 * 4 + 2);
      iVar7 = iVar6 + 1;
      uVar5 = (uint)uVar2;
      uVar12 = (uint)uVar3;
      if ((iVar11 <= iVar7) || (uVar5 != uVar12)) {
        if (iVar7 < iVar14) {
          uVar9 = *(uint *)(param_1 + 0x1734);
          lVar17 = param_1 + uVar13 * 4;
          do {
            while( true ) {
              uVar15 = (uint)*(ushort *)(lVar17 + 0xabe);
              uVar2 = *(ushort *)(lVar17 + 0xabc);
              uVar8 = (uint)*(ushort *)(param_1 + 0x1730) | (uint)uVar2 << (ulong)(uVar9 & 0x1f);
              *(short *)(param_1 + 0x1730) = (short)uVar8;
              if ((int)uVar9 <= (int)(0x10 - uVar15)) break;
              lVar18 = *(long *)(param_1 + 0x28);
              *(long *)(param_1 + 0x28) = lVar18 + 1;
              *(char *)(*(long *)(param_1 + 0x10) + lVar18) = (char)uVar8;
              lVar18 = *(long *)(param_1 + 0x28);
              *(long *)(param_1 + 0x28) = lVar18 + 1;
              *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar18) =
                   *(undefined1 *)(param_1 + 0x1731);
              *(ushort *)(param_1 + 0x1730) =
                   uVar2 >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f);
              uVar9 = (uVar15 + *(int *)(param_1 + 0x1734)) - 0x10;
              iVar7 = iVar7 + -1;
              *(uint *)(param_1 + 0x1734) = uVar9;
              if (iVar7 == 0) goto LAB_003851c4;
            }
            uVar9 = uVar9 + uVar15;
            iVar7 = iVar7 + -1;
            *(uint *)(param_1 + 0x1734) = uVar9;
          } while (iVar7 != 0);
LAB_003851c4:
          bVar1 = uVar3 == 0;
joined_r0x00385570:
          if (bVar1) goto LAB_00385574;
        }
        else if (uVar5 == 0) {
          if (iVar6 < 10) {
            uVar2 = *(ushort *)(param_1 + 0xb02);
            uVar9 = *(uint *)(param_1 + 0x1734);
            uVar4 = *(ushort *)(param_1 + 0xb00);
            uVar8 = (uint)*(ushort *)(param_1 + 0x1730) | (uint)uVar4 << (ulong)(uVar9 & 0x1f);
            *(short *)(param_1 + 0x1730) = (short)uVar8;
            if ((int)(0x10 - (uint)uVar2) < (int)uVar9) {
              lVar17 = *(long *)(param_1 + 0x28);
              *(long *)(param_1 + 0x28) = lVar17 + 1;
              *(char *)(*(long *)(param_1 + 0x10) + lVar17) = (char)uVar8;
              lVar17 = *(long *)(param_1 + 0x28);
              *(long *)(param_1 + 0x28) = lVar17 + 1;
              *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar17) =
                   *(undefined1 *)(param_1 + 0x1731);
              uVar4 = uVar4 >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f);
              uVar8 = (uint)uVar4;
              uVar9 = ((uint)uVar2 + *(int *)(param_1 + 0x1734)) - 0x10;
              *(ushort *)(param_1 + 0x1730) = uVar4;
            }
            else {
              uVar9 = uVar9 + uVar2;
            }
            uVar15 = iVar6 + 0xfffeU & 0xffff;
            uVar8 = uVar8 | uVar15 << (ulong)(uVar9 & 0x1f);
            *(uint *)(param_1 + 0x1734) = uVar9;
            *(short *)(param_1 + 0x1730) = (short)uVar8;
            if (0xd < (int)uVar9) {
              lVar17 = *(long *)(param_1 + 0x28);
              *(long *)(param_1 + 0x28) = lVar17 + 1;
              *(char *)(*(long *)(param_1 + 0x10) + lVar17) = (char)uVar8;
              lVar17 = *(long *)(param_1 + 0x28);
              *(long *)(param_1 + 0x28) = lVar17 + 1;
              *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar17) =
                   *(undefined1 *)(param_1 + 0x1731);
              *(short *)(param_1 + 0x1730) =
                   (short)(uVar15 >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f));
              *(int *)(param_1 + 0x1734) = *(int *)(param_1 + 0x1734) + -0xd;
              goto joined_r0x003854d0;
            }
            *(uint *)(param_1 + 0x1734) = uVar9 + 3;
          }
          else {
            uVar2 = *(ushort *)(param_1 + 0xb06);
            uVar9 = *(uint *)(param_1 + 0x1734);
            uVar4 = *(ushort *)(param_1 + 0xb04);
            uVar8 = (uint)*(ushort *)(param_1 + 0x1730) | (uint)uVar4 << (ulong)(uVar9 & 0x1f);
            *(short *)(param_1 + 0x1730) = (short)uVar8;
            if ((int)(0x10 - (uint)uVar2) < (int)uVar9) {
              lVar17 = *(long *)(param_1 + 0x28);
              *(long *)(param_1 + 0x28) = lVar17 + 1;
              *(char *)(*(long *)(param_1 + 0x10) + lVar17) = (char)uVar8;
              lVar17 = *(long *)(param_1 + 0x28);
              *(long *)(param_1 + 0x28) = lVar17 + 1;
              *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar17) =
                   *(undefined1 *)(param_1 + 0x1731);
              uVar4 = uVar4 >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f);
              uVar8 = (uint)uVar4;
              uVar9 = ((uint)uVar2 + *(int *)(param_1 + 0x1734)) - 0x10;
              *(ushort *)(param_1 + 0x1730) = uVar4;
            }
            else {
              uVar9 = uVar9 + uVar2;
            }
            uVar15 = iVar6 + 0xfff6U & 0xffff;
            uVar8 = uVar8 | uVar15 << (ulong)(uVar9 & 0x1f);
            *(uint *)(param_1 + 0x1734) = uVar9;
            *(short *)(param_1 + 0x1730) = (short)uVar8;
            if ((int)uVar9 < 10) {
              *(uint *)(param_1 + 0x1734) = uVar9 + 7;
              bVar1 = uVar12 == 0;
              goto joined_r0x00385570;
            }
            lVar17 = *(long *)(param_1 + 0x28);
            *(long *)(param_1 + 0x28) = lVar17 + 1;
            *(char *)(*(long *)(param_1 + 0x10) + lVar17) = (char)uVar8;
            lVar17 = *(long *)(param_1 + 0x28);
            *(long *)(param_1 + 0x28) = lVar17 + 1;
            *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar17) = *(undefined1 *)(param_1 + 0x1731);
            *(short *)(param_1 + 0x1730) =
                 (short)(uVar15 >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f));
            *(int *)(param_1 + 0x1734) = *(int *)(param_1 + 0x1734) + -9;
          }
          if (uVar12 == 0) goto LAB_00385574;
        }
        else {
          if (uVar5 == (uint)uVar16) {
            uVar9 = *(uint *)(param_1 + 0x1734);
            iVar6 = iVar7;
          }
          else {
            lVar17 = param_1 + uVar13 * 4;
            uVar2 = *(ushort *)(lVar17 + 0xabe);
            uVar9 = *(uint *)(param_1 + 0x1734);
            uVar4 = *(ushort *)(lVar17 + 0xabc);
            uVar8 = (uint)*(ushort *)(param_1 + 0x1730) | (uint)uVar4 << (ulong)(uVar9 & 0x1f);
            *(short *)(param_1 + 0x1730) = (short)uVar8;
            if ((int)(0x10 - (uint)uVar2) < (int)uVar9) {
              lVar17 = *(long *)(param_1 + 0x28);
              *(long *)(param_1 + 0x28) = lVar17 + 1;
              *(char *)(*(long *)(param_1 + 0x10) + lVar17) = (char)uVar8;
              lVar17 = *(long *)(param_1 + 0x28);
              *(long *)(param_1 + 0x28) = lVar17 + 1;
              *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar17) =
                   *(undefined1 *)(param_1 + 0x1731);
              *(ushort *)(param_1 + 0x1730) =
                   uVar4 >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f);
              uVar9 = ((uint)uVar2 + *(int *)(param_1 + 0x1734)) - 0x10;
            }
            else {
              uVar9 = uVar9 + uVar2;
            }
            *(uint *)(param_1 + 0x1734) = uVar9;
          }
          uVar2 = *(ushort *)(param_1 + 0xafe);
          uVar4 = *(ushort *)(param_1 + 0xafc);
          uVar8 = (uint)*(ushort *)(param_1 + 0x1730) | (uint)uVar4 << (ulong)(uVar9 & 0x1f);
          *(short *)(param_1 + 0x1730) = (short)uVar8;
          if ((int)(0x10 - (uint)uVar2) < (int)uVar9) {
            lVar17 = *(long *)(param_1 + 0x28);
            *(long *)(param_1 + 0x28) = lVar17 + 1;
            *(char *)(*(long *)(param_1 + 0x10) + lVar17) = (char)uVar8;
            lVar17 = *(long *)(param_1 + 0x28);
            *(long *)(param_1 + 0x28) = lVar17 + 1;
            *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar17) = *(undefined1 *)(param_1 + 0x1731);
            uVar4 = uVar4 >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f);
            uVar8 = (uint)uVar4;
            *(ushort *)(param_1 + 0x1730) = uVar4;
            uVar9 = ((uint)uVar2 + *(int *)(param_1 + 0x1734)) - 0x10;
          }
          else {
            uVar9 = uVar9 + uVar2;
          }
          uVar15 = iVar6 + 0xfffdU & 0xffff;
          uVar8 = uVar8 | uVar15 << (ulong)(uVar9 & 0x1f);
          *(uint *)(param_1 + 0x1734) = uVar9;
          *(short *)(param_1 + 0x1730) = (short)uVar8;
          if ((int)uVar9 < 0xf) {
            *(uint *)(param_1 + 0x1734) = uVar9 + 2;
          }
          else {
            lVar17 = *(long *)(param_1 + 0x28);
            *(long *)(param_1 + 0x28) = lVar17 + 1;
            *(char *)(*(long *)(param_1 + 0x10) + lVar17) = (char)uVar8;
            lVar17 = *(long *)(param_1 + 0x28);
            *(long *)(param_1 + 0x28) = lVar17 + 1;
            *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar17) = *(undefined1 *)(param_1 + 0x1731);
            *(short *)(param_1 + 0x1730) =
                 (short)(uVar15 >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f));
            *(int *)(param_1 + 0x1734) = *(int *)(param_1 + 0x1734) + -0xe;
          }
joined_r0x003854d0:
          if (uVar3 == 0) {
LAB_00385574:
            iVar7 = 0;
            iVar14 = 3;
            iVar11 = 0x8a;
            uVar16 = uVar13;
            goto LAB_003850f0;
          }
        }
        iVar7 = 0;
        iVar14 = 3;
        if (uVar5 != uVar12) {
          iVar14 = 4;
        }
        iVar11 = 6;
        if (uVar5 != uVar12) {
          iVar11 = 7;
        }
        uVar16 = uVar13;
      }
LAB_003850f0:
      iVar6 = iVar7;
      uVar2 = uVar3;
    } while (uVar10 != param_3 + 1);
  }
  return;
}


