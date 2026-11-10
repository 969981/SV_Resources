/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0012bce0; name: FUN_0012bce0
 */


long FUN_0012bce0(long param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  int iVar19;
  ulong uVar20;
  long local_68;
  
  lVar10 = *(long *)(param_1 + 0x18);
  *(undefined1 *)(lVar10 + 0x65) = 2;
  lVar12 = *(long *)(lVar10 + 0x90);
  *(undefined8 *)(lVar10 + 0x90) = 0;
  if ((*(byte *)(param_1 + 9) & 0x18) != 0) {
    FUN_00129df0(lVar10,param_1);
  }
  if (((*(byte *)(lVar10 + 0x48) >> 6 & 1) != 0) &&
     ((*(byte *)(*(long *)(lVar10 + 0x40) + 9) & 0x18) != 0)) {
    FUN_00129df0(lVar10);
  }
  FUN_0012c230(lVar10);
  if (*(long *)(lVar10 + 0x88) == 0) {
    lVar18 = 0;
    lVar3 = *(long *)(lVar10 + 0xf8);
    if (lVar3 == 0) goto LAB_0012be38;
LAB_0012bd80:
    plVar6 = (long *)(lVar10 + 0xf8);
    iVar19 = 0;
    do {
      iVar19 = iVar19 + 1;
      if (((*(byte *)(lVar3 + 9) & 0x18) == 0) && (*(long *)(lVar3 + 0x38) != 0)) {
        plVar6 = (long *)(lVar3 + 0x50);
      }
      else {
        *plVar6 = *(long *)(lVar3 + 0x50);
        lVar17 = *(long *)(lVar3 + 0x38);
        *(long *)(lVar3 + 0x50) = lVar3;
        for (; lVar17 != 0; lVar17 = *(long *)(lVar17 + 0x18)) {
          iVar19 = iVar19 + 1;
          if ((((*(byte *)(lVar17 + 9) & 0x18) == 0) &&
              ((*(byte *)(*(long **)(lVar17 + 0x10) + 1) >> 6 & 1) != 0)) &&
             ((*(byte *)(**(long **)(lVar17 + 0x10) + 9) & 0x18) != 0)) {
            FUN_00129df0(lVar10);
          }
        }
      }
      lVar3 = *plVar6;
    } while (lVar3 != 0);
    if (*(long *)(lVar10 + 0x88) == 0) {
      *(long *)(lVar10 + 0x88) = lVar12;
      local_68 = 0;
      goto joined_r0x0012c220;
    }
    local_68 = 0;
    do {
      lVar3 = FUN_0012c4b0(lVar10);
      local_68 = lVar3 + local_68;
    } while (*(long *)(lVar10 + 0x88) != 0);
  }
  else {
    lVar18 = 0;
    do {
      lVar3 = FUN_0012c4b0(lVar10);
      lVar18 = lVar3 + lVar18;
    } while (*(long *)(lVar10 + 0x88) != 0);
    lVar3 = *(long *)(lVar10 + 0xf8);
    if (lVar3 != 0) goto LAB_0012bd80;
LAB_0012be38:
    iVar19 = 0;
    local_68 = 0;
  }
  *(long *)(lVar10 + 0x88) = lVar12;
joined_r0x0012c220:
  lVar3 = 0;
  while (lVar12 != 0) {
    lVar12 = FUN_0012c4b0(lVar10);
    lVar3 = lVar12 + lVar3;
    lVar12 = *(long *)(lVar10 + 0x88);
  }
  uVar11 = 0;
  do {
    lVar12 = *(long *)(lVar10 + 0xa0);
    *(undefined8 *)(lVar10 + 0xa0) = 0;
    if (lVar12 == 0) break;
    bVar1 = false;
    do {
      lVar17 = *(long *)(lVar12 + 0x30);
      *(byte *)(lVar12 + 9) = *(byte *)(lVar12 + 9) | 0x20;
      iVar2 = FUN_0012cd10(lVar10,lVar12,uVar11);
      if (iVar2 != 0) {
        while (*(long *)(lVar10 + 0x88) != 0) {
          FUN_0012c4b0(lVar10);
        }
        bVar1 = true;
      }
      lVar12 = lVar17;
    } while (lVar17 != 0);
    uVar11 = uVar11 ^ 1;
  } while (bVar1);
  FUN_0012c350(lVar10,*(undefined8 *)(lVar10 + 0x98),0);
  FUN_0012c350(lVar10,*(undefined8 *)(lVar10 + 0xa8),0);
  uVar15 = *(undefined8 *)(lVar10 + 0x98);
  uVar13 = *(undefined8 *)(lVar10 + 0xa8);
  plVar6 = (long *)(lVar10 + 0xb0);
  do {
    plVar5 = plVar6;
    plVar6 = (long *)*plVar5;
  } while (plVar6 != (long *)0x0);
  plVar7 = *(long **)(lVar10 + 0x80);
  plVar9 = *(long **)(lVar10 + 0xe8);
  plVar6 = (long *)(lVar10 + 0x80);
  if (plVar7 != plVar9) {
    do {
      while ((*(byte *)((long)plVar7 + 9) & 0x18) != 0) {
        if (plVar7 == *(long **)(lVar10 + 0xe0)) {
          *(long *)(lVar10 + 0xe0) = *plVar7;
        }
        *plVar6 = *plVar7;
        *plVar7 = *plVar5;
        *plVar5 = (long)plVar7;
        plVar9 = *(long **)(lVar10 + 0xe8);
        plVar5 = plVar7;
        plVar7 = (long *)*plVar6;
        if ((long *)*plVar6 == plVar9) goto LAB_0012bf7c;
      }
      plVar8 = (long *)*plVar7;
      plVar6 = plVar7;
      plVar7 = plVar8;
    } while (plVar8 != plVar9);
  }
LAB_0012bf7c:
  plVar6 = *(long **)(lVar10 + 0xb0);
  if (plVar6 == (long *)0x0) {
    lVar12 = 0;
  }
  else {
    lVar12 = 0;
    do {
      lVar12 = lVar12 + 1;
      if ((*(byte *)((long)plVar6 + 9) & 0x18) != 0) {
        FUN_00129df0(lVar10,plVar6);
      }
      plVar6 = (long *)*plVar6;
    } while (plVar6 != (long *)0x0);
  }
  lVar17 = 0;
  lVar4 = *(long *)(lVar10 + 0x88);
  while (lVar4 != 0) {
    lVar4 = FUN_0012c4b0(lVar10);
    lVar17 = lVar4 + lVar17;
    lVar4 = *(long *)(lVar10 + 0x88);
  }
  uVar11 = 0;
  do {
    lVar4 = *(long *)(lVar10 + 0xa0);
    *(undefined8 *)(lVar10 + 0xa0) = 0;
    if (lVar4 == 0) goto LAB_0012c0f4;
    bVar1 = false;
    do {
      lVar14 = *(long *)(lVar4 + 0x30);
      *(byte *)(lVar4 + 9) = *(byte *)(lVar4 + 9) | 0x20;
      iVar2 = FUN_0012cd10(lVar10,lVar4,uVar11);
      if (iVar2 != 0) {
        while (*(long *)(lVar10 + 0x88) != 0) {
          FUN_0012c4b0(lVar10);
        }
        bVar1 = true;
      }
      lVar4 = lVar14;
    } while (lVar14 != 0);
    uVar11 = uVar11 ^ 1;
  } while (bVar1);
  for (lVar4 = *(long *)(lVar10 + 0xa0); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x30)) {
    if (*(byte *)(lVar4 + 0xb) != 0x1f) {
      uVar16 = *(ulong *)(lVar4 + 0x18);
      uVar20 = uVar16 + (long)(1 << (ulong)(*(byte *)(lVar4 + 0xb) & 0x1f)) * 0x18;
      do {
        if (((*(byte *)(uVar16 + 9) >> 6 & 1) != 0) &&
           (lVar14 = *(long *)(uVar16 + 0x10), lVar14 != 0)) {
          if ((*(byte *)(lVar14 + 8) & 0xf) == 4) {
            if ((*(byte *)(lVar14 + 9) & 0x18) != 0) {
              FUN_00129df0(lVar10);
            }
          }
          else if ((*(byte *)(lVar14 + 9) & 0x18) != 0) {
            *(undefined1 *)(uVar16 + 8) = 0x10;
          }
        }
        if (((*(byte *)(uVar16 + 8) & 0xf) == 0) && ((*(byte *)(uVar16 + 9) >> 6 & 1) != 0)) {
          *(undefined1 *)(uVar16 + 9) = 0xb;
        }
        uVar16 = uVar16 + 0x18;
      } while (uVar16 < uVar20);
    }
  }
