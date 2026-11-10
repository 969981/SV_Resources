/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004f1998; name: FUN_004f1998
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_004f1998(long *param_1,long *param_2,long *param_3,undefined8 param_4,ulong param_5,
                 ulong param_6,ulong param_7,ulong param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  long *plVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  ulong *puVar23;
  ulong uVar24;
  long *plVar25;
  long lVar26;
  undefined8 uVar27;
  undefined4 *puVar28;
  ulong uVar29;
  ulong *puVar30;
  long lVar31;
  uint uVar32;
  undefined4 *puVar33;
  int *piVar34;
  uint uVar35;
  ulong uVar36;
  long lVar37;
  int iVar38;
  ulong uVar39;
  int iVar40;
  ulong uVar41;
  int iVar42;
  int iVar43;
  ulong uVar44;
  uint uVar45;
  ulong *puVar46;
  undefined8 *unaff_x29;
  long lVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  
  if (param_2 == param_3) {
    return;
  }
  (**(code **)(*param_2 + 0x98))(param_2);
  lVar47 = 0x4f19e8;
  (**(code **)(*param_3 + 0x98))(param_3);
  uVar29 = (ulong)*(uint *)((long)param_1 + 0x24);
  uVar24 = *(ulong *)((long)param_2 + uVar29);
  puVar23 = (ulong *)(uVar24 & 0xfffffffffffffffe);
  if ((uVar24 & 1) == 0) {
    puVar30 = (ulong *)(*(ulong *)((long)param_3 + uVar29) & 0xfffffffffffffffe);
    puVar46 = puVar23;
    if ((*(ulong *)((long)param_3 + uVar29) & 1) != 0) goto LAB_004f1ac0;
LAB_004f1a08:
    if (puVar46 != puVar30) goto LAB_004f1a10;
  }
  else {
    puVar46 = (ulong *)*puVar23;
    puVar30 = (ulong *)(*(ulong *)((long)param_3 + uVar29) & 0xfffffffffffffffe);
    if ((*(ulong *)((long)param_3 + uVar29) & 1) == 0) goto LAB_004f1a08;
LAB_004f1ac0:
    if (puVar46 != (ulong *)*puVar30) {
LAB_004f1a10:
      if ((uVar24 & 1) != 0) {
        puVar23 = (ulong *)*puVar23;
      }
      plVar20 = (long *)(**(code **)(*param_2 + 0x20))(param_2,puVar23);
      (**(code **)(*plVar20 + 0x78))(plVar20,param_3);
      (**(code **)(*param_3 + 0x70))(param_3,param_2);
      FUN_004f1998(param_1,param_2,plVar20);
      uVar24 = *(ulong *)((long)param_2 + (ulong)*(uint *)((long)param_1 + 0x24));
      plVar25 = (long *)(uVar24 & 0xfffffffffffffffe);
      if ((uVar24 & 1) != 0) {
        plVar25 = (long *)*plVar25;
      }
      if ((plVar20 == (long *)0x0) || (plVar25 != (long *)0x0)) {
        return;
      }
      (**(code **)*plVar20)(plVar20);
      FUN_0049e790(PTR_LAB_047cba48,plVar20);
      return;
    }
  }
  uVar24 = (ulong)*(uint *)(param_1 + 4);
  if (*(uint *)(param_1 + 4) == 0xffffffff) {
    lVar26 = *param_1;
    goto LAB_004f1ee4;
  }
  lVar26 = *param_1;
  uVar32 = *(uint *)(lVar26 + 0x68);
  uVar29 = (ulong)uVar32;
  if ((int)uVar32 < 1) goto LAB_004f1ee4;
  if (uVar32 < 4) {
    uVar36 = 0;
    iVar38 = 0;
LAB_004f1e54:
    piVar34 = (int *)(*(long *)(lVar26 + 0x28) + uVar36 * 0x98 + 0x3c);
    lVar47 = uVar29 - uVar36;
    do {
      if ((*piVar34 != 3) &&
         ((lVar37 = *(long *)(piVar34 + 7), lVar37 == 0 ||
          ((*(int *)(lVar37 + 0x18) == 1 && (*(char *)(**(long **)(lVar37 + 0x20) + 0x41) != '\0')))
          ))) {
        iVar38 = iVar38 + 1;
      }
      piVar34 = piVar34 + 0x26;
      lVar47 = lVar47 + -1;
    } while (lVar47 != 0);
  }
  else {
    iVar42 = 0;
    iVar43 = 0;
    iVar40 = 0;
    iVar38 = 0;
    uVar36 = uVar29 & 0xfffffffc;
    lVar37 = *(long *)(lVar26 + 0x28);
    uVar44 = uVar36;
    do {
      iVar1 = *(int *)(lVar37 + 0x3c);
      iVar2 = *(int *)(lVar37 + 0xd4);
      iVar3 = *(int *)(lVar37 + 0x16c);
      iVar4 = *(int *)(lVar37 + 0x204);
      if (iVar1 != 3) {
        param_5 = *(ulong *)(lVar37 + 0x58);
      }
      if (iVar2 != 3) {
        param_6 = *(ulong *)(lVar37 + 0xf0);
      }
      if (iVar3 != 3) {
        param_7 = *(ulong *)(lVar37 + 0x188);
      }
      if (iVar4 != 3) {
        param_8 = *(ulong *)(lVar37 + 0x220);
      }
      bVar8 = iVar4 != 3;
      uVar35 = (uint)bVar8;
      bVar9 = iVar3 != 3;
      uVar32 = (uint)bVar9;
      bVar10 = iVar2 != 3;
      bVar11 = iVar1 != 3;
      bVar12 = param_5 != 0;
      bVar13 = param_6 != 0;
      uVar45 = (uint)bVar13;
      bVar14 = param_7 != 0;
      puVar23 = (ulong *)(ulong)bVar14;
      bVar15 = param_8 != 0;
      if (bVar11 && bVar12) {
        uVar32 = *(uint *)(param_5 + 0x18);
      }
      if (bVar10 && bVar13) {
        uVar35 = *(uint *)(param_6 + 0x18);
      }
      if (bVar9 && bVar14) {
        uVar45 = *(uint *)(param_7 + 0x18);
      }
      bVar7 = bVar8 && bVar15;
      if (bVar7) {
        puVar23 = (ulong *)(ulong)*(uint *)(param_8 + 0x18);
      }
      bVar16 = uVar32 == 1;
      puVar46 = (ulong *)(ulong)bVar16;
      bVar17 = uVar35 == 1;
      uVar41 = (ulong)bVar17;
      bVar18 = uVar45 == 1;
      plVar25 = (long *)(ulong)bVar18;
      bVar19 = (int)puVar23 == 1;
      bVar6 = bVar16 && (bVar11 && bVar12);
      uVar39 = (ulong)bVar19;
      if (bVar6) {
        plVar25 = *(long **)(param_5 + 0x20);
      }
      if (bVar17 && (bVar10 && bVar13)) {
        puVar23 = *(ulong **)(param_6 + 0x20);
      }
      if (bVar18 && (bVar9 && bVar14)) {
        puVar46 = *(ulong **)(param_7 + 0x20);
      }
      if (bVar19 && (bVar8 && bVar15)) {
        unaff_x29 = *(undefined8 **)(param_8 + 0x20);
      }
      if (bVar16 && (bVar11 && bVar12)) {
        lVar47 = *plVar25;
      }
      if (bVar17 && (bVar10 && bVar13)) {
        uVar39 = *puVar23;
      }
      if (bVar18 && (bVar9 && bVar14)) {
        uVar41 = *puVar46;
      }
      if (bVar19 && (bVar8 && bVar15)) {
        puVar46 = (ulong *)*unaff_x29;
      }
      if (bVar16 && (bVar11 && bVar12)) {
        plVar25 = (long *)(ulong)*(byte *)(lVar47 + 0x41);
      }
      if (bVar17 && (bVar10 && bVar13)) {
        puVar23 = (ulong *)(ulong)*(byte *)(uVar39 + 0x41);
      }
      if (bVar18 && (bVar9 && bVar14)) {
        uVar39 = (ulong)*(byte *)(uVar41 + 0x41);
      }
      if (bVar19 && bVar7) {
        uVar41 = (ulong)*(byte *)((long)puVar46 + 0x41);
      }
      bVar8 = param_8 == 0;
      param_8 = (ulong)bVar8;
      bVar11 = param_7 == 0;
      param_7 = (ulong)bVar11;
      bVar12 = param_6 == 0;
      param_6 = (ulong)bVar12;
      bVar15 = param_5 == 0;
      param_5 = (ulong)bVar15;
      iVar42 = iVar42 + (uint)(bVar15 && iVar1 != 3 || bVar6 && ((ulong)plVar25 & 0xff) != 0);
      iVar43 = iVar43 + (uint)(bVar12 && iVar2 != 3 ||
                              (bVar17 && (bVar10 && bVar13)) && ((ulong)puVar23 & 0xff) != 0);
      iVar40 = iVar40 + (uint)(bVar11 && iVar3 != 3 ||
                              (bVar18 && (bVar9 && bVar14)) && (uVar39 & 0xff) != 0);
      iVar38 = iVar38 + (uint)(bVar8 && iVar4 != 3 || (bVar19 && bVar7) && (uVar41 & 0xff) != 0);
      uVar44 = uVar44 - 4;
      lVar37 = lVar37 + 0x260;
    } while (uVar44 != 0);
    iVar38 = iVar38 + iVar40 + iVar43 + iVar42;
    if (uVar36 != uVar29) goto LAB_004f1e54;
  }
  iVar42 = iVar38 + 0x3e;
  if (-1 < iVar38 + 0x1f) {
    iVar42 = iVar38 + 0x1f;
  }
  if (0 < iVar38) {
    uVar32 = iVar42 >> 5;
    if ((int)uVar32 < 2) {
      uVar32 = 1;
    }
    uVar36 = (ulong)uVar32;
    uVar29 = (long)param_2 + uVar24;
    uVar44 = (long)param_3 + uVar24;
    if ((uVar32 < 8) ||
       ((lVar47 = uVar24 + uVar36 * 4, uVar29 < (ulong)((long)param_3 + lVar47) &&
        (uVar44 < (ulong)((long)param_2 + lVar47))))) {
      uVar39 = 0;
    }
    else {
      uVar39 = uVar36 & 0x7ffffff8;
      puVar21 = (undefined8 *)(uVar29 + 0x10);
      puVar22 = (undefined8 *)(uVar44 + 0x10);
      uVar41 = uVar39;
      do {
        uVar53 = puVar22[-2];
        uVar52 = puVar22[1];
        uVar51 = *puVar22;
        uVar41 = uVar41 - 8;
        uVar48 = puVar21[-1];
        uVar27 = puVar21[-2];
        uVar50 = puVar21[1];
        uVar49 = *puVar21;
        puVar21[-1] = puVar22[-1];
        puVar21[-2] = uVar53;
        puVar21[1] = uVar52;
        *puVar21 = uVar51;
        puVar21 = puVar21 + 4;
        puVar22[-1] = uVar48;
        puVar22[-2] = uVar27;
        puVar22[1] = uVar50;
        *puVar22 = uVar49;
        puVar22 = puVar22 + 4;
      } while (uVar41 != 0);
      if (uVar39 == uVar36) goto LAB_004f1ee4;
    }
    uVar41 = ~uVar39;
    if ((uVar32 & 1) != 0) {
      lVar47 = uVar39 * 4;
      uVar39 = uVar39 | 1;
      uVar5 = *(undefined4 *)(uVar29 + lVar47);
      *(undefined4 *)(uVar29 + lVar47) = *(undefined4 *)(uVar44 + lVar47);
      *(undefined4 *)(uVar44 + lVar47) = uVar5;
    }
    if (uVar41 + uVar36 != 0) {
      lVar47 = uVar24 + uVar39 * 4 + 4;
      lVar37 = uVar36 - uVar39;
      puVar28 = (undefined4 *)((long)param_3 + lVar47);
      puVar33 = (undefined4 *)((long)param_2 + lVar47);
      do {
        uVar5 = puVar33[-1];
        lVar37 = lVar37 + -2;
        puVar33[-1] = puVar28[-1];
        puVar28[-1] = uVar5;
        uVar5 = *puVar33;
        *puVar33 = *puVar28;
        *puVar28 = uVar5;
        puVar28 = puVar28 + 2;
        puVar33 = puVar33 + 2;
      } while (lVar37 != 0);
    }
  }
LAB_004f1ee4:
  iVar38 = (int)param_1[9];
  if (-1 < iVar38) {
    lVar37 = 0;
    lVar47 = -1;
    do {
      lVar31 = *(long *)(*(long *)(lVar26 + 0x28) + lVar37 + 0x58);
      if ((lVar31 == 0) ||
         ((*(int *)(lVar31 + 0x18) == 1 && (*(char *)(**(long **)(lVar31 + 0x20) + 0x41) != '\0'))))
      {
        FUN_004f11d0(param_1,param_2,param_3);
        iVar38 = (int)param_1[9];
        lVar26 = *param_1;
      }
      lVar47 = lVar47 + 1;
      lVar37 = lVar37 + 0x98;
    } while (lVar47 < iVar38);
  }
  uVar32 = *(uint *)(lVar26 + 0x6c);
  if (0 < (int)uVar32) {
    lVar47 = 0;
    while( true ) {
      lVar26 = *(long *)(lVar26 + 0x30) + lVar47;
      if ((*(int *)(lVar26 + 0x18) != 1) || (*(char *)(**(long **)(lVar26 + 0x20) + 0x41) == '\0'))
      {
        FUN_004f26f8(param_1,param_2,param_3);
      }
      if ((ulong)uVar32 * 0x30 + -0x30 == lVar47) break;
      lVar26 = *param_1;
      lVar47 = lVar47 + 0x30;
    }
  }
  uVar32 = *(uint *)(param_1 + 5);
  if (uVar32 != 0xffffffff) {
    FUN_005248d4((long)param_2 + (ulong)uVar32,(long)param_3 + (ulong)uVar32);
  }
  uVar24 = *(ulong *)((long)param_2 + (ulong)*(uint *)((long)param_1 + 0x24));
  if ((uVar24 & 1) == 0) {
    puVar21 = (undefined8 *)FUN_00264e54();
    uVar24 = *(ulong *)((long)param_3 + (ulong)*(uint *)((long)param_1 + 0x24));
  }
  else {
    puVar21 = (undefined8 *)((uVar24 & 0xfffffffffffffffe) + 8);
    uVar24 = *(ulong *)((long)param_3 + (ulong)*(uint *)((long)param_1 + 0x24));
  }
  if ((uVar24 & 1) == 0) {
    puVar22 = (undefined8 *)FUN_00264e54();
  }
  else {
    puVar22 = (undefined8 *)((uVar24 & 0xfffffffffffffffe) + 8);
  }
  uVar27 = *puVar21;
  *puVar21 = *puVar22;
  *puVar22 = uVar27;
  uVar27 = *(undefined8 *)((long)puVar21 + 8);
  *(undefined8 *)((long)puVar21 + 8) = puVar22[1];
  puVar22[1] = uVar27;
  uVar27 = *(undefined8 *)((long)puVar21 + 0x10);
  *(undefined8 *)((long)puVar21 + 0x10) = puVar22[2];
  puVar22[2] = uVar27;
  return;
}


