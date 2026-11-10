/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d41b30; name: FUN_00d41b30
 */


/* WARNING: Removing unreachable block (ram,0x00d42104) */
/* WARNING: Removing unreachable block (ram,0x00d4229c) */
/* WARNING: Removing unreachable block (ram,0x00d422ac) */
/* WARNING: Removing unreachable block (ram,0x00d42124) */

void FUN_00d41b30(uint *param_1,uint *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar10;
  uint *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint *puVar15;
  undefined8 uVar16;
  uint *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  uint *local_e0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
LAB_00d41b74:
  puVar9 = param_2 + -0x1e;
  puVar8 = param_1;
LAB_00d41b80:
  param_1 = puVar8;
  uVar12 = (long)param_2 - (long)param_1;
  switch(((long)uVar12 >> 3) * -0x1111111111111111) {
  case 0:
  case 1:
    goto switchD_00d41bac_caseD_0;
  case 2:
    if (*param_1 <= *puVar9) {
      return;
    }
    break;
  case 3:
    puVar8 = param_1 + 0x1e;
    uVar7 = *puVar8;
    if (uVar7 < *param_1) {
      if (uVar7 <= *puVar9) {
        FUN_00d42490(param_1,puVar8);
        if (param_1[0x1e] <= *puVar9) {
          return;
        }
        param_1 = puVar8;
      }
    }
    else {
      if (uVar7 <= *puVar9) {
        return;
      }
      FUN_00d42490(puVar8,puVar9);
      if (*param_1 <= param_1[0x1e]) {
        return;
      }
      puVar9 = puVar8;
    }
    break;
  case 4:
    FUN_00d42350(param_1,param_1 + 0x1e,param_1 + 0x3c,puVar9);
    return;
  case 5:
    FUN_00d42b30(param_1,param_1 + 0x1e,param_1 + 0x3c,param_1 + 0x5a,puVar9);
    return;
  default:
    if (0x347 < (long)uVar12) {
      local_e0 = param_1 + (uVar12 / 0xf0) * 0x1e;
      if ((long)uVar12 < 0x1d449) {
        uVar7 = *local_e0;
        if (uVar7 < *param_1) {
          if (*puVar9 < uVar7) {
            FUN_00d42490(param_1,puVar9);
          }
          else {
            FUN_00d42490(param_1,local_e0);
            if (*puVar9 < *local_e0) {
              puVar8 = local_e0;
              puVar11 = puVar9;
              goto LAB_00d41d3c;
            }
          }
LAB_00d41d6c:
          iVar6 = 1;
        }
        else if (*puVar9 < uVar7) {
          FUN_00d42490(local_e0,puVar9);
          if (*param_1 <= *local_e0) goto LAB_00d41d6c;
          puVar8 = param_1;
          puVar11 = local_e0;
LAB_00d41d3c:
          FUN_00d42490(puVar8,puVar11);
          iVar6 = 2;
        }
        else {
          iVar6 = 0;
        }
      }
      else {
        iVar6 = FUN_00d42b30(param_1,param_1 + (uVar12 / 0x1e0) * 0x1e,local_e0,
                             local_e0 + (uVar12 / 0x1e0) * 0x1e,puVar9);
      }
      uVar7 = *param_1;
      if (*local_e0 <= uVar7) goto LAB_00d42168;
      puVar11 = puVar9;
      goto LAB_00d41d84;
    }
    puVar11 = param_1 + 0x3c;
    puVar8 = param_1 + 0x1e;
    uVar7 = *puVar8;
    puVar9 = param_1;
    if (uVar7 < *param_1) {
      if (uVar7 <= *puVar11) {
        FUN_00d42490(param_1,puVar8);
        if (param_1[0x1e] <= param_1[0x3c]) goto LAB_00d41f60;
        puVar9 = puVar8;
      }
      puVar8 = puVar11;
LAB_00d41f5c:
      FUN_00d42490(puVar9,puVar8);
    }
    else if ((*puVar11 < uVar7) && (FUN_00d42490(puVar8,puVar11), param_1[0x1e] < *param_1)) {
      goto LAB_00d41f5c;
    }
LAB_00d41f60:
    if (param_1 + 0x5a == param_2) {
      return;
    }
    lVar20 = 0;
    puVar9 = param_1 + 0x5a;
    goto LAB_00d41f94;
  }
  FUN_00d42490(param_1,puVar9);
  return;
LAB_00d42168:
  puVar8 = param_2 + -0x3c;
  while (puVar11 = puVar8, param_1 != puVar11) {
    puVar8 = puVar11 + -0x1e;
    if (*puVar11 < *local_e0) goto code_r0x00d42184;
  }
  local_e0 = param_1 + 0x1e;
  if (*puVar9 <= uVar7) {
    if (local_e0 == puVar9) {
      return;
    }
    local_e0 = param_1 + 0x3c;
    while (local_e0[-0x1e] <= uVar7) {
      local_e0 = local_e0 + 0x1e;
      if (param_2 == local_e0) {
        return;
      }
    }
    FUN_00d42490(local_e0 + -0x1e,puVar9);
  }
  if (local_e0 == puVar9) {
    return;
  }
  puVar11 = puVar9;
  while( true ) {
    do {
      puVar8 = local_e0;
      local_e0 = puVar8 + 0x1e;
    } while (*puVar8 <= *param_1);
    do {
      puVar11 = puVar11 + -0x1e;
    } while (*param_1 < *puVar11);
    if (puVar11 <= puVar8) break;
    FUN_00d42490(puVar8,puVar11);
  }
  goto LAB_00d41b80;
code_r0x00d42184:
  FUN_00d42490(param_1,puVar11);
  iVar6 = iVar6 + 1;
LAB_00d41d84:
  puVar15 = param_1 + 0x1e;
  puVar8 = puVar15;
  if (puVar15 < puVar11) {
    while( true ) {
      uVar7 = *local_e0;
      puVar15 = puVar8 + 0x1e;
      if (*puVar8 < uVar7) {
        puVar17 = puVar8 + 0x3c;
        if (puVar8[0x1e] < uVar7) {
          do {
            puVar15 = puVar17;
            puVar17 = puVar15 + 0x1e;
          } while (*puVar15 < uVar7);
        }
        else {
        }
      }
      else {
        puVar17 = puVar15;
        puVar15 = puVar8;
      }
      puVar8 = puVar17;
      puVar17 = puVar11 + -0x1e;
      if ((uVar7 <= *puVar17) && (puVar17 = puVar11 + -0x3c, uVar7 <= *puVar17)) {
        puVar11 = puVar11 + -0x5a;
        do {
          puVar17 = puVar11;
          puVar11 = puVar17 + -0x1e;
        } while (uVar7 <= *puVar17);
      }
      if (puVar17 < puVar15) break;
      FUN_00d42490(puVar15,puVar17);
      iVar6 = iVar6 + 1;
      puVar11 = puVar17;
      if (local_e0 != puVar15) {
        puVar11 = local_e0;
      }
      local_e0 = puVar11;
      puVar11 = puVar17;
    }
  }
  if ((puVar15 != local_e0) && (*local_e0 < *puVar15)) {
    FUN_00d42490(puVar15);
    iVar6 = iVar6 + 1;
  }
  if (iVar6 == 0) {
    uVar7 = FUN_021e2e80(param_1,puVar15);
    uVar12 = FUN_021e2e80(puVar15 + 0x1e,param_2);
    if ((uVar12 & 1) != 0) goto LAB_00d4231c;
    puVar8 = puVar15 + 0x1e;
    if ((uVar7 & 1) != 0) goto LAB_00d41b80;
  }
  if (((long)param_2 - (long)puVar15 >> 3) * -0x1111111111111111 <=
      ((long)puVar15 - (long)param_1 >> 3) * -0x1111111111111111) {
    FUN_00d41b30(puVar15 + 0x1e,param_2);
    param_2 = puVar15;
    goto LAB_00d41b74;
  }
  FUN_00d41b30(param_1,puVar15);
  puVar8 = puVar15 + 0x1e;
  goto LAB_00d41b80;
LAB_00d4231c:
  param_2 = puVar15;
  if ((uVar7 & 1) != 0) {
    return;
  }
  goto LAB_00d41b74;
LAB_00d41f94:
  puVar8 = puVar9;
  uVar7 = *puVar8;
  if (uVar7 < *puVar11) {
    uVar1 = *(undefined8 *)(puVar8 + 8);
    uVar3 = *(undefined8 *)(puVar8 + 10);
    uVar2 = *(undefined8 *)(puVar8 + 0xc);
    uVar4 = *(undefined8 *)(puVar8 + 0xe);
    uVar16 = *(undefined8 *)(puVar8 + 2);
    uVar13 = *(undefined8 *)(puVar8 + 4);
    uVar14 = *(undefined8 *)(puVar8 + 6);
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8[6] = 0;
    puVar8[7] = 0;
    local_80 = *(undefined8 *)(puVar8 + 0x16);
    uStack_78 = *(undefined8 *)(puVar8 + 0x18);
    local_70 = *(undefined8 *)(puVar8 + 0x1a);
    uStack_68 = *(undefined8 *)(puVar8 + 0x1c);
    local_98 = *(undefined8 *)(puVar8 + 0x10);
    local_90 = *(undefined8 *)(puVar8 + 0x12);
    local_88 = *(undefined8 *)(puVar8 + 0x14);
    puVar8[0x10] = 0;
    puVar8[0x11] = 0;
    puVar8[0x12] = 0;
    puVar8[0x13] = 0;
    puVar8[0x14] = 0;
    puVar8[0x15] = 0;
    lVar19 = lVar20;
    do {
      lVar18 = lVar19;
      FUN_00d42fcc((long)param_1 + lVar18 + 0x168,(long)param_1 + lVar18 + 0xf0);
      if (lVar18 == -0xf0) {
        puVar9 = param_1;
        goto LAB_00d4204c;
      }
      lVar19 = lVar18 + -0x78;
    } while (uVar7 < *(uint *)((long)param_1 + lVar18 + 0x78));
    puVar9 = (uint *)((long)param_1 + lVar18 + 0xf0);
LAB_00d4204c:
    *puVar9 = uVar7;
    puVar11 = puVar9 + 2;
    lVar19 = *(long *)puVar11;
    if (lVar19 != 0) {
      lVar18 = *(long *)(puVar9 + 6);
      plVar5 = *(long **)(puVar9 + 8);
      *(long *)(puVar9 + 4) = lVar19;
      uVar12 = (**(code **)(*plVar5 + 0xf8))();
      if (((uVar12 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
        (**(code **)(*plVar5 + 0x18))(plVar5,lVar19,lVar18 - lVar19,0x10);
      }
      else {
        FUN_00c48fe8(plVar5,lVar19,lVar18 - lVar19,0x10);
      }
      puVar9[4] = 0;
      puVar9[5] = 0;
      puVar9[6] = 0;
      puVar9[7] = 0;
      puVar11[0] = 0;
      puVar11[1] = 0;
    }
    *(undefined8 *)(puVar9 + 0xc) = uVar2;
    *(undefined8 *)(puVar9 + 0xe) = uVar4;
    *(undefined8 *)(puVar9 + 8) = uVar1;
    *(undefined8 *)(puVar9 + 10) = uVar3;
    *(undefined8 *)(puVar9 + 2) = uVar16;
    *(undefined8 *)(puVar9 + 4) = uVar13;
    *(undefined8 *)(puVar9 + 6) = uVar14;
    FUN_00d42734(puVar9 + 0x10);
    *(undefined8 *)(puVar9 + 0x1a) = local_70;
    *(undefined8 *)(puVar9 + 0x1c) = uStack_68;
    *(undefined8 *)(puVar9 + 0x16) = local_80;
    *(undefined8 *)(puVar9 + 0x18) = uStack_78;
    *(undefined8 *)(puVar9 + 0x10) = local_98;
    *(undefined8 *)(puVar9 + 0x12) = local_90;
    *(undefined8 *)(puVar9 + 0x14) = local_88;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    FUN_00d42924(&local_98);
  }
  lVar20 = lVar20 + 0x78;
  puVar9 = puVar8 + 0x1e;
  puVar11 = puVar8;
  if (puVar8 + 0x1e == param_2) {
switchD_00d41bac_caseD_0:
    return;
  }
  goto LAB_00d41f94;
}