LAB_0012c0f4:
  for (lVar4 = *(long *)(lVar10 + 0xa8); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x30)) {
    if (*(byte *)(lVar4 + 0xb) != 0x1f) {
      uVar16 = *(ulong *)(lVar4 + 0x18);
      uVar20 = uVar16 + (long)(1 << (ulong)(*(byte *)(lVar4 + 0xb) & 0x1f)) * 0x18;
      do {
        if (((*(byte *)(uVar16 + 9) >> 6 & 1) != 0) &&
           (lVar14 = *(long *)(uVar16 + 0x10), lVar14 != 0)) {
          if ((*(byte *)(lVar14 + 8) & 0xf) == 4) {
            if ((*(byte *)(lVar14 + 9) & 0x18) != 0) {
              FUN_00129df0(lVar10);
            }
          }
          else if ((*(byte *)(lVar14 + 9) & 0x18) != 0) {
            *(undefined1 *)(uVar16 + 8) = 0x10;
          }
        }
        if (((*(byte *)(uVar16 + 8) & 0xf) == 0) && ((*(byte *)(uVar16 + 9) >> 6 & 1) != 0)) {
          *(undefined1 *)(uVar16 + 9) = 0xb;
        }
        uVar16 = uVar16 + 0x18;
      } while (uVar16 < uVar20);
    }
  }
  FUN_0012c350(lVar10,*(undefined8 *)(lVar10 + 0x98),uVar15);
  FUN_0012c350(lVar10,*(undefined8 *)(lVar10 + 0xa8),uVar13);
  FUN_0013bb80(lVar10);
  *(byte *)(lVar10 + 100) = *(byte *)(lVar10 + 100) ^ 0x18;
  return lVar18 + iVar19 + local_68 + lVar3 + lVar12 + lVar17;
}


