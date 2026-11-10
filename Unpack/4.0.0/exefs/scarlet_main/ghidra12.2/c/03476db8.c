/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03476db8; name: FUN_03476db8
 */


byte FUN_03476db8(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  ulong *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  uint uVar11;
  int iVar12;
  undefined8 *puVar13;
  uint uVar14;
  ulong uVar15;
  byte bVar16;
  long lVar17;
  long *plVar18;
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [4];
  
  uVar4 = *(uint *)(param_1 + 0x28);
  if (uVar4 != 0) {
    puVar7 = *(ulong **)(param_1 + 0x20);
    puVar3 = puVar7;
    do {
      if ((int)puVar3[1] == 0) {
        uVar9 = *puVar3;
        uVar11 = *(uint *)(param_2 + 0x18);
        if (uVar11 != 0) {
          iVar12 = 0;
          do {
            iVar1 = iVar12 + (uVar11 >> 1);
            uVar15 = *(ulong *)(*(long *)(param_2 + 0x10) + (long)iVar1 * 8);
            if (uVar15 == uVar9) goto LAB_03476dfc;
            if (uVar15 < uVar9) {
              iVar12 = iVar1 + 1;
            }
            uVar11 = uVar11 - (uVar15 < uVar9) >> 1;
          } while (uVar11 != 0);
        }
        if (((uVar9 != 0xffffffffffffffff) && ((puVar3 + -3 < puVar7 || (puVar3[-3] != uVar9)))) &&
           ((puVar7 + (ulong)uVar4 * 3 + -3 < puVar3 + 3 || (puVar3[3] != uVar9)))) {
          uVar11 = *(uint *)(param_1 + 0x48);
          if (uVar11 != 0) {
            lVar2 = *(long *)(param_1 + 0x40);
            iVar12 = 0;
            uVar14 = uVar11;
LAB_03476e90:
            iVar1 = iVar12 + (uVar14 >> 1);
            uVar15 = *(ulong *)(lVar2 + (long)iVar1 * 8);
            if (uVar15 != uVar9) goto code_r0x03476ea4;
            puVar10 = (undefined8 *)(lVar2 + (long)iVar1 * 8);
            puVar13 = (undefined8 *)(lVar2 + (ulong)uVar11 * 8 + -8);
            if (puVar10 < puVar13) {
              do {
                puVar5 = puVar10 + 1;
                *puVar10 = *puVar5;
                puVar10 = puVar5;
              } while (puVar5 < puVar13);
              uVar11 = *(uint *)(param_1 + 0x48);
              puVar7 = *(ulong **)(param_1 + 0x20);
              uVar4 = *(uint *)(param_1 + 0x28);
            }
            *(uint *)(param_1 + 0x48) = uVar11 - 1;
          }
        }
LAB_03476efc:
        puVar8 = puVar3;
        if (puVar3 < puVar7 + (ulong)uVar4 * 3 + -3) {
          do {
            puVar6 = puVar8 + 3;
            *puVar8 = *puVar6;
            puVar8[1] = puVar8[4];
            *(int *)(puVar8 + 2) = (int)puVar8[5];
            puVar8 = puVar6;
          } while (puVar6 < puVar7 + (ulong)uVar4 * 3 + -3);
          uVar4 = *(uint *)(param_1 + 0x28);
          puVar7 = *(ulong **)(param_1 + 0x20);
        }
        uVar4 = uVar4 - 1;
        *(uint *)(param_1 + 0x28) = uVar4;
      }
      else {
LAB_03476dfc:
        puVar3 = puVar3 + 3;
      }
    } while (puVar7 + (ulong)uVar4 * 3 != puVar3);
  }
  if (*(int *)(param_2 + 0x18) == 0) {
    bVar16 = 1;
  }
  else {
    plVar18 = *(long **)(param_2 + 0x10);
    bVar16 = 1;
    do {
      lVar17 = *plVar18;
      lVar2 = FUN_03478100(param_1,lVar17,0,auStack_58);
      if (lVar17 != -1 && lVar2 != 0) {
        if ((((long *)(lVar2 - 0x18U) < *(long **)(param_1 + 0x20)) ||
            (*(long *)(lVar2 - 0x18U) != lVar17)) &&
           ((*(long **)(param_1 + 0x20) + (ulong)*(uint *)(param_1 + 0x28) * 3 + -3 <
             (long *)(lVar2 + 0x18U) || (*(long *)(lVar2 + 0x18U) != lVar17)))) {
          FUN_03411c9c(param_1 + 0x30,lVar17,auStack_54);
        }
      }
      bVar16 = bVar16 & lVar2 != 0;
      plVar18 = plVar18 + 1;
    } while (plVar18 != (long *)(*(long *)(param_2 + 0x10) + (ulong)*(uint *)(param_2 + 0x18) * 8));
  }
  return bVar16;
code_r0x03476ea4:
  if (uVar15 < uVar9) {
    iVar12 = iVar1 + 1;
  }
  uVar14 = uVar14 - (uVar15 < uVar9) >> 1;
  if (uVar14 == 0) goto LAB_03476efc;
  goto LAB_03476e90;
}


