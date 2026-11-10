/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018849a0; name: FUN_018849a0
 */


void FUN_018849a0(long param_1)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  ushort *puVar7;
  ushort *puVar8;
  uint uVar9;
  ushort *puVar10;
  uint uVar11;
  long lVar12;
  ushort *puVar13;
  ushort local_4 [2];
  
  iVar6 = 0;
  puVar8 = (ushort *)(param_1 + 0x62);
  local_4[0] = 0;
  puVar10 = local_4;
  uVar9 = 0x11;
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x572) = 0;
  do {
    uVar3 = *puVar10;
    *puVar8 = uVar3;
    if (uVar3 == 0) goto LAB_01884ad4;
    if (uVar3 == 0x10) {
      puVar13 = puVar10 + 1;
      uVar3 = *puVar13;
      uVar1 = uVar3 + 2;
      bVar5 = uVar9 < uVar1;
      uVar9 = uVar9 - uVar1;
      if (bVar5 || uVar9 == 0) {
        *puVar8 = 0;
        goto LAB_01884ad4;
      }
      uVar11 = uVar3 + 1;
      uVar2 = uVar11 & 7;
      puVar7 = puVar8 + 1;
      *puVar7 = uVar3;
      if (uVar2 != 0) {
        lVar4 = 0;
        do {
          lVar12 = lVar4;
          uVar11 = uVar11 - 1;
          uVar2 = uVar2 - 1;
          *(undefined2 *)((long)puVar8 + lVar12 + 4) = *(undefined2 *)((long)puVar10 + lVar12 + 4);
          lVar4 = lVar12 + 2;
        } while (uVar2 != 0);
        puVar8 = (ushort *)((long)puVar8 + lVar12 + 4);
        puVar10 = (ushort *)((long)puVar10 + lVar12 + 2);
        puVar13 = puVar10 + 1;
        puVar7 = puVar8;
      }
      if (6 < uVar3) {
        do {
          puVar7[1] = puVar10[2];
          puVar7[2] = puVar13[2];
          puVar7[3] = puVar13[3];
          puVar7[4] = puVar13[4];
          puVar7[5] = puVar13[5];
          puVar7[6] = puVar13[6];
          puVar10 = puVar13 + 7;
          puVar7[7] = *puVar10;
          puVar13 = puVar13 + 8;
          uVar11 = uVar11 - 8;
          puVar7 = puVar7 + 8;
          *puVar7 = *puVar13;
          puVar8 = puVar7;
        } while (uVar11 != 0);
      }
      puVar10 = puVar13;
      iVar6 = uVar1 + iVar6;
    }
    else {
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
      iVar6 = iVar6 + 1;
      uVar9 = uVar9 - 1;
    }
  } while (uVar9 != 0);
  if (iVar6 != 0) {
    puVar8[-1] = 0;
  }
LAB_01884ad4:
  iVar6 = 0;
  puVar8 = (ushort *)(param_1 + 0x84);
  *(undefined1 *)(param_1 + 0x573) = 0;
  puVar10 = local_4;
  uVar9 = 0x11;
  do {
    uVar3 = *puVar10;
    *puVar8 = uVar3;
    if (uVar3 == 0) goto LAB_01884bfc;
    if (uVar3 == 0x10) {
      puVar13 = puVar10 + 1;
      uVar3 = *puVar13;
      uVar1 = uVar3 + 2;
      bVar5 = uVar9 < uVar1;
      uVar9 = uVar9 - uVar1;
      if (bVar5 || uVar9 == 0) {
        *puVar8 = 0;
        goto LAB_01884bfc;
      }
      uVar11 = uVar3 + 1;
      uVar2 = uVar11 & 7;
      puVar7 = puVar8 + 1;
      *puVar7 = uVar3;
      if (uVar2 != 0) {
        lVar4 = 0;
        do {
          lVar12 = lVar4;
          uVar11 = uVar11 - 1;
          uVar2 = uVar2 - 1;
          *(undefined2 *)((long)puVar8 + lVar12 + 4) = *(undefined2 *)((long)puVar10 + lVar12 + 4);
          lVar4 = lVar12 + 2;
        } while (uVar2 != 0);
        puVar8 = (ushort *)((long)puVar8 + lVar12 + 4);
        puVar10 = (ushort *)((long)puVar10 + lVar12 + 2);
        puVar13 = puVar10 + 1;
        puVar7 = puVar8;
      }
      if (6 < uVar3) {
        do {
          puVar7[1] = puVar10[2];
          puVar7[2] = puVar13[2];
          puVar7[3] = puVar13[3];
          puVar7[4] = puVar13[4];
          puVar7[5] = puVar13[5];
          puVar7[6] = puVar13[6];
          puVar10 = puVar13 + 7;
          puVar7[7] = *puVar10;
          puVar13 = puVar13 + 8;
          uVar11 = uVar11 - 8;
          puVar7 = puVar7 + 8;
          *puVar7 = *puVar13;
          puVar8 = puVar7;
        } while (uVar11 != 0);
      }
      puVar10 = puVar13;
      iVar6 = uVar1 + iVar6;
    }
    else {
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
      iVar6 = iVar6 + 1;
      uVar9 = uVar9 - 1;
    }
  } while (uVar9 != 0);
  if (iVar6 != 0) {
    puVar8[-1] = 0;
  }
LAB_01884bfc:
  iVar6 = 0;
  puVar8 = (ushort *)(param_1 + 0xa6);
  *(undefined1 *)(param_1 + 0x574) = 0;
  puVar10 = local_4;
  uVar9 = 0x11;
  do {
    uVar3 = *puVar10;
    *puVar8 = uVar3;
    if (uVar3 == 0) goto LAB_01884d24;
    if (uVar3 == 0x10) {
      puVar13 = puVar10 + 1;
      uVar3 = *puVar13;
      uVar1 = uVar3 + 2;
      bVar5 = uVar9 < uVar1;
      uVar9 = uVar9 - uVar1;
      if (bVar5 || uVar9 == 0) {
        *puVar8 = 0;
        goto LAB_01884d24;
      }
      uVar11 = uVar3 + 1;
      uVar2 = uVar11 & 7;
      puVar7 = puVar8 + 1;
      *puVar7 = uVar3;
      if (uVar2 != 0) {
        lVar4 = 0;
        do {
          lVar12 = lVar4;
          uVar11 = uVar11 - 1;
          uVar2 = uVar2 - 1;
          *(undefined2 *)((long)puVar8 + lVar12 + 4) = *(undefined2 *)((long)puVar10 + lVar12 + 4);
          lVar4 = lVar12 + 2;
        } while (uVar2 != 0);
        puVar8 = (ushort *)((long)puVar8 + lVar12 + 4);
        puVar10 = (ushort *)((long)puVar10 + lVar12 + 2);
        puVar13 = puVar10 + 1;
        puVar7 = puVar8;
      }
      if (6 < uVar3) {
        do {
          puVar7[1] = puVar10[2];
          puVar7[2] = puVar13[2];
          puVar7[3] = puVar13[3];
          puVar7[4] = puVar13[4];
          puVar7[5] = puVar13[5];
          puVar7[6] = puVar13[6];
          puVar10 = puVar13 + 7;
          puVar7[7] = *puVar10;
          puVar13 = puVar13 + 8;
          uVar11 = uVar11 - 8;
          puVar7 = puVar7 + 8;
          *puVar7 = *puVar13;
          puVar8 = puVar7;
        } while (uVar11 != 0);
      }
      puVar10 = puVar13;
      iVar6 = uVar1 + iVar6;
    }
    else {
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
      iVar6 = iVar6 + 1;
      uVar9 = uVar9 - 1;
    }
  } while (uVar9 != 0);
  if (iVar6 != 0) {
    puVar8[-1] = 0;
  }
LAB_01884d24:
  iVar6 = 0;
  puVar8 = (ushort *)(param_1 + 200);
  *(undefined1 *)(param_1 + 0x575) = 0;
  puVar10 = local_4;
  uVar9 = 0x11;
  do {
    uVar3 = *puVar10;
    *puVar8 = uVar3;
    if (uVar3 == 0) goto LAB_01884e4c;
    if (uVar3 == 0x10) {
      puVar13 = puVar10 + 1;
      uVar3 = *puVar13;
      uVar1 = uVar3 + 2;
      bVar5 = uVar9 < uVar1;
      uVar9 = uVar9 - uVar1;
      if (bVar5 || uVar9 == 0) {
        *puVar8 = 0;
        goto LAB_01884e4c;
      }
      uVar11 = uVar3 + 1;
      uVar2 = uVar11 & 7;
      puVar7 = puVar8 + 1;
      *puVar7 = uVar3;
      if (uVar2 != 0) {
        lVar4 = 0;
        do {
          lVar12 = lVar4;
          uVar11 = uVar11 - 1;
          uVar2 = uVar2 - 1;
          *(undefined2 *)((long)puVar8 + lVar12 + 4) = *(undefined2 *)((long)puVar10 + lVar12 + 4);
          lVar4 = lVar12 + 2;
        } while (uVar2 != 0);
        puVar8 = (ushort *)((long)puVar8 + lVar12 + 4);
        puVar10 = (ushort *)((long)puVar10 + lVar12 + 2);
        puVar13 = puVar10 + 1;
        puVar7 = puVar8;
      }
      if (6 < uVar3) {
        do {
          puVar7[1] = puVar10[2];
          puVar7[2] = puVar13[2];
          puVar7[3] = puVar13[3];
          puVar7[4] = puVar13[4];
          puVar7[5] = puVar13[5];
          puVar7[6] = puVar13[6];
          puVar10 = puVar13 + 7;
          puVar7[7] = *puVar10;
          puVar13 = puVar13 + 8;
          uVar11 = uVar11 - 8;
          puVar7 = puVar7 + 8;
          *puVar7 = *puVar13;
          puVar8 = puVar7;
        } while (uVar11 != 0);
      }
      puVar10 = puVar13;
      iVar6 = uVar1 + iVar6;
    }
    else {
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
      iVar6 = iVar6 + 1;
      uVar9 = uVar9 - 1;
    }
  } while (uVar9 != 0);
  if (iVar6 != 0) {
    puVar8[-1] = 0;
  }
LAB_01884e4c:
  iVar6 = 0;
  puVar8 = (ushort *)(param_1 + 0xea);
  *(undefined1 *)(param_1 + 0x576) = 0;
  puVar10 = local_4;
  uVar9 = 0x11;
  do {
    uVar3 = *puVar10;
    *puVar8 = uVar3;
    if (uVar3 == 0) goto LAB_01884f74;
    if (uVar3 == 0x10) {
      puVar13 = puVar10 + 1;
      uVar3 = *puVar13;
      uVar1 = uVar3 + 2;
      bVar5 = uVar9 < uVar1;
      uVar9 = uVar9 - uVar1;
      if (bVar5 || uVar9 == 0) {
        *puVar8 = 0;
        goto LAB_01884f74;
      }
      uVar11 = uVar3 + 1;
      uVar2 = uVar11 & 7;
      puVar7 = puVar8 + 1;
      *puVar7 = uVar3;
      if (uVar2 != 0) {
        lVar4 = 0;
        do {
          lVar12 = lVar4;
          uVar11 = uVar11 - 1;
          uVar2 = uVar2 - 1;
          *(undefined2 *)((long)puVar8 + lVar12 + 4) = *(undefined2 *)((long)puVar10 + lVar12 + 4);
          lVar4 = lVar12 + 2;
        } while (uVar2 != 0);
        puVar8 = (ushort *)((long)puVar8 + lVar12 + 4);
        puVar10 = (ushort *)((long)puVar10 + lVar12 + 2);
        puVar13 = puVar10 + 1;
        puVar7 = puVar8;
      }
      if (6 < uVar3) {
        do {
          puVar7[1] = puVar10[2];
          puVar7[2] = puVar13[2];
          puVar7[3] = puVar13[3];
          puVar7[4] = puVar13[4];
          puVar7[5] = puVar13[5];
          puVar7[6] = puVar13[6];
          puVar10 = puVar13 + 7;
          puVar7[7] = *puVar10;
          puVar13 = puVar13 + 8;
          uVar11 = uVar11 - 8;
          puVar7 = puVar7 + 8;
          *puVar7 = *puVar13;
          puVar8 = puVar7;
        } while (uVar11 != 0);
      }
      puVar10 = puVar13;
      iVar6 = uVar1 + iVar6;
    }
    else {
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
      iVar6 = iVar6 + 1;
      uVar9 = uVar9 - 1;
    }
  } while (uVar9 != 0);
  if (iVar6 != 0) {
    puVar8[-1] = 0;
  }
