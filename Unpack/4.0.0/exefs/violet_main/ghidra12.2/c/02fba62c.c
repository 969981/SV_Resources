/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02fba62c; name: FUN_02fba62c
 */


void FUN_02fba62c(long param_1,long *param_2,long *param_3)

{
  undefined2 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined2 *puVar6;
  ushort *puVar7;
  void *__s;
  ushort *puVar8;
  uint uVar9;
  ushort uVar10;
  ushort uVar11;
  void *pvVar12;
  ulong uVar13;
  long lVar14;
  char cVar15;
  byte *pbVar16;
  short sVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  int iVar23;
  ulong uVar24;
  int iVar25;
  long lVar26;
  int iVar27;
  long lVar28;
  ulong uVar29;
  long lVar30;
  int iVar31;
  ulong local_88;
  long local_70;
  ulong local_68;
  
  uVar21 = *(uint *)(param_2 + 1);
  uVar29 = (ulong)uVar21;
  lVar28 = (long)(int)uVar21;
  uVar9 = *(uint *)(param_3 + 1);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((int)(*(uint *)(param_1 + 0x3c) & 0x7fffffff) < (int)uVar21) {
    FUN_02fbdc78((long *)(param_1 + 0x30),lVar28);
  }
  iVar25 = *(int *)(param_1 + 0x38);
  if (iVar25 < (int)uVar21) {
    pvVar12 = (void *)(*(long *)(param_1 + 0x30) + (long)iVar25 * 8);
    *(uint *)(param_1 + 0x38) = uVar21;
    memset(pvVar12,0,(*(long *)(param_1 + 0x30) + lVar28 * 8) - (long)pvVar12 & 0xfffffffffffffff8);
  }
  else if ((int)uVar21 < iVar25) {
    *(uint *)(param_1 + 0x38) = uVar21;
  }
  plVar2 = (long *)(param_1 + 0x50);
  if ((int)(*(uint *)(param_1 + 0x5c) & 0x7fffffff) <= (int)uVar21) {
    FUN_02e8bb18(plVar2,PTR_PTR_047d1a50,lVar28 + 1);
  }
  iVar25 = (int)(lVar28 + 1);
  if ((*(int *)(param_1 + 0x58) <= (int)uVar21) || (iVar25 < *(int *)(param_1 + 0x58))) {
    *(int *)(param_1 + 0x58) = iVar25;
  }
  lVar30 = (long)(int)uVar9;
  plVar3 = (long *)(param_1 + 0x40);
  if ((int)(*(uint *)(param_1 + 0x4c) & 0x7fffffff) < (int)uVar9) {
    FUN_02fbddf0(plVar3,lVar30);
  }
  iVar23 = *(int *)(param_1 + 0x48);
  if (iVar23 < (int)uVar9) {
    pvVar12 = (void *)(*(long *)(param_1 + 0x40) + (long)iVar23 * 8);
    *(uint *)(param_1 + 0x48) = uVar9;
    memset(pvVar12,0,(*(long *)(param_1 + 0x40) + lVar30 * 8) - (long)pvVar12 & 0xfffffffffffffff8);
  }
  else if ((int)uVar9 < iVar23) {
    *(uint *)(param_1 + 0x48) = uVar9;
  }
  if ((int)(*(uint *)(param_1 + 0x8c) & 0x7fffffff) < (int)uVar21) {
    FUN_00cb58c0((long *)(param_1 + 0x80),PTR_PTR_047d1a50,lVar28);
  }
  if (*(uint *)(param_1 + 0x88) != uVar21) {
    *(uint *)(param_1 + 0x88) = uVar21;
  }
  plVar4 = (long *)(param_1 + 0x70);
  if ((int)(*(uint *)(param_1 + 0x7c) & 0x7fffffff) <= (int)uVar21) {
    FUN_02e8bb18(plVar4,PTR_PTR_047d1a50,(long)iVar25);
  }
  if ((*(int *)(param_1 + 0x78) <= (int)uVar21) || (iVar25 < *(int *)(param_1 + 0x78))) {
    *(int *)(param_1 + 0x78) = iVar25;
  }
  plVar5 = (long *)(param_1 + 0x60);
  if ((int)(*(uint *)(param_1 + 0x6c) & 0x7fffffff) < (int)(lVar30 << 1)) {
    FUN_02fbdf68(plVar5);
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (0 < (int)uVar21) {
    if (uVar21 == 1) {
      iVar25 = 0;
      uVar13 = 0;
    }
    else {
      iVar25 = 0;
      uVar13 = 0;
      do {
        iVar25 = iVar25 + (uint)*(byte *)(*param_2 + uVar13);
        *(int *)(param_1 + 0x2c) = iVar25;
        lVar26 = *param_2 + uVar13;
        uVar13 = uVar13 + 2;
        iVar25 = iVar25 + (uint)*(byte *)(lVar26 + 1);
        *(int *)(param_1 + 0x2c) = iVar25;
      } while ((uVar29 & 0xfffffffe) != uVar13);
    }
    if ((uVar21 & 1) != 0) {
      *(uint *)(param_1 + 0x2c) = iVar25 + (uint)*(byte *)(*param_2 + uVar13);
    }
  }
  lVar26 = tpidr_el0;
  lVar14 = *(long *)(lVar26 + 0x1000b8);
  if (lVar14 == 0) {
    lVar14 = FUN_00e5d3b4();
    *(long *)(lVar26 + 0x1000b8) = lVar14;
  }
  lVar26 = *(long *)(*(long *)(lVar14 + 0x3d0) + 0x10);
  local_70 = lVar28;
  if ((*(long *)(lVar26 + 8) == 0) && (lVar26 != 0)) {
    local_68 = lVar28 + 0x3fU & 0xffffffffffffffc0;
    if (local_68 <= *(ulong *)(lVar26 + 0x28)) {
      pvVar12 = *(void **)(lVar26 + 0x38);
      if (local_68 + (long)pvVar12 <= *(ulong *)(lVar26 + 0x40)) {
        *(ulong *)(lVar26 + 0x38) = local_68 + (long)pvVar12;
        goto LAB_02fba978;
      }
    }
    pvVar12 = (void *)FUN_031cf3b4(lVar26,&local_68);
  }
  else {
    pvVar12 = (void *)(**(code **)PTR_DAT_047d1a08)(1,&local_70,0x40);
    lVar26 = 0;
  }
LAB_02fba978:
  *(undefined2 *)*plVar2 = 0;
  *(undefined2 *)*plVar4 = 0;
  if ((int)uVar21 < 1) {
    iVar23 = *(int *)(param_1 + 0x28);
    iVar25 = 0;
  }
  else {
    sVar17 = 0;
    local_88 = 0;
    uVar13 = 0;
    iVar27 = 0;
    do {
      puVar6 = (undefined2 *)(*(long *)(param_1 + 0x30) + uVar13 * 8);
      pbVar16 = (byte *)(puVar6 + 3);
      *pbVar16 = *(byte *)(*param_2 + uVar13);
      puVar6[2] = sVar17;
      memset(pvVar12,0,uVar29);
      iVar23 = (int)local_88;
      *(short *)(*plVar2 + uVar13 * 2) = (short)local_88;
      *(short *)(*plVar4 + uVar13 * 2) = (short)iVar27;
      iVar25 = uVar9 - iVar23;
      if (iVar25 == 0 || (int)uVar9 < iVar23) {
        iVar31 = 0;
        iVar25 = 0;
      }
      else {
        lVar14 = 0;
        iVar31 = 0;
        uVar19 = -(local_88 >> 0x1f) & 0xfffffffc00000000 | local_88 << 2;
        do {
          if (uVar13 < *(ushort *)(*param_3 + uVar19)) {
            local_88 = (ulong)(uint)(iVar23 - (int)lVar14);
            iVar25 = -(int)lVar14;
            goto LAB_02fbaaa0;
          }
          puVar7 = (ushort *)(*plVar3 + uVar19 * 2);
          uVar10 = *(ushort *)(*param_3 + uVar19 + 2);
          *puVar7 = uVar10;
          puVar7[1] = (ushort)uVar13;
          lVar20 = *param_3 + uVar19;
          uVar19 = uVar19 + 4;
          *(undefined1 *)((long)pvVar12 + (ulong)*(ushort *)(lVar20 + 2)) = 1;
          lVar14 = lVar14 + -1;
          iVar31 = iVar31 + (uint)*(byte *)(*param_2 + (ulong)uVar10);
        } while (iVar23 - lVar30 != lVar14);
        local_88 = (ulong)uVar9;
      }
LAB_02fbaaa0:
      uVar19 = uVar13 + 1;
      *(short *)(*plVar2 + uVar19 * 2) = (short)local_88;
      if (uVar13 != 0) {
        uVar18 = 0;
        do {
          if (*(char *)((long)pvVar12 + uVar18) != '\0') {
            uVar10 = *(ushort *)(*plVar4 + uVar18 * 2);
            uVar11 = *(ushort *)(*plVar4 + (uVar18 + 1) * 2);
            if (uVar10 < uVar11) {
              lVar20 = (ulong)uVar11 - (ulong)uVar10;
              lVar14 = (ulong)uVar10 << 2;
              do {
                uVar22 = (ulong)*(ushort *)(*plVar5 + lVar14);
                if (uVar18 < uVar22) {
                  if (*(char *)((long)pvVar12 + uVar22) == '\0') {
                    iVar25 = iVar25 + 1;
                    uVar21 = (uint)*(byte *)(*param_2 + uVar22);
                  }
                  else {
                    uVar21 = 0;
                  }
                  iVar31 = uVar21 + iVar31;
                  *(undefined1 *)((long)pvVar12 + uVar22) = 1;
                }
                lVar20 = lVar20 + -1;
                lVar14 = lVar14 + 4;
              } while (lVar20 != 0);
            }
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 != uVar13);
      }
      iVar25 = iVar25 + iVar27;
      *puVar6 = (short)*(undefined4 *)(param_1 + 0x28);
      puVar6[1] = (short)iVar31;
      if ((int)(*(uint *)(param_1 + 0x6c) & 0x7fffffff) < iVar25) {
        FUN_02fbe0e0(plVar5,(long)iVar25);
      }
      iVar23 = *(int *)(param_1 + 0x68);
      if (iVar23 < iVar25) {
        __s = (void *)(*(long *)(param_1 + 0x60) + (long)iVar23 * 4);
        *(int *)(param_1 + 0x68) = iVar25;
        memset(__s,0,(*(long *)(param_1 + 0x60) + (long)iVar25 * 4) - (long)__s & 0xfffffffffffffffc
              );
      }
      else if (iVar25 < iVar23) {
        *(int *)(param_1 + 0x68) = iVar25;
      }
      uVar18 = 0;
      cVar15 = '\0';
      uVar10 = *(ushort *)(*(long *)(param_1 + 0x50) + uVar19 * 2);
      uVar21 = (uint)*(ushort *)(*(long *)(param_1 + 0x50) + uVar13 * 2);
      iVar23 = *(int *)(param_1 + 0x28);
      do {
        if (*(char *)((long)pvVar12 + uVar18) != '\0') {
          puVar1 = (undefined2 *)(*plVar5 + (long)iVar27 * 4);
          lVar14 = *plVar3;
          puVar7 = (ushort *)(lVar14 + (long)(int)uVar21 * 8);
          *puVar1 = (short)uVar18;
          puVar1[1] = (short)iVar23;
          uVar22 = (ulong)*puVar7;
          if (((int)uVar21 < (int)(uint)uVar10) && (uVar22 <= uVar18)) {
            *(short *)(lVar14 + (long)(int)uVar21 * 8 + 4) = (short)iVar23;
          }
          if (uVar18 == uVar13) {
            *(char *)((long)puVar6 + 7) = (char)uVar21 - (char)*(undefined2 *)(*plVar2 + uVar13 * 2)
            ;
            *(char *)(*(long *)(param_1 + 0x80) + uVar13) = cVar15;
            uVar22 = (ulong)*puVar7;
          }
          if (((uVar18 < uVar13) && ((int)uVar21 < (int)(uint)uVar10)) && (uVar22 <= uVar18)) {
            puVar8 = (ushort *)(*plVar2 + uVar18 * 2);
            uVar24 = (ulong)*puVar8;
            lVar20 = uVar24 * 8;
            do {
              lVar20 = lVar20 + 8;
              uVar24 = uVar24 + 1;
              if (puVar8[1] <= uVar24) goto LAB_02fbacc0;
            } while (uVar13 != *(ushort *)(*plVar3 + lVar20));
            *(short *)(lVar14 + (long)(int)uVar21 * 8 + 6) = (short)uVar24;
            *(short *)(*plVar3 + (uVar24 & 0xffffffff) * 8 + 6) = (short)uVar21;
            uVar22 = (ulong)*puVar7;
          }
LAB_02fbacc0:
          uVar21 = uVar21 + ((int)uVar21 < (int)(uint)uVar10 && uVar22 <= uVar18);
          iVar23 = iVar23 + (uint)*(byte *)(*param_2 + uVar18);
          cVar15 = cVar15 + '\x01';
          iVar27 = iVar27 + 1;
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 != uVar29);
      iVar23 = *(int *)(param_1 + 0x28) + iVar31 * (uint)*pbVar16;
      *(int *)(param_1 + 0x28) = iVar23;
      sVar17 = sVar17 + (ushort)*pbVar16;
      uVar13 = uVar19;
      iVar27 = iVar25;
    } while (uVar19 != uVar29);
  }
  *(int *)(param_1 + 0x28) = iVar23 + 1;
  *(short *)(*(long *)(param_1 + 0x50) + lVar28 * 2) = (short)uVar9;
  *(short *)(*(long *)(param_1 + 0x70) + lVar28 * 2) = (short)iVar25;
  if (lVar26 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,pvVar12,lVar28);
    return;
  }
  uVar29 = lVar28 + 0x3fU & 0xffffffffffffffc0;
  if ((*(ulong *)(lVar26 + 0x28) < uVar29) || (*(long *)(lVar26 + 0x38) != uVar29 + (long)pvVar12))
  {
    if (pvVar12 == (void *)0x0) {
      return;
    }
    if (*(ulong *)(lVar26 + 0x28) < uVar29 + 0x40) {
      *(int *)(*(long *)(lVar26 + 0x30) + 0x20) = *(int *)(*(long *)(lVar26 + 0x30) + 0x20) + -1;
      (**(code **)(**(long **)(lVar26 + 0x10) + 0x18))
                (*(long **)(lVar26 + 0x10),(long)pvVar12 - (long)*(int *)((long)pvVar12 + -4),
                 uVar29 + 0x44);
      return;
    }
    if (*(long *)(lVar26 + 0x38) != uVar29 + (long)pvVar12) {
      FUN_031cf778(lVar26,pvVar12);
      return;
    }
    *(void **)(lVar26 + 0x38) = pvVar12;
  }
  else {
    *(void **)(lVar26 + 0x38) = pvVar12;
    if (*(void **)(lVar26 + 0x48) != pvVar12) {
      return;
    }
  }
  FUN_031cf578(lVar26);
  return;
}


