/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002e626c; name: FUN_002e626c
 */


undefined8 FUN_002e626c(uint *param_1,uint param_2,uint param_3)

{
  undefined *puVar1;
  long *plVar2;
  uint *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  long *plVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  long lVar11;
  uint *puVar12;
  
  if ((int)param_3 < (int)param_2) {
    return 0;
  }
  if (((int)param_2 < 0x7b) && (0x40 < (int)param_3)) {
    uVar5 = param_2;
    if ((int)param_2 < 0x42) {
      uVar5 = 0x41;
    }
    uVar7 = param_3;
    if (0x59 < (int)param_3) {
      uVar7 = 0x5a;
    }
    if ((int)uVar5 <= (int)uVar7) {
      *param_1 = *param_1 |
                 ~(-1 << (ulong)((uVar7 - uVar5) + 1 & 0x1f)) << (ulong)(uVar5 - 0x41 & 0x1f);
    }
    uVar5 = param_2;
    if ((int)param_2 < 0x62) {
      uVar5 = 0x61;
    }
    uVar7 = param_3;
    if (0x79 < (int)param_3) {
      uVar7 = 0x7a;
    }
    if ((int)uVar5 <= (int)uVar7) {
      param_1[1] = param_1[1] |
                   ~(-1 << (ulong)((uVar7 - uVar5) + 1 & 0x1f)) << (ulong)(uVar5 - 0x61 & 0x1f);
    }
  }
  puVar12 = param_1 + 6;
  puVar3 = *(uint **)puVar12;
  uVar5 = param_3;
  if (puVar3 != (uint *)0x0) {
    puVar9 = puVar12;
    puVar8 = puVar3;
    do {
      if ((int)param_2 <= (int)puVar8[8]) {
        puVar9 = puVar8;
      }
      puVar8 = *(uint **)(puVar8 + (ulong)((int)puVar8[8] < (int)param_2) * 2);
    } while (puVar8 != (uint *)0x0);
    if (((puVar9 != puVar12) && ((int)puVar9[7] <= (int)param_2)) &&
       ((int)param_3 <= (int)puVar9[8])) {
      return 0;
    }
    if ((0 < (int)param_2) && (puVar3 != (uint *)0x0)) {
      puVar8 = puVar3;
      puVar9 = puVar12;
      do {
        if ((int)(param_2 - 1) <= (int)puVar8[8]) {
          puVar9 = puVar8;
        }
        puVar8 = *(uint **)(puVar8 + (ulong)((int)puVar8[8] < (int)(param_2 - 1)) * 2);
      } while (puVar8 != (uint *)0x0);
      if ((puVar9 != puVar12) && ((int)puVar9[7] < (int)param_2)) {
        param_2 = puVar9[7];
        uVar7 = puVar9[8];
        uVar5 = uVar7;
        if ((int)uVar7 <= (int)param_3) {
          uVar5 = param_3;
        }
        param_1[2] = param_2 + ~uVar7 + param_1[2];
        plVar2 = *(long **)(puVar9 + 2);
        if (*(long **)(puVar9 + 2) == (long *)0x0) {
          puVar8 = puVar9 + 4;
          plVar6 = *(long **)puVar8;
          if ((uint *)*plVar6 != puVar9) {
            do {
              lVar11 = *(long *)puVar8;
              puVar8 = (uint *)(lVar11 + 0x10);
              plVar6 = *(long **)puVar8;
            } while (*plVar6 != lVar11);
          }
        }
        else {
          do {
            plVar6 = plVar2;
            plVar2 = (long *)*plVar6;
          } while ((long *)*plVar6 != (long *)0x0);
        }
        if (*(uint **)(param_1 + 4) == puVar9) {
          *(long **)(param_1 + 4) = plVar6;
        }
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -1;
        FUN_01336080(puVar3,puVar9);
        FUN_0049e790(PTR_LAB_047cba48,puVar9);
      }
    }
  }
  if (((int)uVar5 < 0x10ffff) && (puVar3 = *(uint **)puVar12, puVar3 != (uint *)0x0)) {
    puVar9 = puVar3;
    puVar8 = puVar12;
    do {
      puVar10 = puVar9;
      if ((int)puVar9[8] <= (int)uVar5) {
        puVar10 = puVar8;
      }
      puVar9 = *(uint **)(puVar9 + (ulong)((int)puVar9[8] <= (int)uVar5) * 2);
      puVar8 = puVar10;
    } while (puVar9 != (uint *)0x0);
    if ((puVar10 != puVar12) && ((int)puVar10[7] <= (int)(uVar5 + 1))) {
      uVar5 = puVar10[8];
      param_1[2] = puVar10[7] + ~uVar5 + param_1[2];
      plVar2 = *(long **)(puVar10 + 2);
      if (*(long **)(puVar10 + 2) == (long *)0x0) {
        puVar9 = puVar10 + 4;
        plVar6 = *(long **)puVar9;
        if ((uint *)*plVar6 != puVar10) {
          do {
            lVar11 = *(long *)puVar9;
            puVar9 = (uint *)(lVar11 + 0x10);
            plVar6 = *(long **)puVar9;
          } while (*plVar6 != lVar11);
        }
      }
      else {
        do {
          plVar6 = plVar2;
          plVar2 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
      if (*(uint **)(param_1 + 4) == puVar10) {
        *(long **)(param_1 + 4) = plVar6;
      }
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -1;
      FUN_01336080(puVar3,puVar10);
      FUN_0049e790(PTR_LAB_047cba48,puVar10);
    }
  }
  puVar1 = PTR_LAB_047cba48;
  puVar9 = param_1 + 6;
  puVar3 = *(uint **)puVar9;
  while (puVar3 != (uint *)0x0) {
    puVar10 = puVar3;
    puVar8 = puVar12;
    do {
      if ((int)param_2 <= (int)puVar10[8]) {
        puVar8 = puVar10;
      }
      puVar10 = *(uint **)(puVar10 + (ulong)((int)puVar10[8] < (int)param_2) * 2);
    } while (puVar10 != (uint *)0x0);
    if ((puVar8 == puVar12) || ((int)uVar5 < (int)puVar8[7])) {
      param_1[2] = (uVar5 - param_2) + param_1[2] + 1;
      if (puVar3 != (uint *)0x0) goto LAB_002e66a8;
      goto LAB_002e6658;
    }
    param_1[2] = puVar8[7] + ~puVar8[8] + param_1[2];
    plVar2 = *(long **)(puVar8 + 2);
    if (*(long **)(puVar8 + 2) == (long *)0x0) {
      puVar10 = puVar8 + 4;
      plVar6 = *(long **)puVar10;
      if ((uint *)*plVar6 != puVar8) {
        do {
          lVar11 = *(long *)puVar10;
          puVar10 = (uint *)(lVar11 + 0x10);
          plVar6 = *(long **)puVar10;
        } while (*plVar6 != lVar11);
      }
    }
    else {
      do {
        plVar6 = plVar2;
        plVar2 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
    }
    if (*(uint **)(param_1 + 4) == puVar8) {
      *(long **)(param_1 + 4) = plVar6;
    }
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -1;
    FUN_01336080(puVar3,puVar8);
    FUN_0049e790(puVar1,puVar8);
    puVar3 = *(uint **)(param_1 + 6);
  }
  param_1[2] = (uVar5 - param_2) + param_1[2] + 1;
LAB_002e6658:
  puVar3 = puVar12;
  puVar9 = puVar12;
LAB_002e665c:
  if (*(long *)puVar9 == 0) {
    puVar4 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x28);
    *(ulong *)((long)puVar4 + 0x1c) = CONCAT44(uVar5,param_2);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = puVar3;
    *(undefined8 **)puVar9 = puVar4;
    if (**(long **)(param_1 + 4) != 0) {
      *(long *)(param_1 + 4) = **(long **)(param_1 + 4);
      puVar4 = *(undefined8 **)puVar9;
    }
    FUN_010108e0(*(undefined8 *)(param_1 + 6),puVar4);
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
  }
  return 1;
LAB_002e66a8:
  if ((int)uVar5 < (int)puVar3[7]) {
    puVar9 = puVar3;
    if (*(uint **)puVar3 == (uint *)0x0) goto LAB_002e665c;
    puVar12 = *(uint **)puVar3;
  }
  else {
    if ((int)param_2 <= (int)puVar3[8]) goto LAB_002e665c;
    puVar9 = puVar3 + 2;
    puVar12 = *(uint **)puVar9;
    if (*(uint **)puVar9 == (uint *)0x0) goto LAB_002e665c;
  }
  puVar3 = puVar12;
  goto LAB_002e66a8;
}


