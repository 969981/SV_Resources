/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03440cdc; name: FUN_03440cdc
 */


undefined8
FUN_03440cdc(long param_1,ulong *param_2,ulong param_3,uint param_4,ulong param_5,undefined4 param_6
            )

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  ulong *puVar15;
  
  if (*(char *)(param_1 + 0x358) == '\0') {
    uVar3 = 1;
    goto LAB_03440f24;
  }
  uVar13 = *(uint *)(param_1 + 0x30);
  if (uVar13 != 0) {
    lVar4 = *(long *)(param_1 + 0x28);
    uVar6 = uVar13 - 1;
    iVar12 = 0;
    uVar14 = uVar6;
    do {
      iVar2 = uVar14 - iVar12;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      uVar8 = iVar12 + (iVar2 >> 1);
      puVar15 = *(ulong **)(lVar4 + (ulong)uVar8 * 8);
      if ((uint)puVar15[4] <= (uint)param_2[4]) {
        if ((uint)param_2[4] != (uint)puVar15[4]) {
LAB_03440d5c:
          iVar12 = uVar8 + 1;
          goto LAB_03440d60;
        }
        if (*puVar15 < *param_2) goto LAB_03440d50;
        if (*param_2 < *puVar15) goto LAB_03440d5c;
        uVar10 = param_2[1];
        if (uVar10 < puVar15[1]) goto LAB_03440d50;
        if (puVar15[1] < uVar10) goto LAB_03440d5c;
        if (param_4 == 0xffffffff) {
          puVar9 = (undefined8 *)(lVar4 + (ulong)uVar8 * 8);
          puVar5 = (undefined8 *)((lVar4 + (ulong)uVar13 * 8) - 8);
          if (puVar9 < puVar5) {
            do {
              puVar7 = puVar9 + 1;
              *puVar9 = *puVar7;
              puVar9 = puVar7;
            } while (puVar7 < puVar5);
            uVar6 = *(int *)(param_1 + 0x30) - 1;
          }
          *(uint *)(param_1 + 0x30) = uVar6;
          goto LAB_03440f14;
        }
        goto LAB_03440e58;
      }
LAB_03440d50:
      uVar14 = uVar8 - 1;
LAB_03440d60:
    } while (iVar12 <= (int)uVar14);
  }
  if (param_4 == 0xffffffff) {
LAB_03440f14:
    uVar3 = 2;
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x34);
    if (uVar6 <= uVar13) {
      iVar12 = uVar6 + (uVar6 >> 1);
      if (uVar6 == 0) {
        iVar12 = 1;
      }
      uVar6 = iVar12 + uVar6;
      lVar4 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))
                        (7,*(undefined8 *)(param_1 + 0x28),(ulong)uVar6 << 3);
      if (lVar4 == 0) goto LAB_03440f14;
      *(long *)(param_1 + 0x28) = lVar4;
      *(uint *)(param_1 + 0x34) = uVar6;
    }
    if (uVar6 <= uVar13) goto LAB_03440f14;
    uVar6 = *(uint *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x30) = uVar6 + 1;
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_03440f14;
    *(ulong **)(*(long *)(param_1 + 0x28) + (ulong)uVar6 * 8) = param_2;
    lVar4 = *(long *)(param_1 + 0x28);
    uVar6 = *(int *)(param_1 + 0x30) - 1;
    uVar10 = param_2[1];
    uVar8 = uVar13;
LAB_03440e58:
    uVar13 = 0;
    do {
      iVar12 = uVar6 - uVar13;
      if (iVar12 < 0) {
        iVar12 = iVar12 + 1;
      }
      uVar14 = uVar13 + (iVar12 >> 1);
      puVar15 = *(ulong **)(lVar4 + (ulong)uVar14 * 8);
      if (param_4 < (uint)puVar15[4]) {
LAB_03440e94:
        uVar6 = uVar14 - 1;
      }
      else {
        if (param_4 <= (uint)puVar15[4]) {
          if (*puVar15 < param_5) goto LAB_03440e94;
          if (*puVar15 <= param_5) {
            if (uVar10 < puVar15[1]) goto LAB_03440e94;
            if (uVar10 <= puVar15[1]) {
              uVar6 = uVar14;
              uVar13 = uVar14;
              break;
            }
          }
        }
        uVar13 = uVar14 + 1;
      }
    } while ((int)uVar13 <= (int)uVar6);
    uVar11 = *(undefined8 *)(lVar4 + (ulong)uVar8 * 8);
    if ((int)uVar6 <= (int)uVar13) {
      uVar6 = uVar13;
    }
    uVar10 = (ulong)uVar8;
    if (uVar8 < uVar6) {
      uVar6 = uVar6 - 1;
      if (uVar8 < uVar6) {
        *(undefined8 *)(lVar4 + uVar10 * 8) = *(undefined8 *)(lVar4 + (ulong)(uVar8 + 1) * 8);
        for (uVar8 = uVar8 + 2; uVar8 <= uVar6; uVar8 = uVar8 + 1) {
          *(undefined8 *)(*(long *)(param_1 + 0x28) + (ulong)(uVar8 - 1) * 8) =
               *(undefined8 *)(*(long *)(param_1 + 0x28) + (ulong)uVar8 * 8);
        }
      }
    }
    else if ((uVar8 != uVar6) &&
            (*(undefined8 *)(lVar4 + uVar10 * 8) = *(undefined8 *)(lVar4 + (ulong)(uVar8 - 1) * 8),
            uVar6 < uVar8 - 1)) {
      if ((uVar8 + ~uVar6 & 1) != 0) {
        uVar10 = uVar10 - 1;
        *(undefined8 *)(*(long *)(param_1 + 0x28) + uVar10 * 8) =
             *(undefined8 *)(*(long *)(param_1 + 0x28) + (ulong)(uVar8 - 2) * 8);
      }
      if (uVar8 - 2 != uVar6) {
        lVar4 = uVar10 << 3;
        uVar13 = (int)uVar10 - 1;
        uVar10 = uVar10 + 0xfffffffe;
        do {
          uVar13 = uVar13 - 2;
          *(undefined8 *)(*(long *)(param_1 + 0x28) + lVar4 + -8) =
               *(undefined8 *)(*(long *)(param_1 + 0x28) + (uVar10 & 0xffffffff) * 8);
          uVar10 = uVar10 - 2;
          lVar1 = *(long *)(param_1 + 0x28) + lVar4;
          lVar4 = lVar4 + -0x10;
          *(undefined8 *)(lVar1 + -0x10) =
               *(undefined8 *)(*(long *)(param_1 + 0x28) + (ulong)uVar13 * 8);
        } while (uVar6 < uVar13);
      }
    }
    uVar3 = 1;
    *(undefined8 *)(*(long *)(param_1 + 0x28) + (ulong)uVar6 * 8) = uVar11;
  }
  *(uint *)(param_2 + 4) = param_4;
LAB_03440f24:
  *param_2 = param_5;
  *(undefined4 *)(param_2 + 3) = param_6;
  param_2[2] = param_3;
  return uVar3;
}


