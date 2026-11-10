/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d10524; name: FUN_00d10524
 */


void FUN_00d10524(undefined1 *param_1,long param_2,long *param_3,undefined8 *param_4)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  long *plVar5;
  uint *puVar6;
  uint *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  uint *puVar11;
  uint *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  
  lVar8 = *(long *)(param_2 + 0x180);
  if (*(long *)(param_2 + 0x188) == lVar8) {
LAB_00d10678:
    *param_1 = 0;
  }
  else {
    bVar2 = *(byte *)(param_2 + 0x1b8);
    bVar3 = *(byte *)(param_2 + 0x1b9);
    uVar9 = (ulong)bVar3;
    uVar1 = uVar9 + bVar2;
    if ((int)uVar1 == 0) {
      *param_1 = 0;
      if (*(char *)(lVar8 + 0x38) == '\0') {
        return;
      }
    }
    else {
      puVar11 = (uint *)*param_3;
      puVar12 = (uint *)*param_4;
      if ((bVar3 != 0) && (uVar13 = param_3[1] - (long)puVar11 >> 2, uVar1 <= uVar13)) {
        uVar15 = 0;
        if (uVar1 != 0) {
          uVar15 = uVar13 / uVar1;
        }
        do {
          uVar14 = uVar15 >> 1;
          puVar6 = puVar12;
          puVar7 = puVar11 + uVar14 * uVar1;
          uVar13 = uVar9;
          do {
            if (*puVar7 != *puVar6) {
              if (*puVar7 < *puVar6) {
                puVar11 = puVar11 + uVar14 * uVar1 + uVar1;
                uVar14 = uVar15 + ~uVar14;
              }
              break;
            }
            puVar7 = puVar7 + 1;
            puVar6 = puVar6 + 1;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
          uVar15 = uVar14;
        } while (uVar14 != 0);
      }
      if ((uint *)param_3[1] == puVar11) goto LAB_00d10678;
      if (bVar3 != 0) {
        puVar7 = puVar11;
        do {
          if (*puVar12 != *puVar7) {
            if (*puVar12 < *puVar7) goto LAB_00d10678;
            break;
          }
          puVar12 = puVar12 + 1;
          puVar7 = puVar7 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      lVar10 = *(long *)(param_2 + 0x148);
      *param_1 = 0;
      iVar4 = 0;
      if (uVar1 != 0) {
        iVar4 = (int)((ulong)((long)((long)puVar11 - (lVar10 + (ulong)bVar2 * 4)) >> 2) / uVar1);
      }
      if (*(char *)(lVar8 + (long)iVar4 * 0x60 + 0x38) == '\0') {
        return;
      }
      lVar8 = lVar8 + (long)iVar4 * 0x60;
    }
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(lVar8 + 0x40);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar8 + 0x48);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar8 + 0x50);
    plVar5 = *(long **)(lVar8 + 0x58);
    *(long **)(param_1 + 0x20) = plVar5;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))();
    }
    *param_1 = 1;
  }
  return;
}


