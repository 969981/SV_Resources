/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008e64c0; name: FUN_008e64c0
 */


void FUN_008e64c0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  uint uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 *puVar22;
  undefined8 local_70;
  undefined8 uStack_68;
  
LAB_008e64f4:
  puVar13 = param_2 + -2;
LAB_008e64f8:
  lVar15 = (long)param_2 - (long)param_1;
  lVar8 = lVar15 >> 4;
  switch(lVar8) {
  case 0:
  case 1:
    goto switchD_008e6a04_caseD_0;
  case 2:
    if (*(uint *)(param_1 + 1) < *(uint *)(param_2 + -1)) {
      uVar20 = *param_1;
      uVar2 = param_1[1];
      uVar19 = param_2[-1];
      *param_1 = param_2[-2];
      param_1[1] = uVar19;
      param_2[-2] = uVar20;
      param_2[-1] = uVar2;
      return;
    }
    return;
  case 3:
    uVar14 = *(uint *)(param_1 + 3);
    puVar12 = param_1 + 2;
    if (uVar14 <= *(uint *)(param_1 + 1)) {
      if (*(uint *)(param_2 + -1) <= uVar14) {
        return;
      }
      uVar20 = *puVar12;
      uVar2 = param_1[3];
      uVar19 = param_2[-1];
      *puVar12 = *puVar13;
      param_1[3] = uVar19;
      *puVar13 = uVar20;
      param_2[-1] = uVar2;
      if (*(uint *)(param_1 + 1) < *(uint *)(param_1 + 3)) {
        uVar20 = *param_1;
        uVar2 = param_1[1];
        *param_1 = *puVar12;
        param_1[1] = param_1[3];
        *puVar12 = uVar20;
        param_1[3] = uVar2;
        return;
      }
      return;
    }
    if (*(uint *)(param_2 + -1) <= uVar14) {
      uVar20 = *param_1;
      uVar2 = param_1[1];
      *param_1 = *puVar12;
      param_1[1] = param_1[3];
      *puVar12 = uVar20;
      param_1[3] = uVar2;
      if (*(uint *)(param_2 + -1) <= *(uint *)(param_1 + 3)) {
        return;
      }
      local_70 = *puVar12;
      uStack_68 = param_1[3];
      uVar20 = param_2[-1];
      *puVar12 = *puVar13;
      param_1[3] = uVar20;
      goto LAB_008e6cbc;
    }
    break;
  case 4:
    FUN_008e6d30(param_1,param_1 + 2,param_1 + 4,puVar13,param_3);
    return;
  case 5:
    puVar13 = param_1 + 2;
    puVar12 = param_1 + 4;
    puVar16 = param_1 + 6;
    FUN_008e6d30(param_1,puVar13,puVar12,puVar16,param_3);
    if (*(uint *)(param_2 + -1) <= *(uint *)(param_1 + 7)) {
      return;
    }
    uVar20 = *puVar16;
    uVar2 = param_1[7];
    uVar19 = param_2[-1];
    *puVar16 = param_2[-2];
    param_1[7] = uVar19;
    param_2[-2] = uVar20;
    param_2[-1] = uVar2;
    if (*(uint *)(param_1 + 7) <= *(uint *)(param_1 + 5)) {
      return;
    }
    uVar20 = *puVar12;
    uVar2 = param_1[5];
    *puVar12 = *puVar16;
    param_1[5] = param_1[7];
    *puVar16 = uVar20;
    param_1[7] = uVar2;
    if (*(uint *)(param_1 + 5) <= *(uint *)(param_1 + 3)) {
      return;
    }
    uVar20 = *puVar13;
    uVar2 = param_1[3];
    *puVar13 = *puVar12;
    param_1[3] = param_1[5];
    *puVar12 = uVar20;
    param_1[5] = uVar2;
    if (*(uint *)(param_1 + 3) <= *(uint *)(param_1 + 1)) {
      return;
    }
    break;
  default:
    if (0x1ef < lVar15) {
      lVar21 = lVar8;
      if (lVar8 < 0) {
        lVar21 = lVar8 + 1;
      }
      puVar12 = param_1 + (lVar21 >> 1) * 2;
      if (lVar15 < 0x3e71) {
        puVar9 = (uint *)(puVar12 + 1);
        uVar14 = *puVar9;
        if (*(uint *)(param_1 + 1) < uVar14) {
          if (uVar14 < *(uint *)(param_2 + -1)) {
            uVar20 = *param_1;
            uVar2 = param_1[1];
            iVar5 = 1;
            iVar4 = 1;
            uVar19 = param_2[-1];
            *param_1 = *puVar13;
            param_1[1] = uVar19;
            *puVar13 = uVar20;
            param_2[-1] = uVar2;
            uVar14 = *(uint *)(param_1 + 1);
            uVar18 = *(uint *)(puVar12 + 1);
            if (uVar14 <= uVar18) goto LAB_008e67b4;
          }
          else {
            uVar20 = *param_1;
            uVar2 = param_1[1];
            uVar19 = puVar12[1];
            *param_1 = *puVar12;
            param_1[1] = uVar19;
            *puVar12 = uVar20;
            puVar12[1] = uVar2;
            if (*(uint *)(param_2 + -1) <= *puVar9) {
              iVar4 = 1;
              goto LAB_008e6774;
            }
            uVar20 = *puVar12;
            uVar2 = puVar12[1];
            uVar19 = param_2[-1];
            *puVar12 = *puVar13;
            puVar12[1] = uVar19;
            *puVar13 = uVar20;
            param_2[-1] = uVar2;
LAB_008e6710:
            iVar5 = 2;
            iVar4 = 2;
            uVar14 = *(uint *)(param_1 + 1);
            uVar18 = *(uint *)(puVar12 + 1);
            if (uVar14 <= uVar18) goto LAB_008e67b4;
          }
        }
        else if (uVar14 < *(uint *)(param_2 + -1)) {
          uVar20 = *puVar12;
          uVar2 = puVar12[1];
          uVar19 = param_2[-1];
          *puVar12 = *puVar13;
          puVar12[1] = uVar19;
          *puVar13 = uVar20;
          param_2[-1] = uVar2;
          if (*(uint *)(param_1 + 1) < *puVar9) {
            uVar20 = *param_1;
            uVar2 = param_1[1];
            uVar19 = puVar12[1];
            *param_1 = *puVar12;
            param_1[1] = uVar19;
            *puVar12 = uVar20;
            puVar12[1] = uVar2;
            goto LAB_008e6710;
          }
          iVar5 = 1;
          iVar4 = 1;
          uVar14 = *(uint *)(param_1 + 1);
          uVar18 = *(uint *)(puVar12 + 1);
          if (uVar14 <= uVar18) goto LAB_008e67b4;
        }
        else {
          iVar5 = 0;
          iVar4 = 0;
          uVar14 = *(uint *)(param_1 + 1);
          uVar18 = *(uint *)(puVar12 + 1);
          if (uVar14 <= uVar18) goto LAB_008e67b4;
        }
      }
      else {
        lVar15 = lVar8 + 3;
        if (-1 < lVar8) {
          lVar15 = lVar8;
        }
        lVar15 = lVar15 >> 2;
        puVar16 = param_1 + lVar15 * 2;
        puVar10 = puVar12 + lVar15 * 2;
        iVar4 = FUN_008e6d30(param_1,puVar16,puVar12,puVar10,param_3);
        if (*(uint *)(puVar10 + 1) < *(uint *)(param_2 + -1)) {
          uVar20 = *puVar10;
          uVar2 = puVar10[1];
          uVar19 = param_2[-1];
          *puVar10 = *puVar13;
          puVar10[1] = uVar19;
          *puVar13 = uVar20;
          param_2[-1] = uVar2;
          if (*(uint *)(puVar12 + 1) < *(uint *)(puVar10 + 1)) {
            uVar20 = *puVar12;
            uVar2 = puVar12[1];
            uVar19 = puVar10[1];
            *puVar12 = *puVar10;
            puVar12[1] = uVar19;
            *puVar10 = uVar20;
            puVar10[1] = uVar2;
            if (*(uint *)(param_1 + lVar15 * 2 + 1) < *(uint *)(puVar12 + 1)) {
              uVar20 = *puVar16;
              uVar2 = puVar16[1];
              uVar19 = puVar12[1];
              *puVar16 = *puVar12;
              puVar16[1] = uVar19;
              *puVar12 = uVar20;
              puVar12[1] = uVar2;
              if (*(uint *)(param_1 + 1) < *(uint *)(param_1 + lVar15 * 2 + 1)) {
                uVar20 = *param_1;
                uVar2 = param_1[1];
                iVar4 = iVar4 + 4;
                uVar19 = puVar16[1];
                *param_1 = *puVar16;
                param_1[1] = uVar19;
                *puVar16 = uVar20;
                puVar16[1] = uVar2;
                uVar14 = *(uint *)(param_1 + 1);
                uVar18 = *(uint *)(puVar12 + 1);
                iVar5 = iVar4;
                if (uVar14 <= uVar18) goto LAB_008e67b4;
              }
              else {
                iVar4 = iVar4 + 3;
                uVar14 = *(uint *)(param_1 + 1);
                uVar18 = *(uint *)(puVar12 + 1);
                iVar5 = iVar4;
                if (uVar14 <= uVar18) goto LAB_008e67b4;
              }
            }
            else {
              iVar4 = iVar4 + 2;
              uVar14 = *(uint *)(param_1 + 1);
              uVar18 = *(uint *)(puVar12 + 1);
              iVar5 = iVar4;
              if (uVar14 <= uVar18) goto LAB_008e67b4;
            }
          }
          else {
            iVar4 = iVar4 + 1;
            uVar14 = *(uint *)(param_1 + 1);
            uVar18 = *(uint *)(puVar12 + 1);
            iVar5 = iVar4;
            if (uVar14 <= uVar18) goto LAB_008e67b4;
          }
        }
        else {
LAB_008e6774:
          uVar14 = *(uint *)(param_1 + 1);
          uVar18 = *(uint *)(puVar12 + 1);
          iVar5 = iVar4;
          if (uVar14 <= uVar18) {
LAB_008e67b4:
            puVar16 = param_2;
LAB_008e67bc:
            puVar22 = puVar16;
            if (param_1 + 4 != puVar22) goto code_r0x008e67c4;
            puVar12 = param_1 + 2;
            if (uVar14 <= *(uint *)(param_2 + -1)) {
              if (puVar12 == puVar13) {
                return;
              }
              puVar12 = param_1 + 4;
              while (uVar14 <= *(uint *)(puVar12 + -1)) {
                puVar12 = puVar12 + 2;
                if (param_2 == puVar12) {
                  return;
                }
              }
              uVar20 = puVar12[-2];
              uVar2 = puVar12[-1];
              uVar19 = param_2[-1];
              puVar12[-2] = *puVar13;
              puVar12[-1] = uVar19;
              *puVar13 = uVar20;
              param_2[-1] = uVar2;
            }
            if (puVar12 == puVar13) {
              return;
            }
            puVar16 = puVar13;
            while( true ) {
              puVar10 = puVar12 + -2;
              do {
                puVar22 = puVar10;
                puVar10 = puVar22 + 2;
              } while (*(uint *)(param_1 + 1) <= *(uint *)(puVar22 + 3));
              puVar12 = puVar22 + 4;
              do {
                puVar17 = puVar16;
                puVar16 = puVar17 + -2;
              } while (*(uint *)(puVar17 + -1) < *(uint *)(param_1 + 1));
              if (puVar16 <= puVar10) break;
              uVar20 = *puVar10;
              uVar2 = puVar22[3];
              uVar19 = puVar17[-1];
              *puVar10 = *puVar16;
              puVar22[3] = uVar19;
              *puVar16 = uVar20;
              puVar17[-1] = uVar2;
            }
            uVar14 = 4;
            goto LAB_008e69b0;
          }
        }
      }
      puVar16 = param_1 + 2;
      puVar10 = puVar13;
      if (puVar13 <= puVar16) goto LAB_008e6794;
      goto LAB_008e6800;
    }
    uVar14 = *(uint *)(param_1 + 3);
    puVar13 = param_1 + 4;
    puVar12 = param_1 + 2;
    uVar18 = *(uint *)(param_1 + 5);
    if (*(uint *)(param_1 + 1) < uVar14) {
      if (uVar14 < uVar18) {
        local_70 = *param_1;
        uStack_68 = param_1[1];
        *param_1 = *puVar13;
        param_1[1] = param_1[5];
      }
      else {
        uVar20 = *param_1;
        uVar2 = param_1[1];
        *param_1 = *puVar12;
        param_1[1] = param_1[3];
        *puVar12 = uVar20;
        param_1[3] = uVar2;
        if (uVar18 <= *(uint *)(param_1 + 3)) goto LAB_008e6af0;
        local_70 = *puVar12;
        uStack_68 = param_1[3];
        *puVar12 = *puVar13;
        param_1[3] = param_1[5];
      }
      *puVar13 = local_70;
      param_1[5] = uStack_68;
    }
    else if (uVar14 < uVar18) {
      uVar20 = *puVar12;
      uVar2 = param_1[3];
      *puVar12 = *puVar13;
      param_1[3] = param_1[5];
      *puVar13 = uVar20;
      param_1[5] = uVar2;
      if (*(uint *)(param_1 + 1) < *(uint *)(param_1 + 3)) {
        uVar20 = *param_1;
        uVar2 = param_1[1];
        *param_1 = *puVar12;
        param_1[1] = param_1[3];
        *puVar12 = uVar20;
        param_1[3] = uVar2;
      }
    }
LAB_008e6af0:
    if (param_1 + 6 == param_2) {
      return;
    }
    lVar8 = 0;
    puVar12 = param_1 + 6;
    goto LAB_008e6b20;
  }
  local_70 = *param_1;
  uStack_68 = param_1[1];
  uVar20 = puVar13[1];
  *param_1 = *puVar13;
  param_1[1] = uVar20;
