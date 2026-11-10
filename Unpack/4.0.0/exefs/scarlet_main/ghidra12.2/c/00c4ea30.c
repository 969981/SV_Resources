/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c4ea30; name: FUN_00c4ea30
 */


void FUN_00c4ea30(ulong *param_1,ulong *param_2)

{
  int iVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong local_128;
  ulong *puStack_120;
  ulong *local_118;
  ulong uStack_110;
  ulong local_108;
  ulong *puStack_100;
  ulong *local_f8;
  ulong uStack_f0;
  ulong *local_e8;
  ulong *puStack_e0;
  ulong *local_d8;
  ulong *puStack_d0;
  ulong *local_c8;
  ulong *local_c0;
  ulong *local_b8;
  ulong *puStack_b0;
  ulong *local_a8;
  ulong *puStack_a0;
  ulong *local_98;
  ulong *local_90;
  ulong *puStack_88;
  ulong *local_80;
  ulong local_78;
  ulong local_70;
  ulong uStack_68;
  
LAB_00c4ea64:
  puStack_a0 = (ulong *)*param_1;
  while( true ) {
    puVar12 = (ulong *)*param_2;
    lVar6 = (long)puVar12 - (long)puStack_a0;
    uVar3 = (lVar6 >> 3) * -0x5555555555555555;
    if (uVar3 == 3) {
      puVar5 = puVar12 + -3;
      *param_2 = (ulong)puVar5;
      puVar10 = puStack_a0 + 3;
      uVar3 = *puVar10;
      if (*puStack_a0 < uVar3) {
        if (uVar3 < puVar12[-3]) {
          local_78 = *puStack_a0;
          local_70 = puStack_a0[1];
          uStack_68 = puStack_a0[2];
          uVar3 = puVar12[-1];
          uVar7 = *puVar5;
          puStack_a0[1] = puVar12[-2];
          puStack_a0[2] = uVar3;
          *puStack_a0 = uVar7;
        }
        else {
          uVar3 = *puStack_a0;
          uVar7 = puStack_a0[1];
          uVar9 = puStack_a0[2];
          puStack_a0[1] = puStack_a0[4];
          puStack_a0[2] = puStack_a0[5];
          *puStack_a0 = *puVar10;
          puStack_a0[4] = uVar7;
          puStack_a0[5] = uVar9;
          *puVar10 = uVar3;
          if (*puVar5 <= puStack_a0[3]) {
            return;
          }
          local_78 = *puVar10;
          local_70 = puStack_a0[4];
          uStack_68 = puStack_a0[5];
          uVar3 = puVar12[-1];
          uVar7 = *puVar5;
          puStack_a0[4] = puVar12[-2];
          puStack_a0[5] = uVar3;
          *puVar10 = uVar7;
        }
        puVar12[-2] = local_70;
        puVar12[-1] = uStack_68;
        *puVar5 = local_78;
        return;
      }
      if (puVar12[-3] <= uVar3) {
        return;
      }
      uVar3 = *puVar10;
      uVar7 = puStack_a0[4];
      uVar11 = puStack_a0[5];
      uVar9 = puVar12[-1];
      uVar8 = *puVar5;
      puStack_a0[4] = puVar12[-2];
      puStack_a0[5] = uVar9;
      *puVar10 = uVar8;
      puVar12[-2] = uVar7;
      puVar12[-1] = uVar11;
      *puVar5 = uVar3;
      if (*puStack_a0 < puStack_a0[3]) {
        uVar3 = *puStack_a0;
        uVar7 = puStack_a0[1];
        uVar9 = puStack_a0[2];
        puStack_a0[1] = puStack_a0[4];
        puStack_a0[2] = puStack_a0[5];
        *puStack_a0 = *puVar10;
        puStack_a0[4] = uVar7;
        puStack_a0[5] = uVar9;
        *puVar10 = uVar3;
        return;
      }
      return;
    }
    switch(uVar3) {
    case 0:
    case 1:
      goto switchD_00c4eadc_caseD_0;
    case 2:
      puVar5 = puVar12 + -3;
      *param_2 = (ulong)puVar5;
      param_1 = (ulong *)*param_1;
      if (*param_1 < puVar12[-3]) {
        uVar3 = *param_1;
        uVar7 = param_1[1];
        uVar11 = param_1[2];
        uVar9 = puVar12[-1];
        uVar8 = *puVar5;
        param_1[1] = puVar12[-2];
        param_1[2] = uVar9;
        *param_1 = uVar8;
        puVar12[-2] = uVar7;
        puVar12[-1] = uVar11;
        *puVar5 = uVar3;
        return;
      }
      return;
    case 4:
      puStack_88 = puStack_a0 + 3;
      local_90 = puStack_a0 + 6;
      local_98 = puVar12 + -3;
      *param_2 = (ulong)local_98;
      local_80 = puStack_a0;
      FUN_00c4f310(&local_80,&puStack_88,&local_90,&local_98);
      return;
    case 5:
      local_a8 = puStack_a0 + 3;
      puStack_b0 = puStack_a0 + 6;
      local_b8 = puStack_a0 + 9;
      local_c0 = puVar12 + -3;
      *param_2 = (ulong)local_c0;
      FUN_00c4f570(&puStack_a0,&local_a8,&puStack_b0,&local_b8,&local_c0);
      goto switchD_00c4eadc_caseD_0;
    }
    if (lVar6 < 0x2e8) break;
    puVar10 = puStack_a0 + (uVar3 >> 1) * 3;
    puVar5 = puVar12 + -3;
    if (lVar6 < 0x5da9) {
      uVar3 = *puVar10;
      if (*puStack_a0 < uVar3) {
        if (uVar3 < *puVar5) {
          local_78 = *puStack_a0;
          local_70 = puStack_a0[1];
          uStack_68 = puStack_a0[2];
          uVar3 = puVar12[-1];
          uVar7 = *puVar5;
          puStack_a0[1] = puVar12[-2];
          puStack_a0[2] = uVar3;
          *puStack_a0 = uVar7;
          puVar12[-2] = local_70;
          puVar12[-1] = uStack_68;
          *puVar5 = local_78;
        }
        else {
          local_78 = *puStack_a0;
          local_70 = puStack_a0[1];
          uStack_68 = puStack_a0[2];
          uVar3 = puVar10[2];
          uVar7 = *puVar10;
          puStack_a0[1] = puVar10[1];
          puStack_a0[2] = uVar3;
          *puStack_a0 = uVar7;
          puVar10[1] = local_70;
          puVar10[2] = uStack_68;
          *puVar10 = local_78;
          if (local_78 < *puVar5) {
            local_78 = *puVar10;
            local_70 = puVar10[1];
            uStack_68 = puVar10[2];
            uVar3 = puVar12[-1];
            uVar7 = *puVar5;
            puVar10[1] = puVar12[-2];
            puVar10[2] = uVar3;
            *puVar10 = uVar7;
            puVar12[-2] = local_70;
            puVar12[-1] = uStack_68;
            *puVar5 = local_78;
            goto LAB_00c4f280;
          }
        }
LAB_00c4f2fc:
        iVar1 = 1;
      }
      else if (uVar3 < *puVar5) {
        local_78 = *puVar10;
        local_70 = puVar10[1];
        uStack_68 = puVar10[2];
        uVar3 = puVar12[-1];
        uVar7 = *puVar5;
        puVar10[1] = puVar12[-2];
        puVar10[2] = uVar3;
        *puVar10 = uVar7;
        puVar12[-2] = local_70;
        puVar12[-1] = uStack_68;
        *puVar5 = local_78;
        if (*puVar10 <= *puStack_a0) goto LAB_00c4f2fc;
        local_78 = *puStack_a0;
        local_70 = puStack_a0[1];
        uStack_68 = puStack_a0[2];
        uVar3 = puVar10[2];
        uVar7 = *puVar10;
        puStack_a0[1] = puVar10[1];
        puStack_a0[2] = uVar3;
        *puStack_a0 = uVar7;
        puVar10[1] = local_70;
        puVar10[2] = uStack_68;
        *puVar10 = local_78;
LAB_00c4f280:
        iVar1 = 2;
      }
      else {
        iVar1 = 0;
      }
    }
    else {
      lVar6 = (uVar3 >> 2) * 2 + (uVar3 >> 2);
      puStack_d0 = puStack_a0 + lVar6;
      puStack_e0 = puVar10 + lVar6;
      local_e8 = puVar5;
      local_d8 = puVar10;
      local_c8 = puStack_a0;
      iVar1 = FUN_00c4f570(&local_c8,&puStack_d0,&local_d8,&puStack_e0,&local_e8);
    }
    puVar2 = (ulong *)*param_1;
    uVar3 = *puVar2;
    if (*puVar10 < uVar3) goto LAB_00c4edac;
    puVar12 = puVar12 + -6;
    while (puVar5 = puVar12, puVar2 != puVar5) {
      puVar12 = puVar5 + -3;
      if (*puVar10 < *puVar5) {
        local_78 = *puVar2;
        local_70 = puVar2[1];
        iVar1 = iVar1 + 1;
        uStack_68 = puVar2[2];
        uVar3 = puVar5[1];
        uVar7 = puVar5[2];
        *puVar2 = *puVar5;
        puVar2[1] = uVar3;
        puVar2[2] = uVar7;
        puVar5[1] = local_70;
        puVar5[2] = uStack_68;
        *puVar5 = local_78;
        goto LAB_00c4edac;
      }
    }
    puVar10 = (ulong *)*param_2;
    puVar12 = puVar2 + 3;
    puVar5 = puVar10 + -3;
    if (uVar3 <= *puVar5) {
      if (puVar12 == puVar5) {
        return;
      }
      puVar12 = puVar2 + 6;
      while (uVar3 <= puVar12[-3]) {
        puVar12 = puVar12 + 3;
        if (puVar10 == puVar12) {
          return;
        }
      }
      local_78 = puVar12[-3];
      local_70 = puVar12[-2];
      uStack_68 = puVar12[-1];
      uVar3 = puVar10[-1];
      uVar7 = *puVar5;
      puVar12[-2] = puVar10[-2];
      puVar12[-1] = uVar3;
      puVar12[-3] = uVar7;
      puVar10[-2] = local_70;
      puVar10[-1] = uStack_68;
      *puVar5 = local_78;
    }
    if (puVar12 == puVar5) {
      return;
    }
    while( true ) {
      puStack_a0 = puVar12 + -3;
      do {
        puVar10 = puStack_a0;
        puStack_a0 = puVar10 + 3;
      } while (*(ulong *)*param_1 <= *puStack_a0);
      puVar12 = puVar10 + 6;
      do {
        puVar2 = puVar5;
        puVar5 = puVar2 + -3;
      } while (*puVar5 < *(ulong *)*param_1);
      if (puVar5 <= puStack_a0) break;
      local_78 = *puStack_a0;
      local_70 = puVar10[4];
      uStack_68 = puVar10[5];
      uVar3 = puVar2[-1];
      uVar7 = *puVar5;
      puVar10[4] = puVar2[-2];
      puVar10[5] = uVar3;
      *puStack_a0 = uVar7;
      puVar2[-2] = local_70;
      puVar2[-1] = uStack_68;
      *puVar5 = local_78;
    }
    *param_1 = (ulong)puStack_a0;
  }
  puVar5 = puStack_a0 + 6;
  uVar3 = *puVar5;
  puVar10 = puStack_a0 + 3;
  uVar7 = *puVar10;
  if (*puStack_a0 < uVar7) {
    if (uVar7 < uVar3) {
      local_78 = *puStack_a0;
      local_70 = puStack_a0[1];
      uStack_68 = puStack_a0[2];
      puStack_a0[1] = puStack_a0[7];
      puStack_a0[2] = puStack_a0[8];
      *puStack_a0 = *puVar5;
    }
    else {
      uVar7 = *puStack_a0;
      uVar9 = puStack_a0[1];
      uVar8 = puStack_a0[2];
      puStack_a0[1] = puStack_a0[4];
      puStack_a0[2] = puStack_a0[5];
      *puStack_a0 = *puVar10;
      puStack_a0[4] = uVar9;
      puStack_a0[5] = uVar8;
      *puVar10 = uVar7;
      if (uVar3 <= puStack_a0[3]) goto LAB_00c4ebd0;
      local_78 = *puVar10;
      local_70 = puStack_a0[4];
      uStack_68 = puStack_a0[5];
      puStack_a0[4] = puStack_a0[7];
      puStack_a0[5] = puStack_a0[8];
      *puVar10 = *puVar5;
    }
    puStack_a0[7] = local_70;
    puStack_a0[8] = uStack_68;
    *puVar5 = local_78;
  }
  else if (uVar7 < uVar3) {
    uVar3 = *puVar10;
    uVar7 = puStack_a0[4];
    uVar9 = puStack_a0[5];
    puStack_a0[4] = puStack_a0[7];
    puStack_a0[5] = puStack_a0[8];
    *puVar10 = *puVar5;
    puStack_a0[7] = uVar7;
    puStack_a0[8] = uVar9;
    *puVar5 = uVar3;
    if (*puStack_a0 < *puVar10) {
      uVar3 = *puStack_a0;
      uVar7 = puStack_a0[1];
      uVar9 = puStack_a0[2];
      puStack_a0[1] = puStack_a0[4];
      puStack_a0[2] = puStack_a0[5];
      *puStack_a0 = *puVar10;
      puStack_a0[4] = uVar7;
      puStack_a0[5] = uVar9;
      *puVar10 = uVar3;
    }
  }
LAB_00c4ebd0:
  puVar10 = puStack_a0 + 9;
  do {
    if (puVar10 == puVar12) {
switchD_00c4eadc_caseD_0:
      return;
    }
    uVar3 = *puVar10;
    if (*puVar5 < uVar3) {
      uVar7 = puVar10[1];
      uVar9 = puVar10[2];
      puVar2 = puVar10;
      do {
        puVar4 = puVar5;
        uVar8 = puVar4[1];
        uVar11 = puVar4[2];
        *puVar2 = *puVar4;
        puVar2[1] = uVar8;
        puVar2[2] = uVar11;
        if (puStack_a0 == puVar4) break;
        puVar5 = puVar4 + -3;
        puVar2 = puVar4;
      } while (puVar4[-3] < uVar3);
      *puVar4 = uVar3;
      puVar4[1] = uVar7;
      puVar4[2] = uVar9;
    }
    puVar5 = puVar10;
    puVar10 = puVar10 + 3;
  } while( true );
LAB_00c4edac:
  puVar2 = puVar2 + 3;
  if (puVar2 < puVar5) {
    while( true ) {
      uVar3 = *puVar2;
      while (*puVar10 < uVar3) {
        puVar2 = puVar2 + 3;
        uVar3 = *puVar2;
      }
      do {
        puVar12 = puVar5;
        puVar5 = puVar12 + -3;
      } while (*puVar5 <= *puVar10);
      if (puVar5 < puVar2) break;
      local_78 = *puVar2;
      local_70 = puVar2[1];
      uStack_68 = puVar2[2];
      uVar3 = puVar12[-1];
      uVar7 = *puVar5;
      puVar2[1] = puVar12[-2];
      puVar2[2] = uVar3;
      *puVar2 = uVar7;
      iVar1 = iVar1 + 1;
      puVar12[-2] = local_70;
      puVar12[-1] = uStack_68;
      *puVar5 = local_78;
      puVar12 = puVar5;
      if (puVar2 != puVar10) {
        puVar12 = puVar10;
      }
      puVar2 = puVar2 + 3;
      puVar10 = puVar12;
    }
  }
  if ((puVar10 != puVar2) && (*puVar2 < *puVar10)) {
    local_78 = *puVar2;
    local_70 = puVar2[1];
    iVar1 = iVar1 + 1;
    uStack_68 = puVar2[2];
    uVar3 = puVar10[2];
    uVar7 = *puVar10;
    puVar2[1] = puVar10[1];
    puVar2[2] = uVar3;
    *puVar2 = uVar7;
    puVar10[1] = local_70;
    puVar10[2] = uStack_68;
    *puVar10 = local_78;
  }
  if (iVar1 == 0) {
    uStack_f0 = *param_1;
    local_f8 = puVar2;
    uVar3 = FUN_026f6e40(&uStack_f0,&local_f8);
    local_108 = *param_2;
    puStack_100 = puVar2 + 3;
    uVar7 = FUN_026f6e40(&puStack_100,&local_108);
    if ((uVar7 & 1) != 0) {
      if ((uVar3 & 1) != 0) {
        return;
      }
      *param_2 = (ulong)puVar2;
      goto LAB_00c4ea64;
    }
    if ((uVar3 & 1) != 0) {
      *param_1 = (ulong)(puVar2 + 3);
      goto LAB_00c4ea64;
    }
  }
  if (((long)((long)puVar2 - *param_1) >> 3) * -0x5555555555555555 <
      ((long)(*param_2 - (long)puVar2) >> 3) * -0x5555555555555555) {
    local_118 = puVar2;
    uStack_110 = *param_1;
    FUN_00c4ea30(&uStack_110,&local_118);
    *param_1 = (ulong)(puVar2 + 3);
  }
  else {
    puStack_120 = puVar2 + 3;
    local_128 = *param_2;
    FUN_00c4ea30(&puStack_120,&local_128);
    *param_2 = (ulong)puVar2;
  }
  goto LAB_00c4ea64;
}