LAB_01884f74:
  iVar6 = 0;
  puVar8 = (ushort *)(param_1 + 0x10c);
  *(undefined1 *)(param_1 + 0x577) = 0;
  puVar10 = local_4;
  uVar9 = 0x11;
  do {
    uVar3 = *puVar10;
    *puVar8 = uVar3;
    if (uVar3 == 0) goto LAB_0188509c;
    if (uVar3 == 0x10) {
      puVar13 = puVar10 + 1;
      uVar3 = *puVar13;
      uVar1 = uVar3 + 2;
      bVar5 = uVar9 < uVar1;
      uVar9 = uVar9 - uVar1;
      if (bVar5 || uVar9 == 0) {
        *puVar8 = 0;
        goto LAB_0188509c;
      }
      uVar11 = uVar3 + 1;
      uVar2 = uVar11 & 7;
      puVar7 = puVar8 + 1;
      *puVar7 = uVar3;
      if (uVar2 != 0) {
        lVar4 = 0;
        do {
          lVar12 = lVar4;
          uVar11 = uVar11 - 1;
          uVar2 = uVar2 - 1;
          *(undefined2 *)((long)puVar8 + lVar12 + 4) = *(undefined2 *)((long)puVar10 + lVar12 + 4);
          lVar4 = lVar12 + 2;
        } while (uVar2 != 0);
        puVar8 = (ushort *)((long)puVar8 + lVar12 + 4);
        puVar10 = (ushort *)((long)puVar10 + lVar12 + 2);
        puVar13 = puVar10 + 1;
        puVar7 = puVar8;
      }
      if (6 < uVar3) {
        do {
          puVar7[1] = puVar10[2];
          puVar7[2] = puVar13[2];
          puVar7[3] = puVar13[3];
          puVar7[4] = puVar13[4];
          puVar7[5] = puVar13[5];
          puVar7[6] = puVar13[6];
          puVar10 = puVar13 + 7;
          puVar7[7] = *puVar10;
          puVar13 = puVar13 + 8;
          uVar11 = uVar11 - 8;
          puVar7 = puVar7 + 8;
          *puVar7 = *puVar13;
          puVar8 = puVar7;
        } while (uVar11 != 0);
      }
      puVar10 = puVar13;
      iVar6 = uVar1 + iVar6;
    }
    else {
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
      iVar6 = iVar6 + 1;
      uVar9 = uVar9 - 1;
    }
  } while (uVar9 != 0);
  if (iVar6 != 0) {
    puVar8[-1] = 0;
  }
LAB_0188509c:
  iVar6 = 0;
  puVar8 = (ushort *)(param_1 + 0x12e);
  *(undefined1 *)(param_1 + 0x578) = 0;
  puVar10 = local_4;
  uVar9 = 0x11;
  do {
    uVar3 = *puVar10;
    *puVar8 = uVar3;
    if (uVar3 == 0) goto LAB_018851c4;
    if (uVar3 == 0x10) {
      puVar13 = puVar10 + 1;
      uVar3 = *puVar13;
      uVar1 = uVar3 + 2;
      bVar5 = uVar9 < uVar1;
      uVar9 = uVar9 - uVar1;
      if (bVar5 || uVar9 == 0) {
        *puVar8 = 0;
        goto LAB_018851c4;
      }
      uVar11 = uVar3 + 1;
      uVar2 = uVar11 & 7;
      puVar7 = puVar8 + 1;
      *puVar7 = uVar3;
      if (uVar2 != 0) {
        lVar4 = 0;
        do {
          lVar12 = lVar4;
          uVar11 = uVar11 - 1;
          uVar2 = uVar2 - 1;
          *(undefined2 *)((long)puVar8 + lVar12 + 4) = *(undefined2 *)((long)puVar10 + lVar12 + 4);
          lVar4 = lVar12 + 2;
        } while (uVar2 != 0);
        puVar8 = (ushort *)((long)puVar8 + lVar12 + 4);
        puVar10 = (ushort *)((long)puVar10 + lVar12 + 2);
        puVar13 = puVar10 + 1;
        puVar7 = puVar8;
      }
      if (6 < uVar3) {
        do {
          puVar7[1] = puVar10[2];
          puVar7[2] = puVar13[2];
          puVar7[3] = puVar13[3];
          puVar7[4] = puVar13[4];
          puVar7[5] = puVar13[5];
          puVar7[6] = puVar13[6];
          puVar10 = puVar13 + 7;
          puVar7[7] = *puVar10;
          puVar13 = puVar13 + 8;
          uVar11 = uVar11 - 8;
          puVar7 = puVar7 + 8;
          *puVar7 = *puVar13;
          puVar8 = puVar7;
        } while (uVar11 != 0);
      }
      puVar10 = puVar13;
      iVar6 = uVar1 + iVar6;
    }
    else {
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
      iVar6 = iVar6 + 1;
      uVar9 = uVar9 - 1;
    }
  } while (uVar9 != 0);
  if (iVar6 != 0) {
    puVar8[-1] = 0;
  }
LAB_018851c4:
  iVar6 = 0;
  puVar8 = (ushort *)(param_1 + 0x150);
  *(undefined1 *)(param_1 + 0x579) = 0;
  puVar10 = local_4;
  uVar9 = 0x11;
  do {
    uVar3 = *puVar10;
    *puVar8 = uVar3;
    if (uVar3 == 0) goto LAB_018852ec;
    if (uVar3 == 0x10) {
      puVar13 = puVar10 + 1;
      uVar3 = *puVar13;
      uVar1 = uVar3 + 2;
      bVar5 = uVar9 < uVar1;
      uVar9 = uVar9 - uVar1;
      if (bVar5 || uVar9 == 0) {
        *puVar8 = 0;
        goto LAB_018852ec;
      }
      uVar11 = uVar3 + 1;
      uVar2 = uVar11 & 7;
      puVar7 = puVar8 + 1;
      *puVar7 = uVar3;
      if (uVar2 != 0) {
        lVar4 = 0;
        do {
          lVar12 = lVar4;
          uVar11 = uVar11 - 1;
          uVar2 = uVar2 - 1;
          *(undefined2 *)((long)puVar8 + lVar12 + 4) = *(undefined2 *)((long)puVar10 + lVar12 + 4);
          lVar4 = lVar12 + 2;
        } while (uVar2 != 0);
        puVar8 = (ushort *)((long)puVar8 + lVar12 + 4);
        puVar10 = (ushort *)((long)puVar10 + lVar12 + 2);
        puVar13 = puVar10 + 1;
        puVar7 = puVar8;
      }
      if (6 < uVar3) {
        do {
          puVar7[1] = puVar10[2];
          puVar7[2] = puVar13[2];
          puVar7[3] = puVar13[3];
          puVar7[4] = puVar13[4];
          puVar7[5] = puVar13[5];
          puVar7[6] = puVar13[6];
          puVar10 = puVar13 + 7;
          puVar7[7] = *puVar10;
          puVar13 = puVar13 + 8;
          uVar11 = uVar11 - 8;
          puVar7 = puVar7 + 8;
          *puVar7 = *puVar13;
          puVar8 = puVar7;
        } while (uVar11 != 0);
      }
      puVar10 = puVar13;
      iVar6 = uVar1 + iVar6;
    }
    else {
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
      iVar6 = iVar6 + 1;
      uVar9 = uVar9 - 1;
    }
  } while (uVar9 != 0);
  if (iVar6 != 0) {
    puVar8[-1] = 0;
  }
LAB_018852ec:
  iVar6 = 0;
  puVar8 = (ushort *)(param_1 + 0x172);
  *(undefined1 *)(param_1 + 0x57a) = 0;
  puVar10 = local_4;
  uVar9 = 0x11;
  do {
    uVar3 = *puVar10;
    *puVar8 = uVar3;
    if (uVar3 == 0) goto LAB_01885414;
    if (uVar3 == 0x10) {
      puVar13 = puVar10 + 1;
      uVar3 = *puVar13;
      uVar1 = uVar3 + 2;
      bVar5 = uVar9 < uVar1;
      uVar9 = uVar9 - uVar1;
      if (bVar5 || uVar9 == 0) {
        *puVar8 = 0;
        goto LAB_01885414;
      }
      uVar11 = uVar3 + 1;
      uVar2 = uVar11 & 7;
      puVar7 = puVar8 + 1;
      *puVar7 = uVar3;
      if (uVar2 != 0) {
        lVar4 = 0;
        do {
          lVar12 = lVar4;
          uVar11 = uVar11 - 1;
          uVar2 = uVar2 - 1;
          *(undefined2 *)((long)puVar8 + lVar12 + 4) = *(undefined2 *)((long)puVar10 + lVar12 + 4);
          lVar4 = lVar12 + 2;
        } while (uVar2 != 0);
        puVar8 = (ushort *)((long)puVar8 + lVar12 + 4);
        puVar10 = (ushort *)((long)puVar10 + lVar12 + 2);
        puVar13 = puVar10 + 1;
        puVar7 = puVar8;
      }
      if (6 < uVar3) {
        do {
          puVar7[1] = puVar10[2];
          puVar7[2] = puVar13[2];
          puVar7[3] = puVar13[3];
          puVar7[4] = puVar13[4];
          puVar7[5] = puVar13[5];
          puVar7[6] = puVar13[6];
          puVar10 = puVar13 + 7;
          puVar7[7] = *puVar10;
          puVar13 = puVar13 + 8;
          uVar11 = uVar11 - 8;
          puVar7 = puVar7 + 8;
          *puVar7 = *puVar13;
          puVar8 = puVar7;
        } while (uVar11 != 0);
      }
      puVar10 = puVar13;
      iVar6 = uVar1 + iVar6;
    }
    else {
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
      iVar6 = iVar6 + 1;
      uVar9 = uVar9 - 1;
    }
  } while (uVar9 != 0);
  if (iVar6 != 0) {
    puVar8[-1] = 0;
  }
