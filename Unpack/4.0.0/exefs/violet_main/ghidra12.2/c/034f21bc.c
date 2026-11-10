/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034f21bc; name: FUN_034f21bc
 */


void FUN_034f21bc(ulong param_1)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  uint *puVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined4 *puVar13;
  long lVar14;
  uint uVar15;
  uint auStack_260 [128];
  
  puVar3 = PTR_DAT_047e6ce8;
  if (DAT_048b0840 == 0) {
    if ((param_1 & 1) == 0) {
      return;
    }
  }
  else {
    plVar12 = DAT_048b0838;
    if ((param_1 & 1) == 0) {
      do {
        lVar9 = *plVar12;
        *(undefined4 *)(lVar9 + 0x184) = 0x2c;
        (**(code **)(**(long **)(lVar9 + 0x118) + 0xf0))();
        if (*(int *)(lVar9 + 0x130) == 1) {
          FUN_03509cdc(lVar9,lVar9 + 0x158);
        }
        plVar12 = plVar12 + 1;
        uVar4 = (ulong)DAT_048b0840;
      } while (plVar12 != DAT_048b0838 + uVar4);
    }
    else {
      do {
        lVar9 = *plVar12;
        *(undefined4 *)(lVar9 + 0x184) = 0x2c;
        (**(code **)(**(long **)(lVar9 + 0x118) + 0xf0))();
        if ((*(int *)(lVar9 + 0x130) == 1) &&
           (uVar4 = FUN_03509cdc(lVar9,lVar9 + 0x158), (uVar4 & 1) != 0)) {
          *(undefined2 *)(lVar9 + 0x16a) = 0;
          *(undefined8 *)(lVar9 + 0x16c) = 0;
          *(undefined4 *)(lVar9 + 0x174) = 0xffffffff;
          *(undefined4 *)(lVar9 + 0x184) = 0x2b;
        }
        plVar12 = plVar12 + 1;
        uVar4 = (ulong)DAT_048b0840;
      } while (plVar12 != DAT_048b0838 + uVar4);
    }
    if ((param_1 & 1) == 0) {
      return;
    }
    if ((int)uVar4 != 0) {
      (**(code **)(puVar3 + 0x58))(DAT_048b0838,0,uVar4,1,FUN_034f2ad4,0,"AK::Voice");
    }
  }
  if (DAT_048b0810 == 0) {
    return;
  }
  if (DAT_048b084c != '\0') {
    return;
  }
  lVar14 = (long)(int)DAT_048b0820;
  lVar9 = -(lVar14 * 4 + 0xfU & 0xfffffffffffffff0);
  puVar13 = (undefined4 *)((long)auStack_260 + lVar9 + 0x200);
  *puVar13 = 0;
  if ((int)DAT_048b0820 < 2) goto LAB_034f2538;
  if (DAT_048b0820 == 2) {
    iVar5 = 0;
    lVar9 = 1;
LAB_034f2394:
    puVar13[lVar9] = DAT_048b0818[lVar9 + -1] + iVar5;
  }
  else {
    iVar5 = 0;
    uVar4 = 0;
    puVar7 = DAT_048b0818 + 1;
    piVar8 = (int *)((long)auStack_260 + lVar9 + 0x208);
    do {
      uVar6 = uVar4;
      uVar15 = puVar7[-1];
      piVar8[-1] = uVar15 + iVar5;
      uVar4 = uVar6 + 2;
      iVar5 = *puVar7 + uVar15 + iVar5;
      *piVar8 = iVar5;
      puVar7 = puVar7 + 2;
      piVar8 = piVar8 + 2;
    } while (((ulong)DAT_048b0820 - 1 & 0xfffffffffffffffe) != uVar4);
    lVar9 = uVar6 + 3;
    if (((ulong)DAT_048b0820 - 1 & 1) != 0) goto LAB_034f2394;
  }
  while( true ) {
    lVar9 = lVar14 + -1;
    uVar15 = DAT_048b0818[lVar9];
    uVar2 = puVar13[lVar9];
    if ((int)uVar15 < 2) {
      if (uVar15 == 1) {
        lVar10 = *(long *)(DAT_048b0808 + (ulong)uVar2 * 8);
        for (lVar11 = *(long *)(lVar10 + 0x20); lVar11 != 0; lVar11 = *(long *)(lVar11 + 0x18)) {
          if ((~*(byte *)(lVar11 + 0x1d8) & 3) != 0 && (*(byte *)(lVar11 + 0x1d8) & 4) == 0) {
            FUN_03505910(lVar10,lVar11);
          }
        }
        FUN_03506548(lVar10);
        if ((*(long *)(lVar10 + 0x28) == 0) &&
           (((*(long *)(lVar10 + 0x60) == 0 || (*(long *)(*(long *)(lVar10 + 0x60) + 0xa0) == 0)) &&
            (lVar11 = FUN_0349fff0(lVar10 + 0x60), lVar11 != 0)))) {
          FUN_034ecd0c(lVar10,lVar11);
        }
      }
    }
    else if ((DAT_048b0848 == '\x01') && (*(char *)(DAT_048b0828 + lVar9) != '\0')) {
      uVar15 = uVar15 + uVar2;
      do {
        uVar15 = uVar15 - 1;
        lVar10 = *(long *)(DAT_048b0808 + (ulong)uVar15 * 8);
        for (lVar11 = *(long *)(lVar10 + 0x20); lVar11 != 0; lVar11 = *(long *)(lVar11 + 0x18)) {
          if ((~*(byte *)(lVar11 + 0x1d8) & 3) != 0 && (*(byte *)(lVar11 + 0x1d8) & 4) == 0) {
            FUN_03505910(lVar10,lVar11);
          }
        }
        FUN_03506548(lVar10);
        if (((*(long *)(lVar10 + 0x28) == 0) &&
            ((*(long *)(lVar10 + 0x60) == 0 || (*(long *)(*(long *)(lVar10 + 0x60) + 0xa0) == 0))))
           && (lVar11 = FUN_0349fff0(lVar10 + 0x60), lVar11 != 0)) {
          FUN_034ecd0c(lVar10,lVar11);
        }
      } while ((int)uVar2 < (int)uVar15);
    }
    else {
      (**(code **)(puVar3 + 0x58))
                (&DAT_048b0808,(ulong)uVar2,uVar15 + uVar2,1,FUN_034f2b24,0,"AK::Bus");
    }
    if (lVar14 < 3) break;
    lVar14 = lVar9;
  }
