/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034c4cbc; name: FUN_034c4cbc
 */


/* WARNING: Removing unreachable block (ram,0x034c4eb8) */

undefined8 FUN_034c4cbc(long param_1,long param_2,long param_3,uint param_4)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  undefined4 *puVar16;
  ulong uVar17;
  uint uVar18;
  long lVar19;
  
  plVar9 = *(long **)(param_1 + 8);
  uVar7 = *(uint *)(param_1 + 0x10);
  uVar17 = (ulong)uVar7;
  if ((uVar7 == 0) || (*plVar9 == param_2)) {
    plVar11 = plVar9;
  }
  else {
    lVar8 = uVar17 * 0x18;
    plVar15 = plVar9;
    do {
      lVar8 = lVar8 + -0x18;
      if (lVar8 == 0) goto LAB_034c4e3c;
      plVar11 = plVar15 + 3;
      plVar1 = plVar15 + 3;
      plVar15 = plVar11;
    } while (*plVar1 != param_2);
  }
  if (plVar11 == plVar9 + uVar17 * 3) {
LAB_034c4e3c:
    uVar18 = *(uint *)(param_1 + 0x14);
    if (uVar18 <= uVar7) {
      iVar3 = uVar18 + (uVar18 >> 1);
      if (uVar18 == 0) {
        iVar3 = 1;
      }
      uVar18 = uVar18 + iVar3;
      lVar8 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,(ulong)uVar18 * 0x18);
      if (lVar8 == 0) {
        return 1;
      }
      lVar12 = *(long *)(param_1 + 8);
      if ((lVar12 != 0) && (lVar12 != lVar8)) {
        if (uVar7 != 0) {
          lVar12 = 0;
          do {
            puVar4 = (undefined8 *)(lVar8 + lVar12);
            puVar4[1] = 0;
            puVar4[2] = 0;
            lVar19 = *(long *)(param_1 + 8);
            *puVar4 = *(undefined8 *)(lVar19 + lVar12);
            lVar19 = lVar19 + lVar12;
            lVar12 = lVar12 + 0x18;
            puVar4[1] = *(undefined8 *)(lVar19 + 8);
            *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(lVar19 + 0x10);
            *(undefined4 *)((long)puVar4 + 0x14) = *(undefined4 *)(lVar19 + 0x14);
            *(undefined8 *)(lVar19 + 8) = 0;
            *(undefined8 *)(lVar19 + 0x10) = 0;
          } while (uVar17 * 0x18 != lVar12);
          lVar12 = *(long *)(param_1 + 8);
        }
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,lVar12);
      }
      *(long *)(param_1 + 8) = lVar8;
      *(uint *)(param_1 + 0x14) = uVar18;
    }
    if (uVar18 <= uVar7) {
      return 1;
    }
    uVar7 = *(uint *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x10) = uVar7 + 1;
    if (*(long *)(param_1 + 8) == 0) {
      return 1;
    }
    plVar9 = (long *)(*(long *)(param_1 + 8) + (ulong)uVar7 * 0x18);
    plVar11 = plVar9 + 1;
    *plVar11 = 0;
    plVar9[2] = 0;
    *plVar9 = param_2;
  }
  else {
    plVar11 = plVar11 + 1;
  }
  uVar18 = *(uint *)(plVar11 + 1);
  uVar17 = (ulong)uVar18;
  uVar7 = param_4;
  if (param_4 <= uVar18) {
    uVar7 = uVar18;
  }
  if (*(uint *)((long)plVar11 + 0xc) < uVar7) {
    uVar2 = (uVar7 - uVar18) + *(uint *)((long)plVar11 + 0xc);
    lVar8 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,*plVar11,(ulong)uVar2 << 4);
    if (lVar8 == 0) {
      return 1;
    }
    *plVar11 = lVar8;
    *(uint *)((long)plVar11 + 0xc) = uVar2;
  }
  if (uVar18 < param_4) {
    uVar10 = (ulong)uVar7;
    lVar12 = uVar10 - uVar17;
    lVar8 = uVar17 << 4;
    do {
      if (*plVar11 != 0) {
        puVar4 = (undefined8 *)(*plVar11 + lVar8);
        *puVar4 = 0;
        puVar4[1] = 0x42c8000000000000;
      }
      lVar12 = lVar12 + -1;
      lVar8 = lVar8 + 0x10;
    } while (lVar12 != 0);
    *(uint *)(plVar11 + 1) = uVar7;
    if (uVar18 != 0) {
      uVar13 = (ulong)(uVar18 - 1);
      uVar14 = ~uVar17;
      if ((uVar7 - uVar18 & 1) != 0) {
        puVar4 = (undefined8 *)(*plVar11 + uVar13 * 0x10);
        puVar5 = (undefined8 *)(*plVar11 + uVar17 * 0x10);
        uVar6 = puVar4[1];
        uVar17 = uVar17 + 1;
        *puVar5 = *puVar4;
        puVar5[1] = uVar6;
      }
      if (uVar14 + uVar10 != 0) {
        lVar12 = uVar10 - uVar17;
        lVar8 = uVar17 << 4;
        do {
          puVar4 = (undefined8 *)(*plVar11 + uVar13 * 0x10);
          puVar5 = (undefined8 *)(*plVar11 + lVar8);
          uVar6 = puVar4[1];
          lVar12 = lVar12 + -2;
          *puVar5 = *puVar4;
          puVar5[1] = uVar6;
          puVar4 = (undefined8 *)(*plVar11 + uVar13 * 0x10);
          lVar19 = *plVar11 + lVar8;
          lVar8 = lVar8 + 0x20;
          uVar6 = puVar4[1];
          *(undefined8 *)(lVar19 + 0x10) = *puVar4;
          *(undefined8 *)(lVar19 + 0x18) = uVar6;
        } while (lVar12 != 0);
      }
    }
  }
  else {
    *(uint *)(plVar11 + 1) = uVar7;
  }
  if (param_4 != 0) {
    uVar17 = (ulong)param_4;
    lVar8 = 0;
    puVar16 = (undefined4 *)(param_3 + 4);
    lVar12 = uVar17 * 0x10;
    do {
      *(undefined4 *)(*plVar11 + lVar8 + 4) = *puVar16;
      *(undefined4 *)(*plVar11 + lVar8) = puVar16[-1];
      lVar8 = lVar8 + 0x10;
      puVar16 = puVar16 + 2;
    } while (lVar12 != lVar8);
    if (param_4 < *(uint *)(plVar11 + 1)) {
      puVar16 = (undefined4 *)(param_3 + (ulong)(param_4 - 1) * 8);
      do {
        *(undefined4 *)(*plVar11 + lVar12 + 4) = puVar16[1];
        *(undefined4 *)(*plVar11 + lVar12) = *puVar16;
        uVar17 = uVar17 + 1;
        lVar12 = lVar12 + 0x10;
      } while (uVar17 < *(uint *)(plVar11 + 1));
    }
  }
  return 1;
}