LAB_01885414:
  iVar6 = 0;
  puVar8 = (ushort *)(param_1 + 0x194);
  *(undefined1 *)(param_1 + 0x57b) = 0;
  puVar10 = local_4;
  uVar9 = 0x11;
  do {
    uVar3 = *puVar10;
    *puVar8 = uVar3;
    if (uVar3 == 0) goto LAB_0188553c;
    if (uVar3 == 0x10) {
      puVar13 = puVar10 + 1;
      uVar3 = *puVar13;
      uVar1 = uVar3 + 2;
      bVar5 = uVar9 < uVar1;
      uVar9 = uVar9 - uVar1;
      if (bVar5 || uVar9 == 0) {
        *puVar8 = 0;
        goto LAB_0188553c;
      }
      uVar11 = uVar3 + 1;
      uVar2 = uVar11 & 7;
      puVar7 = puVar8 + 1;
      *puVar7 = uVar3;
      if (uVar2 != 0) {
        lVar4 = 0;
        do {
          lVar12 = lVar4;
          uVar11 = uVar11 - 1;
          uVar2 = uVar2 - 1;
          *(undefined2 *)((long)puVar8 + lVar12 + 4) = *(undefined2 *)((long)puVar10 + lVar12 + 4);
          lVar4 = lVar12 + 2;
        } while (uVar2 != 0);
        puVar8 = (ushort *)((long)puVar8 + lVar12 + 4);
        puVar10 = (ushort *)((long)puVar10 + lVar12 + 2);
        puVar13 = puVar10 + 1;
        puVar7 = puVar8;
      }
      if (6 < uVar3) {
        do {
          puVar7[1] = puVar10[2];
          puVar7[2] = puVar13[2];
          puVar7[3] = puVar13[3];
          puVar7[4] = puVar13[4];
          puVar7[5] = puVar13[5];
          puVar7[6] = puVar13[6];
          puVar10 = puVar13 + 7;
          puVar7[7] = *puVar10;
          puVar13 = puVar13 + 8;
          uVar11 = uVar11 - 8;
          puVar7 = puVar7 + 8;
          *puVar7 = *puVar13;
          puVar8 = puVar7;
        } while (uVar11 != 0);
      }
      puVar10 = puVar13;
      iVar6 = uVar1 + iVar6;
    }
    else {
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
      iVar6 = iVar6 + 1;
      uVar9 = uVar9 - 1;
    }
  } while (uVar9 != 0);
  if (iVar6 != 0) {
    puVar8[-1] = 0;
  }
LAB_0188553c:
  iVar6 = 0;
  puVar8 = (ushort *)(param_1 + 0x1b6);
  *(undefined1 *)(param_1 + 0x57c) = 0;
  puVar10 = local_4;
  uVar9 = 0x11;
  do {
    uVar3 = *puVar10;
    *puVar8 = uVar3;
    if (uVar3 == 0) goto LAB_01885664;
    if (uVar3 == 0x10) {
      puVar13 = puVar10 + 1;
      uVar3 = *puVar13;
      uVar1 = uVar3 + 2;
      bVar5 = uVar9 < uVar1;
      uVar9 = uVar9 - uVar1;
      if (bVar5 || uVar9 == 0) {
        *puVar8 = 0;
        goto LAB_01885664;
      }
      uVar11 = uVar3 + 1;
      uVar2 = uVar11 & 7;
      puVar7 = puVar8 + 1;
      *puVar7 = uVar3;
      if (uVar2 != 0) {
        lVar4 = 0;
        do {
          lVar12 = lVar4;
          uVar11 = uVar11 - 1;
          uVar2 = uVar2 - 1;
          *(undefined2 *)((long)puVar8 + lVar12 + 4) = *(undefined2 *)((long)puVar10 + lVar12 + 4);
          lVar4 = lVar12 + 2;
        } while (uVar2 != 0);
        puVar8 = (ushort *)((long)puVar8 + lVar12 + 4);
        puVar10 = (ushort *)((long)puVar10 + lVar12 + 2);
        puVar13 = puVar10 + 1;
        puVar7 = puVar8;
      }
      if (6 < uVar3) {
        do {
          puVar7[1] = puVar10[2];
          puVar7[2] = puVar13[2];
          puVar7[3] = puVar13[3];
          puVar7[4] = puVar13[4];
          puVar7[5] = puVar13[5];
          puVar7[6] = puVar13[6];
          puVar10 = puVar13 + 7;
          puVar7[7] = *puVar10;
          puVar13 = puVar13 + 8;
          uVar11 = uVar11 - 8;
          puVar7 = puVar7 + 8;
          *puVar7 = *puVar13;
          puVar8 = puVar7;
        } while (uVar11 != 0);
      }
      puVar10 = puVar13;
      iVar6 = uVar1 + iVar6;
    }
    else {
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
      iVar6 = iVar6 + 1;
      uVar9 = uVar9 - 1;
    }
  } while (uVar9 != 0);
  if (iVar6 != 0) {
    puVar8[-1] = 0;
  }
LAB_01885664:
  iVar6 = 0;
  puVar8 = (ushort *)(param_1 + 0x1d8);
  *(undefined1 *)(param_1 + 0x57d) = 0;
  puVar10 = local_4;
  uVar9 = 0x11;
  do {
    uVar3 = *puVar10;
    *puVar8 = uVar3;
    if (uVar3 == 0) goto LAB_0188578c;
    if (uVar3 == 0x10) {
      puVar13 = puVar10 + 1;
      uVar3 = *puVar13;
      uVar1 = uVar3 + 2;
      bVar5 = uVar9 < uVar1;
      uVar9 = uVar9 - uVar1;
      if (bVar5 || uVar9 == 0) {
        *puVar8 = 0;
        goto LAB_0188578c;
      }
      uVar11 = uVar3 + 1;
      uVar2 = uVar11 & 7;
      puVar7 = puVar8 + 1;
      *puVar7 = uVar3;
      if (uVar2 != 0) {
        lVar4 = 0;
        do {
          lVar12 = lVar4;
          uVar11 = uVar11 - 1;
          uVar2 = uVar2 - 1;
          *(undefined2 *)((long)puVar8 + lVar12 + 4) = *(undefined2 *)((long)puVar10 + lVar12 + 4);
          lVar4 = lVar12 + 2;
        } while (uVar2 != 0);
        puVar8 = (ushort *)((long)puVar8 + lVar12 + 4);
        puVar10 = (ushort *)((long)puVar10 + lVar12 + 2);
        puVar13 = puVar10 + 1;
        puVar7 = puVar8;
      }
      if (6 < uVar3) {
        do {
          puVar7[1] = puVar10[2];
          puVar7[2] = puVar13[2];
          puVar7[3] = puVar13[3];
          puVar7[4] = puVar13[4];
          puVar7[5] = puVar13[5];
          puVar7[6] = puVar13[6];
          puVar10 = puVar13 + 7;
          puVar7[7] = *puVar10;
          puVar13 = puVar13 + 8;
          uVar11 = uVar11 - 8;
          puVar7 = puVar7 + 8;
          *puVar7 = *puVar13;
          puVar8 = puVar7;
        } while (uVar11 != 0);
      }
      puVar10 = puVar13;
      iVar6 = uVar1 + iVar6;
    }
    else {
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
      iVar6 = iVar6 + 1;
      uVar9 = uVar9 - 1;
    }
  } while (uVar9 != 0);
  if (iVar6 != 0) {
    puVar8[-1] = 0;
  }
LAB_0188578c:
  iVar6 = 0;
  puVar8 = (ushort *)(param_1 + 0x1fa);
  *(undefined1 *)(param_1 + 0x57e) = 0;
  puVar10 = local_4;
  uVar9 = 0x11;
  do {
    uVar3 = *puVar10;
    *puVar8 = uVar3;
    if (uVar3 == 0) goto LAB_018858b4;
    if (uVar3 == 0x10) {
      puVar13 = puVar10 + 1;
      uVar3 = *puVar13;
      uVar1 = uVar3 + 2;
      bVar5 = uVar9 < uVar1;
      uVar9 = uVar9 - uVar1;
      if (bVar5 || uVar9 == 0) {
        *puVar8 = 0;
        goto LAB_018858b4;
      }
      uVar11 = uVar3 + 1;
      uVar2 = uVar11 & 7;
      puVar7 = puVar8 + 1;
      *puVar7 = uVar3;
      if (uVar2 != 0) {
        lVar4 = 0;
        do {
          lVar12 = lVar4;
          uVar11 = uVar11 - 1;
          uVar2 = uVar2 - 1;
          *(undefined2 *)((long)puVar8 + lVar12 + 4) = *(undefined2 *)((long)puVar10 + lVar12 + 4);
          lVar4 = lVar12 + 2;
        } while (uVar2 != 0);
        puVar8 = (ushort *)((long)puVar8 + lVar12 + 4);
        puVar10 = (ushort *)((long)puVar10 + lVar12 + 2);
        puVar13 = puVar10 + 1;
        puVar7 = puVar8;
      }
      if (6 < uVar3) {
        do {
          puVar7[1] = puVar10[2];
          puVar7[2] = puVar13[2];
          puVar7[3] = puVar13[3];
          puVar7[4] = puVar13[4];
          puVar7[5] = puVar13[5];
          puVar7[6] = puVar13[6];
          puVar10 = puVar13 + 7;
          puVar7[7] = *puVar10;
          puVar13 = puVar13 + 8;
          uVar11 = uVar11 - 8;
          puVar7 = puVar7 + 8;
          *puVar7 = *puVar13;
          puVar8 = puVar7;
        } while (uVar11 != 0);
      }
      puVar10 = puVar13;
      iVar6 = uVar1 + iVar6;
    }
    else {
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
      iVar6 = iVar6 + 1;
      uVar9 = uVar9 - 1;
    }
  } while (uVar9 != 0);
  if (iVar6 != 0) {
    puVar8[-1] = 0;
  }
LAB_018858b4:
  iVar6 = 0;
  puVar8 = (ushort *)(param_1 + 0x21c);
  *(undefined1 *)(param_1 + 0x57f) = 0;
  puVar10 = local_4;
  uVar9 = 0x11;
  do {
    uVar3 = *puVar10;
    *puVar8 = uVar3;
    if (uVar3 == 0) goto LAB_018859dc;
    if (uVar3 == 0x10) {
      puVar13 = puVar10 + 1;
      uVar3 = *puVar13;
      uVar1 = uVar3 + 2;
      bVar5 = uVar9 < uVar1;
      uVar9 = uVar9 - uVar1;
      if (bVar5 || uVar9 == 0) {
        *puVar8 = 0;
        goto LAB_018859dc;
      }
      uVar11 = uVar3 + 1;
      uVar2 = uVar11 & 7;
      puVar7 = puVar8 + 1;
      *puVar7 = uVar3;
      if (uVar2 != 0) {
        lVar4 = 0;
        do {
          lVar12 = lVar4;
          uVar11 = uVar11 - 1;
          uVar2 = uVar2 - 1;
          *(undefined2 *)((long)puVar8 + lVar12 + 4) = *(undefined2 *)((long)puVar10 + lVar12 + 4);
          lVar4 = lVar12 + 2;
        } while (uVar2 != 0);
        puVar8 = (ushort *)((long)puVar8 + lVar12 + 4);
        puVar10 = (ushort *)((long)puVar10 + lVar12 + 2);
        puVar13 = puVar10 + 1;
        puVar7 = puVar8;
      }
      if (6 < uVar3) {
        do {
          puVar7[1] = puVar10[2];
          puVar7[2] = puVar13[2];
          puVar7[3] = puVar13[3];
          puVar7[4] = puVar13[4];
          puVar7[5] = puVar13[5];
          puVar7[6] = puVar13[6];
          puVar10 = puVar13 + 7;
          puVar7[7] = *puVar10;
          puVar13 = puVar13 + 8;
          uVar11 = uVar11 - 8;
          puVar7 = puVar7 + 8;
          *puVar7 = *puVar13;
          puVar8 = puVar7;
        } while (uVar11 != 0);
      }
      puVar10 = puVar13;
      iVar6 = uVar1 + iVar6;
    }
    else {
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
      iVar6 = iVar6 + 1;
      uVar9 = uVar9 - 1;
    }
  } while (uVar9 != 0);
  if (iVar6 != 0) {
    puVar8[-1] = 0;
  }