LAB_034f2538:
  uVar4 = (ulong)*DAT_048b0818;
  uVar15 = DAT_048b0810;
  if (0 < (int)*DAT_048b0818) {
    do {
      lVar14 = *(long *)(DAT_048b0808 + (uVar4 - 1 & 0xffffffff) * 8);
      for (lVar9 = *(long *)(lVar14 + 0x20); lVar9 != 0; lVar9 = *(long *)(lVar9 + 0x18)) {
        if ((~*(byte *)(lVar9 + 0x1d8) & 3) != 0 && (*(byte *)(lVar9 + 0x1d8) & 4) == 0) {
          FUN_03505910(lVar14,lVar9);
        }
      }
      FUN_03506548(lVar14);
      if ((*(long *)(lVar14 + 0x28) == 0) &&
         (((*(long *)(lVar14 + 0x60) == 0 || (*(long *)(*(long *)(lVar14 + 0x60) + 0xa0) == 0)) &&
          (lVar9 = FUN_0349fff0(lVar14 + 0x60), lVar9 != 0)))) {
        FUN_034ecd0c(lVar14,lVar9);
      }
      bVar1 = 1 < (long)uVar4;
      uVar4 = uVar4 - 1;
      uVar15 = DAT_048b0810;
    } while (bVar1);
  }
  while (uVar15 = uVar15 - 1, -1 < (int)uVar15) {
    FUN_03504fb0(*(undefined8 *)(DAT_048b0808 + (ulong)uVar15 * 8));
    if (DAT_048b0848 == '\x01') {
      lVar14 = *(long *)(DAT_048b0808 + (ulong)uVar15 * 8);
      for (lVar9 = *(long *)(lVar14 + 0x20); lVar9 != 0; lVar9 = *(long *)(lVar9 + 0x18)) {
        if (((*(byte *)(lVar9 + 0x1d8) >> 2 & 1) != 0) && ((*(byte *)(lVar9 + 0x1d8) & 3) != 3)) {
          FUN_03505910(lVar14,lVar9);
        }
      }
    }
  }
  return;
}