LAB_008e6cbc:
  *puVar13 = local_70;
  puVar13[1] = uStack_68;
  return;
LAB_008e6b20:
  uVar14 = *(uint *)(puVar12 + 1);
  if (*(uint *)(puVar13 + 1) < uVar14) {
    uVar20 = *puVar12;
    uVar3 = *(undefined4 *)((long)puVar12 + 0xc);
    lVar15 = lVar8;
    do {
      lVar21 = lVar15;
      *(undefined8 *)((long)param_1 + lVar21 + 0x30) =
           *(undefined8 *)((long)param_1 + lVar21 + 0x20);
      *(undefined8 *)((long)param_1 + lVar21 + 0x38) =
           *(undefined8 *)((long)param_1 + lVar21 + 0x28);
      if (lVar21 == -0x20) {
        puVar13 = param_1;
        goto LAB_008e6b08;
      }
      lVar15 = lVar21 + -0x10;
    } while (*(uint *)((long)param_1 + lVar21 + 0x18) < uVar14);
    puVar13 = (undefined8 *)((long)param_1 + lVar21 + 0x20);
LAB_008e6b08:
    *puVar13 = uVar20;
    *(uint *)(puVar13 + 1) = uVar14;
    *(undefined4 *)((long)puVar13 + 0xc) = uVar3;
  }
  puVar16 = puVar12 + 2;
  lVar8 = lVar8 + 0x10;
  puVar13 = puVar12;
  puVar12 = puVar16;
  if (puVar16 == param_2) {
switchD_008e6a04_caseD_0:
    return;
  }
  goto LAB_008e6b20;