LAB_018859dc:
  iVar6 = 0;
  puVar8 = (ushort *)(param_1 + 0x23e);
  *(undefined1 *)(param_1 + 0x580) = 0;
  puVar10 = local_4;
  uVar9 = 0x11;
  do {
    uVar3 = *puVar10;
    *puVar8 = uVar3;
    if (uVar3 == 0) goto LAB_01885b04;
    if (uVar3 == 0x10) {
      puVar13 = puVar10 + 1;
      uVar3 = *puVar13;
      uVar1 = uVar3 + 2;
      bVar5 = uVar9 < uVar1;
      uVar9 = uVar9 - uVar1;
      if (bVar5 || uVar9 == 0) {
        *puVar8 = 0;
        goto LAB_01885b04;
      }
      uVar11 = uVar3 + 1;
      uVar2 = uVar11 & 7;
      puVar7 = puVar8 + 1;
      *puVar7 = uVar3;
      if (uVar2 != 0) {
        lVar4 = 0;
        do {
          lVar12 = lVar4;
          uVar11 = uVar11 - 1;
          uVar2 = uVar2 - 1;
          *(undefined2 *)((long)puVar8 + lVar12 + 4) = *(undefined2 *)((long)puVar10 + lVar12 + 4);
          lVar4 = lVar12 + 2;
        } while (uVar2 != 0);
        puVar8 = (ushort *)((long)puVar8 + lVar12 + 4);
        puVar10 = (ushort *)((long)puVar10 + lVar12 + 2);
        puVar13 = puVar10 + 1;
        puVar7 = puVar8;
      }
      if (6 < uVar3) {
        do {
          puVar7[1] = puVar10[2];
          puVar7[2] = puVar13[2];
          puVar7[3] = puVar13[3];
          puVar7[4] = puVar13[4];
          puVar7[5] = puVar13[5];
          puVar7[6] = puVar13[6];
          puVar10 = puVar13 + 7;
          puVar7[7] = *puVar10;
          puVar13 = puVar13 + 8;
          uVar11 = uVar11 - 8;
          puVar7 = puVar7 + 8;
          *puVar7 = *puVar13;
          puVar8 = puVar7;
        } while (uVar11 != 0);
      }
      puVar10 = puVar13;
      iVar6 = uVar1 + iVar6;
    }
    else {
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
      iVar6 = iVar6 + 1;
      uVar9 = uVar9 - 1;
    }
  } while (uVar9 != 0);
  if (iVar6 != 0) {
    puVar8[-1] = 0;
  }
LAB_01885b04:
  iVar6 = 0;
  puVar8 = (ushort *)(param_1 + 0x260);
  *(undefined1 *)(param_1 + 0x581) = 0;
  puVar10 = local_4;
  uVar9 = 0x11;
  do {
    uVar3 = *puVar10;
    *puVar8 = uVar3;
    if (uVar3 == 0) goto LAB_01885c2c;
    if (uVar3 == 0x10) {
      puVar13 = puVar10 + 1;
      uVar3 = *puVar13;
      uVar1 = uVar3 + 2;
      bVar5 = uVar9 < uVar1;
      uVar9 = uVar9 - uVar1;
      if (bVar5 || uVar9 == 0) {
        *puVar8 = 0;
        goto LAB_01885c2c;
      }
      uVar11 = uVar3 + 1;
      uVar2 = uVar11 & 7;
      puVar7 = puVar8 + 1;
      *puVar7 = uVar3;
      if (uVar2 != 0) {
        lVar4 = 0;
        do {
          lVar12 = lVar4;
          uVar11 = uVar11 - 1;
          uVar2 = uVar2 - 1;
          *(undefined2 *)((long)puVar8 + lVar12 + 4) = *(undefined2 *)((long)puVar10 + lVar12 + 4);
          lVar4 = lVar12 + 2;
        } while (uVar2 != 0);
        puVar8 = (ushort *)((long)puVar8 + lVar12 + 4);
        puVar10 = (ushort *)((long)puVar10 + lVar12 + 2);
        puVar13 = puVar10 + 1;
        puVar7 = puVar8;
      }
      if (6 < uVar3) {
        do {
          puVar7[1] = puVar10[2];
          puVar7[2] = puVar13[2];
          puVar7[3] = puVar13[3];
          puVar7[4] = puVar13[4];
          puVar7[5] = puVar13[5];
          puVar7[6] = puVar13[6];
          puVar10 = puVar13 + 7;
          puVar7[7] = *puVar10;
          puVar13 = puVar13 + 8;
          uVar11 = uVar11 - 8;
          puVar7 = puVar7 + 8;
          *puVar7 = *puVar13;
          puVar8 = puVar7;
        } while (uVar11 != 0);
      }
      puVar10 = puVar13;
      iVar6 = uVar1 + iVar6;
    }
    else {
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
      iVar6 = iVar6 + 1;
      uVar9 = uVar9 - 1;
    }
  } while (uVar9 != 0);
  if (iVar6 != 0) {
    puVar8[-1] = 0;
  }
LAB_01885c2c:
  iVar6 = 0;
  puVar8 = (ushort *)(param_1 + 0x282);
  *(undefined1 *)(param_1 + 0x582) = 0;
  puVar10 = local_4;
  uVar9 = 0x11;
  do {
    uVar3 = *puVar10;
    *puVar8 = uVar3;
    if (uVar3 == 0) goto LAB_01885d54;
    if (uVar3 == 0x10) {
      puVar13 = puVar10 + 1;
      uVar3 = *puVar13;
      uVar1 = uVar3 + 2;
      bVar5 = uVar9 < uVar1;
      uVar9 = uVar9 - uVar1;
      if (bVar5 || uVar9 == 0) {
        *puVar8 = 0;
        goto LAB_01885d54;
      }
      uVar11 = uVar3 + 1;
      uVar2 = uVar11 & 7;
      puVar7 = puVar8 + 1;
      *puVar7 = uVar3;
      if (uVar2 != 0) {
        lVar4 = 0;
        do {
          lVar12 = lVar4;
          uVar11 = uVar11 - 1;
          uVar2 = uVar2 - 1;
          *(undefined2 *)((long)puVar8 + lVar12 + 4) = *(undefined2 *)((long)puVar10 + lVar12 + 4);
          lVar4 = lVar12 + 2;
        } while (uVar2 != 0);
        puVar8 = (ushort *)((long)puVar8 + lVar12 + 4);
        puVar10 = (ushort *)((long)puVar10 + lVar12 + 2);
        puVar13 = puVar10 + 1;
        puVar7 = puVar8;
      }
      if (6 < uVar3) {
        do {
          puVar7[1] = puVar10[2];
          puVar7[2] = puVar13[2];
          puVar7[3] = puVar13[3];
          puVar7[4] = puVar13[4];
          puVar7[5] = puVar13[5];
          puVar7[6] = puVar13[6];
          puVar10 = puVar13 + 7;
          puVar7[7] = *puVar10;
          puVar13 = puVar13 + 8;
          uVar11 = uVar11 - 8;
          puVar7 = puVar7 + 8;
          *puVar7 = *puVar13;
          puVar8 = puVar7;
        } while (uVar11 != 0);
      }
      puVar10 = puVar13;
      iVar6 = uVar1 + iVar6;
    }
    else {
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
      iVar6 = iVar6 + 1;
      uVar9 = uVar9 - 1;
    }
  } while (uVar9 != 0);
  if (iVar6 != 0) {
    puVar8[-1] = 0;
  }
LAB_01885d54:
  iVar6 = 0;
  puVar8 = (ushort *)(param_1 + 0x2a4);
  *(undefined1 *)(param_1 + 0x583) = 0;
  puVar10 = local_4;
  uVar9 = 0x11;
  do {
    uVar3 = *puVar10;
    *puVar8 = uVar3;
    if (uVar3 == 0) goto LAB_01885e7c;
    if (uVar3 == 0x10) {
      puVar13 = puVar10 + 1;
      uVar3 = *puVar13;
      uVar1 = uVar3 + 2;
      bVar5 = uVar9 < uVar1;
      uVar9 = uVar9 - uVar1;
      if (bVar5 || uVar9 == 0) {
        *puVar8 = 0;
        goto LAB_01885e7c;
      }
      uVar11 = uVar3 + 1;
      uVar2 = uVar11 & 7;
      puVar7 = puVar8 + 1;
      *puVar7 = uVar3;
      if (uVar2 != 0) {
        lVar4 = 0;
        do {
          lVar12 = lVar4;
          uVar11 = uVar11 - 1;
          uVar2 = uVar2 - 1;
          *(undefined2 *)((long)puVar8 + lVar12 + 4) = *(undefined2 *)((long)puVar10 + lVar12 + 4);
          lVar4 = lVar12 + 2;
        } while (uVar2 != 0);
        puVar8 = (ushort *)((long)puVar8 + lVar12 + 4);
        puVar10 = (ushort *)((long)puVar10 + lVar12 + 2);
        puVar13 = puVar10 + 1;
        puVar7 = puVar8;
      }
      if (6 < uVar3) {
        do {
          puVar7[1] = puVar10[2];
          puVar7[2] = puVar13[2];
          puVar7[3] = puVar13[3];
          puVar7[4] = puVar13[4];
          puVar7[5] = puVar13[5];
          puVar7[6] = puVar13[6];
          puVar10 = puVar13 + 7;
          puVar7[7] = *puVar10;
          puVar13 = puVar13 + 8;
          uVar11 = uVar11 - 8;
          puVar7 = puVar7 + 8;
          *puVar7 = *puVar13;
          puVar8 = puVar7;
        } while (uVar11 != 0);
      }
      puVar10 = puVar13;
      iVar6 = uVar1 + iVar6;
    }
    else {
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
      iVar6 = iVar6 + 1;
      uVar9 = uVar9 - 1;
    }
  } while (uVar9 != 0);
  if (iVar6 != 0) {
    puVar8[-1] = 0;
  }
LAB_01885e7c:
  iVar6 = 0;
  puVar8 = (ushort *)(param_1 + 0x2c6);
  *(undefined1 *)(param_1 + 0x584) = 0;
  puVar10 = local_4;
  uVar9 = 0x11;
  do {
    uVar3 = *puVar10;
    *puVar8 = uVar3;
    if (uVar3 == 0) goto LAB_01885fa4;
    if (uVar3 == 0x10) {
      puVar13 = puVar10 + 1;
      uVar3 = *puVar13;
      uVar1 = uVar3 + 2;
      bVar5 = uVar9 < uVar1;
      uVar9 = uVar9 - uVar1;
      if (bVar5 || uVar9 == 0) {
        *puVar8 = 0;
        goto LAB_01885fa4;
      }
      uVar11 = uVar3 + 1;
      uVar2 = uVar11 & 7;
      puVar7 = puVar8 + 1;
      *puVar7 = uVar3;
      if (uVar2 != 0) {
        lVar4 = 0;
        do {
          lVar12 = lVar4;
          uVar11 = uVar11 - 1;
          uVar2 = uVar2 - 1;
          *(undefined2 *)((long)puVar8 + lVar12 + 4) = *(undefined2 *)((long)puVar10 + lVar12 + 4);
          lVar4 = lVar12 + 2;
        } while (uVar2 != 0);
        puVar8 = (ushort *)((long)puVar8 + lVar12 + 4);
        puVar10 = (ushort *)((long)puVar10 + lVar12 + 2);
        puVar13 = puVar10 + 1;
        puVar7 = puVar8;
      }
      if (6 < uVar3) {
        do {
          puVar7[1] = puVar10[2];
          puVar7[2] = puVar13[2];
          puVar7[3] = puVar13[3];
          puVar7[4] = puVar13[4];
          puVar7[5] = puVar13[5];
          puVar7[6] = puVar13[6];
          puVar10 = puVar13 + 7;
          puVar7[7] = *puVar10;
          puVar13 = puVar13 + 8;
          uVar11 = uVar11 - 8;
          puVar7 = puVar7 + 8;
          *puVar7 = *puVar13;
          puVar8 = puVar7;
        } while (uVar11 != 0);
      }
      puVar10 = puVar13;
      iVar6 = uVar1 + iVar6;
    }
    else {
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
      iVar6 = iVar6 + 1;
      uVar9 = uVar9 - 1;
    }
  } while (uVar9 != 0);
  if (iVar6 != 0) {
    puVar8[-1] = 0;
  }
