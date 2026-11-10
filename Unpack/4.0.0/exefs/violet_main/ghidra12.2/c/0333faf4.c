/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0333faf4; name: FUN_0333faf4
 */


bool FUN_0333faf4(long param_1,ulong *param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  size_t sVar6;
  undefined4 uVar7;
  short *psVar8;
  byte bVar9;
  uint uVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  ulong *puVar15;
  undefined8 uVar16;
  int iVar17;
  char *__s;
  byte bVar18;
  char *local_60;
  char *local_58;
  
  uVar10 = *(uint *)(param_1 + 0x144);
  plVar1 = (long *)(param_1 + 0x138);
  iVar17 = (int)((ulong)param_2 >> 0x20);
  if ((int)uVar10 < 1) {
LAB_0333fba0:
    uVar11 = (ulong)(uVar10 + 1);
  }
  else {
    uVar2 = (int)param_2 * -0x61c8864f;
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uVar3 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = iVar17 * -0x61c8864f;
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar11 = (ulong)(uVar10 & (uVar3 + (uVar3 >> 2) + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2));
    puVar15 = *(ulong **)(*plVar1 + uVar11 * 0x10);
    if (puVar15 == (ulong *)0xffffffffffffffff) goto LAB_0333fba0;
    if (puVar15 != param_2) {
      do {
        uVar11 = (ulong)((int)uVar11 + 1U & uVar10);
        puVar15 = *(ulong **)(*plVar1 + uVar11 * 0x10);
        if (puVar15 == (ulong *)0xffffffffffffffff) goto LAB_0333fba0;
      } while (puVar15 != param_2);
    }
  }
  if ((int)uVar11 <= (int)uVar10) {
    return 1 < *(int *)(*plVar1 + ((long)(uVar11 << 0x20) >> 0x1c) + 8) - 1U;
  }
  if ((int)uVar10 < *(int *)(param_1 + 0x140) * 2) {
    FUN_02ef5fd4(plVar1,PTR_PTR_047d1a50,uVar10 * 2 + 2);
    uVar10 = *(uint *)(param_1 + 0x144);
  }
  uVar2 = (int)param_2 * -0x61c8864f;
  uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
  uVar4 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = iVar17 * -0x61c8864f;
  uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
  uVar3 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar3 = uVar4 + (uVar4 >> 2) + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3;
  uVar2 = uVar3;
  while( true ) {
    uVar2 = uVar10 & uVar2;
    puVar15 = *(ulong **)(*plVar1 + (ulong)uVar2 * 0x10);
    if (puVar15 == (ulong *)0xffffffffffffffff) break;
    if (puVar15 == param_2) {
      iVar17 = 0;
      goto LAB_0333fc50;
    }
    uVar2 = uVar2 + 1;
  }
  iVar17 = 1;
LAB_0333fc50:
  *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + iVar17;
  *(ulong **)(*plVar1 + (-(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar2 << 4)) =
       param_2;
  *(undefined8 *)(*(long *)(param_1 + 0x138) + (long)(int)uVar2 * 0x10 + 8) = 2;
  uVar11 = *param_2;
  uVar10 = (uint)uVar11;
  bVar18 = (byte)uVar11;
  puVar15 = param_2;
  if ((uVar11 & 1) == 0) {
    puVar12 = param_2;
    do {
      puVar12 = (ulong *)puVar12[1];
    } while ((*puVar12 & 1) == 0);
    bVar5 = param_2 == (ulong *)0x0;
    if ((param_2 != (ulong *)0x0) && ((puVar12[2] & 0x1f) == 7)) goto LAB_0333fcf8;
    if ((uVar11 & 1) != 0) goto LAB_0333fd60;
    puVar12 = param_2;
    do {
      puVar12 = (ulong *)puVar12[1];
    } while ((*puVar12 & 1) == 0);
    if ((param_2 != (ulong *)0x0) && ((puVar12[2] & 0x1f) == 8)) goto LAB_0333fd78;
    do {
      puVar15 = (ulong *)puVar15[1];
    } while ((*puVar15 & 1) == 0);
LAB_0333ff20:
    if ((bVar5) || ((puVar15[2] & 0x1f) != 6)) goto LAB_03340138;
    puVar15 = param_2;
    if ((uVar10 >> 1 & 1) == 0) {
      do {
        puVar15 = (ulong *)puVar15[1];
        if (puVar15 == (ulong *)0x0) goto LAB_03340138;
      } while (((byte)*puVar15 >> 1 & 1) == 0);
    }
    if (puVar15[3] == 0) goto LAB_03340138;
    puVar15 = param_2;
    if ((uVar10 >> 1 & 1) == 0) {
      do {
        puVar15 = (ulong *)puVar15[1];
        if (puVar15 == (ulong *)0x0) {
          uVar11 = 0;
          goto LAB_033400d4;
        }
      } while (((byte)*puVar15 >> 1 & 1) == 0);
    }
    uVar11 = puVar15[3];
LAB_033400d4:
    uVar11 = FUN_0333faf4(param_1,uVar11);
    if ((uVar11 & 1) == 0) goto LAB_03340138;
    uVar10 = *(uint *)(param_1 + 0x144);
    if ((int)uVar10 < *(int *)(param_1 + 0x140) * 2) {
      FUN_02ef5fd4(plVar1,PTR_PTR_047d1a50,uVar10 * 2 + 2);
      uVar10 = *(uint *)(param_1 + 0x144);
    }
    lVar14 = *plVar1;
    while( true ) {
      uVar11 = (ulong)(uVar10 & uVar3);
      puVar15 = *(ulong **)(lVar14 + uVar11 * 0x10);
      if (puVar15 == (ulong *)0xffffffffffffffff) break;
      if (puVar15 == param_2) goto LAB_03340228;
      uVar3 = (uVar10 & uVar3) + 1;
    }
  }
  else if ((param_2[2] & 0x1f) == 7) {
LAB_0333fcf8:
    uVar16 = *(undefined8 *)(param_1 + 0x100);
    bVar9 = bVar18;
    if ((uVar10 >> 3 & 1) == 0) {
      uVar13 = uVar11;
      do {
        if (((uVar13 & 1) != 0) || (puVar15 = (ulong *)puVar15[1], puVar15 == (ulong *)0x0)) {
          local_58 = (char *)0x0;
          local_60 = (char *)0x0;
          goto LAB_0333fdd0;
        }
        uVar13 = *puVar15;
        bVar9 = (byte)uVar13;
      } while (((uint)uVar13 >> 3 & 1) == 0);
    }
    __s = (char *)puVar15[(ulong)(byte)POPCOUNT(bVar9 & 7) + 2];
    local_60 = __s;
    if (__s == (char *)0x0) {
      local_58 = (char *)0x0;
    }
    else {
      sVar6 = strlen(__s);
      local_58 = __s + sVar6;
    }
LAB_0333fdd0:
    puVar15 = param_2;
    if ((uVar10 >> 4 & 1) == 0) {
      do {
        if (((uVar11 & 9) != 0) || (puVar15 = (ulong *)puVar15[1], puVar15 == (ulong *)0x0)) {
          uVar7 = 0;
          goto LAB_0333fe28;
        }
        uVar11 = *puVar15;
        bVar18 = (byte)uVar11;
      } while (((uint)uVar11 >> 4 & 1) == 0);
    }
    uVar7 = (undefined4)puVar15[(ulong)(byte)POPCOUNT(bVar18 & 0xf) + 2];
LAB_0333fe28:
    lVar14 = FUN_03346c00(uVar16,&local_60,uVar7);
    if (lVar14 == 0) {
      puVar15 = param_2;
      if ((param_2[1] == 0) || (uVar11 = FUN_0333faf4(param_1), (uVar11 & 1) == 0)) {
        while( true ) {
          uVar10 = (uint)*puVar15;
          if ((uVar10 >> 0x17 & 1) != 0) break;
          if (((*puVar15 & 1) != 0) || (puVar15 = (ulong *)puVar15[1], puVar15 == (ulong *)0x0))
          goto LAB_03340138;
        }
        uVar11 = CONCAT44(uVar10,uVar10) & 0x7fffff007fffff;
        psVar8 = (short *)puVar15[(ulong)(byte)(POPCOUNT((char)uVar11) +
                                                POPCOUNT((char)(uVar11 >> 8)) +
                                               POPCOUNT((char)(uVar11 >> 0x10))) + 2];
        if ((psVar8 != (short *)0x0) && (0 < (int)psVar8[1] + (int)*psVar8)) {
          lVar14 = 0;
          goto LAB_0333ffb8;
        }
LAB_03340138:
        uVar10 = *(uint *)(param_1 + 0x144);
        if ((int)uVar10 < *(int *)(param_1 + 0x140) * 2) {
          FUN_02ef5fd4(plVar1,PTR_PTR_047d1a50,uVar10 * 2 + 2);
          uVar10 = *(uint *)(param_1 + 0x144);
        }
        do {
          uVar3 = uVar10 & uVar3;
          puVar15 = *(ulong **)(*plVar1 + (ulong)uVar3 * 0x10);
          if (puVar15 == (ulong *)0xffffffffffffffff) {
            iVar17 = 1;
LAB_0334019c:
            *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + iVar17;
            *(ulong **)
             (*plVar1 + (-(ulong)(uVar3 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar3 << 4)) =
                 param_2;
            *(undefined8 *)(*(long *)(param_1 + 0x138) + (long)(int)uVar3 * 0x10 + 8) = 1;
            return false;
          }
          if (puVar15 == param_2) {
            iVar17 = 0;
            goto LAB_0334019c;
          }
          uVar3 = uVar3 + 1;
        } while( true );
      }
      uVar10 = *(uint *)(param_1 + 0x144);
      if ((int)uVar10 < *(int *)(param_1 + 0x140) * 2) {
        FUN_02ef5fd4(plVar1,PTR_PTR_047d1a50,uVar10 * 2 + 2);
        uVar10 = *(uint *)(param_1 + 0x144);
      }
      lVar14 = *plVar1;
      while( true ) {
        uVar11 = (ulong)(uVar10 & uVar3);
        puVar15 = *(ulong **)(lVar14 + uVar11 * 0x10);
        if (puVar15 == (ulong *)0xffffffffffffffff) break;
        if (puVar15 == param_2) goto LAB_03340228;
        uVar3 = (uVar10 & uVar3) + 1;
      }
    }
    else {
      uVar10 = *(uint *)(param_1 + 0x144);
      if ((int)uVar10 < *(int *)(param_1 + 0x140) * 2) {
        FUN_02ef5fd4(plVar1,PTR_PTR_047d1a50,uVar10 * 2 + 2);
        uVar10 = *(uint *)(param_1 + 0x144);
      }
      lVar14 = *plVar1;
      while( true ) {
        uVar11 = (ulong)(uVar10 & uVar3);
        puVar15 = *(ulong **)(lVar14 + uVar11 * 0x10);
        if (puVar15 == (ulong *)0xffffffffffffffff) break;
        if (puVar15 == param_2) goto LAB_03340228;
        uVar3 = (uVar10 & uVar3) + 1;
      }
    }
  }
  else {
    bVar5 = false;
LAB_0333fd60:
    if ((bVar5) || ((param_2[2] & 0x1f) != 8)) goto LAB_0333ff20;
LAB_0333fd78:
    if ((uVar10 >> 1 & 1) == 0) {
      do {
        puVar15 = (ulong *)puVar15[1];
        if (puVar15 == (ulong *)0x0) goto LAB_03340138;
      } while (((byte)*puVar15 >> 1 & 1) == 0);
    }
    if (puVar15[3] == 0) goto LAB_03340138;
    puVar15 = param_2;
    if ((uVar10 >> 1 & 1) == 0) {
      do {
        puVar15 = (ulong *)puVar15[1];
        if (puVar15 == (ulong *)0x0) {
          uVar11 = 0;
          goto LAB_0334006c;
        }
      } while (((byte)*puVar15 >> 1 & 1) == 0);
    }
    uVar11 = puVar15[3];
LAB_0334006c:
    uVar11 = FUN_0333faf4(param_1,uVar11);
    if ((uVar11 & 1) == 0) goto LAB_03340138;
    uVar10 = *(uint *)(param_1 + 0x144);
    if ((int)uVar10 < *(int *)(param_1 + 0x140) * 2) {
      FUN_02ef5fd4(plVar1,PTR_PTR_047d1a50,uVar10 * 2 + 2);
      uVar10 = *(uint *)(param_1 + 0x144);
    }
    lVar14 = *plVar1;
    while( true ) {
      uVar11 = (ulong)(uVar10 & uVar3);
      puVar15 = *(ulong **)(lVar14 + uVar11 * 0x10);
      if (puVar15 == (ulong *)0xffffffffffffffff) break;
      if (puVar15 == param_2) goto LAB_03340228;
      uVar3 = (uVar10 & uVar3) + 1;
    }
  }
LAB_03340220:
  iVar17 = 1;
LAB_0334022c:
  *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + iVar17;
  *(ulong **)(lVar14 + (-(uVar11 >> 0x1f) & 0xfffffff000000000 | uVar11 << 4)) = param_2;
  *(undefined8 *)(*(long *)(param_1 + 0x138) + (long)(int)uVar11 * 0x10 + 8) = 0;
  return true;
LAB_0333ffb8:
  uVar10 = (uint)*param_2;
  puVar15 = param_2;
  if ((uVar10 >> 0x17 & 1) == 0) {
    do {
      puVar15 = (ulong *)puVar15[1];
      uVar10 = (uint)*puVar15;
    } while ((uVar10 >> 0x17 & 1) == 0);
  }
  uVar11 = CONCAT44(uVar10,uVar10) & 0x7fffff007fffff;
  uVar11 = FUN_0333faf4(param_1,*(undefined8 *)
                                 (puVar15[(ulong)(byte)(POPCOUNT((char)uVar11) +
                                                        POPCOUNT((char)(uVar11 >> 8)) +
                                                       POPCOUNT((char)(uVar11 >> 0x10))) + 2] +
                                  lVar14 * 8 + 8));
  lVar14 = lVar14 + 1;
  puVar15 = param_2;
  if ((uVar11 & 1) != 0) {
    uVar10 = *(uint *)(param_1 + 0x144);
    if ((int)uVar10 < *(int *)(param_1 + 0x140) * 2) {
      FUN_02ef5fd4(plVar1,PTR_PTR_047d1a50,uVar10 * 2 + 2);
      uVar10 = *(uint *)(param_1 + 0x144);
    }
    lVar14 = *plVar1;
    goto LAB_033401fc;
  }
  while( true ) {
    uVar10 = (uint)*puVar15;
    if ((uVar10 >> 0x17 & 1) != 0) break;
    if (((*puVar15 & 1) != 0) || (puVar15 = (ulong *)puVar15[1], puVar15 == (ulong *)0x0))
    goto LAB_03340138;
  }
  if (puVar15 == (ulong *)0x0) goto LAB_03340138;
  uVar11 = CONCAT44(uVar10,uVar10) & 0x7fffff007fffff;
  psVar8 = (short *)puVar15[(ulong)(byte)(POPCOUNT((char)uVar11) + POPCOUNT((char)(uVar11 >> 8)) +
                                         POPCOUNT((char)(uVar11 >> 0x10))) + 2];
  if ((psVar8 == (short *)0x0) || ((long)psVar8[1] + (long)*psVar8 <= lVar14)) goto LAB_03340138;
  goto LAB_0333ffb8;
LAB_033401fc:
  uVar11 = (ulong)(uVar10 & uVar3);
  puVar15 = *(ulong **)(lVar14 + uVar11 * 0x10);
  if (puVar15 == (ulong *)0xffffffffffffffff) goto LAB_03340220;
  if (puVar15 == param_2) goto LAB_03340228;
  uVar3 = (uVar10 & uVar3) + 1;
  goto LAB_033401fc;
LAB_03340228:
  iVar17 = 0;
  goto LAB_0334022c;
}