code_r0x008e67c4:
  puVar16 = puVar22 + -2;
  if (uVar18 < *(uint *)(puVar22 + -3)) goto code_r0x008e67d4;
  goto LAB_008e67bc;
code_r0x008e67d4:
  uVar20 = *param_1;
  uVar2 = param_1[1];
  iVar5 = iVar4 + 1;
  puVar10 = puVar22 + -4;
  uVar19 = puVar22[-3];
  *param_1 = *puVar10;
  param_1[1] = uVar19;
  *puVar10 = uVar20;
  puVar22[-3] = uVar2;
  puVar16 = param_1 + 2;
  if (puVar16 < puVar10) {
LAB_008e6800:
    while( true ) {
      puVar22 = puVar16 + -2;
      do {
        puVar17 = puVar22;
        puVar22 = puVar17 + 2;
      } while (*(uint *)(puVar12 + 1) < *(uint *)(puVar17 + 3));
      puVar16 = puVar17 + 4;
      do {
        puVar11 = puVar10;
        puVar10 = puVar11 + -2;
      } while (*(uint *)(puVar11 + -1) <= *(uint *)(puVar12 + 1));
      if (puVar10 < puVar22) break;
      uVar20 = *puVar22;
      uVar2 = puVar17[3];
      iVar5 = iVar5 + 1;
      uVar19 = puVar11[-1];
      puVar1 = puVar10;
      if (puVar12 != puVar22) {
        puVar1 = puVar12;
      }
      *puVar22 = *puVar10;
      puVar17[3] = uVar19;
      *puVar10 = uVar20;
      puVar11[-1] = uVar2;
      puVar12 = puVar1;
    }
    if (puVar22 == puVar12) goto LAB_008e6894;
  }
  else {
LAB_008e6794:
    puVar22 = param_1 + 2;
    if (puVar22 == puVar12) goto LAB_008e6894;
  }
  if (*(uint *)(puVar22 + 1) < *(uint *)(puVar12 + 1)) {
    uVar20 = *puVar22;
    uVar2 = puVar22[1];
    iVar5 = iVar5 + 1;
    uVar19 = puVar12[1];
    *puVar22 = *puVar12;
    puVar22[1] = uVar19;
    *puVar12 = uVar20;
    puVar12[1] = uVar2;
  }
LAB_008e6894:
  if (iVar5 == 0) {
    uVar6 = FUN_008e6ee0(param_1,puVar22,param_3);
    puVar10 = puVar22 + 2;
    uVar7 = FUN_008e6ee0(puVar10,param_2,param_3);
    if ((uVar7 & 1) != 0) {
      param_2 = puVar22;
      if ((uVar6 & 1) != 0) {
        return;
      }
      goto LAB_008e64f4;
    }
    if ((uVar6 & 1) != 0) {
      uVar14 = 2;
LAB_008e69b0:
      if (4 < uVar14) {
        return;
      }
      param_1 = puVar10;
      if ((1 << (ulong)uVar14 & 0x15U) == 0) {
        return;
      }
      goto LAB_008e64f8;
    }
  }
  if ((long)puVar22 - (long)param_1 < (long)param_2 - (long)puVar22) {
    FUN_008e64c0(param_1,puVar22,param_3);
    param_1 = puVar22 + 2;
    goto LAB_008e64f8;
  }
  FUN_008e64c0(puVar22 + 2,param_2,param_3);
  param_2 = puVar22;
  goto LAB_008e64f4;
}


