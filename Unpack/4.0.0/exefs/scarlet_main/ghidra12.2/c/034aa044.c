/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034aa044; name: FUN_034aa044
 */


void FUN_034aa044(long *param_1,long param_2)

{
  bool bVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  bool bVar9;
  uint uVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  
  puVar8 = PTR_DAT_047e7260;
  uVar10 = *(uint *)(param_1 + 1);
  if (uVar10 == 0) {
    puVar13 = *(undefined8 **)PTR_DAT_047e7260;
    uVar10 = *(uint *)(PTR_DAT_047e7260 + 8);
    puVar14 = puVar13 + uVar10;
    if ((uVar10 != 0) && ((long *)*puVar13 != param_1)) {
      lVar15 = (ulong)uVar10 * 8;
      do {
        lVar15 = lVar15 + -8;
        if (lVar15 == 0) {
          puVar13 = puVar14;
          break;
        }
        puVar11 = puVar13 + 1;
        plVar2 = puVar13 + 1;
        puVar13 = puVar11;
      } while ((long *)*plVar2 != param_1);
    }
    if (puVar14 == puVar13) {
      return;
    }
    if (puVar13 < puVar14 + -1) {
      do {
        puVar11 = puVar13 + 1;
        *puVar13 = *puVar11;
        puVar13 = puVar11;
      } while (puVar11 < puVar14 + -1);
      uVar10 = *(uint *)(puVar8 + 8);
    }
    *(uint *)(puVar8 + 8) = uVar10 - 1;
    return;
  }
  iVar12 = 0;
  uVar4 = *(uint *)(param_2 + 0x2c4);
  uVar5 = *(uint *)(param_2 + 0x2c8);
  lVar15 = *param_1;
  uVar16 = uVar10;
LAB_034aa064:
  iVar3 = iVar12 + (uVar16 >> 1);
  lVar17 = *(long *)(lVar15 + (long)iVar3 * 8);
  if (*(float *)(lVar17 + 0x2c0) == *(float *)(param_2 + 0x2c0)) {
    uVar6 = *(uint *)(lVar17 + 0x2c4);
    uVar7 = *(uint *)(lVar17 + 0x2c8);
    if (uVar6 == uVar4 && uVar7 == uVar5) {
      puVar13 = (undefined8 *)((lVar15 + (ulong)uVar10 * 8) - 8);
      puVar14 = (undefined8 *)(lVar15 + (long)iVar3 * 8);
      if (puVar14 < puVar13) {
        do {
          puVar11 = puVar14 + 1;
          *puVar14 = *puVar11;
          puVar14 = puVar11;
        } while (puVar11 < puVar13);
        uVar10 = *(uint *)(param_1 + 1);
      }
      *(uint *)(param_1 + 1) = uVar10 - 1;
      puVar8 = PTR_DAT_047e7260;
      if (uVar10 - 1 == 0) {
        puVar13 = *(undefined8 **)PTR_DAT_047e7260;
        uVar10 = *(uint *)(PTR_DAT_047e7260 + 8);
        puVar14 = puVar13 + uVar10;
        if ((uVar10 != 0) && ((long *)*puVar13 != param_1)) {
          lVar15 = (ulong)uVar10 * 8;
          do {
            lVar15 = lVar15 + -8;
            if (lVar15 == 0) {
              puVar13 = puVar14;
              break;
            }
            puVar11 = puVar13 + 1;
            plVar2 = puVar13 + 1;
            puVar13 = puVar11;
          } while ((long *)*plVar2 != param_1);
        }
        if (puVar14 != puVar13) {
          if (puVar13 < puVar14 + -1) {
            do {
              puVar11 = puVar13 + 1;
              *puVar13 = *puVar11;
              puVar13 = puVar11;
            } while (puVar11 < puVar14 + -1);
            uVar10 = *(uint *)(puVar8 + 8);
          }
          *(uint *)(puVar8 + 8) = uVar10 - 1;
        }
      }
      *(short *)(param_1 + 5) = (short)param_1[5] + -1;
      return;
    }
    bVar1 = uVar4 < uVar6;
    if (uVar7 != uVar5) {
      bVar1 = uVar5 < uVar7;
    }
    bVar9 = uVar6 < uVar4;
    if (uVar7 != uVar5) {
      bVar9 = uVar7 < uVar5;
    }
    if (*(char *)((long)param_1 + 0x12) != '\0') {
      bVar1 = bVar9;
    }
  }
  else {
    bVar1 = *(float *)(param_2 + 0x2c0) < *(float *)(lVar17 + 0x2c0);
  }
  if (bVar1 != 0) {
    iVar12 = iVar3 + 1;
  }
  uVar16 = uVar16 - bVar1 >> 1;
  if (uVar16 == 0) {
    return;
  }
  goto LAB_034aa064;
}


