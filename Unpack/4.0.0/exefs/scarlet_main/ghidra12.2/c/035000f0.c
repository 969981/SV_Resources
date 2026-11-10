/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 035000f0; name: FUN_035000f0
 */


void FUN_035000f0(long param_1,long param_2,undefined4 param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  uint *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  uint *puVar16;
  uint *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  
  if (*(long *)(param_1 + 8) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 8) + 0x114) = 0x42ca0000;
  }
  lVar7 = param_2;
  if ((*(byte *)(param_2 + 0x1a4) >> 2 & 1) == 0) {
    lVar8 = *(long *)(param_2 + 0x28);
    if (lVar8 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = 0;
      do {
        if (*(int *)(lVar8 + 0x1d4) == 0) {
          lVar7 = *(long *)(lVar8 + 0x1a0);
          if (*(long *)(param_2 + 0x70) == 0) {
            lVar15 = -1;
          }
          else {
            lVar15 = *(long *)(*(long *)(param_2 + 0x70) + 0x78);
          }
          if (*(long *)(lVar8 + 0x1b0) == lVar15) break;
        }
        lVar8 = *(long *)(lVar8 + 0x20);
      } while (lVar8 != 0);
    }
  }
  puVar2 = (undefined8 *)(param_1 + 0x28);
  lVar7 = FUN_0348a79c(puVar2,param_1,param_2,lVar7,param_3,(*(byte *)(param_1 + 0x50) & 3) != 1);
  if (lVar7 == 0) {
    return;
  }
  *(undefined8 *)(lVar7 + 0x18) = 0;
  plVar9 = (long *)(param_2 + 0x20);
  if (*plVar9 != 0) {
    plVar9 = (long *)(*(long *)(param_2 + 0x18) + 0x18);
  }
  *plVar9 = lVar7;
  *(long *)(param_2 + 0x18) = lVar7;
  lVar8 = FUN_0349fff0(*(long *)(lVar7 + 0x198) + 0x60);
  if (lVar8 != 0) {
    uVar6 = *(uint *)(*(long *)(lVar7 + 0x198) + 0x158);
    if (((uVar6 & 0xf00) != 0x100) || (uVar4 = uVar6 - (uVar6 >> 0xf & 1), (uVar4 & 0xfe) == 0))
    goto LAB_035003d8;
    puVar10 = *(uint **)(lVar8 + 0xb8);
    uVar3 = *(uint *)(lVar8 + 0xc0);
    uVar12 = (ulong)uVar3;
    uVar5 = uVar6 & 0xffff7f00 | uVar4 & 0xff;
    puVar16 = puVar10;
    if ((uVar3 != 0) && (*puVar10 != uVar5)) {
      lVar7 = uVar12 * 0x10;
      puVar17 = puVar10;
      do {
        lVar7 = lVar7 + -0x10;
        if (lVar7 == 0) goto LAB_03500264;
        puVar16 = puVar17 + 4;
        puVar1 = puVar17 + 4;
        puVar17 = puVar16;
      } while (*puVar1 != uVar5);
    }
    if (puVar16 == puVar10 + (ulong)uVar3 * 4) {
LAB_03500264:
      lVar7 = FUN_0349c8dc(lVar8);
      if (((uVar6 >> 0xe & 1) != 0) && (lVar7 != 0)) {
        puVar10 = *(uint **)(lVar8 + 0xb8);
        uVar12 = (ulong)*(uint *)(lVar8 + 0xc0);
        goto LAB_0350027c;
      }
    }
    else {
      if ((uVar6 >> 0xe & 1) == 0) goto LAB_035003d8;
LAB_0350027c:
      uVar6 = uVar6 & 0xffff3f00 | uVar4 - (uVar6 >> 0xe & 1) & 0xff;
      puVar16 = puVar10;
      if (((int)uVar12 != 0) && (*puVar10 != uVar6)) {
        lVar7 = uVar12 * 0x10;
        puVar17 = puVar10;
        do {
          lVar7 = lVar7 + -0x10;
          if (lVar7 == 0) goto LAB_035002dc;
          puVar16 = puVar17 + 4;
          puVar1 = puVar17 + 4;
          puVar17 = puVar16;
        } while (*puVar1 != uVar6);
      }
      if (puVar16 != puVar10 + uVar12 * 4) goto LAB_035003d8;
LAB_035002dc:
      lVar7 = FUN_0349c8dc(lVar8);
    }
    if (lVar7 != 0) goto LAB_035003d8;
  }
  puVar19 = (undefined8 *)*puVar2;
  if (puVar19 != (undefined8 *)0x0) {
    if (puVar19[0x33] == param_2) {
      puVar11 = (undefined8 *)0x0;
    }
    else {
      do {
        puVar11 = puVar19;
        puVar19 = (undefined8 *)puVar11[4];
        if (puVar19 == (undefined8 *)0x0) goto LAB_035003d8;
      } while (puVar19[0x33] != param_2);
    }
    if (*(long *)(param_1 + 8) != 0) {
      *(undefined4 *)(*(long *)(param_1 + 8) + 0x114) = 0x42ca0000;
    }
    if ((*(byte *)(param_1 + 0x50) >> 2 & 1) != 0) {
      *PTR_DAT_047e7450 = 1;
    }
    lVar7 = puVar19[0x33];
    puVar14 = (undefined8 *)0x0;
    puVar18 = (undefined8 *)(lVar7 + 0x20);
    do {
      puVar13 = puVar14;
      puVar14 = (undefined8 *)*puVar18;
      puVar18 = puVar14 + 3;
    } while (puVar14 != (undefined8 *)0x0 && puVar19 != puVar14);
    if (puVar14 != (undefined8 *)0x0) {
      puVar18 = (undefined8 *)(lVar7 + 0x20);
      if (*(undefined8 **)(lVar7 + 0x20) != puVar14) {
        puVar18 = puVar13 + 3;
      }
      *puVar18 = puVar14[3];
      if (*(undefined8 **)(lVar7 + 0x18) == puVar14) {
        *(undefined8 **)(lVar7 + 0x18) = puVar13;
      }
    }
    if ((undefined8 *)*puVar2 != puVar19) {
      puVar2 = puVar11 + 4;
    }
    *puVar2 = puVar19[4];
    (**(code **)*puVar19)(puVar19);
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,puVar19);
  }
LAB_035003d8:
  if ((*(byte *)(param_1 + 0x50) >> 2 & 1) != 0) {
    *PTR_DAT_047e7450 = 1;
  }
  return;
}


