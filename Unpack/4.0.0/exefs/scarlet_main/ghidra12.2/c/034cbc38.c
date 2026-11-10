/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034cbc38; name: FUN_034cbc38
 */


void FUN_034cbc38(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  uint uVar13;
  
  if (*(char *)(param_2 + 0x1c) != '\0') {
    *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + -1;
  }
  *(undefined1 *)(param_2 + 0x1c) = 0;
  if (*(char *)(param_2 + 0x1d) != '\0') {
    *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + -1;
  }
  *(undefined1 *)(param_2 + 0x1d) = 0;
  if (*(char *)(param_2 + 0x1e) != '\0') {
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + -1;
  }
  uVar2 = *(uint *)(param_2 + 0x18);
  *(undefined1 *)(param_2 + 0x1e) = 0;
  if (uVar2 != 0) {
    uVar6 = *(uint *)(param_1 + 0x28);
    if (uVar6 != 0) {
      iVar9 = 0;
      do {
        uVar13 = iVar9 + (uVar6 >> 1);
        uVar3 = *(uint *)(*(long *)(param_1 + 0x20) +
                         (-(ulong)(uVar13 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar13 << 3));
        if (uVar3 == uVar2) {
          lVar12 = *(long *)(param_1 + 0x20) + (long)(int)uVar13 * 8;
          iVar9 = *(int *)(lVar12 + 4) + -1;
          *(int *)(lVar12 + 4) = iVar9;
          if (iVar9 == 0) {
            uVar6 = *(uint *)(param_1 + 0x28);
            if (uVar6 != 0) {
              lVar12 = *(long *)(param_1 + 0x20);
              iVar9 = 0;
              uVar13 = uVar6;
              goto LAB_034cbd54;
            }
          }
          break;
        }
        if (uVar3 < uVar2) {
          iVar9 = uVar13 + 1;
        }
        uVar6 = uVar6 - (uVar3 < uVar2) >> 1;
      } while (uVar6 != 0);
    }
LAB_034cbcdc:
    *(undefined4 *)(param_2 + 0x18) = 0;
  }
  lVar7 = *(long *)(param_1 + 0xa0);
  lVar10 = 0;
  lVar12 = lVar7;
  if ((lVar7 != 0) && (lVar7 != param_2)) {
    do {
      lVar10 = lVar12;
      lVar12 = *(long *)(lVar10 + 0x10);
    } while (lVar12 != 0 && lVar12 != param_2);
  }
  if (lVar12 != 0) {
    plVar1 = (long *)(param_1 + 0xa0);
    if (lVar12 != lVar7) {
      plVar1 = (long *)(lVar10 + 0x10);
    }
    *plVar1 = *(long *)(lVar12 + 0x10);
  }
  *(undefined1 *)(param_1 + 200) = 1;
  return;
LAB_034cbd54:
  uVar3 = iVar9 + (uVar13 >> 1);
  uVar4 = *(uint *)(lVar12 + (-(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3));
  if (uVar4 != uVar2) goto code_r0x034cbd6c;
  puVar5 = (undefined8 *)((lVar12 + (ulong)uVar6 * 8) - 8);
  puVar11 = (undefined8 *)(lVar12 + (long)(int)uVar3 * 8);
  if (puVar11 < puVar5) {
    do {
      puVar8 = puVar11 + 1;
      *puVar11 = *puVar8;
      puVar11 = puVar8;
    } while (puVar8 < puVar5);
    uVar6 = *(uint *)(param_1 + 0x28);
  }
  *(uint *)(param_1 + 0x28) = uVar6 - 1;
  goto LAB_034cbcdc;
code_r0x034cbd6c:
  if (uVar4 < uVar2) {
    iVar9 = uVar3 + 1;
  }
  uVar13 = uVar13 - (uVar4 < uVar2) >> 1;
  if (uVar13 == 0) goto LAB_034cbcdc;
  goto LAB_034cbd54;
}


