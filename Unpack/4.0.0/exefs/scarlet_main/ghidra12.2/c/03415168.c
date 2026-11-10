/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03415168; name: FUN_03415168
 */


void FUN_03415168(float param_1,long param_2,ulong param_3,ulong param_4)

{
  ulong *puVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  bool bVar6;
  uint uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  int iVar14;
  long lVar15;
  uint uVar16;
  ulong *puVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  long lVar21;
  long *plVar22;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  
  uVar18 = (uint)param_3;
  uVar19 = (uint)param_4;
  if (param_1 <= 0.0) {
    uVar7 = *(uint *)(param_2 + 0x50);
    uVar3 = param_4;
    uVar20 = param_3;
    if (param_4 <= param_3) {
      uVar3 = param_3;
      uVar20 = param_4;
    }
    if (uVar7 != 0) {
      lVar8 = *(long *)(param_2 + 0x48);
      iVar14 = 0;
      uVar16 = uVar7;
LAB_03415214:
      iVar2 = iVar14 + (uVar16 >> 1);
      puVar17 = (ulong *)(lVar8 + (long)iVar2 * 0x18);
      uVar5 = *puVar17;
      uVar4 = puVar17[1];
      if (uVar5 != uVar20 || uVar4 != uVar3) goto code_r0x03415230;
      puVar10 = (undefined8 *)(lVar8 + (long)iVar2 * 0x18);
      puVar13 = (undefined8 *)((lVar8 + (ulong)uVar7 * 0x18) - 0x18);
      if (puVar10 < puVar13) {
        do {
          puVar9 = puVar10 + 3;
          *puVar10 = *puVar9;
          puVar10[1] = puVar10[4];
          *(undefined4 *)(puVar10 + 2) = *(undefined4 *)(puVar10 + 5);
          puVar10 = puVar9;
        } while (puVar9 < puVar13);
        uVar7 = *(uint *)(param_2 + 0x50);
      }
      *(uint *)(param_2 + 0x50) = uVar7 - 1;
    }
LAB_034152a4:
    uVar7 = *(uint *)(param_2 + 0x20);
    if (uVar7 == 0) {
      return;
    }
    uVar16 = 0;
    if (uVar7 != 0) {
      uVar16 = uVar18 / uVar7;
    }
    for (lVar8 = *(long *)(*(long *)(param_2 + 0x18) + (ulong)(uVar18 - uVar16 * uVar7) * 8);
        (lVar8 != 0 && (*(ulong *)(lVar8 + 0x68) != param_3)); lVar8 = *(long *)(lVar8 + 0x70)) {
    }
    uVar18 = 0;
    if (uVar7 != 0) {
      uVar18 = uVar19 / uVar7;
    }
    lVar21 = *(long *)(*(long *)(param_2 + 0x18) + (ulong)(uVar19 - uVar18 * uVar7) * 8);
    while( true ) {
      if (lVar21 == 0) {
        return;
      }
      if (*(ulong *)(lVar21 + 0x68) == param_4) break;
      lVar21 = *(long *)(lVar21 + 0x70);
    }
    if (lVar8 == 0) {
      return;
    }
    puVar12 = *(ulong **)(lVar8 + 0x668);
    uVar18 = *(uint *)(lVar8 + 0x670);
    puVar17 = puVar12 + uVar18;
    if ((uVar18 != 0) && (*puVar12 != param_4)) {
      lVar15 = (ulong)uVar18 * 8;
      do {
        lVar15 = lVar15 + -8;
        if (lVar15 == 0) {
          puVar12 = puVar17;
          break;
        }
        puVar1 = puVar12 + 1;
        puVar11 = puVar12 + 1;
        puVar12 = puVar1;
      } while (*puVar11 != param_4);
    }
    if (puVar17 != puVar12) {
      if (puVar12 < puVar17 + -1) {
        do {
          puVar11 = puVar12 + 1;
          *puVar12 = *puVar11;
          puVar12 = puVar11;
        } while (puVar11 < puVar17 + -1);
        uVar18 = *(uint *)(lVar8 + 0x670);
      }
      *(uint *)(lVar8 + 0x670) = uVar18 - 1;
    }
    puVar12 = *(ulong **)(lVar21 + 0x668);
    uVar18 = *(uint *)(lVar21 + 0x670);
    puVar17 = puVar12 + uVar18;
    if ((uVar18 != 0) && (*puVar12 != param_3)) {
      lVar8 = (ulong)uVar18 * 8;
      do {
        lVar8 = lVar8 + -8;
        if (lVar8 == 0) {
          puVar12 = puVar17;
          break;
        }
        puVar1 = puVar12 + 1;
        puVar11 = puVar12 + 1;
        puVar12 = puVar1;
      } while (*puVar11 != param_3);
    }
    if (puVar17 != puVar12) {
      if (puVar12 < puVar17 + -1) {
        do {
          puVar11 = puVar12 + 1;
          *puVar12 = *puVar11;
          puVar12 = puVar11;
        } while (puVar11 < puVar17 + -1);
        uVar18 = *(uint *)(lVar21 + 0x670);
      }
      *(uint *)(lVar21 + 0x670) = uVar18 - 1;
    }
    return;
  }
  uVar7 = *(uint *)(param_2 + 0x20);
  if (uVar7 == 0) {
    return;
  }
  uVar16 = 0;
  if (uVar7 != 0) {
    uVar16 = uVar18 / uVar7;
  }
  for (lVar8 = *(long *)(*(long *)(param_2 + 0x18) + (ulong)(uVar18 - uVar16 * uVar7) * 8);
      (lVar8 != 0 && (*(ulong *)(lVar8 + 0x68) != param_3)); lVar8 = *(long *)(lVar8 + 0x70)) {
  }
  uVar18 = 0;
  if (uVar7 != 0) {
    uVar18 = uVar19 / uVar7;
  }
  lVar21 = *(long *)(*(long *)(param_2 + 0x18) + (ulong)(uVar19 - uVar18 * uVar7) * 8);
  while( true ) {
    if (lVar21 == 0) {
      return;
    }
    if (*(ulong *)(lVar21 + 0x68) == param_4) break;
    lVar21 = *(long *)(lVar21 + 0x70);
  }
  if (lVar8 == 0) {
    return;
  }
  FUN_03424a28(lVar8 + 0x668,param_4,auStack_48);
  FUN_03424a28(lVar21 + 0x668,param_3,auStack_44);
  plVar22 = (long *)(param_2 + 0x48);
  lVar8 = *plVar22;
  uVar18 = *(uint *)(param_2 + 0x50);
  uVar3 = param_4;
  if (param_4 <= param_3) {
    uVar3 = param_3;
    param_3 = param_4;
  }
  if (uVar18 == 0) {
    if (lVar8 == 0) {
      if (*(int *)(param_2 + 0x54) == 0) {
        lVar8 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(9,0,0x18);
        puVar17 = (ulong *)(lVar8 + (ulong)*(uint *)(param_2 + 0x50) * 0x18);
        *(long *)(param_2 + 0x48) = lVar8;
        *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) + 1;
        *(undefined4 *)(param_2 + 0x54) = 1;
        if (lVar8 != 0) {
          *puVar17 = 0xffffffffffffffff;
          puVar17[1] = 0xffffffffffffffff;
        }
      }
      else {
        *(undefined4 *)(param_2 + 0x50) = 1;
        puVar17 = (ulong *)0x0;
      }
      goto LAB_034154c4;
    }
    uVar20 = 0;
    uVar19 = 0;
    if (*(int *)(param_2 + 0x54) == 0) goto LAB_03415414;
    uVar18 = 0;
  }
  else {
    uVar19 = 0;
    uVar7 = uVar18;
    do {
      iVar14 = uVar19 + (uVar7 >> 1);
      puVar17 = (ulong *)(lVar8 + (long)iVar14 * 0x18);
      uVar20 = *puVar17;
      uVar5 = puVar17[1];
      if (uVar20 == param_3 && uVar5 == uVar3) {
        puVar17 = (ulong *)(lVar8 + (long)iVar14 * 0x18);
        goto LAB_034154c8;
      }
      bVar6 = uVar5 < uVar3;
      if (uVar20 != param_3) {
        bVar6 = uVar20 < param_3;
      }
      if (bVar6 != 0) {
        uVar19 = iVar14 + 1;
      }
      uVar7 = uVar7 - bVar6 >> 1;
    } while (uVar7 != 0);
    uVar20 = (ulong)uVar19;
    uVar19 = *(uint *)(param_2 + 0x54);
    if (uVar19 <= uVar18) {
LAB_03415414:
      iVar14 = uVar19 + (uVar19 >> 1);
      if (uVar19 == 0) {
        iVar14 = 1;
      }
      lVar8 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(9,lVar8,(ulong)(iVar14 + uVar19) * 0x18);
      uVar18 = *(uint *)(param_2 + 0x50);
      *(long *)(param_2 + 0x48) = lVar8;
      *(uint *)(param_2 + 0x54) = iVar14 + uVar19;
    }
  }
  *(uint *)(param_2 + 0x50) = uVar18 + 1;
  puVar10 = (undefined8 *)(lVar8 + (ulong)uVar18 * 0x18);
  *puVar10 = 0xffffffffffffffff;
  puVar10[1] = 0xffffffffffffffff;
  lVar8 = *(long *)(param_2 + 0x48);
  puVar13 = (undefined8 *)(lVar8 + uVar20 * 0x18);
  if (puVar13 < puVar10) {
    do {
      puVar9 = puVar10 + -3;
      *puVar10 = *puVar9;
      puVar10[1] = puVar10[-2];
      *(undefined4 *)(puVar10 + 2) = *(undefined4 *)(puVar10 + -1);
      lVar8 = *plVar22;
      puVar13 = (undefined8 *)(lVar8 + uVar20 * 0x18);
      puVar10 = puVar9;
    } while (puVar13 < puVar9);
  }
  if (lVar8 == 0) {
    lVar8 = 0;
  }
  else {
    *puVar13 = 0xffffffffffffffff;
    puVar13[1] = 0xffffffffffffffff;
    lVar8 = *plVar22;
  }
  puVar17 = (ulong *)(lVar8 + uVar20 * 0x18);
LAB_034154c4:
  *puVar17 = param_3;
  puVar17[1] = uVar3;
LAB_034154c8:
  *(float *)(puVar17 + 2) = param_1;
  return;
code_r0x03415230:
  bVar6 = uVar4 < uVar3;
  if (uVar5 != uVar20) {
    bVar6 = uVar5 < uVar20;
  }
  if (bVar6 != 0) {
    iVar14 = iVar2 + 1;
  }
  uVar16 = uVar16 - bVar6 >> 1;
  if (uVar16 == 0) goto LAB_034152a4;
  goto LAB_03415214;
}