LAB_01885fa4:
  iVar6 = 0;
  puVar8 = (ushort *)(param_1 + 0x2e8);
  *(undefined1 *)(param_1 + 0x585) = 0;
  puVar10 = local_4;
  uVar9 = 0x11;
  do {
    uVar3 = *puVar10;
    *puVar8 = uVar3;
    if (uVar3 == 0) goto LAB_018860cc;
    if (uVar3 == 0x10) {
      puVar13 = puVar10 + 1;
      uVar3 = *puVar13;
      uVar1 = uVar3 + 2;
      bVar5 = uVar9 < uVar1;
      uVar9 = uVar9 - uVar1;
      if (bVar5 || uVar9 == 0) {
        *puVar8 = 0;
        goto LAB_018860cc;
      }
      uVar11 = uVar3 + 1;
      uVar2 = uVar11 & 7;
      puVar7 = puVar8 + 1;
      *puVar7 = uVar3;
      if (uVar2 != 0) {
        lVar4 = 0;
        do {
          lVar12 = lVar4;
          uVar11 = uVar11 - 1;
          uVar2 = uVar2 - 1;
          *(undefined2 *)((long)puVar8 + lVar12 + 4) = *(undefined2 *)((long)puVar10 + lVar12 + 4);
          lVar4 = lVar12 + 2;
        } while (uVar2 != 0);
        puVar8 = (ushort *)((long)puVar8 + lVar12 + 4);
        puVar10 = (ushort *)((long)puVar10 + lVar12 + 2);
        puVar13 = puVar10 + 1;
        puVar7 = puVar8;
      }
      if (6 < uVar3) {
        do {
          puVar7[1] = puVar10[2];
          puVar7[2] = puVar13[2];
          puVar7[3] = puVar13[3];
          puVar7[4] = puVar13[4];
          puVar7[5] = puVar13[5];
          puVar7[6] = puVar13[6];
          puVar10 = puVar13 + 7;
          puVar7[7] = *puVar10;
          puVar13 = puVar13 + 8;
          uVar11 = uVar11 - 8;
          puVar7 = puVar7 + 8;
          *puVar7 = *puVar13;
          puVar8 = puVar7;
        } while (uVar11 != 0);
      }
      puVar10 = puVar13;
      iVar6 = uVar1 + iVar6;
    }
    else {
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
      iVar6 = iVar6 + 1;
      uVar9 = uVar9 - 1;
    }
  } while (uVar9 != 0);
  if (iVar6 != 0) {
    puVar8[-1] = 0;
  }
LAB_018860cc:
  iVar6 = 0;
  puVar8 = (ushort *)(param_1 + 0x30a);
  *(undefined1 *)(param_1 + 0x586) = 0;
  puVar10 = local_4;
  uVar9 = 0x11;
  do {
    uVar3 = *puVar10;
    *puVar8 = uVar3;
    if (uVar3 == 0) goto LAB_018861f4;
    if (uVar3 == 0x10) {
      puVar13 = puVar10 + 1;
      uVar3 = *puVar13;
      uVar1 = uVar3 + 2;
      bVar5 = uVar9 < uVar1;
      uVar9 = uVar9 - uVar1;
      if (bVar5 || uVar9 == 0) {
        *puVar8 = 0;
        goto LAB_018861f4;
      }
      uVar11 = uVar3 + 1;
      uVar2 = uVar11 & 7;
      puVar7 = puVar8 + 1;
      *puVar7 = uVar3;
      if (uVar2 != 0) {
        lVar4 = 0;
        do {
          lVar12 = lVar4;
          uVar11 = uVar11 - 1;
          uVar2 = uVar2 - 1;
          *(undefined2 *)((long)puVar8 + lVar12 + 4) = *(undefined2 *)((long)puVar10 + lVar12 + 4);
          lVar4 = lVar12 + 2;
        } while (uVar2 != 0);
        puVar8 = (ushort *)((long)puVar8 + lVar12 + 4);
        puVar10 = (ushort *)((long)puVar10 + lVar12 + 2);
        puVar13 = puVar10 + 1;
        puVar7 = puVar8;
      }
      if (6 < uVar3) {
        do {
          puVar7[1] = puVar10[2];
          puVar7[2] = puVar13[2];
          puVar7[3] = puVar13[3];
          puVar7[4] = puVar13[4];
          puVar7[5] = puVar13[5];
          puVar7[6] = puVar13[6];
          puVar10 = puVar13 + 7;
          puVar7[7] = *puVar10;
          puVar13 = puVar13 + 8;
          uVar11 = uVar11 - 8;
          puVar7 = puVar7 + 8;
          *puVar7 = *puVar13;
          puVar8 = puVar7;
        } while (uVar11 != 0);
      }
      puVar10 = puVar13;
      iVar6 = uVar1 + iVar6;
    }
    else {
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
      iVar6 = iVar6 + 1;
      uVar9 = uVar9 - 1;
    }
  } while (uVar9 != 0);
  if (iVar6 != 0) {
    puVar8[-1] = 0;
  }
LAB_018861f4:
  iVar6 = 0;
  puVar8 = (ushort *)(param_1 + 0x32c);
  *(undefined1 *)(param_1 + 0x587) = 0;
  puVar10 = local_4;
  uVar9 = 0x11;
  do {
    uVar3 = *puVar10;
    *puVar8 = uVar3;
    if (uVar3 == 0) goto LAB_0188631c;
    if (uVar3 == 0x10) {
      puVar13 = puVar10 + 1;
      uVar3 = *puVar13;
      uVar1 = uVar3 + 2;
      bVar5 = uVar9 < uVar1;
      uVar9 = uVar9 - uVar1;
      if (bVar5 || uVar9 == 0) {
        *puVar8 = 0;
        goto LAB_0188631c;
      }
      uVar11 = uVar3 + 1;
      uVar2 = uVar11 & 7;
      puVar7 = puVar8 + 1;
      *puVar7 = uVar3;
      if (uVar2 != 0) {
        lVar4 = 0;
        do {
          lVar12 = lVar4;
          uVar11 = uVar11 - 1;
          uVar2 = uVar2 - 1;
          *(undefined2 *)((long)puVar8 + lVar12 + 4) = *(undefined2 *)((long)puVar10 + lVar12 + 4);
          lVar4 = lVar12 + 2;
        } while (uVar2 != 0);
        puVar8 = (ushort *)((long)puVar8 + lVar12 + 4);
        puVar10 = (ushort *)((long)puVar10 + lVar12 + 2);
        puVar13 = puVar10 + 1;
        puVar7 = puVar8;
      }
      if (6 < uVar3) {
        do {
          puVar7[1] = puVar10[2];
          puVar7[2] = puVar13[2];
          puVar7[3] = puVar13[3];
          puVar7[4] = puVar13[4];
          puVar7[5] = puVar13[5];
          puVar7[6] = puVar13[6];
          puVar10 = puVar13 + 7;
          puVar7[7] = *puVar10;
          puVar13 = puVar13 + 8;
          uVar11 = uVar11 - 8;
          puVar7 = puVar7 + 8;
          *puVar7 = *puVar13;
          puVar8 = puVar7;
        } while (uVar11 != 0);
      }
      puVar10 = puVar13;
      iVar6 = uVar1 + iVar6;
    }
    else {
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
      iVar6 = iVar6 + 1;
      uVar9 = uVar9 - 1;
    }
  } while (uVar9 != 0);
  if (iVar6 != 0) {
    puVar8[-1] = 0;
  }
LAB_0188631c:
  iVar6 = 0;
  puVar8 = (ushort *)(param_1 + 0x34e);
  *(undefined1 *)(param_1 + 0x588) = 0;
  puVar10 = local_4;
  uVar9 = 0x11;
  do {
    uVar3 = *puVar10;
    *puVar8 = uVar3;
    if (uVar3 == 0) goto LAB_01886444;
    if (uVar3 == 0x10) {
      puVar13 = puVar10 + 1;
      uVar3 = *puVar13;
      uVar1 = uVar3 + 2;
      bVar5 = uVar9 < uVar1;
      uVar9 = uVar9 - uVar1;
      if (bVar5 || uVar9 == 0) {
        *puVar8 = 0;
        goto LAB_01886444;
      }
      uVar11 = uVar3 + 1;
      uVar2 = uVar11 & 7;
      puVar7 = puVar8 + 1;
      *puVar7 = uVar3;
      if (uVar2 != 0) {
        lVar4 = 0;
        do {
          lVar12 = lVar4;
          uVar11 = uVar11 - 1;
          uVar2 = uVar2 - 1;
          *(undefined2 *)((long)puVar8 + lVar12 + 4) = *(undefined2 *)((long)puVar10 + lVar12 + 4);
          lVar4 = lVar12 + 2;
        } while (uVar2 != 0);
        puVar8 = (ushort *)((long)puVar8 + lVar12 + 4);
        puVar10 = (ushort *)((long)puVar10 + lVar12 + 2);
        puVar13 = puVar10 + 1;
        puVar7 = puVar8;
      }
      if (6 < uVar3) {
        do {
          puVar7[1] = puVar10[2];
          puVar7[2] = puVar13[2];
          puVar7[3] = puVar13[3];
          puVar7[4] = puVar13[4];
          puVar7[5] = puVar13[5];
          puVar7[6] = puVar13[6];
          puVar10 = puVar13 + 7;
          puVar7[7] = *puVar10;
          puVar13 = puVar13 + 8;
          uVar11 = uVar11 - 8;
          puVar7 = puVar7 + 8;
          *puVar7 = *puVar13;
          puVar8 = puVar7;
        } while (uVar11 != 0);
      }
      puVar10 = puVar13;
      iVar6 = uVar1 + iVar6;
    }
    else {
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
      iVar6 = iVar6 + 1;
      uVar9 = uVar9 - 1;
    }
  } while (uVar9 != 0);
  if (iVar6 != 0) {
    puVar8[-1] = 0;
  }
LAB_01886444:
  iVar6 = 0;
  puVar8 = (ushort *)(param_1 + 0x370);
  *(undefined1 *)(param_1 + 0x589) = 0;
  puVar10 = local_4;
  uVar9 = 0x11;
  do {
    uVar3 = *puVar10;
    *puVar8 = uVar3;
    if (uVar3 == 0) goto LAB_0188656c;
    if (uVar3 == 0x10) {
      puVar13 = puVar10 + 1;
      uVar3 = *puVar13;
      uVar1 = uVar3 + 2;
      bVar5 = uVar9 < uVar1;
      uVar9 = uVar9 - uVar1;
      if (bVar5 || uVar9 == 0) {
        *puVar8 = 0;
        goto LAB_0188656c;
      }
      uVar11 = uVar3 + 1;
      uVar2 = uVar11 & 7;
      puVar7 = puVar8 + 1;
      *puVar7 = uVar3;
      if (uVar2 != 0) {
        lVar4 = 0;
        do {
          lVar12 = lVar4;
          uVar11 = uVar11 - 1;
          uVar2 = uVar2 - 1;
          *(undefined2 *)((long)puVar8 + lVar12 + 4) = *(undefined2 *)((long)puVar10 + lVar12 + 4);
          lVar4 = lVar12 + 2;
        } while (uVar2 != 0);
        puVar8 = (ushort *)((long)puVar8 + lVar12 + 4);
        puVar10 = (ushort *)((long)puVar10 + lVar12 + 2);
        puVar13 = puVar10 + 1;
        puVar7 = puVar8;
      }
      if (6 < uVar3) {
        do {
          puVar7[1] = puVar10[2];
          puVar7[2] = puVar13[2];
          puVar7[3] = puVar13[3];
          puVar7[4] = puVar13[4];
          puVar7[5] = puVar13[5];
          puVar7[6] = puVar13[6];
          puVar10 = puVar13 + 7;
          puVar7[7] = *puVar10;
          puVar13 = puVar13 + 8;
          uVar11 = uVar11 - 8;
          puVar7 = puVar7 + 8;
          *puVar7 = *puVar13;
          puVar8 = puVar7;
        } while (uVar11 != 0);
      }
      puVar10 = puVar13;
      iVar6 = uVar1 + iVar6;
    }
    else {
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
      iVar6 = iVar6 + 1;
      uVar9 = uVar9 - 1;
    }
  } while (uVar9 != 0);
  if (iVar6 != 0) {
    puVar8[-1] = 0;
  }
