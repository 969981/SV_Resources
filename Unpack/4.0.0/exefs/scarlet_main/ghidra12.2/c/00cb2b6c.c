/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cb2b6c; name: FUN_00cb2b6c
 */


void FUN_00cb2b6c(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  long *plVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  long *plVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  
  uVar11 = *(uint *)(param_1 + 0x54);
  plVar9 = (long *)(param_1 + 0x48);
  if ((int)uVar11 < 1) {
LAB_00cb2c14:
    uVar7 = (long)(int)uVar11 + 1;
  }
  else {
    uVar6 = (int)param_2 * -0x61c8864f;
    uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    uVar10 = uVar6 >> 0x10 | uVar6 << 0x10;
    uVar6 = (int)((ulong)param_2 >> 0x20) * -0x61c8864f;
    uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
    uVar7 = (ulong)(uVar11 & (uVar10 + (uVar10 >> 2) + uVar6 * 0x40 + 0x9e3779b9 ^ uVar6));
    lVar12 = *(long *)(*plVar9 + uVar7 * 0x10);
    if (lVar12 == -1) goto LAB_00cb2c14;
    if (lVar12 != param_2) {
      do {
        uVar7 = (ulong)((int)uVar7 + 1U & uVar11);
        lVar12 = *(long *)(*plVar9 + uVar7 * 0x10);
        if (lVar12 == -1) goto LAB_00cb2c14;
      } while (lVar12 != param_2);
    }
  }
  if ((int)uVar11 < (int)uVar7) goto LAB_00cb2ebc;
  lVar12 = *(long *)(*(long *)(param_1 + 0x48) + ((long)(uVar7 << 0x20) >> 0x1c) + 8);
  FUN_02ef6198(plVar9);
  uVar11 = *(uint *)(param_1 + 0x54);
  if (-1 < (int)uVar11) {
    plVar9 = (long *)*plVar9;
    uVar7 = 0xffffffffffffffff;
    plVar15 = plVar9;
    do {
      if (*plVar15 != -1) {
        uVar6 = (uint)uVar7;
        break;
      }
      uVar7 = uVar7 + 1;
      plVar15 = plVar15 + 2;
      uVar6 = uVar11;
    } while (uVar11 != uVar7);
    uVar6 = uVar6 + 1;
joined_r0x00cb2c78:
    uVar10 = uVar6;
    if ((int)uVar10 <= (int)uVar11) {
      if (plVar9[(long)(int)uVar10 * 2 + 1] == lVar12) goto LAB_00cb2ebc;
      uVar8 = uVar11;
      if ((int)uVar11 <= (int)uVar10) {
        uVar8 = uVar10;
      }
      lVar16 = (long)(int)uVar8 - (long)(int)uVar10;
      plVar15 = plVar9 + (long)(int)uVar10 * 2 + 2;
      do {
        uVar6 = uVar8 + 1;
        if (lVar16 == 0) break;
        lVar18 = *plVar15;
        lVar16 = lVar16 + -1;
        uVar10 = uVar10 + 1;
        plVar15 = plVar15 + 2;
        uVar6 = uVar10;
      } while (lVar18 == -1);
      goto joined_r0x00cb2c78;
    }
  }
  uVar11 = *(uint *)(param_1 + 0x44);
  if ((int)uVar11 < 1) {
    lVar16 = *(long *)(param_1 + 0x38);
LAB_00cb2d54:
    uVar7 = (ulong)(uVar11 + 1);
  }
  else {
    uVar6 = (int)lVar12 * -0x61c8864f;
    uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    uVar10 = uVar6 >> 0x10 | uVar6 << 0x10;
    uVar6 = (int)((ulong)lVar12 >> 0x20) * -0x61c8864f;
    uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
    lVar16 = *(long *)(param_1 + 0x38);
    uVar7 = (ulong)(uVar11 & (uVar10 + (uVar10 >> 2) + uVar6 * 0x40 + 0x9e3779b9 ^ uVar6));
    lVar18 = *(long *)(lVar16 + uVar7 * 0x10);
    if (lVar18 == -1) goto LAB_00cb2d54;
    if (lVar18 != lVar12) {
      do {
        uVar7 = (ulong)((int)uVar7 + 1U & uVar11);
        lVar18 = *(long *)(lVar16 + uVar7 * 0x10);
        if (lVar18 == -1) goto LAB_00cb2d54;
      } while (lVar18 != lVar12);
    }
  }
  lVar12 = lVar16 + ((long)(uVar7 << 0x20) >> 0x1c);
  uVar5 = *(ushort *)(lVar12 + 0xc);
  if ((ulong)uVar5 != 0) {
    iVar4 = *(int *)(lVar12 + 8);
    if (uVar5 == 1) {
      uVar13 = 0;
    }
    else {
      uVar13 = 0;
      do {
        iVar17 = iVar4 + (int)uVar13;
        uVar13 = uVar13 + 2;
        *(undefined2 *)(*(long *)(param_1 + 0x20) + (long)iVar17 * 2) = 0xffff;
        *(undefined2 *)(*(long *)(param_1 + 0x20) + (long)(iVar17 + 1) * 2) = 0xffff;
      } while (((ulong)uVar5 & 0xfffe) != uVar13);
    }
    if ((uVar5 & 1) != 0) {
      *(undefined2 *)(*(long *)(param_1 + 0x20) + (long)(iVar4 + (int)uVar13) * 2) = 0xffff;
    }
    lVar16 = *(long *)(param_1 + 0x38);
  }
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
  *(undefined8 *)(lVar16 + uVar7 * 0x10) = 0xffffffffffffffff;
  uVar11 = *(uint *)(param_1 + 0x44);
  lVar12 = *(long *)(param_1 + 0x38);
  uVar6 = (uint)uVar7;
  do {
    uVar6 = uVar11 + uVar6 & uVar11;
  } while (*(long *)(lVar12 + (ulong)uVar6 * 0x10) != -1);
  uVar13 = (ulong)(uVar11 & (uint)uVar7 + 1);
  plVar9 = (long *)(lVar12 + uVar13 * 0x10);
  if (*plVar9 != -1) {
    uVar6 = uVar6 + 1 & uVar11;
    do {
      uVar10 = (int)*plVar9 * -0x61c8864f;
      uVar8 = *(int *)((long)plVar9 + 4) * -0x61c8864f;
      uVar10 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
      uVar10 = uVar10 >> 0x10 | uVar10 << 0x10;
      uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
      uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
      uVar10 = (uVar10 + (uVar10 >> 2) + uVar8 * 0x40 + 0x9e3779b9 ^ uVar8) & uVar11;
      uVar14 = (uint)uVar13;
      uVar8 = (uint)uVar7;
      if ((((uVar14 < uVar6) || (uVar10 <= uVar8)) &&
          ((uVar8 <= uVar14 || (uVar10 <= uVar8 && uVar14 < uVar10)))) &&
         (uVar10 <= uVar8 || uVar6 <= uVar10)) {
        puVar2 = (undefined8 *)(lVar12 + uVar13 * 0x10);
        uVar3 = puVar2[1];
        puVar1 = (undefined8 *)(lVar12 + uVar7 * 0x10);
        *puVar1 = *puVar2;
        puVar1[1] = uVar3;
        *(undefined8 *)(*(long *)(param_1 + 0x38) + uVar13 * 0x10) = 0xffffffffffffffff;
        uVar11 = *(uint *)(param_1 + 0x44);
        lVar12 = *(long *)(param_1 + 0x38);
        uVar7 = uVar13;
      }
      uVar13 = (ulong)(uVar11 & uVar14 + 1);
      plVar9 = (long *)(lVar12 + uVar13 * 0x10);
    } while (*plVar9 != -1);
  }
LAB_00cb2ebc:
  *(undefined4 *)(param_2 + 0x40) = 0xffffffff;
  return;
}


