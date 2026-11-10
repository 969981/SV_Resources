/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030df1a8; name: FUN_030df1a8
 */


void FUN_030df1a8(long param_1,int *param_2,ushort *param_3,long *param_4,int param_5)

{
  ulong uVar1;
  int *piVar2;
  uint uVar3;
  short sVar4;
  ushort uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  int iVar20;
  
  lVar6 = *(long *)(param_1 + 0x20);
  iVar7 = *param_2;
  lVar14 = (long)iVar7;
  iVar17 = *(int *)(lVar6 + 0x20);
  iVar20 = iVar7 - iVar17;
  if (iVar7 < iVar17) {
    lVar8 = *(long *)(lVar6 + 0x18);
    iVar20 = iVar7;
    if (*(int *)(lVar6 + 0x98) != 0) {
      iVar20 = *(int *)(*(long *)(lVar6 + 0x90) + lVar14 * 4);
    }
    if (iVar20 == -1) {
      iVar20 = iVar7;
      goto LAB_030df220;
    }
    plVar9 = (long *)(lVar6 + 0xb0);
  }
  else {
    plVar9 = (long *)(lVar6 + 0xd0);
  }
  lVar8 = *plVar9;
LAB_030df220:
  lVar11 = (long)iVar20;
  if ((*(int *)(lVar6 + 0x108) == 0) || ((*(byte *)(*(long *)(lVar6 + 0x100) + lVar14) & 1) == 0)) {
    lVar6 = lVar8 + lVar11 * 0x10;
    uVar5 = *param_3;
    sVar4 = *(short *)(lVar6 + 8);
    if ((short)uVar5 < sVar4) {
      iVar17 = *(int *)(lVar8 + lVar11 * 0x10) + (uint)uVar5;
    }
    else {
      iVar17 = *(int *)(lVar6 + 4) + ((uint)uVar5 - (int)sVar4 & 0xffff);
    }
    iVar20 = (int)param_4[1];
    lVar6 = (long)iVar20;
    if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) <= iVar20) {
      FUN_030e1f88(param_4,lVar6 + 1);
      iVar20 = (int)param_4[1];
    }
    piVar12 = (int *)(*param_4 + (long)iVar20 * 8);
    *piVar12 = iVar7;
    piVar12[1] = iVar17;
    *(int *)(param_4 + 1) = (int)(lVar6 + 1);
  }
  else {
    uVar3 = *(uint *)(*(long *)(lVar6 + 0x168) + lVar14 * 4);
    if (-1 < (int)uVar3) {
      uVar15 = *(uint *)(lVar6 + 0x170);
      lVar14 = (long)(int)uVar15;
      if ((int)uVar15 <= (int)(uVar3 + 1)) {
        uVar15 = uVar3 + 1;
      }
      uVar16 = (ulong)uVar3;
      do {
        uVar1 = uVar16 + 1;
        if (lVar14 <= (long)uVar1) goto LAB_030df308;
        lVar18 = uVar16 * 4;
        uVar16 = uVar1;
      } while (*(int *)(*(long *)(lVar6 + 0x168) + 4 + lVar18) == iVar7);
      uVar15 = (uint)uVar1;
LAB_030df308:
      if (uVar3 != uVar15) {
        lVar14 = (long)(int)(uVar3 - iVar17);
        while( true ) {
          if ((short)*param_3 < *(short *)(lVar8 + lVar11 * 0x10 + 8)) {
            piVar2 = (int *)(*(long *)(lVar6 + 0xd0) + lVar14 * 0x10);
            piVar12 = piVar2 + 2;
            iVar7 = *piVar2;
          }
          else {
            lVar18 = *(long *)(lVar6 + 0xd0) + lVar14 * 0x10;
            iVar7 = *(int *)(lVar18 + 4);
            piVar12 = (int *)(lVar18 + 10);
          }
          iVar20 = (int)(short)*piVar12;
          if (iVar7 < iVar7 + iVar20) {
            lVar18 = (long)iVar7;
            iVar7 = iVar17 + (int)lVar14;
            if (param_5 == 1) {
              lVar19 = lVar18 * 0x14;
              iVar20 = (int)(short)*piVar12;
              while( true ) {
                iVar20 = iVar20 + -1;
                lVar13 = (long)*(int *)(lVar6 + 0x30);
                if (lVar18 < lVar13) {
                  iVar10 = (int)lVar18;
                  if (*(int *)(lVar6 + 0x78) != 0) {
                    iVar10 = *(int *)(*(long *)(lVar6 + 0x70) + lVar18 * 4);
                  }
                  if (iVar10 == -1) {
                    lVar6 = *(long *)(lVar6 + 0x28) + lVar18 * 0x14;
                  }
                  else {
                    lVar6 = *(long *)(lVar6 + 0xc0) + (long)iVar10 * 0x14;
                  }
                  uVar5 = 0xffff;
                }
                else {
                  uVar5 = *(ushort *)(*(long *)(lVar6 + 0x110) + lVar13 * -2 + lVar18 * 2);
                  lVar6 = *(long *)(lVar6 + 0xe0) + lVar13 * -0x14 + lVar19;
                }
                if ((uVar5 == *param_3) && (*(int *)(lVar6 + 8) == -1)) {
                  iVar10 = (int)param_4[1];
                  lVar6 = (long)iVar10;
                  if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) <= iVar10) {
                    FUN_030e1f88(param_4,lVar6 + 1);
                    iVar10 = (int)param_4[1];
                  }
                  piVar12 = (int *)(*param_4 + (long)iVar10 * 8);
                  *piVar12 = iVar7;
                  piVar12[1] = (int)lVar18;
                  *(int *)(param_4 + 1) = (int)(lVar6 + 1);
                }
                if (iVar20 == 0) break;
                lVar6 = *(long *)(param_1 + 0x20);
                lVar18 = lVar18 + 1;
                lVar19 = lVar19 + 0x14;
              }
            }
            else {
              while( true ) {
                iVar20 = iVar20 + -1;
                if (lVar18 < *(int *)(lVar6 + 0x30)) {
                  uVar5 = 0xffff;
                }
                else {
                  uVar5 = *(ushort *)
                           (*(long *)(lVar6 + 0x110) + (long)*(int *)(lVar6 + 0x30) * -2 +
                           lVar18 * 2);
                }
                if (uVar5 == *param_3) {
                  iVar10 = (int)param_4[1];
                  lVar6 = (long)iVar10;
                  if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) <= iVar10) {
                    FUN_030e1f88(param_4,lVar6 + 1);
                    iVar10 = (int)param_4[1];
                  }
                  piVar12 = (int *)(*param_4 + (long)iVar10 * 8);
                  *piVar12 = iVar7;
                  piVar12[1] = (int)lVar18;
                  *(int *)(param_4 + 1) = (int)(lVar6 + 1);
                }
                if (iVar20 == 0) break;
                lVar6 = *(long *)(param_1 + 0x20);
                lVar18 = lVar18 + 1;
              }
            }
          }
          lVar14 = lVar14 + 1;
          if (uVar15 - iVar17 == (int)lVar14) break;
          lVar6 = *(long *)(param_1 + 0x20);
        }
      }
    }
  }
  return;
}