LAB_0188656c:
  iVar6 = 0;
  puVar8 = (ushort *)(param_1 + 0x392);
  *(undefined1 *)(param_1 + 0x58a) = 0;
  puVar10 = local_4;
  uVar9 = 0x11;
  do {
    uVar3 = *puVar10;
    *puVar8 = uVar3;
    if (uVar3 == 0) goto LAB_01886694;
    if (uVar3 == 0x10) {
      puVar13 = puVar10 + 1;
      uVar3 = *puVar13;
      uVar1 = uVar3 + 2;
      bVar5 = uVar9 < uVar1;
      uVar9 = uVar9 - uVar1;
      if (bVar5 || uVar9 == 0) {
        *puVar8 = 0;
        goto LAB_01886694;
      }
      uVar11 = uVar3 + 1;
      uVar2 = uVar11 & 7;
      puVar7 = puVar8 + 1;
      *puVar7 = uVar3;
      if (uVar2 != 0) {
        lVar4 = 0;
        do {
          lVar12 = lVar4;
          uVar11 = uVar11 - 1;
          uVar2 = uVar2 - 1;
          *(undefined2 *)((long)puVar8 + lVar12 + 4) = *(undefined2 *)((long)puVar10 + lVar12 + 4);
          lVar4 = lVar12 + 2;
        } while (uVar2 != 0);
        puVar8 = (ushort *)((long)puVar8 + lVar12 + 4);
        puVar10 = (ushort *)((long)puVar10 + lVar12 + 2);
        puVar13 = puVar10 + 1;
        puVar7 = puVar8;
      }
      if (6 < uVar3) {
        do {
          puVar7[1] = puVar10[2];
          puVar7[2] = puVar13[2];
          puVar7[3] = puVar13[3];
          puVar7[4] = puVar13[4];
          puVar7[5] = puVar13[5];
          puVar7[6] = puVar13[6];
          puVar10 = puVar13 + 7;
          puVar7[7] = *puVar10;
          puVar13 = puVar13 + 8;
          uVar11 = uVar11 - 8;
          puVar7 = puVar7 + 8;
          *puVar7 = *puVar13;
          puVar8 = puVar7;
        } while (uVar11 != 0);
      }
      puVar10 = puVar13;
      iVar6 = uVar1 + iVar6;
    }
    else {
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
      iVar6 = iVar6 + 1;
      uVar9 = uVar9 - 1;
    }
  } while (uVar9 != 0);
  if (iVar6 != 0) {
    puVar8[-1] = 0;
  }
LAB_01886694:
  iVar6 = 0;
  puVar8 = (ushort *)(param_1 + 0x3b4);
  *(undefined1 *)(param_1 + 0x58b) = 0;
  puVar10 = local_4;
  uVar9 = 0x11;
  do {
    uVar3 = *puVar10;
    *puVar8 = uVar3;
    if (uVar3 == 0) goto LAB_018867bc;
    if (uVar3 == 0x10) {
      puVar13 = puVar10 + 1;
      uVar3 = *puVar13;
      uVar1 = uVar3 + 2;
      bVar5 = uVar9 < uVar1;
      uVar9 = uVar9 - uVar1;
      if (bVar5 || uVar9 == 0) {
        *puVar8 = 0;
        goto LAB_018867bc;
      }
      uVar11 = uVar3 + 1;
      uVar2 = uVar11 & 7;
      puVar7 = puVar8 + 1;
      *puVar7 = uVar3;
      if (uVar2 != 0) {
        lVar4 = 0;
        do {
          lVar12 = lVar4;
          uVar11 = uVar11 - 1;
          uVar2 = uVar2 - 1;
          *(undefined2 *)((long)puVar8 + lVar12 + 4) = *(undefined2 *)((long)puVar10 + lVar12 + 4);
          lVar4 = lVar12 + 2;
        } while (uVar2 != 0);
        puVar8 = (ushort *)((long)puVar8 + lVar12 + 4);
        puVar10 = (ushort *)((long)puVar10 + lVar12 + 2);
        puVar13 = puVar10 + 1;
        puVar7 = puVar8;
      }
      if (6 < uVar3) {
        do {
          puVar7[1] = puVar10[2];
          puVar7[2] = puVar13[2];
          puVar7[3] = puVar13[3];
          puVar7[4] = puVar13[4];
          puVar7[5] = puVar13[5];
          puVar7[6] = puVar13[6];
          puVar10 = puVar13 + 7;
          puVar7[7] = *puVar10;
          puVar13 = puVar13 + 8;
          uVar11 = uVar11 - 8;
          puVar7 = puVar7 + 8;
          *puVar7 = *puVar13;
          puVar8 = puVar7;
        } while (uVar11 != 0);
      }
      puVar10 = puVar13;
      iVar6 = uVar1 + iVar6;
    }
    else {
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
      iVar6 = iVar6 + 1;
      uVar9 = uVar9 - 1;
    }
  } while (uVar9 != 0);
  if (iVar6 != 0) {
    puVar8[-1] = 0;
  }
LAB_018867bc:
  iVar6 = 0;
  puVar8 = (ushort *)(param_1 + 0x3d6);
  *(undefined1 *)(param_1 + 0x58c) = 0;
  puVar10 = local_4;
  uVar9 = 0x11;
  do {
    uVar3 = *puVar10;
    *puVar8 = uVar3;
    if (uVar3 == 0) goto LAB_018868e4;
    if (uVar3 == 0x10) {
      puVar13 = puVar10 + 1;
      uVar3 = *puVar13;
      uVar1 = uVar3 + 2;
      bVar5 = uVar9 < uVar1;
      uVar9 = uVar9 - uVar1;
      if (bVar5 || uVar9 == 0) {
        *puVar8 = 0;
        goto LAB_018868e4;
      }
      uVar11 = uVar3 + 1;
      uVar2 = uVar11 & 7;
      puVar7 = puVar8 + 1;
      *puVar7 = uVar3;
      if (uVar2 != 0) {
        lVar4 = 0;
        do {
          lVar12 = lVar4;
          uVar11 = uVar11 - 1;
          uVar2 = uVar2 - 1;
          *(undefined2 *)((long)puVar8 + lVar12 + 4) = *(undefined2 *)((long)puVar10 + lVar12 + 4);
          lVar4 = lVar12 + 2;
        } while (uVar2 != 0);
        puVar8 = (ushort *)((long)puVar8 + lVar12 + 4);
        puVar10 = (ushort *)((long)puVar10 + lVar12 + 2);
        puVar13 = puVar10 + 1;
        puVar7 = puVar8;
      }
      if (6 < uVar3) {
        do {
          puVar7[1] = puVar10[2];
          puVar7[2] = puVar13[2];
          puVar7[3] = puVar13[3];
          puVar7[4] = puVar13[4];
          puVar7[5] = puVar13[5];
          puVar7[6] = puVar13[6];
          puVar10 = puVar13 + 7;
          puVar7[7] = *puVar10;
          puVar13 = puVar13 + 8;
          uVar11 = uVar11 - 8;
          puVar7 = puVar7 + 8;
          *puVar7 = *puVar13;
          puVar8 = puVar7;
        } while (uVar11 != 0);
      }
      puVar10 = puVar13;
      iVar6 = uVar1 + iVar6;
    }
    else {
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
      iVar6 = iVar6 + 1;
      uVar9 = uVar9 - 1;
    }
  } while (uVar9 != 0);
  if (iVar6 != 0) {
    puVar8[-1] = 0;
  }
LAB_018868e4:
  iVar6 = 0;
  puVar8 = (ushort *)(param_1 + 0x3f8);
  *(undefined1 *)(param_1 + 0x58d) = 0;
  puVar10 = local_4;
  uVar9 = 0x11;
  do {
    uVar3 = *puVar10;
    *puVar8 = uVar3;
    if (uVar3 == 0) goto LAB_01886a0c;
    if (uVar3 == 0x10) {
      puVar13 = puVar10 + 1;
      uVar3 = *puVar13;
      uVar1 = uVar3 + 2;
      bVar5 = uVar9 < uVar1;
      uVar9 = uVar9 - uVar1;
      if (bVar5 || uVar9 == 0) {
        *puVar8 = 0;
        goto LAB_01886a0c;
      }
      uVar11 = uVar3 + 1;
      uVar2 = uVar11 & 7;
      puVar7 = puVar8 + 1;
      *puVar7 = uVar3;
      if (uVar2 != 0) {
        lVar4 = 0;
        do {
          lVar12 = lVar4;
          uVar11 = uVar11 - 1;
          uVar2 = uVar2 - 1;
          *(undefined2 *)((long)puVar8 + lVar12 + 4) = *(undefined2 *)((long)puVar10 + lVar12 + 4);
          lVar4 = lVar12 + 2;
        } while (uVar2 != 0);
        puVar8 = (ushort *)((long)puVar8 + lVar12 + 4);
        puVar10 = (ushort *)((long)puVar10 + lVar12 + 2);
        puVar13 = puVar10 + 1;
        puVar7 = puVar8;
      }
      if (6 < uVar3) {
        do {
          puVar7[1] = puVar10[2];
          puVar7[2] = puVar13[2];
          puVar7[3] = puVar13[3];
          puVar7[4] = puVar13[4];
          puVar7[5] = puVar13[5];
          puVar7[6] = puVar13[6];
          puVar10 = puVar13 + 7;
          puVar7[7] = *puVar10;
          puVar13 = puVar13 + 8;
          uVar11 = uVar11 - 8;
          puVar7 = puVar7 + 8;
          *puVar7 = *puVar13;
          puVar8 = puVar7;
        } while (uVar11 != 0);
      }
      puVar10 = puVar13;
      iVar6 = uVar1 + iVar6;
    }
    else {
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
      iVar6 = iVar6 + 1;
      uVar9 = uVar9 - 1;
    }
  } while (uVar9 != 0);
  if (iVar6 != 0) {
    puVar8[-1] = 0;
  }
LAB_01886a0c:
  iVar6 = 0;
  puVar8 = (ushort *)(param_1 + 0x41a);
  *(undefined1 *)(param_1 + 0x58e) = 0;
  puVar10 = local_4;
  uVar9 = 0x11;
  do {
    uVar3 = *puVar10;
    *puVar8 = uVar3;
    if (uVar3 == 0) goto LAB_01886b34;
    if (uVar3 == 0x10) {
      puVar13 = puVar10 + 1;
      uVar3 = *puVar13;
      uVar1 = uVar3 + 2;
      bVar5 = uVar9 < uVar1;
      uVar9 = uVar9 - uVar1;
      if (bVar5 || uVar9 == 0) {
        *puVar8 = 0;
        goto LAB_01886b34;
      }
      uVar11 = uVar3 + 1;
      uVar2 = uVar11 & 7;
      puVar7 = puVar8 + 1;
      *puVar7 = uVar3;
      if (uVar2 != 0) {
        lVar4 = 0;
        do {
          lVar12 = lVar4;
          uVar11 = uVar11 - 1;
          uVar2 = uVar2 - 1;
          *(undefined2 *)((long)puVar8 + lVar12 + 4) = *(undefined2 *)((long)puVar10 + lVar12 + 4);
          lVar4 = lVar12 + 2;
        } while (uVar2 != 0);
        puVar8 = (ushort *)((long)puVar8 + lVar12 + 4);
        puVar10 = (ushort *)((long)puVar10 + lVar12 + 2);
        puVar13 = puVar10 + 1;
        puVar7 = puVar8;
      }
      if (6 < uVar3) {
        do {
          puVar7[1] = puVar10[2];
          puVar7[2] = puVar13[2];
          puVar7[3] = puVar13[3];
          puVar7[4] = puVar13[4];
          puVar7[5] = puVar13[5];
          puVar7[6] = puVar13[6];
          puVar10 = puVar13 + 7;
          puVar7[7] = *puVar10;
          puVar13 = puVar13 + 8;
          uVar11 = uVar11 - 8;
          puVar7 = puVar7 + 8;
          *puVar7 = *puVar13;
          puVar8 = puVar7;
        } while (uVar11 != 0);
      }
      puVar10 = puVar13;
      iVar6 = uVar1 + iVar6;
    }
    else {
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
      iVar6 = iVar6 + 1;
      uVar9 = uVar9 - 1;
    }
  } while (uVar9 != 0);
  if (iVar6 != 0) {
    puVar8[-1] = 0;
  }
