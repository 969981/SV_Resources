/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ade750; name: FUN_02ade750
 */


void FUN_02ade750(long param_1,int param_2,short *param_3)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  short sVar10;
  undefined4 uVar11;
  short *psVar12;
  undefined4 uVar13;
  short *psVar14;
  ulong uVar15;
  short *psVar17;
  short *psVar16;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  long local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  long *local_b0;
  long *local_a8;
  long local_a0;
  long *plStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  long *local_78;
  long *local_68;
  
  plStack_98 = *(long **)(param_1 + 8);
  local_b0 = (long *)0x0;
  local_a8 = (long *)0x0;
  local_80 = 0;
  local_a0 = 0;
  local_90 = 0x1fffffffffffffff;
  uStack_88 = 0;
  lVar24 = *(long *)(param_1 + 0x2d8);
  lVar25 = *(long *)(param_1 + 0x2e0);
  if (lVar24 == lVar25) {
LAB_02adeb34:
    if (param_2 == 1) {
      param_1 = param_1 + 0x90;
    }
    else if (param_2 == 2) {
      param_1 = param_1 + 0xdc;
    }
    else {
      param_1 = param_1 + 0x44;
    }
    *(undefined4 *)(param_1 + 4) = 0;
  }
  else {
    fVar29 = 0.0;
    do {
      if (*(char *)(param_1 + *(char *)(lVar24 + 0x14) + 0x128) != '\0') {
        sVar10 = *(short *)(lVar24 + 2);
        sVar4 = *(short *)(param_1 + 0x44);
        if ((((((sVar4 != sVar10) && (sVar5 = *(short *)(param_1 + 0x90), sVar5 != sVar10)) &&
              (sVar6 = *(short *)(param_1 + 0xdc), sVar6 != sVar10)) &&
             ((sVar10 != 0x17 || (sVar4 != 0x16)))) && ((sVar10 != 0x16 || (sVar4 != 0x17)))) &&
           ((sVar10 != 0x22 || (sVar4 != 0x20)))) {
          if ((sVar10 != 0x22 || sVar5 != 0x20) &&
             (((sVar10 != 0x16 || sVar5 != 0x17 && (sVar10 != 0x20 || sVar4 != 0x22)) &&
              (sVar10 != 0x17 || sVar5 != 0x16)))) {
            if ((((((sVar10 != 0x22 || sVar6 != 0x20) && (sVar10 != 0x16 || sVar6 != 0x17)) &&
                  ((sVar10 != 0x20 || sVar5 != 0x22 && (sVar10 != 0x17 || sVar6 != 0x16)))) &&
                 ((sVar10 != 0x20 || (sVar6 != 0x22)))) &&
                (((sVar10 != 1 && ((sVar10 != 4 && (sVar10 != 2)))) ||
                 (((((sVar4 != 1 && ((sVar4 != 4 && (sVar4 != 2)))) || (sVar4 != sVar10)) &&
                   ((((sVar5 != 1 && (sVar5 != 4)) && (sVar5 != 2)) || (sVar5 != sVar10)))) &&
                  ((((sVar6 != 1 && (sVar6 != 4)) && (sVar6 != 2)) || (sVar6 != sVar10)))))))) &&
               (*(char *)(lVar24 + 0x15) == '\0')) {
              cVar3 = *(char *)(lVar24 + 0x16);
              if (cVar3 == '\x02') {
                if (((DAT_048406a0 != (code *)0x0) &&
                    (uVar9 = (*DAT_048406a0)(&DAT_048406c0), (uVar9 & 1) != 0)) &&
                   ((DAT_04840720 != (code *)0x0 &&
                    (uVar9 = (*DAT_04840720)(&DAT_04840740), (uVar9 & 1) != 0)))) {
LAB_02adea10:
                  local_d0 = lVar24;
                  FUN_02ae02e8(&local_b0,&local_d0);
                  fVar29 = fVar29 + *(float *)(lVar24 + 0x18);
                }
              }
              else if (cVar3 == '\x01') {
                if ((DAT_048406a0 != (code *)0x0) &&
                   (uVar9 = (*DAT_048406a0)(&DAT_048406c0), (uVar9 & 1) != 0)) goto LAB_02ade9fc;
              }
              else if ((cVar3 == '\0') &&
                      ((DAT_048406a0 == (code *)0x0 ||
                       (uVar9 = (*DAT_048406a0)(&DAT_048406c0), (uVar9 & 1) == 0)))) {
LAB_02ade9fc:
                if ((DAT_04840720 == (code *)0x0) ||
                   (uVar9 = (*DAT_04840720)(&DAT_04840740), (uVar9 & 1) == 0)) goto LAB_02adea10;
              }
            }
          }
        }
      }
      lVar24 = lVar24 + 0x1c;
    } while (lVar25 != lVar24);
    if (local_b0 == local_a8) goto LAB_02adeb34;
    if (((char)param_3[0x26] == '\0') || (sVar10 = *param_3, sVar10 == 0)) {
LAB_02adeab8:
      uVar9 = DAT_04540820 + DAT_04540818;
      uVar15 = DAT_04540820 ^ DAT_04540818;
      DAT_04540818 = uVar15 ^ (DAT_04540818 >> 0x28 | DAT_04540818 << 0x18) ^ uVar15 << 0x10;
      DAT_04540820 = uVar15 >> 0x1b | uVar15 << 0x25;
      fVar27 = fVar29 * (float)uVar9 * 5.421011e-20 + 0.0;
      plVar22 = local_b0;
      fVar29 = 0.0;
      do {
        lVar24 = *plVar22;
        fVar28 = fVar29 + *(float *)(lVar24 + 0x18);
        if ((fVar29 <= fVar27) && (fVar27 < fVar28)) {
          if (lVar24 != 0) goto LAB_02adeb70;
          break;
        }
        plVar22 = plVar22 + 1;
        fVar29 = fVar28;
      } while (local_a8 != plVar22);
      lVar24 = *local_b0;
      if (lVar24 == 0) goto LAB_02aded8c;
LAB_02adeb70:
      bVar7 = false;
    }
    else {
      lVar24 = *(long *)(param_1 + 0x2d8);
      lVar25 = *(long *)(param_1 + 0x2e0);
      if ((lVar24 != lVar25) &&
         ((*(short *)(lVar24 + 2) != sVar10 || (*(int *)(lVar24 + 4) != *(int *)(param_3 + 6))))) {
        do {
          lVar26 = lVar24;
          if (lVar25 + -0x1c == lVar26) goto LAB_02adeab8;
          lVar24 = lVar26 + 0x1c;
        } while ((*(short *)(lVar26 + 0x1e) != sVar10) ||
                (*(int *)(lVar26 + 0x20) != *(int *)(param_3 + 6)));
      }
      if ((lVar24 == lVar25) || (*(char *)(lVar24 + 0x15) != '\0')) goto LAB_02adeab8;
      bVar7 = true;
    }
    psVar14 = *(short **)(param_1 + 0x310);
    psVar12 = *(short **)(param_1 + 0x318);
    sVar10 = *(short *)(lVar24 + 2);
    if (psVar14 == psVar12) {
LAB_02adebb4:
      uVar13 = *(undefined4 *)(lVar24 + 4);
      if (param_2 == 1) {
        uVar11 = 0;
LAB_02adec54:
        psVar12 = (short *)(param_1 + 0x90);
      }
      else {
        if (param_2 == 2) {
          uVar11 = 0;
          goto LAB_02adec4c;
        }
        uVar11 = 0;
LAB_02adec5c:
        psVar12 = (short *)(param_1 + 0x44);
      }
    }
    else {
      iVar8 = 0;
      psVar16 = psVar14;
      do {
        psVar17 = psVar16 + 0x14;
        if (*psVar16 == sVar10) {
          iVar8 = iVar8 + 1;
        }
        psVar16 = psVar17;
      } while (psVar12 != psVar17);
      if (iVar8 == 0) goto LAB_02adebb4;
      if (bVar7) {
        iVar8 = *(int *)(param_3 + 4);
      }
      else {
        iVar8 = FUN_00a321d4(iVar8 + -1);
        psVar14 = *(short **)(param_1 + 0x310);
        psVar12 = *(short **)(param_1 + 0x318);
        sVar10 = *(short *)(lVar24 + 2);
      }
      if (psVar14 != psVar12) {
        if (*psVar14 == sVar10) {
          psVar12 = psVar14;
        }
        else {
          do {
            psVar14 = psVar14 + 0x14;
            if (psVar12 == psVar14) goto LAB_02adec2c;
          } while (*psVar14 != sVar10);
          psVar12 = psVar14;
        }
      }
LAB_02adec2c:
      uVar13 = *(undefined4 *)(lVar24 + 4);
      uVar11 = *(undefined4 *)(psVar12 + (long)iVar8 * 0x14 + 2);
      if (param_2 == 1) goto LAB_02adec54;
      if (param_2 != 2) goto LAB_02adec5c;
LAB_02adec4c:
      psVar12 = (short *)(param_1 + 0xdc);
    }
    *psVar12 = sVar10;
    psVar12[2] = 0;
    psVar12[3] = 0;
    *(undefined4 *)(psVar12 + 4) = uVar11;
    *(undefined4 *)(psVar12 + 6) = uVar13;
    psVar12[0x20] = 0;
    psVar12[0x21] = 0;
    psVar12[0x22] = 0;
    psVar12[0x23] = 0;
    psVar12[0x24] = 0;
    psVar12[0x25] = 0;
    psVar12[8] = 0;
    psVar12[9] = 0;
    psVar12[10] = 0;
    psVar12[0xb] = 0;
    psVar12[0xc] = 0;
    psVar12[0xd] = 0;
    psVar12[0xe] = 0;
    psVar12[0xf] = 0;
    psVar12[0x10] = 0;
    psVar12[0x11] = 0;
    psVar12[0x12] = 0;
    psVar12[0x13] = 0;
    psVar12[0x14] = 0;
    psVar12[0x15] = 0;
    psVar12[0x16] = 0;
    psVar12[0x17] = 0;
    psVar12[0x18] = 0;
    psVar12[0x19] = 0;
    psVar12[0x1a] = 0;
    psVar12[0x1b] = 0;
    psVar12[0x1c] = 0;
    psVar12[0x1d] = 0;
    psVar12[0x1e] = 0;
    psVar12[0x1f] = 0;
    if (param_2 == 1) {
      lVar25 = param_1 + 0x90;
    }
    else if (param_2 == 2) {
      lVar25 = param_1 + 0xdc;
    }
    else {
      lVar25 = param_1 + 0x44;
    }
    FUN_02ae06a0(&local_d0,*(undefined8 *)(param_1 + 8),lVar25,lVar24,1);
    lVar24 = local_d0;
    param_1 = param_1 + (long)param_2 * 0x20;
    local_d0 = 0;
    puVar18 = *(undefined8 **)(param_1 + 600);
    *(long *)(param_1 + 600) = lVar24;
    if (puVar18 != (undefined8 *)0x0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar24 = FUN_00c4e600();
      iVar2 = *(int *)(lVar24 + 0x12c8);
      iVar8 = iVar2 + 1;
      *(int *)(lVar24 + 0x12c8) = iVar8;
      if (*(int *)(lVar24 + 0x12cc) <= iVar2) {
        *(int *)(lVar24 + 0x12cc) = iVar8;
      }
      (**(code **)*puVar18)(puVar18);
      plVar22 = *(long **)(param_1 + 0x260);
      uVar19 = *(undefined8 *)(param_1 + 0x268);
      uVar20 = *(undefined8 *)(param_1 + 0x270);
      uVar9 = (**(code **)(*plVar22 + 0xf8))(plVar22);
      if (((uVar9 & 1) == 0) || (lVar24 = FUN_00c4e600(), *(int *)(lVar24 + 0x12c8) < 1)) {
        (**(code **)(*plVar22 + 0x18))(plVar22,puVar18,uVar19,uVar20);
      }
      else {
        FUN_00c48fe8(plVar22,puVar18,uVar19,uVar20);
      }
      lVar24 = FUN_00c4e600();
      iVar8 = *(int *)(lVar24 + 0x12c8) + -1;
      *(int *)(lVar24 + 0x12c8) = iVar8;
      if (iVar8 == 0) {
        plVar22 = (long *)FUN_00c4e600();
        if (plVar22[600] != 0) {
          local_78 = plVar22 + plVar22[600] * 3;
          local_68 = plVar22;
          FUN_00c4ea30(&local_68,&local_78);
          plVar21 = (long *)*plVar22;
          plVar1 = plVar22;
          if (plVar22[600] != 0) {
            plVar1 = plVar22 + plVar22[600] * 3;
          }
          if (plVar1 == plVar22) {
            lVar26 = 0;
            lVar25 = 0;
          }
          else {
            lVar25 = 0;
            lVar26 = 0;
            plVar23 = plVar22;
            do {
              (**(code **)(*(long *)*plVar23 + 0xd0))();
              if ((long *)*plVar23 != plVar21) {
                (**(code **)(*plVar21 + 0x100))(plVar21,plVar22 + lVar26 * 3,plVar23);
                plVar21 = (long *)*plVar23;
                lVar26 = lVar25;
              }
              plVar23 = plVar23 + 3;
              lVar25 = lVar25 + 1;
            } while (plVar1 != plVar23);
          }
          (**(code **)(*plVar21 + 0x100))(plVar21,plVar22 + lVar26 * 3,plVar22 + lVar25 * 3);
          plVar22[600] = 0;
        }
        *(undefined4 *)(lVar24 + 0x12cc) = 0;
      }
    }
    *(undefined8 *)(param_1 + 0x270) = local_b8;
    *(undefined8 *)(param_1 + 0x268) = uStack_c0;
    *(undefined8 *)(param_1 + 0x260) = local_c8;
  }
  if (local_b0 == (long *)0x0) {
    return;
  }
LAB_02aded8c:
  plVar1 = plStack_98;
  plVar22 = local_b0;
  lVar24 = local_a0 - (long)local_b0;
  local_a8 = local_b0;
  uVar9 = (**(code **)(*plStack_98 + 0xf8))(plStack_98);
  if (((uVar9 & 1) == 0) || (lVar25 = FUN_00c4e600(), *(int *)(lVar25 + 0x12c8) < 1)) {
    (**(code **)(*plVar1 + 0x18))(plVar1,plVar22,lVar24,8);
  }
  else {
    FUN_00c48fe8(plVar1,plVar22,lVar24,8);
  }
  return;
}


