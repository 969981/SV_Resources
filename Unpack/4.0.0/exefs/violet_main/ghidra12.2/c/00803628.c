/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00803628; name: FUN_00803628
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00803628(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  ulong *puVar9;
  long *plVar10;
  long lVar11;
  byte bVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  
  switch(*(undefined4 *)(param_2 + 8)) {
  case 0:
    uVar6 = (ulong)*(uint *)(param_1 + 0xc0);
    if (*(uint *)(param_1 + 0xc0) == 0) {
      return;
    }
    lVar7 = *(long *)(param_1 + 0xb8);
    uVar15 = *(ulong *)(param_2 + 0x10);
    uVar13 = uVar6;
    lVar11 = lVar7;
    do {
      if (*(ulong *)(lVar11 + 0x10) == uVar15) {
        if (uVar15 < *(ulong *)(param_1 + 0xa0)) {
          return;
        }
        goto LAB_008038d8;
      }
      lVar11 = lVar11 + 0x80;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
    puVar9 = (ulong *)(lVar7 + 0x10);
    uVar13 = uVar6;
    do {
      if (*puVar9 == uVar15) {
        return;
      }
      uVar13 = uVar13 - 1;
      puVar9 = puVar9 + 0x10;
    } while (uVar13 != 0);
    lVar14 = 0;
    while (*(long *)(lVar7 + lVar14 + 0x10) != -1) {
      lVar14 = lVar14 + 0x80;
      if (uVar6 * 0x80 == lVar14) {
        return;
      }
    }
    FUN_00801cb8();
    lVar11 = *(long *)(param_1 + 0xb8);
    *(ulong *)(lVar11 + lVar14 + 0x10) = uVar15;
    *(undefined1 *)(lVar11 + lVar14 + 0x6a) = 0;
    uVar6 = (ulong)*(uint *)(param_1 + 0xc0);
    if (*(uint *)(param_1 + 0xc0) != 0) {
      do {
        if (*(long *)(lVar11 + 0x10) == *(long *)(param_2 + 0x10)) goto LAB_008038d8;
        lVar11 = lVar11 + 0x80;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    lVar11 = 0;
LAB_008038d8:
    if (*(int *)(lVar11 + 0x20) < 3) {
      lVar7 = param_2 + 0x20;
      FUN_0284e39c(lVar11 + 0x28,lVar7);
      FUN_0284e39c(lVar11 + 0x48,param_2 + 0x40);
      *(undefined8 *)(lVar11 + 0x18) = *(undefined8 *)(param_2 + 0x60);
      uVar6 = FUN_0078b12c(param_1 + 0x80);
      if (((uVar6 & 1) != 0) &&
         (uVar6 = FUN_0078b108(param_2 + 0x40,param_1 + 0x80), (uVar6 & 1) != 0)) {
        uVar6 = FUN_0078b1a8(param_1 + 0x60);
        if ((((uVar6 & 1) != 0) && (uVar6 = FUN_0078b1a8(lVar7), (uVar6 & 1) != 0)) ||
           ((uVar6 = FUN_0078a34c(param_1 + 0x60), (uVar6 & 1) != 0 &&
            (uVar6 = FUN_0078a34c(lVar7), (uVar6 & 1) != 0)))) {
          *(undefined1 *)(lVar11 + 0x69) = 1;
        }
      }
      *(undefined1 *)(param_1 + 0x5a) = 1;
      uVar6 = FUN_0078b1ec(param_1 + 0x60);
      if (((uVar6 & 1) != 0) || (uVar6 = FUN_0078b1ec(lVar7), (uVar6 & 1) != 0)) {
        *(undefined1 *)(lVar11 + 0x69) = 0;
      }
      uVar6 = (ulong)*(uint *)(param_1 + 0xc0);
      if (*(uint *)(param_1 + 0xc0) != 0) {
        lVar7 = *(long *)(param_1 + 0xb8);
        do {
          if (*(long *)(lVar7 + 0x10) == *(long *)(lVar11 + 0x10)) goto LAB_008039b8;
          lVar7 = lVar7 + 0x80;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      lVar7 = 0;
LAB_008039b8:
      if (((int)*(uint *)(lVar7 + 0x20) < 4) &&
         (*(undefined8 *)(lVar7 + 0x74) = 0, *(uint *)(lVar7 + 0x20) < 4)) {
        *(undefined4 *)(lVar7 + 0x20) = 4;
        *(undefined1 *)(param_1 + 0xa8) = 1;
        return;
      }
    }
    return;
  case 1:
    if (*(uint *)(param_1 + 0xc0) == 0) {
      return;
    }
    iVar4 = 0;
    lVar11 = 0;
    while (lVar7 = *(long *)(param_1 + 0xb8) + lVar11,
          *(long *)(lVar7 + 0x10) != *(long *)(param_2 + 0x10)) {
      lVar11 = lVar11 + 0x80;
      iVar4 = iVar4 + 1;
      if ((ulong)*(uint *)(param_1 + 0xc0) * 0x80 == lVar11) {
        return;
      }
    }
    if (iVar4 < 0) {
      return;
    }
    if (5 < *(int *)(lVar7 + 0x20)) {
      return;
    }
    lVar11 = param_2 + 0x20;
    FUN_0284e39c(lVar7 + 0x28,lVar11);
    FUN_0284e39c(lVar7 + 0x48,param_2 + 0x40);
    *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(param_2 + 0x60);
    uVar6 = FUN_0078b12c(param_1 + 0x80);
    if (((uVar6 & 1) != 0) &&
       (uVar6 = FUN_0078b108(param_2 + 0x40,param_1 + 0x80), (uVar6 & 1) != 0)) {
      uVar6 = FUN_0078b1a8(param_1 + 0x60);
      if ((((uVar6 & 1) != 0) && (uVar6 = FUN_0078b1a8(lVar11), (uVar6 & 1) != 0)) ||
         ((uVar6 = FUN_0078a34c(param_1 + 0x60), (uVar6 & 1) != 0 &&
          (uVar6 = FUN_0078a34c(lVar11), (uVar6 & 1) != 0)))) {
        *(undefined1 *)(lVar7 + 0x69) = 1;
      }
    }
    if ((*(char *)(lVar7 + 0x69) == '\0') && (*(char *)(param_1 + 0xa9) == '\0')) {
      lVar11 = *(long *)(param_1 + 0xb8);
      lVar7 = *(long *)(lVar7 + 0x10);
      uVar6 = 0xffffffffffffffff;
      plVar10 = (long *)(lVar11 + 0x10);
      do {
        lVar14 = *plVar10;
        uVar6 = uVar6 + 1;
        plVar10 = plVar10 + 0x10;
      } while (lVar14 != lVar7);
      piVar8 = (int *)(lVar11 + (uVar6 & 0xffffffff) * 0x80 + 0x6c);
      if (*piVar8 == 0) {
        *piVar8 = 2;
      }
      uVar6 = (ulong)*(uint *)(param_1 + 0xc0);
      if (*(uint *)(param_1 + 0xc0) != 0) {
        do {
          if (*(long *)(lVar11 + 0x10) == lVar7) goto LAB_00803bc4;
          lVar11 = lVar11 + 0x80;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      lVar11 = 0;
LAB_00803bc4:
      if (0xb < *(int *)(lVar11 + 0x20)) {
        return;
      }
      *(undefined8 *)(lVar11 + 0x74) = 0;
      if (*(int *)(lVar11 + 0x20) == 2) {
        *(undefined4 *)(lVar11 + 0x20) = 0xc;
        *(undefined1 *)(param_1 + 0xa8) = 1;
        return;
      }
      return;
    }
    uVar6 = (ulong)*(uint *)(param_1 + 0xc0);
    if (*(uint *)(param_1 + 0xc0) != 0) {
      lVar11 = *(long *)(param_1 + 0xb8);
      do {
        if (*(long *)(lVar11 + 0x10) == *(long *)(lVar7 + 0x10)) goto LAB_00803b20;
        lVar11 = lVar11 + 0x80;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    lVar11 = 0;
LAB_00803b20:
    uVar1 = *(uint *)(lVar11 + 0x20);
    if ((((int)uVar1 < 7) && (*(undefined8 *)(lVar11 + 0x74) = 0, uVar1 < 7)) &&
       ((1 << (ulong)(uVar1 & 0x1f) & 0x74U) != 0)) {
      *(undefined4 *)(lVar11 + 0x20) = 7;
      *(undefined1 *)(param_1 + 0xa8) = 1;
      return;
    }
    return;
  default:
    return;
  case 3:
    uVar6 = (ulong)*(uint *)(param_1 + 0xc0);
    if (*(uint *)(param_1 + 0xc0) == 0) {
      return;
    }
    lVar11 = *(long *)(param_1 + 0xb8);
    pbVar5 = (byte *)(lVar11 + 0x7d);
    uVar13 = uVar6;
    while (*(long *)(pbVar5 + -0x6d) != *(long *)(param_2 + 0x10)) {
      pbVar5 = pbVar5 + 0x80;
      uVar13 = uVar13 - 1;
      if (uVar13 == 0) {
        return;
      }
    }
    do {
      if (*(long *)(lVar11 + 0x10) == *(long *)(pbVar5 + -0x6d)) goto LAB_008036e4;
      lVar11 = lVar11 + 0x80;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    lVar11 = 0;
LAB_008036e4:
    uVar1 = *(uint *)(lVar11 + 0x20);
    if ((((int)uVar1 < 9) && (*(undefined8 *)(lVar11 + 0x74) = 0, uVar1 < 9)) &&
       ((1 << (ulong)(uVar1 & 0x1f) & 0x1a0U) != 0)) {
      *(undefined4 *)(lVar11 + 0x20) = 9;
      *(undefined1 *)(param_1 + 0xa8) = 1;
    }
    if (*pbVar5 < *(byte *)(param_2 + 0x68)) {
      *pbVar5 = *(byte *)(param_2 + 0x68);
      return;
    }
    return;
  case 4:
    break;
  case 5:
    uVar6 = (ulong)*(uint *)(param_1 + 0xc0);
    if (*(uint *)(param_1 + 0xc0) == 0) {
      return;
    }
    lVar11 = *(long *)(param_1 + 0xb8);
    pbVar5 = (byte *)(lVar11 + 0x7c);
    uVar13 = uVar6;
    while (*(long *)(pbVar5 + -0x6c) != *(long *)(param_2 + 0x10)) {
      pbVar5 = pbVar5 + 0x80;
      uVar13 = uVar13 - 1;
      if (uVar13 == 0) {
        return;
      }
    }
    bVar3 = *(byte *)(param_2 + 0x69);
    bVar12 = *pbVar5;
    if (*pbVar5 < bVar3) {
      *pbVar5 = bVar3;
      bVar12 = bVar3;
    }
    if (bVar12 == 2) {
      pbVar5[-0x14] = 1;
    }
    uVar13 = 0;
    plVar10 = (long *)(lVar11 + 0x10);
    do {
      if (*plVar10 == *(long *)(pbVar5 + -0x6c)) {
        lVar7 = lVar11 + (uVar13 & 0xffffffff) * 0x80;
        goto LAB_00803794;
      }
      uVar13 = uVar13 + 1;
      plVar10 = plVar10 + 0x10;
    } while (uVar6 != uVar13);
    lVar7 = 0;
LAB_00803794:
    if (0xc < (int)*(uint *)(lVar7 + 0x20)) {
      return;
    }
    *(undefined8 *)(lVar7 + 0x74) = 0;
    if ((*(uint *)(lVar7 + 0x20) & 0xfffffffe) != 10) {
      return;
    }
    piVar8 = (int *)(lVar11 + 0x20);
    *(undefined4 *)(lVar7 + 0x20) = 0xd;
    do {
      if ((*(long *)(piVar8 + -4) != -1) && (1 < *piVar8 - 0xdU)) goto LAB_008037f0;
      uVar6 = uVar6 - 1;
      piVar8 = piVar8 + 0x20;
    } while (uVar6 != 0);
    *(undefined1 *)(param_1 + 0x5a) = 0;
LAB_008037f0:
    *(undefined4 *)(lVar7 + 0x6c) = 1;
    *(undefined1 *)(param_1 + 0xa8) = 1;
    return;
  case 6:
    uVar6 = (ulong)*(uint *)(param_1 + 0xc0);
    if (*(uint *)(param_1 + 0xc0) == 0) {
      return;
    }
    lVar11 = *(long *)(param_1 + 0xb8) + 0x28;
    while (*(long *)(lVar11 + -0x18) != *(long *)(param_2 + 0x10)) {
      lVar11 = lVar11 + 0x80;
      uVar6 = uVar6 - 1;
      if (uVar6 == 0) {
        return;
      }
    }
    FUN_0284e39c(lVar11,param_2 + 0x20);
    FUN_0284e39c(lVar11 + 0x20,param_2 + 0x40);
    *(undefined8 *)(lVar11 + -0x10) = *(undefined8 *)(param_2 + 0x60);
    lVar7 = *(long *)(param_1 + 0xb8);
    lVar11 = *(long *)(lVar11 + -0x18);
    uVar6 = 0xffffffffffffffff;
    plVar10 = (long *)(lVar7 + 0x10);
    do {
      lVar14 = *plVar10;
      uVar6 = uVar6 + 1;
      plVar10 = plVar10 + 0x10;
    } while (lVar14 != lVar11);
    piVar8 = (int *)(lVar7 + (uVar6 & 0xffffffff) * 0x80 + 0x6c);
    if (*piVar8 == 0) {
      *piVar8 = 3;
      uVar1 = *(uint *)(param_1 + 0xc0);
    }
    else {
      uVar1 = *(uint *)(param_1 + 0xc0);
    }
    uVar6 = (ulong)uVar1;
    if (uVar1 == 0) {
      lVar14 = 0;
      uVar2 = _DAT_00000020;
    }
    else {
      lVar14 = lVar7;
      uVar13 = uVar6;
      do {
        if (*(long *)(lVar14 + 0x10) == lVar11) goto LAB_00803ee0;
        lVar14 = lVar14 + 0x80;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
      lVar14 = 0;
LAB_00803ee0:
      uVar2 = *(uint *)(lVar14 + 0x20);
    }
    if (0xd < (int)uVar2) {
      return;
    }
    *(undefined8 *)(lVar14 + 0x74) = 0;
    if (0xc < uVar2) {
      return;
    }
    if ((1 << (ulong)(uVar2 & 0x1f) & 0x157dU) == 0) {
      return;
    }
    *(undefined4 *)(lVar14 + 0x20) = 0xe;
    if (uVar1 != 0) {
      piVar8 = (int *)(lVar7 + 0x20);
      do {
        if ((*(long *)(piVar8 + -4) != -1) && (1 < *piVar8 - 0xdU)) goto LAB_00803f74;
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 0x20;
      } while (uVar6 != 0);
    }
    *(undefined1 *)(param_1 + 0x5a) = 0;
LAB_00803f74:
    *(undefined1 *)(param_1 + 0xa8) = 1;
    return;
  }
  uVar6 = (ulong)*(uint *)(param_1 + 0xc0);
  if (*(uint *)(param_1 + 0xc0) == 0) {
    return;
  }
  lVar7 = *(long *)(param_1 + 0xb8);
  lVar14 = *(long *)(param_2 + 0x10);
  uVar13 = uVar6;
  lVar11 = lVar7;
  do {
    if (*(long *)(lVar11 + 0x10) == lVar14) goto LAB_00803d28;
    lVar11 = lVar11 + 0x80;
    uVar13 = uVar13 - 1;
  } while (uVar13 != 0);
  plVar10 = (long *)(lVar7 + 0x10);
  uVar13 = uVar6;
  do {
    if (*plVar10 == lVar14) {
      return;
    }
    uVar13 = uVar13 - 1;
    plVar10 = plVar10 + 0x10;
  } while (uVar13 != 0);
  lVar16 = 0;
  while (*(long *)(lVar7 + lVar16 + 0x10) != -1) {
    lVar16 = lVar16 + 0x80;
    if (uVar6 * 0x80 == lVar16) {
      return;
    }
  }
  FUN_00801cb8();
  lVar11 = *(long *)(param_1 + 0xb8);
  *(long *)(lVar11 + lVar16 + 0x10) = lVar14;
  *(undefined1 *)(lVar11 + lVar16 + 0x6a) = 0;
  uVar6 = (ulong)*(uint *)(param_1 + 0xc0);
  if (*(uint *)(param_1 + 0xc0) != 0) {
    do {
      if (*(long *)(lVar11 + 0x10) == *(long *)(param_2 + 0x10)) goto LAB_00803cd4;
      lVar11 = lVar11 + 0x80;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  lVar11 = 0;
LAB_00803cd4:
  FUN_0284e39c(lVar11 + 0x28,param_2 + 0x20);
  FUN_0284e39c(lVar11 + 0x48,param_2 + 0x40);
  *(undefined8 *)(lVar11 + 0x18) = *(undefined8 *)(param_2 + 0x60);
  uVar6 = FUN_0078b12c(param_1 + 0x80);
  if (((uVar6 & 1) != 0) && (uVar6 = FUN_0078b108(param_2 + 0x40,param_1 + 0x80), (uVar6 & 1) != 0))
  {
    *(undefined1 *)(lVar11 + 0x69) = 1;
  }
  *(undefined1 *)(param_1 + 0x5a) = 1;
LAB_00803d28:
  if (*(byte *)(lVar11 + 0x7d) < *(byte *)(param_2 + 0x68)) {
    *(byte *)(lVar11 + 0x7d) = *(byte *)(param_2 + 0x68);
    bVar3 = *(byte *)(lVar11 + 0x7c);
    bVar12 = *(byte *)(param_2 + 0x69);
    if (bVar12 <= bVar3) goto joined_r0x00803d94;
  }
  else {
    bVar3 = *(byte *)(lVar11 + 0x7c);
    bVar12 = *(byte *)(param_2 + 0x69);
    if (bVar12 <= bVar3) goto joined_r0x00803d94;
  }
  *(byte *)(lVar11 + 0x7c) = bVar12;
  bVar3 = bVar12;
joined_r0x00803d94:
  if (bVar3 == 2) {
    *(undefined1 *)(lVar11 + 0x68) = 1;
    uVar1 = *(uint *)(param_1 + 0xc0);
  }
  else {
    uVar1 = *(uint *)(param_1 + 0xc0);
  }
  if (uVar1 == 0) {
    lVar7 = 0;
    uVar1 = _DAT_00000020;
  }
  else {
    uVar6 = (ulong)uVar1;
    lVar7 = *(long *)(param_1 + 0xb8);
    do {
      if (*(long *)(lVar7 + 0x10) == *(long *)(lVar11 + 0x10)) goto LAB_00803dc4;
      lVar7 = lVar7 + 0x80;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    lVar7 = 0;
LAB_00803dc4:
    uVar1 = *(uint *)(lVar7 + 0x20);
  }
  if ((((int)uVar1 < 0xb) && (*(undefined8 *)(lVar7 + 0x74) = 0, uVar1 < 0xb)) &&
     ((1 << (ulong)(uVar1 & 0x1f) & 0x701U) != 0)) {
    *(undefined4 *)(lVar7 + 0x20) = 0xb;
    *(undefined1 *)(param_1 + 0xa8) = 1;
    return;
  }
  return;
}