LAB_01886b34:
  iVar6 = 0;
  puVar8 = (ushort *)(param_1 + 0x43c);
  *(undefined1 *)(param_1 + 0x58f) = 0;
  puVar10 = local_4;
  uVar9 = 0x11;
  do {
    uVar3 = *puVar10;
    *puVar8 = uVar3;
    if (uVar3 == 0) goto LAB_01886c5c;
    if (uVar3 == 0x10) {
      puVar13 = puVar10 + 1;
      uVar3 = *puVar13;
      uVar1 = uVar3 + 2;
      bVar5 = uVar9 < uVar1;
      uVar9 = uVar9 - uVar1;
      if (bVar5 || uVar9 == 0) {
        *puVar8 = 0;
        goto LAB_01886c5c;
      }
      uVar11 = uVar3 + 1;
      uVar2 = uVar11 & 7;
      puVar7 = puVar8 + 1;
      *puVar7 = uVar3;
      if (uVar2 != 0) {
        lVar4 = 0;
        do {
          lVar12 = lVar4;
          uVar11 = uVar11 - 1;
          uVar2 = uVar2 - 1;
          *(undefined2 *)((long)puVar8 + lVar12 + 4) = *(undefined2 *)((long)puVar10 + lVar12 + 4);
          lVar4 = lVar12 + 2;
        } while (uVar2 != 0);
        puVar8 = (ushort *)((long)puVar8 + lVar12 + 4);
        puVar10 = (ushort *)((long)puVar10 + lVar12 + 2);
        puVar13 = puVar10 + 1;
        puVar7 = puVar8;
      }
      if (6 < uVar3) {
        do {
          puVar7[1] = puVar10[2];
          puVar7[2] = puVar13[2];
          puVar7[3] = puVar13[3];
          puVar7[4] = puVar13[4];
          puVar7[5] = puVar13[5];
          puVar7[6] = puVar13[6];
          puVar10 = puVar13 + 7;
          puVar7[7] = *puVar10;
          puVar13 = puVar13 + 8;
          uVar11 = uVar11 - 8;
          puVar7 = puVar7 + 8;
          *puVar7 = *puVar13;
          puVar8 = puVar7;
        } while (uVar11 != 0);
      }
      puVar10 = puVar13;
      iVar6 = uVar1 + iVar6;
    }
    else {
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
      iVar6 = iVar6 + 1;
      uVar9 = uVar9 - 1;
    }
  } while (uVar9 != 0);
  if (iVar6 != 0) {
    puVar8[-1] = 0;
  }
LAB_01886c5c:
  iVar6 = 0;
  puVar8 = (ushort *)(param_1 + 0x45e);
  *(undefined1 *)(param_1 + 0x590) = 0;
  puVar10 = local_4;
  uVar9 = 0x11;
  do {
    uVar3 = *puVar10;
    *puVar8 = uVar3;
    if (uVar3 == 0) goto LAB_01886d84;
    if (uVar3 == 0x10) {
      puVar13 = puVar10 + 1;
      uVar3 = *puVar13;
      uVar1 = uVar3 + 2;
      bVar5 = uVar9 < uVar1;
      uVar9 = uVar9 - uVar1;
      if (bVar5 || uVar9 == 0) {
        *puVar8 = 0;
        goto LAB_01886d84;
      }
      uVar11 = uVar3 + 1;
      uVar2 = uVar11 & 7;
      puVar7 = puVar8 + 1;
      *puVar7 = uVar3;
      if (uVar2 != 0) {
        lVar4 = 0;
        do {
          lVar12 = lVar4;
          uVar11 = uVar11 - 1;
          uVar2 = uVar2 - 1;
          *(undefined2 *)((long)puVar8 + lVar12 + 4) = *(undefined2 *)((long)puVar10 + lVar12 + 4);
          lVar4 = lVar12 + 2;
        } while (uVar2 != 0);
        puVar8 = (ushort *)((long)puVar8 + lVar12 + 4);
        puVar10 = (ushort *)((long)puVar10 + lVar12 + 2);
        puVar13 = puVar10 + 1;
        puVar7 = puVar8;
      }
      if (6 < uVar3) {
        do {
          puVar7[1] = puVar10[2];
          puVar7[2] = puVar13[2];
          puVar7[3] = puVar13[3];
          puVar7[4] = puVar13[4];
          puVar7[5] = puVar13[5];
          puVar7[6] = puVar13[6];
          puVar10 = puVar13 + 7;
          puVar7[7] = *puVar10;
          puVar13 = puVar13 + 8;
          uVar11 = uVar11 - 8;
          puVar7 = puVar7 + 8;
          *puVar7 = *puVar13;
          puVar8 = puVar7;
        } while (uVar11 != 0);
      }
      puVar10 = puVar13;
      iVar6 = uVar1 + iVar6;
    }
    else {
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
      iVar6 = iVar6 + 1;
      uVar9 = uVar9 - 1;
    }
  } while (uVar9 != 0);
  if (iVar6 != 0) {
    puVar8[-1] = 0;
  }
LAB_01886d84:
  iVar6 = 0;
  puVar8 = (ushort *)(param_1 + 0x480);
  *(undefined1 *)(param_1 + 0x591) = 0;
  puVar10 = local_4;
  uVar9 = 0x11;
  do {
    uVar3 = *puVar10;
    *puVar8 = uVar3;
    if (uVar3 == 0) goto LAB_01886eac;
    if (uVar3 == 0x10) {
      puVar13 = puVar10 + 1;
      uVar3 = *puVar13;
      uVar1 = uVar3 + 2;
      bVar5 = uVar9 < uVar1;
      uVar9 = uVar9 - uVar1;
      if (bVar5 || uVar9 == 0) {
        *puVar8 = 0;
        goto LAB_01886eac;
      }
      uVar11 = uVar3 + 1;
      uVar2 = uVar11 & 7;
      puVar7 = puVar8 + 1;
      *puVar7 = uVar3;
      if (uVar2 != 0) {
        lVar4 = 0;
        do {
          lVar12 = lVar4;
          uVar11 = uVar11 - 1;
          uVar2 = uVar2 - 1;
          *(undefined2 *)((long)puVar8 + lVar12 + 4) = *(undefined2 *)((long)puVar10 + lVar12 + 4);
          lVar4 = lVar12 + 2;
        } while (uVar2 != 0);
        puVar8 = (ushort *)((long)puVar8 + lVar12 + 4);
        puVar10 = (ushort *)((long)puVar10 + lVar12 + 2);
        puVar13 = puVar10 + 1;
        puVar7 = puVar8;
      }
      if (6 < uVar3) {
        do {
          puVar7[1] = puVar10[2];
          puVar7[2] = puVar13[2];
          puVar7[3] = puVar13[3];
          puVar7[4] = puVar13[4];
          puVar7[5] = puVar13[5];
          puVar7[6] = puVar13[6];
          puVar10 = puVar13 + 7;
          puVar7[7] = *puVar10;
          puVar13 = puVar13 + 8;
          uVar11 = uVar11 - 8;
          puVar7 = puVar7 + 8;
          *puVar7 = *puVar13;
          puVar8 = puVar7;
        } while (uVar11 != 0);
      }
      puVar10 = puVar13;
      iVar6 = uVar1 + iVar6;
    }
    else {
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
      iVar6 = iVar6 + 1;
      uVar9 = uVar9 - 1;
    }
  } while (uVar9 != 0);
  if (iVar6 != 0) {
    puVar8[-1] = 0;
  }
LAB_01886eac:
  iVar6 = 0;
  *(undefined1 *)(param_1 + 0x592) = 0;
  puVar8 = (ushort *)(param_1 + 0x4a2);
  puVar10 = local_4;
  uVar9 = 0xb;
  do {
    uVar3 = *puVar10;
    *puVar8 = uVar3;
    if (uVar3 == 0) goto LAB_01886fd8;
    if (uVar3 == 0x10) {
      puVar13 = puVar10 + 1;
      uVar3 = *puVar13;
      uVar1 = uVar3 + 2;
      bVar5 = uVar9 < uVar1;
      uVar9 = uVar9 - uVar1;
      if (bVar5 || uVar9 == 0) {
        *puVar8 = 0;
        goto LAB_01886fd8;
      }
      uVar11 = uVar3 + 1;
      uVar2 = uVar11 & 7;
      puVar7 = puVar8 + 1;
      *puVar7 = uVar3;
      if (uVar2 != 0) {
        lVar4 = 0;
        do {
          lVar12 = lVar4;
          uVar11 = uVar11 - 1;
          uVar2 = uVar2 - 1;
          *(undefined2 *)((long)puVar8 + lVar12 + 4) = *(undefined2 *)((long)puVar10 + lVar12 + 4);
          lVar4 = lVar12 + 2;
        } while (uVar2 != 0);
        puVar8 = (ushort *)((long)puVar8 + lVar12 + 4);
        puVar10 = (ushort *)((long)puVar10 + lVar12 + 2);
        puVar13 = puVar10 + 1;
        puVar7 = puVar8;
      }
      if (6 < uVar3) {
        do {
          puVar7[1] = puVar10[2];
          puVar7[2] = puVar13[2];
          puVar7[3] = puVar13[3];
          puVar7[4] = puVar13[4];
          puVar7[5] = puVar13[5];
          puVar7[6] = puVar13[6];
          puVar10 = puVar13 + 7;
          puVar7[7] = *puVar10;
          puVar13 = puVar13 + 8;
          uVar11 = uVar11 - 8;
          puVar7 = puVar7 + 8;
          *puVar7 = *puVar13;
          puVar8 = puVar7;
        } while (uVar11 != 0);
      }
      puVar10 = puVar13;
      iVar6 = uVar1 + iVar6;
    }
    else {
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
      iVar6 = iVar6 + 1;
      uVar9 = uVar9 - 1;
    }
  } while (uVar9 != 0);
  if (iVar6 != 0) {
    puVar8[-1] = 0;
  }
