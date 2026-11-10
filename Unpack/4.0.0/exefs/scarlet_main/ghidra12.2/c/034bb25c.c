/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034bb25c; name: FUN_034bb25c
 */


void FUN_034bb25c(long param_1,byte *param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  uint *puVar5;
  char *pcVar6;
  int *piVar7;
  uint uVar8;
  undefined8 *puVar9;
  int iVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  
  bVar2 = *param_2;
  if ((bVar2 == 0xff) && (*(long *)(param_2 + 8) == 0)) {
    if (*(char *)(param_1 + 0xc) != '\0') {
      *(undefined1 *)(param_1 + 0xc) = 0;
    }
  }
  else {
    uVar8 = *(uint *)(param_1 + 0x18);
    if (uVar8 != 0) {
      lVar16 = *(long *)(param_1 + 0x10);
      iVar10 = 0;
      do {
        iVar1 = iVar10 + (uVar8 >> 1);
        lVar17 = (long)iVar1;
        bVar3 = *(byte *)(lVar16 + (long)iVar1 * 0x28 + 0x20);
        if (bVar3 == bVar2) {
          uVar11 = *(ulong *)(param_2 + 8);
          if (uVar11 == 0) {
            pcVar6 = (char *)(lVar16 + lVar17 * 0x28 + 0xc);
            if (*pcVar6 != '\0') {
              *pcVar6 = '\0';
            }
            goto LAB_034bb3c0;
          }
          lVar4 = lVar16 + lVar17 * 0x28;
          puVar5 = (uint *)(lVar4 + 0x18);
          uVar8 = *puVar5;
          plVar18 = (long *)(lVar4 + 0x10);
          if (uVar8 == 0) goto LAB_034bb390;
          lVar4 = *plVar18;
          iVar10 = 0;
          uVar14 = uVar8;
          goto LAB_034bb2f8;
        }
        if (bVar3 < bVar2) {
          iVar10 = iVar1 + 1;
        }
        uVar8 = uVar8 - (bVar3 < bVar2) >> 1;
      } while (uVar8 != 0);
    }
  }
  return;
LAB_034bb2f8:
  iVar1 = iVar10 + (uVar14 >> 1);
  uVar15 = *(ulong *)(lVar4 + (long)iVar1 * 0x10 + 8);
  if (uVar15 == uVar11) {
    puVar12 = (undefined8 *)((lVar4 + (ulong)uVar8 * 0x10) - 0x10);
    puVar13 = (undefined8 *)(lVar4 + (long)iVar1 * 0x10);
    if (puVar13 < puVar12) {
      do {
        puVar9 = puVar13 + 2;
        *puVar13 = *puVar9;
        puVar13[1] = puVar13[3];
        puVar13 = puVar9;
      } while (puVar9 < puVar12);
      uVar8 = *puVar5;
    }
    *puVar5 = uVar8 - 1;
    if (uVar8 - 1 == 0) {
LAB_034bb390:
      if (*plVar18 != 0) {
        *puVar5 = 0;
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
        *plVar18 = 0;
        *(undefined4 *)(lVar16 + lVar17 * 0x28 + 0x1c) = 0;
      }
    }
LAB_034bb3c0:
    if (*(char *)(lVar16 + lVar17 * 0x28 + 0xc) != '\0') {
      return;
    }
    piVar7 = (int *)(lVar16 + lVar17 * 0x28 + 0x18);
    if (*piVar7 != 0) {
      return;
    }
    plVar18 = (long *)(lVar16 + lVar17 * 0x28 + 0x10);
    if (*plVar18 != 0) {
      *piVar7 = 0;
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
      *plVar18 = 0;
      *(undefined4 *)(lVar16 + lVar17 * 0x28 + 0x1c) = 0;
    }
    FUN_034badf8((long *)(param_1 + 0x10),*param_2);
    return;
  }
  if (uVar15 < uVar11) {
    iVar10 = iVar1 + 1;
  }
  uVar14 = uVar14 - (uVar15 < uVar11) >> 1;
  if (uVar14 == 0) goto LAB_034bb3c0;
  goto LAB_034bb2f8;
}


