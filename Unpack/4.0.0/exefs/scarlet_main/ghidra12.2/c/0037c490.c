/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0037c490; name: FUN_0037c490
 */


void FUN_0037c490(long *param_1)

{
  void *__dest;
  ushort uVar1;
  ushort uVar2;
  long lVar3;
  uint uVar4;
  byte bVar5;
  short sVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  size_t __n;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  ushort *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ushort *puVar18;
  uint uVar19;
  long *plVar20;
  uint uVar21;
  
  uVar4 = *(uint *)(param_1 + 10);
  uVar8 = *(uint *)((long)param_1 + 0xb4);
  uVar13 = uVar4;
  do {
    uVar21 = *(uint *)((long)param_1 + 0xac);
    uVar19 = ((int)param_1[0xd] - uVar8) - uVar21;
    if ((uVar4 - 0x106) + uVar13 <= uVar21) {
      memcpy((void *)param_1[0xc],(void *)(param_1[0xc] + (ulong)uVar4),(ulong)(uVar4 - uVar19));
      uVar21 = (int)*(undefined8 *)((long)param_1 + 0xac) - uVar4;
      uVar8 = *(uint *)((long)param_1 + 0x84);
      uVar17 = (ulong)uVar8;
      uVar13 = *(uint *)(param_1 + 10);
      uVar9 = (ulong)uVar13;
      param_1[0x13] = param_1[0x13] - (ulong)uVar4;
      puVar14 = (ushort *)(param_1[0xf] + uVar17 * 2);
      *(ulong *)((long)param_1 + 0xac) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0xac) >> 0x20) - uVar4,uVar21);
      sVar6 = (short)uVar13;
      if (uVar8 - 1 < 3) {
        uVar12 = uVar17;
LAB_0037c594:
        uVar10 = (uint)uVar12;
        uVar8 = uVar10 & 3;
        if ((uVar12 & 3) != 0) {
          do {
            puVar14 = puVar14 + -1;
            uVar1 = 0;
            if (uVar13 <= *puVar14) {
              uVar1 = *puVar14 - sVar6;
            }
            uVar12 = (ulong)((int)uVar12 - 1);
            uVar8 = uVar8 - 1;
            *puVar14 = uVar1;
          } while (uVar8 != 0);
        }
        if (2 < uVar10 - 1) {
          puVar14 = puVar14 + -2;
          do {
            uVar1 = 0;
            if (uVar13 <= puVar14[1]) {
              uVar1 = puVar14[1] - sVar6;
            }
            puVar14[1] = uVar1;
            uVar1 = 0;
            if (uVar13 <= *puVar14) {
              uVar1 = *puVar14 - sVar6;
            }
            *puVar14 = uVar1;
            uVar1 = 0;
            if (uVar13 <= puVar14[-1]) {
              uVar1 = puVar14[-1] - sVar6;
            }
            puVar14[-1] = uVar1;
            uVar1 = 0;
            if (uVar13 <= puVar14[-2]) {
              uVar1 = puVar14[-2] - sVar6;
            }
            puVar14[-2] = uVar1;
            uVar8 = (int)uVar12 - 4;
            uVar12 = (ulong)uVar8;
            puVar14 = puVar14 + -4;
          } while (uVar8 != 0);
        }
      }
      else {
        uVar15 = (ulong)(uVar8 - 1) + 1;
        uVar16 = uVar15 & 0x1fffffffc;
        uVar12 = (ulong)(uVar8 - (int)uVar16);
        puVar14 = puVar14 + -uVar16;
        puVar18 = (ushort *)(param_1[0xf] + uVar17 * 2 + -4);
        uVar17 = uVar16;
        do {
          uVar1 = 0;
          if (uVar13 <= puVar18[1]) {
            uVar1 = puVar18[1] - sVar6;
          }
          uVar2 = 0;
          if (uVar13 <= *puVar18) {
            uVar2 = *puVar18 - sVar6;
          }
          puVar18[1] = uVar1;
          uVar1 = 0;
          if (uVar13 <= puVar18[-1]) {
            uVar1 = puVar18[-1] - sVar6;
          }
          *puVar18 = uVar2;
          uVar2 = 0;
          if (uVar13 <= puVar18[-2]) {
            uVar2 = puVar18[-2] - sVar6;
          }
          puVar18[-1] = uVar1;
          puVar18[-2] = uVar2;
          uVar17 = uVar17 - 4;
          puVar18 = puVar18 + -4;
        } while (uVar17 != 0);
        if (uVar15 != uVar16) goto LAB_0037c594;
      }
      puVar14 = (ushort *)(param_1[0xe] + uVar9 * 2);
      if (uVar13 - 1 < 3) {
        puVar18 = puVar14;
LAB_0037c6a0:
        uVar10 = (uint)uVar9;
        uVar8 = uVar10 & 3;
        if ((uVar9 & 3) != 0) {
          do {
            puVar18 = puVar18 + -1;
            uVar1 = 0;
            if (uVar13 <= *puVar18) {
              uVar1 = *puVar18 - sVar6;
            }
            uVar9 = (ulong)((int)uVar9 - 1);
            uVar8 = uVar8 - 1;
            *puVar18 = uVar1;
          } while (uVar8 != 0);
        }
        if (2 < uVar10 - 1) {
          puVar18 = puVar18 + -2;
          do {
            uVar1 = 0;
            if (uVar13 <= puVar18[1]) {
              uVar1 = puVar18[1] - sVar6;
            }
            puVar18[1] = uVar1;
            uVar1 = 0;
            if (uVar13 <= *puVar18) {
              uVar1 = *puVar18 - sVar6;
            }
            *puVar18 = uVar1;
            uVar1 = 0;
            if (uVar13 <= puVar18[-1]) {
              uVar1 = puVar18[-1] - sVar6;
            }
            puVar18[-1] = uVar1;
            uVar1 = 0;
            if (uVar13 <= puVar18[-2]) {
              uVar1 = puVar18[-2] - sVar6;
            }
            puVar18[-2] = uVar1;
            uVar8 = (int)uVar9 - 4;
            uVar9 = (ulong)uVar8;
            puVar18 = puVar18 + -4;
          } while (uVar8 != 0);
        }
      }
      else {
        uVar17 = (ulong)(uVar13 - 1) + 1;
        uVar12 = uVar17 & 0x1fffffffc;
        puVar18 = puVar14 + -uVar12;
        uVar9 = (ulong)(uVar13 - (int)uVar12);
        puVar14 = puVar14 + -2;
        uVar15 = uVar12;
        do {
          uVar1 = 0;
          if (uVar13 <= puVar14[1]) {
            uVar1 = puVar14[1] - sVar6;
          }
          uVar2 = 0;
          if (uVar13 <= *puVar14) {
            uVar2 = *puVar14 - sVar6;
          }
          puVar14[1] = uVar1;
          uVar1 = 0;
          if (uVar13 <= puVar14[-1]) {
            uVar1 = puVar14[-1] - sVar6;
          }
          *puVar14 = uVar2;
          uVar2 = 0;
          if (uVar13 <= puVar14[-2]) {
            uVar2 = puVar14[-2] - sVar6;
          }
          puVar14[-1] = uVar1;
          puVar14[-2] = uVar2;
          uVar15 = uVar15 - 4;
          puVar14 = puVar14 + -4;
        } while (uVar15 != 0);
        if (uVar17 != uVar12) goto LAB_0037c6a0;
      }
      uVar19 = uVar19 + uVar4;
    }
    plVar20 = (long *)*param_1;
    uVar13 = *(uint *)(plVar20 + 1);
    if (uVar13 == 0) {
LAB_0037c880:
      uVar17 = param_1[0x2e7];
      uVar15 = param_1[0xd];
      uVar9 = uVar15 - uVar17;
      if (uVar17 <= uVar15 && uVar9 != 0) {
        uVar12 = (ulong)*(uint *)((long)param_1 + 0xb4) + (ulong)*(uint *)((long)param_1 + 0xac);
        if (uVar17 < uVar12) {
          __n = uVar15 - uVar12;
          if (0x101 < __n) {
            __n = 0x102;
          }
          memset((void *)(param_1[0xc] + uVar12),0,__n);
          lVar7 = __n + uVar12;
        }
        else {
          uVar15 = (uVar12 + 0x102) - uVar17;
          if (uVar12 + 0x102 < uVar17 || uVar15 == 0) {
            return;
          }
          if (uVar15 <= uVar9) {
            uVar9 = uVar15;
          }
          memset((void *)(param_1[0xc] + uVar17),0,uVar9 & 0xffffffff);
          lVar7 = param_1[0x2e7] + uVar9;
        }
        param_1[0x2e7] = lVar7;
      }
      return;
    }
    uVar8 = *(uint *)((long)param_1 + 0xb4);
    if (uVar13 <= uVar19) {
      uVar19 = uVar13;
    }
    if (uVar19 != 0) {
      __dest = (void *)(param_1[0xc] + (ulong)uVar21 + (ulong)uVar8);
      uVar9 = (ulong)uVar19;
      *(uint *)(plVar20 + 1) = uVar13 - uVar19;
      memcpy(__dest,(void *)*plVar20,uVar9);
      if (*(int *)(plVar20[7] + 0x30) == 2) {
        lVar7 = FUN_0037fe70(plVar20[0xc],__dest,uVar19);
LAB_0037c7a8:
        plVar20[0xc] = lVar7;
      }
      else if (*(int *)(plVar20[7] + 0x30) == 1) {
        lVar7 = FUN_0037fbe0(plVar20[0xc],__dest,uVar19);
        goto LAB_0037c7a8;
      }
      *plVar20 = *plVar20 + uVar9;
      plVar20[2] = plVar20[2] + uVar9;
      uVar8 = *(uint *)((long)param_1 + 0xb4);
    }
    iVar11 = *(int *)((long)param_1 + 0x172c);
    uVar8 = uVar8 + uVar19;
    *(uint *)((long)param_1 + 0xb4) = uVar8;
    if (2 < iVar11 + uVar8) {
      uVar13 = *(int *)((long)param_1 + 0xac) - iVar11;
      lVar7 = param_1[0xc];
      uVar21 = *(uint *)((long)param_1 + 0x8c);
      uVar10 = *(uint *)(param_1 + 0x12);
      bVar5 = *(byte *)(lVar7 + (ulong)uVar13);
      *(uint *)(param_1 + 0x10) = (uint)bVar5;
      uVar19 = ((uint)bVar5 << (ulong)(uVar10 & 0x1f) ^ (uint)*(byte *)(lVar7 + (ulong)(uVar13 + 1))
               ) & uVar21;
      uVar9 = (ulong)uVar19;
      *(uint *)(param_1 + 0x10) = uVar19;
      do {
        if (iVar11 == 0) break;
        lVar3 = param_1[0xf];
        uVar19 = ((int)uVar9 << (ulong)(uVar10 & 0x1f) ^
                 (uint)*(byte *)(lVar7 + (ulong)(uVar13 + 2))) & uVar21;
        uVar9 = (ulong)uVar19;
        *(uint *)(param_1 + 0x10) = uVar19;
        iVar11 = iVar11 + -1;
        *(undefined2 *)(param_1[0xe] + (ulong)(*(uint *)(param_1 + 0xb) & uVar13) * 2) =
             *(undefined2 *)(lVar3 + uVar9 * 2);
        *(short *)(lVar3 + uVar9 * 2) = (short)uVar13;
        uVar13 = uVar13 + 1;
        *(int *)((long)param_1 + 0x172c) = iVar11;
      } while (2 < uVar8 + iVar11);
    }
    if ((0x105 < uVar8) || (*(int *)(*param_1 + 8) == 0)) goto LAB_0037c880;
    uVar13 = *(uint *)(param_1 + 10);
  } while( true );
}


