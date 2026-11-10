/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003d7270; name: FUN_003d7270
 */


undefined8 FUN_003d7270(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  short *psVar7;
  long lVar8;
  long lVar9;
  short *psVar10;
  short *psVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  short *psVar17;
  
  lVar13 = *(long *)(param_1 + 0x550);
  lVar16 = *(long *)(param_1 + 0xa8);
  uVar1 = *(uint *)(lVar13 + 0x1c) & 0x30000;
  FUN_00452f80(*(undefined8 *)(param_1 + 0x1980),"external/openssl/ssl/t1_lib.c",0x6df);
  *(undefined8 *)(param_1 + 0x1988) = 0;
  *(undefined8 *)(param_1 + 0x1980) = 0;
  if ((*(int *)(param_1 + 0x38) == 0) &&
     (psVar7 = *(short **)(lVar13 + 0x1a8), uVar1 == 0 && psVar7 != (short *)0x0)) {
    lVar13 = *(long *)(lVar13 + 0x1b0);
  }
  else {
    psVar7 = *(short **)(lVar13 + 0x198);
    if (uVar1 == 0 && psVar7 != (short *)0x0) {
      lVar13 = *(long *)(lVar13 + 0x1a0);
    }
    else {
      lVar13 = *(long *)(param_1 + 0x550);
      uVar2 = *(uint *)(lVar13 + 0x1c) & 0x30000;
      if (uVar2 == 0x30000) {
        lVar13 = 2;
        psVar7 = &DAT_03cdd17e;
      }
      else if (uVar2 == 0x20000) {
        lVar13 = 1;
        psVar7 = &DAT_03cdd180;
      }
      else if (uVar2 == 0x10000) {
        lVar13 = 1;
        psVar7 = &DAT_03cdd17e;
      }
      else if ((*(int *)(param_1 + 0x38) == 0) &&
              (psVar7 = *(short **)(lVar13 + 0x1a8), psVar7 != (short *)0x0)) {
        lVar13 = *(long *)(lVar13 + 0x1b0);
      }
      else {
        psVar7 = *(short **)(lVar13 + 0x198);
        if (psVar7 == (short *)0x0) {
          lVar13 = 0x1a;
          psVar7 = &DAT_03cdd182;
        }
        else {
          lVar13 = *(long *)(lVar13 + 0x1a0);
        }
      }
    }
  }
  psVar11 = *(short **)(*(long *)(param_1 + 0xa8) + 0x2e8);
  lVar9 = *(long *)(*(long *)(param_1 + 0xa8) + 0x2f8);
  psVar17 = psVar11;
  lVar3 = lVar13;
  if ((*(uint *)(param_1 + 0x694) & 0x400000) != 0 || uVar1 != 0) {
    psVar17 = psVar7;
    lVar3 = lVar9;
    lVar9 = lVar13;
    psVar7 = psVar11;
  }
  if (lVar9 != 0) {
    if (lVar3 == 0) {
      do {
        uVar5 = FUN_003d62c0(*psVar17);
        FUN_003d7b40(param_1,0x5000c,uVar5);
        lVar9 = lVar9 + -1;
        psVar17 = psVar17 + 1;
      } while (lVar9 != 0);
    }
    else {
      lVar13 = 0;
      lVar15 = 0;
      psVar11 = psVar17;
      do {
        uVar5 = FUN_003d62c0(*psVar11);
        iVar4 = FUN_003d7b40(param_1,0x5000c,uVar5);
        if (iVar4 != 0) {
          lVar8 = lVar3;
          psVar10 = psVar7;
          do {
            if (*psVar11 == *psVar10) {
              lVar13 = lVar13 + 1;
              break;
            }
            psVar10 = psVar10 + 1;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        lVar15 = lVar15 + 1;
        psVar11 = psVar11 + 1;
      } while (lVar15 != lVar9);
      if (lVar13 != 0) {
        puVar6 = (undefined8 *)FUN_00452c30(lVar13 << 3,"external/openssl/ssl/t1_lib.c",0x6f8);
        if (puVar6 == (undefined8 *)0x0) {
          FUN_004806c0(0x14,0x277,0x41,"external/openssl/ssl/t1_lib.c",0x6f9);
          return 0;
        }
        lVar13 = 0;
        lVar15 = 0;
        puVar14 = puVar6;
        do {
          uVar5 = FUN_003d62c0(*psVar17);
          iVar4 = FUN_003d7b40(param_1,0x5000c,uVar5);
          if (iVar4 != 0) {
            lVar8 = lVar3;
            psVar11 = psVar7;
            do {
              if (*psVar17 == *psVar11) {
                lVar13 = lVar13 + 1;
                if (puVar14 != (undefined8 *)0x0) {
                  *puVar14 = uVar5;
                  puVar14 = puVar14 + 1;
                }
                break;
              }
              psVar11 = psVar11 + 1;
              lVar8 = lVar8 + -1;
            } while (lVar8 != 0);
          }
          lVar15 = lVar15 + 1;
          psVar17 = psVar17 + 1;
        } while (lVar15 != lVar9);
        goto LAB_003d74e4;
      }
    }
  }
  lVar13 = 0;
  puVar6 = (undefined8 *)0x0;
LAB_003d74e4:
  *(undefined8 **)(param_1 + 0x1980) = puVar6;
  *(long *)(param_1 + 0x1988) = lVar13;
  *(undefined4 *)(lVar16 + 0x330) = 0;
  *(undefined8 *)(lVar16 + 0x318) = 0;
  *(undefined8 *)(lVar16 + 0x310) = 0;
  *(undefined8 *)(lVar16 + 0x328) = 0;
  *(undefined8 *)(lVar16 + 800) = 0;
  if (*(long *)(param_1 + 0x1988) != 0) {
    uVar12 = 0;
    do {
      lVar13 = *(long *)(*(long *)(param_1 + 0x1980) + uVar12 * 8);
      if ((((((*(byte *)(*(long *)(*(int **)(param_1 + 8) + 0x30) + 0x60) >> 3 & 1) != 0) ||
            (iVar4 = **(int **)(param_1 + 8), iVar4 < 0x304)) || (iVar4 == 0x10000)) ||
          (*(int *)(lVar13 + 0x14) != 6)) &&
         ((lVar13 = lVar16 + (long)*(int *)(lVar13 + 0x18) * 4, *(int *)(lVar13 + 0x310) == 0 &&
          (iVar4 = FUN_003b1f20(), iVar4 == 0)))) {
        *(undefined4 *)(lVar13 + 0x310) = 0x102;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < *(ulong *)(param_1 + 0x1988));
  }
  return 1;
}


