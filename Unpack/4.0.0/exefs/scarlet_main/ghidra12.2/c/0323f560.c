/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0323f560; name: FUN_0323f560
 */


int FUN_0323f560(long param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long *plVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  char cVar13;
  undefined1 auVar14 [16];
  bool bVar15;
  undefined8 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined8 *puVar19;
  long *plVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  ulong uVar23;
  long lVar24;
  undefined8 uVar25;
  long *plVar26;
  undefined4 *puVar27;
  undefined8 *puVar28;
  
  iVar10 = *(int *)(param_2 + 0x20);
  iVar8 = *(int *)(param_1 + 0x20);
  iVar11 = *(int *)(param_1 + 0x330);
  puVar28 = *(undefined8 **)(param_2 + 0x18);
  iVar4 = iVar10 + iVar8;
  if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) < iVar4) {
    FUN_0323ff70((long *)(param_1 + 0x18),PTR_PTR_047d1a50,(long)iVar4);
  }
  if (iVar10 != 0) {
    puVar16 = (undefined8 *)(*(long *)(param_1 + 0x18) + (long)iVar8 * 0x18);
    uVar23 = (long)iVar10 * 0x18 - 0x18;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar23;
    if ((SUB164(auVar14 * ZEXT816(0xaaaaaaaaaaaaaaab),8) >> 4 & 1) == 0) {
      uVar9 = *puVar28;
      uVar25 = puVar28[2];
      puVar16[1] = puVar28[1];
      puVar16[2] = uVar25;
      *puVar16 = uVar9;
      puVar16 = puVar16 + 3;
      puVar19 = puVar28 + 3;
    }
    else {
      puVar19 = puVar28;
    }
    if (0x17 < uVar23) {
      do {
        uVar9 = *puVar19;
        uVar25 = puVar19[2];
        puVar16[1] = puVar19[1];
        puVar16[2] = uVar25;
        *puVar16 = uVar9;
        puVar1 = puVar19 + 3;
        uVar9 = puVar19[4];
        uVar25 = puVar19[5];
        puVar19 = puVar19 + 6;
        puVar16[3] = *puVar1;
        puVar16[4] = uVar9;
        puVar16[5] = uVar25;
        puVar16 = puVar16 + 6;
      } while (puVar19 != puVar28 + (long)iVar10 * 3);
    }
  }
  *(int *)(param_1 + 0x20) = iVar4;
  iVar10 = *(int *)(param_2 + 0x3c0);
  iVar12 = *(int *)(param_1 + 0x3c0);
  iVar4 = iVar12 + iVar10;
  plVar26 = *(long **)(param_2 + 0x3b8);
  if ((int)(*(uint *)(param_1 + 0x3c4) & 0x7fffffff) < iVar4) {
    FUN_0324009c((long *)(param_1 + 0x3b8),(long)iVar4);
  }
  if (iVar10 != 0) {
    plVar6 = plVar26 + iVar10;
    plVar20 = (long *)(*(long *)(param_1 + 0x3b8) + (long)iVar12 * 8);
    do {
      lVar24 = *plVar26;
      *plVar20 = lVar24;
      if ((lVar24 != 0) && (*(long *)(lVar24 + 8) != 0)) {
        plVar3 = (long *)(lVar24 + 0x10);
        do {
          cVar13 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar15) {
            *plVar3 = *plVar3 + 1;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
      }
      plVar26 = plVar26 + 1;
      plVar20 = plVar20 + 1;
    } while (plVar26 != plVar6);
  }
  *(int *)(param_1 + 0x3c0) = iVar4;
  iVar4 = *(int *)(param_2 + 0x330);
  iVar10 = *(int *)(param_1 + 0x330);
  plVar26 = (long *)(param_1 + 0x328);
  puVar27 = *(undefined4 **)(param_2 + 0x328);
  uVar5 = iVar10 + iVar4;
  if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) < (int)uVar5) {
    FUN_02e7f7cc(plVar26,PTR_PTR_047d1a50,(long)(int)uVar5);
  }
  if (iVar4 != 0) {
    uVar23 = (long)iVar4 * 4 - 4;
    uVar2 = ((uint)(uVar23 >> 2) & 0x3fffffff) + 1;
    puVar18 = (undefined4 *)(*plVar26 + (long)iVar10 * 4);
    if ((uVar2 & 3) == 0) {
      puVar22 = puVar27;
    }
    else {
      lVar24 = -((ulong)uVar2 & 3);
      puVar17 = puVar18;
      puVar21 = puVar27;
      do {
        puVar22 = puVar21 + 1;
        bVar15 = lVar24 != -1;
        lVar24 = lVar24 + 1;
        puVar18 = puVar17 + 1;
        *puVar17 = *puVar21;
        puVar17 = puVar18;
        puVar21 = puVar22;
      } while (bVar15);
    }
    if (0xb < uVar23) {
      do {
        *puVar18 = *puVar22;
        puVar18[1] = puVar22[1];
        puVar18[2] = puVar22[2];
        puVar17 = puVar22 + 3;
        puVar22 = puVar22 + 4;
        puVar18[3] = *puVar17;
        puVar18 = puVar18 + 4;
      } while (puVar22 != puVar27 + iVar4);
    }
  }
  *(uint *)(param_1 + 0x330) = uVar5;
  if (iVar11 < (int)uVar5) {
    lVar24 = (long)(int)uVar5;
    uVar23 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2;
    do {
      lVar7 = *plVar26 + uVar23;
      uVar23 = uVar23 - 4;
      lVar24 = lVar24 + -1;
      *(short *)(lVar7 + -4) = *(short *)(lVar7 + -4) + (short)iVar8;
      *(short *)(lVar7 + -2) = *(short *)(lVar7 + -2) + (short)iVar8;
    } while (iVar11 < lVar24);
  }
  return iVar8;
}