LAB_01886fd8:
  iVar6 = 0;
  *(undefined8 *)(param_1 + 0x526) = 0xffffffffffffffff;
  puVar8 = (ushort *)(param_1 + 0x4b8);
  *(undefined4 *)(param_1 + 0x52e) = 0xffffffff;
  puVar10 = local_4;
  uVar9 = 0xb;
  do {
    uVar3 = *puVar10;
    *puVar8 = uVar3;
    if (uVar3 == 0) goto LAB_0188710c;
    if (uVar3 == 0x10) {
      puVar13 = puVar10 + 1;
      uVar3 = *puVar13;
      uVar1 = uVar3 + 2;
      bVar5 = uVar9 < uVar1;
      uVar9 = uVar9 - uVar1;
      if (bVar5 || uVar9 == 0) {
        *puVar8 = 0;
        goto LAB_0188710c;
      }
      uVar11 = uVar3 + 1;
      uVar2 = uVar11 & 7;
      puVar7 = puVar8 + 1;
      *puVar7 = uVar3;
      if (uVar2 != 0) {
        lVar4 = 0;
        do {
          lVar12 = lVar4;
          uVar11 = uVar11 - 1;
          uVar2 = uVar2 - 1;
          *(undefined2 *)((long)puVar8 + lVar12 + 4) = *(undefined2 *)((long)puVar10 + lVar12 + 4);
          lVar4 = lVar12 + 2;
        } while (uVar2 != 0);
        puVar8 = (ushort *)((long)puVar8 + lVar12 + 4);
        puVar10 = (ushort *)((long)puVar10 + lVar12 + 2);
        puVar13 = puVar10 + 1;
        puVar7 = puVar8;
      }
      if (6 < uVar3) {
        do {
          puVar7[1] = puVar10[2];
          puVar7[2] = puVar13[2];
          puVar7[3] = puVar13[3];
          puVar7[4] = puVar13[4];
          puVar7[5] = puVar13[5];
          puVar7[6] = puVar13[6];
          puVar10 = puVar13 + 7;
          puVar7[7] = *puVar10;
          puVar13 = puVar13 + 8;
          uVar11 = uVar11 - 8;
          puVar7 = puVar7 + 8;
          *puVar7 = *puVar13;
          puVar8 = puVar7;
        } while (uVar11 != 0);
      }
      puVar10 = puVar13;
      iVar6 = uVar1 + iVar6;
    }
    else {
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
      iVar6 = iVar6 + 1;
      uVar9 = uVar9 - 1;
    }
  } while (uVar9 != 0);
  if (iVar6 != 0) {
    puVar8[-1] = 0;
  }
LAB_0188710c:
  iVar6 = 0;
  *(undefined8 *)(param_1 + 0x532) = 0xffffffffffffffff;
  puVar8 = (ushort *)(param_1 + 0x4ce);
  *(undefined4 *)(param_1 + 0x53a) = 0xffffffff;
  puVar10 = local_4;
  uVar9 = 0xb;
  do {
    uVar3 = *puVar10;
    *puVar8 = uVar3;
    if (uVar3 == 0) goto LAB_0188723c;
    if (uVar3 == 0x10) {
      puVar13 = puVar10 + 1;
      uVar3 = *puVar13;
      uVar1 = uVar3 + 2;
      bVar5 = uVar9 < uVar1;
      uVar9 = uVar9 - uVar1;
      if (bVar5 || uVar9 == 0) {
        *puVar8 = 0;
        goto LAB_0188723c;
      }
      uVar11 = uVar3 + 1;
      uVar2 = uVar11 & 7;
      puVar7 = puVar8 + 1;
      *puVar7 = uVar3;
      if (uVar2 != 0) {
        lVar4 = 0;
        do {
          lVar12 = lVar4;
          uVar11 = uVar11 - 1;
          uVar2 = uVar2 - 1;
          *(undefined2 *)((long)puVar8 + lVar12 + 4) = *(undefined2 *)((long)puVar10 + lVar12 + 4);
          lVar4 = lVar12 + 2;
        } while (uVar2 != 0);
        puVar8 = (ushort *)((long)puVar8 + lVar12 + 4);
        puVar10 = (ushort *)((long)puVar10 + lVar12 + 2);
        puVar13 = puVar10 + 1;
        puVar7 = puVar8;
      }
      if (6 < uVar3) {
        do {
          puVar7[1] = puVar10[2];
          puVar7[2] = puVar13[2];
          puVar7[3] = puVar13[3];
          puVar7[4] = puVar13[4];
          puVar7[5] = puVar13[5];
          puVar7[6] = puVar13[6];
          puVar10 = puVar13 + 7;
          puVar7[7] = *puVar10;
          puVar13 = puVar13 + 8;
          uVar11 = uVar11 - 8;
          puVar7 = puVar7 + 8;
          *puVar7 = *puVar13;
          puVar8 = puVar7;
        } while (uVar11 != 0);
      }
      puVar10 = puVar13;
      iVar6 = uVar1 + iVar6;
    }
    else {
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
      iVar6 = iVar6 + 1;
      uVar9 = uVar9 - 1;
    }
  } while (uVar9 != 0);
  if (iVar6 != 0) {
    puVar8[-1] = 0;
  }
LAB_0188723c:
  iVar6 = 0;
  *(undefined8 *)(param_1 + 0x53e) = 0xffffffffffffffff;
  puVar8 = (ushort *)(param_1 + 0x4e4);
  *(undefined4 *)(param_1 + 0x546) = 0xffffffff;
  puVar10 = local_4;
  uVar9 = 0xb;
  do {
    uVar3 = *puVar10;
    *puVar8 = uVar3;
    if (uVar3 == 0) goto LAB_0188736c;
    if (uVar3 == 0x10) {
      puVar13 = puVar10 + 1;
      uVar3 = *puVar13;
      uVar1 = uVar3 + 2;
      bVar5 = uVar9 < uVar1;
      uVar9 = uVar9 - uVar1;
      if (bVar5 || uVar9 == 0) {
        *puVar8 = 0;
        goto LAB_0188736c;
      }
      uVar11 = uVar3 + 1;
      uVar2 = uVar11 & 7;
      puVar7 = puVar8 + 1;
      *puVar7 = uVar3;
      if (uVar2 != 0) {
        lVar4 = 0;
        do {
          lVar12 = lVar4;
          uVar11 = uVar11 - 1;
          uVar2 = uVar2 - 1;
          *(undefined2 *)((long)puVar8 + lVar12 + 4) = *(undefined2 *)((long)puVar10 + lVar12 + 4);
          lVar4 = lVar12 + 2;
        } while (uVar2 != 0);
        puVar8 = (ushort *)((long)puVar8 + lVar12 + 4);
        puVar10 = (ushort *)((long)puVar10 + lVar12 + 2);
        puVar13 = puVar10 + 1;
        puVar7 = puVar8;
      }
      if (6 < uVar3) {
        do {
          puVar7[1] = puVar10[2];
          puVar7[2] = puVar13[2];
          puVar7[3] = puVar13[3];
          puVar7[4] = puVar13[4];
          puVar7[5] = puVar13[5];
          puVar7[6] = puVar13[6];
          puVar10 = puVar13 + 7;
          puVar7[7] = *puVar10;
          puVar13 = puVar13 + 8;
          uVar11 = uVar11 - 8;
          puVar7 = puVar7 + 8;
          *puVar7 = *puVar13;
          puVar8 = puVar7;
        } while (uVar11 != 0);
      }
      puVar10 = puVar13;
      iVar6 = uVar1 + iVar6;
    }
    else {
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
      iVar6 = iVar6 + 1;
      uVar9 = uVar9 - 1;
    }
  } while (uVar9 != 0);
  if (iVar6 != 0) {
    puVar8[-1] = 0;
  }
LAB_0188736c:
  iVar6 = 0;
  *(undefined8 *)(param_1 + 0x54a) = 0xffffffffffffffff;
  puVar8 = (ushort *)(param_1 + 0x4fa);
  *(undefined4 *)(param_1 + 0x552) = 0xffffffff;
  puVar10 = local_4;
  uVar9 = 0xb;
  do {
    uVar3 = *puVar10;
    *puVar8 = uVar3;
    if (uVar3 == 0) goto LAB_0188749c;
    if (uVar3 == 0x10) {
      puVar13 = puVar10 + 1;
      uVar3 = *puVar13;
      uVar1 = uVar3 + 2;
      bVar5 = uVar9 < uVar1;
      uVar9 = uVar9 - uVar1;
      if (bVar5 || uVar9 == 0) {
        *puVar8 = 0;
        goto LAB_0188749c;
      }
      uVar11 = uVar3 + 1;
      uVar2 = uVar11 & 7;
      puVar7 = puVar8 + 1;
      *puVar7 = uVar3;
      if (uVar2 != 0) {
        lVar4 = 0;
        do {
          lVar12 = lVar4;
          uVar11 = uVar11 - 1;
          uVar2 = uVar2 - 1;
          *(undefined2 *)((long)puVar8 + lVar12 + 4) = *(undefined2 *)((long)puVar10 + lVar12 + 4);
          lVar4 = lVar12 + 2;
        } while (uVar2 != 0);
        puVar8 = (ushort *)((long)puVar8 + lVar12 + 4);
        puVar10 = (ushort *)((long)puVar10 + lVar12 + 2);
        puVar13 = puVar10 + 1;
        puVar7 = puVar8;
      }
      if (6 < uVar3) {
        do {
          puVar7[1] = puVar10[2];
          puVar7[2] = puVar13[2];
          puVar7[3] = puVar13[3];
          puVar7[4] = puVar13[4];
          puVar7[5] = puVar13[5];
          puVar7[6] = puVar13[6];
          puVar10 = puVar13 + 7;
          puVar7[7] = *puVar10;
          puVar13 = puVar13 + 8;
          uVar11 = uVar11 - 8;
          puVar7 = puVar7 + 8;
          *puVar7 = *puVar13;
          puVar8 = puVar7;
        } while (uVar11 != 0);
      }
      puVar10 = puVar13;
      iVar6 = uVar1 + iVar6;
    }
    else {
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
      iVar6 = iVar6 + 1;
      uVar9 = uVar9 - 1;
    }
  } while (uVar9 != 0);
  if (iVar6 != 0) {
    puVar8[-1] = 0;
  }
LAB_0188749c:
  iVar6 = 0;
  *(undefined8 *)(param_1 + 0x556) = 0xffffffffffffffff;
  puVar8 = (ushort *)(param_1 + 0x510);
  puVar10 = local_4;
  *(undefined4 *)(param_1 + 0x55e) = 0xffffffff;
  uVar9 = 0xb;
  do {
    uVar3 = *puVar10;
    *puVar8 = uVar3;
    if (uVar3 == 0) goto LAB_018875c8;
    if (uVar3 == 0x10) {
      puVar13 = puVar10 + 1;
      uVar3 = *puVar13;
      uVar1 = uVar3 + 2;
      bVar5 = uVar9 < uVar1;
      uVar9 = uVar9 - uVar1;
      if (bVar5 || uVar9 == 0) {
        *puVar8 = 0;
        goto LAB_018875c8;
      }
      uVar11 = uVar3 + 1;
      uVar2 = uVar11 & 7;
      puVar7 = puVar8 + 1;
      *puVar7 = uVar3;
      if (uVar2 != 0) {
        lVar4 = 0;
        do {
          lVar12 = lVar4;
          uVar11 = uVar11 - 1;
          uVar2 = uVar2 - 1;
          *(undefined2 *)((long)puVar8 + lVar12 + 4) = *(undefined2 *)((long)puVar10 + lVar12 + 4);
          lVar4 = lVar12 + 2;
        } while (uVar2 != 0);
        puVar8 = (ushort *)((long)puVar8 + lVar12 + 4);
        puVar10 = (ushort *)((long)puVar10 + lVar12 + 2);
        puVar13 = puVar10 + 1;
        puVar7 = puVar8;
      }
      if (6 < uVar3) {
        do {
          puVar7[1] = puVar10[2];
          puVar7[2] = puVar13[2];
          puVar7[3] = puVar13[3];
          puVar7[4] = puVar13[4];
          puVar7[5] = puVar13[5];
          puVar7[6] = puVar13[6];
          puVar10 = puVar13 + 7;
          puVar7[7] = *puVar10;
          puVar13 = puVar13 + 8;
          uVar11 = uVar11 - 8;
          puVar7 = puVar7 + 8;
          *puVar7 = *puVar13;
          puVar8 = puVar7;
        } while (uVar11 != 0);
      }
      puVar10 = puVar13;
      iVar6 = uVar1 + iVar6;
    }
    else {
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
      iVar6 = iVar6 + 1;
      uVar9 = uVar9 - 1;
    }
  } while (uVar9 != 0);
  if (iVar6 != 0) {
    puVar8[-1] = 0;
  }
LAB_018875c8:
  *(undefined4 *)(param_1 + 0x56a) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x562) = 0xffffffffffffffff;
  return;
}


