/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00161930; name: FUN_00161930
 */


void FUN_00161930(uint *param_1,uint param_2,undefined8 param_3)

{
  byte *pbVar1;
  void *__src;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint *puVar6;
  bool bVar7;
  byte *pbVar8;
  uint *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint *puVar13;
  ushort *puVar14;
  uint uVar15;
  uint *puVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  uint *puVar23;
  uint uVar24;
  size_t __n;
  void *local_670;
  long local_668;
  long local_660;
  long local_658;
  undefined8 uStack_68;
  
  if (1 < (int)param_2) {
    if ((int)param_2 < 0x21) {
      puVar9 = param_1 + (param_2 - 1);
      puVar11 = &uStack_68;
      uVar15 = param_2;
      do {
        puVar12 = puVar11;
        uVar15 = (uVar15 >> 1) + (uVar15 >> 2);
        puVar11 = puVar12 + -3;
      } while (uVar15 != 0);
      *(undefined4 *)(puVar12 + -4) = 0;
joined_r0x00161998:
      puVar12 = puVar11;
      if (param_2 == 0) {
        return;
      }
      while (1 < param_2) {
        if (param_2 == 2) {
          if (*(ushort *)((long)puVar9 + 2) < *(ushort *)((long)param_1 + 2)) {
            uVar15 = *param_1;
            *param_1 = *puVar9;
            *puVar9 = uVar15;
          }
          break;
        }
        uVar15 = param_2 >> 1;
        puVar13 = param_1 + uVar15;
        uVar4 = *(ushort *)((long)puVar13 + 2U);
        uVar2 = *(ushort *)((long)param_1 + 2);
        uVar3 = *(ushort *)((long)puVar9 + 2);
        if (uVar4 < uVar2) {
          if (uVar3 <= uVar4) {
LAB_00161a7c:
            uVar21 = *param_1;
            *param_1 = *puVar9;
            goto LAB_00161aa8;
          }
          if (uVar3 <= uVar2) {
            uVar21 = *puVar13;
            *puVar13 = *param_1;
            *param_1 = uVar21;
            goto LAB_00161a9c;
          }
          uVar21 = *param_1;
          *param_1 = *puVar13;
          *puVar13 = uVar21;
        }
        else if (uVar3 < uVar4) {
          if (uVar3 <= uVar2) {
            uVar21 = *param_1;
            *param_1 = *puVar13;
            *puVar13 = uVar21;
            goto LAB_00161a7c;
          }
LAB_00161a9c:
          uVar21 = *puVar13;
          *puVar13 = *puVar9;
LAB_00161aa8:
          *puVar9 = uVar21;
        }
        if (param_2 < 5) {
          if (param_2 != 3) {
            uVar2 = *(ushort *)((long)param_1 + 6);
            if (*(ushort *)((long)puVar13 + 2U) < uVar2) {
              if (uVar2 < *(ushort *)((long)puVar9 + 2)) {
                uVar15 = param_1[1];
                param_1[1] = *puVar13;
                *puVar13 = uVar15;
              }
              else {
                uVar15 = *puVar13;
                *puVar13 = param_1[1];
                param_1[1] = uVar15;
                uVar15 = *puVar13;
                *puVar13 = *puVar9;
                *puVar9 = uVar15;
              }
            }
            else if (uVar2 < *(ushort *)((long)param_1 + 2)) {
              uVar15 = *param_1;
              *param_1 = param_1[1];
              param_1[1] = uVar15;
            }
          }
          break;
        }
        if (puVar12 == &uStack_68) goto joined_r0x00161bdc;
        uVar15 = *puVar13;
        *puVar13 = *param_1;
        uVar21 = uVar15 >> 0x10;
        *param_1 = uVar15;
        puVar13 = param_1;
        puVar16 = puVar9;
        while( true ) {
          do {
            puVar14 = (ushort *)((long)puVar16 + -2);
            puVar16 = puVar16 + -1;
          } while (uVar21 < *puVar14);
          puVar23 = puVar13;
          if (puVar16 <= puVar13) break;
          do {
            puVar13 = puVar23;
            puVar23 = puVar13 + 1;
          } while (*(ushort *)((long)puVar13 + 6) < uVar21);
          if (puVar16 <= puVar23) break;
          uVar15 = *puVar23;
          *puVar23 = *puVar16;
          *puVar16 = uVar15;
          uVar21 = (uint)*(ushort *)((long)param_1 + 2);
          puVar13 = puVar23;
        }
        uVar15 = *param_1;
        *param_1 = *puVar13;
        *puVar13 = uVar15;
        puVar16 = puVar13;
        do {
          puVar23 = puVar16 + 1;
          if (puVar9 <= puVar23) break;
          puVar14 = (ushort *)((long)puVar16 + 6);
          puVar16 = puVar23;
        } while ((uint)*puVar14 <= uVar15 >> 0x10);
        do {
          puVar16 = puVar13 + -1;
          if (puVar16 <= param_1) break;
          puVar14 = (ushort *)((long)puVar13 - 2);
          puVar13 = puVar16;
        } while (uVar15 >> 0x10 <= (uint)*puVar14);
        iVar20 = (int)((ulong)((long)puVar9 - (long)puVar23) >> 2);
        uVar15 = iVar20 + 1;
        iVar22 = (int)((ulong)((long)puVar16 - (long)param_1) >> 2);
        param_2 = iVar22 + 1;
        bVar7 = param_2 <= uVar15;
        puVar13 = puVar9;
        puVar6 = puVar23;
        if (bVar7) {
          uVar15 = iVar22 + 1;
          puVar13 = puVar16;
          puVar6 = param_1;
        }
        *puVar12 = puVar6;
        puVar12[1] = puVar13;
        if (bVar7) {
          param_2 = iVar20 + 1;
          puVar16 = puVar9;
        }
        *(uint *)(puVar12 + 2) = uVar15;
        if (bVar7) {
          param_1 = puVar23;
        }
        puVar9 = puVar16;
        puVar12 = puVar12 + 3;
      }
      goto LAB_001619a4;
    }
    __n = (long)(int)param_2 * 4;
    FUN_0015c528(&local_668,__n + 0xc00,param_3,&local_670);
    memset(local_670,0,0x800);
    uVar17 = -(ulong)(param_2 >> 0x1f) & 0xfffffffc00000000 | (ulong)(param_2 & 0xfffffffe) << 2;
    puVar9 = param_1;
    if (uVar17 != 0) {
      puVar9 = (uint *)((long)param_1 + uVar17);
      lVar10 = (long)(int)(param_2 & 0xfffffffe) << 2;
      puVar14 = (ushort *)((long)param_1 + 6);
      do {
        lVar19 = ((ulong)puVar14[-2] & 0xff) * 4;
        uVar2 = *puVar14;
        uVar17 = (ulong)(puVar14[-2] >> 6 | 0x400) & 0x7fc;
        lVar10 = lVar10 + -8;
        *(int *)((long)local_670 + lVar19) = *(int *)((long)local_670 + lVar19) + 1;
        lVar19 = ((ulong)uVar2 & 0xff) * 4;
        *(int *)((long)local_670 + uVar17) = *(int *)((long)local_670 + uVar17) + 1;
        *(int *)((long)local_670 + lVar19) = *(int *)((long)local_670 + lVar19) + 1;
        uVar17 = (ulong)(uVar2 >> 6 | 0x400) & 0x7fc;
        *(int *)((long)local_670 + uVar17) = *(int *)((long)local_670 + uVar17) + 1;
        puVar14 = puVar14 + 4;
      } while (lVar10 != 0);
    }
    if ((param_2 & 1) != 0) {
      lVar10 = ((ulong)*(ushort *)((long)puVar9 + 2) & 0xff) * 4;
      uVar17 = (ulong)(*(ushort *)((long)puVar9 + 2) >> 6 | 0x400) & 0x7fc;
      *(int *)((long)local_670 + lVar10) = *(int *)((long)local_670 + lVar10) + 1;
      *(int *)((long)local_670 + uVar17) = *(int *)((long)local_670 + uVar17) + 1;
    }
    __src = (void *)((long)local_670 + 0xc00);
    if (0 < (int)param_2) {
      iVar20 = 0;
      uVar17 = 0;
      do {
        uVar18 = -(uVar17 >> 0x1f) & 0xfffffffc00000000 | uVar17 << 2;
        *(int *)((long)local_670 + uVar18 + 0x800) = iVar20;
        iVar20 = *(int *)((long)local_670 + uVar18) + iVar20;
        uVar15 = (int)uVar17 + 1;
        uVar17 = (ulong)((int)uVar17 + 2);
        uVar18 = -(ulong)(uVar15 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar15 << 2;
        *(int *)((long)local_670 + uVar18 + 0x800) = iVar20;
        iVar20 = *(int *)((long)local_670 + uVar18) + iVar20;
      } while (iVar20 < (int)param_2);
    }
    iVar20 = 0;
    if (-1 < (int)(param_2 - 4)) {
      do {
        lVar10 = (ulong)*(byte *)((long)(param_1 + iVar20) + 2) * 4;
        uVar15 = *(uint *)((long)local_670 + lVar10 + 0x800);
        *(uint *)((long)local_670 + lVar10 + 0x800) = uVar15 + 1;
        *(uint *)((long)__src + (ulong)uVar15 * 4) = param_1[iVar20];
        lVar10 = (ulong)*(byte *)((long)(param_1 + (iVar20 + 1)) + 2) * 4;
        uVar15 = *(uint *)((long)local_670 + lVar10 + 0x800);
        *(uint *)((long)local_670 + lVar10 + 0x800) = uVar15 + 1;
        *(uint *)((long)__src + (ulong)uVar15 * 4) = param_1[iVar20 + 1];
        lVar10 = (ulong)*(byte *)((long)(param_1 + (iVar20 + 2)) + 2) * 4;
        uVar15 = *(uint *)((long)local_670 + lVar10 + 0x800);
        *(uint *)((long)local_670 + lVar10 + 0x800) = uVar15 + 1;
        *(uint *)((long)__src + (ulong)uVar15 * 4) = param_1[iVar20 + 2];
        iVar22 = iVar20 + 3;
        iVar20 = iVar20 + 4;
        lVar10 = (ulong)*(byte *)((long)(param_1 + iVar22) + 2) * 4;
        uVar15 = *(uint *)((long)local_670 + lVar10 + 0x800);
        *(uint *)((long)local_670 + lVar10 + 0x800) = uVar15 + 1;
        *(uint *)((long)__src + (ulong)uVar15 * 4) = param_1[iVar22];
      } while (iVar20 <= (int)(param_2 - 4));
    }
    if (iVar20 < (int)param_2) {
      pbVar8 = (byte *)((long)param_1 + (long)iVar20 * 4 + 2);
      lVar10 = (long)(int)param_2 - (long)iVar20;
      do {
        lVar10 = lVar10 + -1;
        uVar15 = *(uint *)((long)local_670 + (ulong)*pbVar8 * 4 + 0x800);
        *(uint *)((long)local_670 + (ulong)*pbVar8 * 4 + 0x800) = uVar15 + 1;
        pbVar1 = pbVar8 + -2;
        pbVar8 = pbVar8 + 4;
        *(undefined4 *)((long)__src + (ulong)uVar15 * 4) = *(undefined4 *)pbVar1;
      } while (lVar10 != 0);
    }
    puVar9 = (uint *)((long)local_670 + 0x400);
    if (0 < (int)param_2) {
      iVar20 = 0;
      uVar17 = 1;
      do {
        uVar15 = (int)uVar17 - 1;
        uVar18 = -(ulong)(uVar15 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar15 << 2;
        *(int *)((long)local_670 + uVar18 + 0x800) = iVar20;
        iVar20 = *(int *)((long)puVar9 + uVar18) + iVar20;
        uVar18 = -(uVar17 >> 0x1f) & 0xfffffffc00000000 | uVar17 << 2;
        uVar17 = (ulong)((int)uVar17 + 2);
        *(int *)((long)local_670 + uVar18 + 0x800) = iVar20;
        iVar20 = *(int *)((long)puVar9 + uVar18) + iVar20;
      } while (iVar20 < (int)param_2);
    }
    if (*puVar9 == param_2) {
      memcpy(param_1,__src,__n);
    }
    else {
      uVar17 = (ulong)*(byte *)((long)local_670 + 0xc03);
      uVar21 = 0;
      uVar15 = 1;
      do {
        uVar24 = uVar15;
        do {
          uVar2 = *(ushort *)((long)__src + (long)(int)uVar24 * 4 + 2) >> 8;
          if ((uint)uVar17 != (uint)uVar2) {
            uVar18 = (ulong)uVar2;
            goto LAB_00161fb8;
          }
          uVar24 = uVar24 + 1;
        } while (param_2 != uVar24);
        uVar18 = uVar17;
        uVar24 = param_2;
LAB_00161fb8:
        lVar10 = uVar17 * 4;
        uVar5 = uVar24 - uVar21;
        memcpy(param_1 + *(uint *)((long)local_670 + lVar10 + 0x800),
               (void *)((long)__src + (long)(int)uVar21 * 4),
               -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2);
        uVar15 = uVar24 + 1;
        *(uint *)((long)local_670 + lVar10 + 0x800) =
             *(int *)((long)local_670 + lVar10 + 0x800) + uVar5;
        uVar17 = uVar18;
        uVar21 = uVar24;
      } while ((int)uVar15 < (int)param_2);
      if (uVar15 == param_2) {
        param_1[*(uint *)((long)local_670 + (ulong)uVar2 * 4 + 0x800)] =
             *(uint *)((long)__src + (long)(int)uVar24 * 4);
      }
    }
    if (local_660 != 0) {
      if ((local_668 == 0) ||
         ((local_658 + 0xfU & 0xfffffffffffffff0) + local_660 != *(long *)(local_668 + 8))) {
        (**(code **)PTR_PTR_047cb898)();
      }
      else {
        *(long *)(local_668 + 8) = local_660;
      }
    }
  }
  return;
joined_r0x00161bdc:
  uVar15 = uVar15 - 1;
  puVar13 = puVar13 + -1;
  if (uVar15 != 0) {
    uVar21 = uVar15 * 2 | 1;
    puVar16 = puVar13;
    do {
      puVar23 = param_1 + uVar21;
      if (puVar23 + 1 <= puVar9) {
        if (*(ushort *)((long)param_1 + (ulong)uVar21 * 4 + 2) < *(ushort *)((long)puVar23 + 6)) {
          uVar21 = uVar21 + 1;
          puVar23 = puVar23 + 1;
        }
        else {
        }
      }
      if (*(ushort *)((long)puVar23 + 2) <= *(ushort *)((long)puVar16 + 2)) break;
      uVar21 = uVar21 << 1 | 1;
      uVar24 = *puVar16;
      *puVar16 = *puVar23;
      *puVar23 = uVar24;
      puVar16 = puVar23;
    } while (uVar21 < param_2);
    goto joined_r0x00161bdc;
  }
  do {
    uVar17 = 1;
    do {
      iVar20 = (int)uVar17;
      puVar16 = param_1 + uVar17;
      if (puVar16 + 1 <= puVar9) {
        if (*(ushort *)((long)param_1 + uVar17 * 4 + 2) < *(ushort *)((long)puVar16 + 6)) {
          iVar20 = iVar20 + 1;
          puVar16 = puVar16 + 1;
        }
        else {
        }
      }
      if (*(ushort *)((long)puVar16 + 2) <= *(ushort *)((long)puVar13 + 2)) break;
      uVar15 = iVar20 << 1 | 1;
      uVar21 = *puVar13;
      *puVar13 = *puVar16;
      uVar17 = (ulong)uVar15;
      *puVar16 = uVar21;
      puVar13 = puVar16;
    } while (uVar15 < param_2);
    uVar15 = *param_1;
    param_2 = param_2 - 1;
    *param_1 = *puVar9;
    *puVar9 = uVar15;
    puVar9 = puVar9 + -1;
    puVar13 = param_1;
  } while (1 < param_2);
  puVar12 = &uStack_68;
LAB_001619a4:
  puVar11 = puVar12 + -3;
  param_1 = (uint *)*puVar11;
  puVar9 = (uint *)puVar12[-2];
  param_2 = *(uint *)(puVar12 + -1);
  goto joined_r0x00161998;
}


