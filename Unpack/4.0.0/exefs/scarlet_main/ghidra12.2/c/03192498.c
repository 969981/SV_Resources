/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03192498; name: FUN_03192498
 */


int FUN_03192498(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  long *plVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  undefined8 uVar18;
  int iVar19;
  int iVar20;
  
  fVar15 = (float)((ulong)*param_2 >> 0x20);
  fVar14 = (float)*param_2;
  fVar16 = (float)param_2[1];
  uVar4 = ((uint)fVar14 ^ ((uint)fVar15 >> 0x10 | (int)fVar15 << 0x10) ^
          ((uint)fVar16 >> 3 | (int)fVar16 << 0x1d)) & 0xfffffffe;
  uVar13 = (ulong)uVar4;
  uVar10 = *(uint *)((long)param_1 + 0x1c);
  plVar3 = param_1 + 2;
  if (0 < (int)uVar10) {
    uVar6 = (uVar4 * -0x61c8864f & 0xff00ff00) >> 8 | (uVar4 * -0x61c8864f & 0xff00ff) << 8;
    uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
    uVar9 = (ulong)(uVar6 + (uVar6 >> 2) + 0x9e3779b9 & uVar10);
    uVar11 = *(ulong *)(*plVar3 + uVar9 * 0x10);
    if (uVar11 != 0xffffffffffffffff) {
      if (uVar11 != uVar13) {
        do {
          uVar9 = (ulong)((int)uVar9 + 1U & uVar10);
          uVar11 = *(ulong *)(*plVar3 + uVar9 * 0x10);
          if (uVar11 == 0xffffffffffffffff) goto LAB_03192548;
        } while (uVar11 != uVar13);
      }
      goto LAB_0319254c;
    }
  }
LAB_03192548:
  uVar9 = (ulong)(uVar10 + 1);
LAB_0319254c:
  iVar5 = (int)param_1[1];
  if ((int)uVar10 < (int)uVar9) {
    lVar8 = (long)iVar5 + 1;
    iVar7 = iVar5;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= iVar5) {
      FUN_02e9b11c(param_1,PTR_PTR_047d1a50,lVar8);
      iVar7 = (int)param_1[1];
    }
    puVar1 = (undefined8 *)(*param_1 + (long)iVar7 * 0x10);
    uVar18 = param_2[1];
    *puVar1 = *param_2;
    puVar1[1] = uVar18;
    *(int *)(param_1 + 1) = (int)lVar8;
    iVar7 = (int)param_1[5];
    lVar12 = (long)iVar7;
    lVar8 = lVar12 + 1;
    if ((int)(*(uint *)((long)param_1 + 0x2c) & 0x7fffffff) <= iVar7) {
      FUN_03192780(param_1 + 4,lVar8);
      iVar7 = (int)param_1[5];
    }
    piVar2 = (int *)(param_1[4] + (long)iVar7 * 8);
    *(int *)(param_1 + 5) = (int)lVar8;
    *piVar2 = iVar5;
    piVar2[1] = -1;
    uVar10 = *(uint *)((long)param_1 + 0x1c);
    if ((int)uVar10 < (int)param_1[3] * 2) {
      FUN_02ef5fd4(plVar3,PTR_PTR_047d1a50,uVar10 * 2 + 2);
      uVar10 = *(uint *)((long)param_1 + 0x1c);
    }
    uVar4 = (uVar4 * -0x61c8864f & 0xff00ff00) >> 8 | (uVar4 * -0x61c8864f & 0xff00ff) << 8;
    uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
    uVar4 = uVar4 + (uVar4 >> 2) + 0x9e3779b9;
    while( true ) {
      uVar4 = uVar10 & uVar4;
      uVar9 = *(ulong *)(*plVar3 + (ulong)uVar4 * 0x10);
      if (uVar9 == 0xffffffffffffffff) break;
      if (uVar9 == uVar13) {
        iVar7 = 0;
        goto LAB_03192744;
      }
      uVar4 = uVar4 + 1;
    }
    iVar7 = 1;
LAB_03192744:
    *(int *)(param_1 + 3) = (int)param_1[3] + iVar7;
    *(ulong *)(*plVar3 + (-(ulong)(uVar4 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar4 << 4)) =
         uVar13;
    *(long *)(param_1[2] + (long)(int)uVar4 * 0x10 + 8) = lVar12;
  }
  else {
    uVar9 = (ulong)*(int *)(param_1[2] + ((long)(uVar9 << 0x20) >> 0x1c) + 8);
    lVar12 = param_1[4];
    lVar8 = *param_1;
    uVar13 = uVar9;
    do {
      iVar7 = *(int *)(lVar12 + uVar13 * 8);
      puVar1 = (undefined8 *)(lVar8 + (long)iVar7 * 0x10);
      uVar18 = *puVar1;
      iVar17 = -(uint)((float)uVar18 == fVar14);
      iVar19 = -(uint)((float)((ulong)uVar18 >> 0x20) == fVar15);
      iVar20 = -(uint)((float)puVar1[1] == fVar16);
      if (CONCAT13((byte)((uint)iVar19 >> 0x18) & (byte)((uint)iVar17 >> 0x18) &
                   (byte)((uint)iVar20 >> 0x18),
                   CONCAT12((byte)((uint)iVar19 >> 0x10) & (byte)((uint)iVar17 >> 0x10) &
                            (byte)((uint)iVar20 >> 0x10),
                            CONCAT11((byte)((uint)iVar19 >> 8) & (byte)((uint)iVar17 >> 8) &
                                     (byte)((uint)iVar20 >> 8),
                                     (byte)iVar19 & (byte)iVar17 & (byte)iVar20))) != 0) {
        return iVar7;
      }
      uVar4 = *(uint *)(lVar12 + uVar13 * 8 + 4);
      uVar13 = (ulong)uVar4;
    } while (-1 < (int)uVar4);
    lVar12 = (long)iVar5 + 1;
    iVar7 = iVar5;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= iVar5) {
      FUN_02e9b11c(param_1,PTR_PTR_047d1a50,lVar12);
      iVar7 = (int)param_1[1];
      lVar8 = *param_1;
    }
    puVar1 = (undefined8 *)(lVar8 + (long)iVar7 * 0x10);
    puVar1[1] = param_2[1];
    *puVar1 = *param_2;
    *(int *)(param_1 + 1) = (int)lVar12;
    iVar7 = (int)param_1[5];
    iVar17 = iVar7;
    if ((int)(*(uint *)((long)param_1 + 0x2c) & 0x7fffffff) <= iVar7) {
      FUN_03192780(param_1 + 4,(long)iVar7 + 1);
      iVar17 = (int)param_1[5];
    }
    piVar2 = (int *)(param_1[4] + (long)iVar17 * 8);
    lVar8 = param_1[4] + uVar9 * 8;
    *(int *)(param_1 + 5) = (int)((long)iVar7 + 1);
    iVar17 = *(int *)(lVar8 + 4);
    *piVar2 = iVar5;
    piVar2[1] = iVar17;
    *(int *)(lVar8 + 4) = iVar7;
  }
  return iVar5;
}


