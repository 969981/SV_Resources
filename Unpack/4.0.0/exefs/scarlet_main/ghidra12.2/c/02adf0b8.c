/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02adf0b8; name: FUN_02adf0b8
 */


void FUN_02adf0b8(long param_1,short *param_2)

{
  long *plVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  short sVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  short sVar9;
  undefined4 uVar10;
  short *psVar11;
  short *psVar12;
  ulong uVar13;
  short *psVar15;
  short *psVar14;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long *plVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  float fVar25;
  float fVar26;
  float fVar27;
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
  lVar20 = *(long *)(param_1 + 0x2d8);
  lVar23 = *(long *)(param_1 + 0x2e0);
  if (lVar20 == lVar23) {
LAB_02adf2f4:
    *(undefined4 *)(param_1 + 0x130) = 0;
  }
  else {
    fVar27 = 0.0;
    do {
      if ((*(char *)(lVar20 + 0x15) == '\x01') &&
         (*(char *)(param_1 + *(char *)(lVar20 + 0x14) + 0x128) != '\0')) {
        sVar9 = *(short *)(lVar20 + 2);
        sVar5 = *(short *)(param_1 + 300);
        if ((((sVar5 != sVar9) && ((sVar9 != 0x17 || (sVar5 != 0x16)))) &&
            ((sVar9 != 0x16 || (sVar5 != 0x17)))) &&
           ((((sVar9 != 0x22 || (sVar5 != 0x20)) && ((sVar9 != 0x20 || (sVar5 != 0x22)))) &&
            (*(short *)(param_1 + 0x348) != sVar9)))) {
          cVar4 = *(char *)(lVar20 + 0x16);
          if (cVar4 == '\x02') {
            if ((((DAT_048406a0 != (code *)0x0) &&
                 (uVar8 = (*DAT_048406a0)(&DAT_048406c0), (uVar8 & 1) != 0)) &&
                (DAT_04840720 != (code *)0x0)) &&
               (uVar8 = (*DAT_04840720)(&DAT_04840740), (uVar8 & 1) != 0)) {
LAB_02adf234:
              local_d0 = lVar20;
              FUN_02ae02e8(&local_b0,&local_d0);
              fVar27 = fVar27 + *(float *)(lVar20 + 0x18);
            }
          }
          else if (cVar4 == '\x01') {
            if ((DAT_048406a0 != (code *)0x0) &&
               (uVar8 = (*DAT_048406a0)(&DAT_048406c0), (uVar8 & 1) != 0)) goto LAB_02adf220;
          }
          else if ((cVar4 == '\0') &&
                  ((DAT_048406a0 == (code *)0x0 ||
                   (uVar8 = (*DAT_048406a0)(&DAT_048406c0), (uVar8 & 1) == 0)))) {
LAB_02adf220:
            if ((DAT_04840720 == (code *)0x0) ||
               (uVar8 = (*DAT_04840720)(&DAT_04840740), (uVar8 & 1) == 0)) goto LAB_02adf234;
          }
        }
      }
      lVar20 = lVar20 + 0x1c;
    } while (lVar23 != lVar20);
    if (local_b0 == local_a8) goto LAB_02adf2f4;
    if (((char)param_2[0x26] == '\0') || (sVar9 = *param_2, sVar9 == 0)) {
LAB_02adf300:
      uVar8 = DAT_04540820 + DAT_04540818;
      uVar13 = DAT_04540820 ^ DAT_04540818;
      DAT_04540818 = uVar13 ^ (DAT_04540818 >> 0x28 | DAT_04540818 << 0x18) ^ uVar13 << 0x10;
      DAT_04540820 = uVar13 >> 0x1b | uVar13 << 0x25;
      fVar25 = fVar27 * (float)uVar8 * 5.421011e-20 + 0.0;
      plVar21 = local_b0;
      fVar27 = 0.0;
      do {
        lVar20 = *plVar21;
        fVar26 = fVar27 + *(float *)(lVar20 + 0x18);
        if ((fVar27 <= fVar25) && (fVar25 < fVar26)) {
          if (lVar20 != 0) goto LAB_02adf37c;
          break;
        }
        plVar21 = plVar21 + 1;
        fVar27 = fVar26;
      } while (local_a8 != plVar21);
      lVar20 = *local_b0;
      if (lVar20 == 0) goto LAB_02adf550;
LAB_02adf37c:
      bVar6 = false;
    }
    else {
      lVar20 = *(long *)(param_1 + 0x2d8);
      lVar23 = *(long *)(param_1 + 0x2e0);
      if ((lVar20 != lVar23) &&
         ((*(short *)(lVar20 + 2) != sVar9 || (*(int *)(lVar20 + 4) != *(int *)(param_2 + 6))))) {
        do {
          lVar24 = lVar20;
          if (lVar23 + -0x1c == lVar24) goto LAB_02adf300;
          lVar20 = lVar24 + 0x1c;
        } while ((*(short *)(lVar24 + 0x1e) != sVar9) ||
                (*(int *)(lVar24 + 0x20) != *(int *)(param_2 + 6)));
      }
      if ((lVar20 == lVar23) || (*(char *)(lVar20 + 0x15) != '\x01')) goto LAB_02adf300;
      bVar6 = true;
    }
    psVar12 = *(short **)(param_1 + 0x310);
    psVar11 = *(short **)(param_1 + 0x318);
    sVar9 = *(short *)(lVar20 + 2);
    if (psVar12 == psVar11) {
LAB_02adf3c0:
      uVar10 = 0;
    }
    else {
      iVar7 = 0;
      psVar14 = psVar12;
      do {
        psVar15 = psVar14 + 0x14;
        if (*psVar14 == sVar9) {
          iVar7 = iVar7 + 1;
        }
        psVar14 = psVar15;
      } while (psVar11 != psVar15);
      if (iVar7 == 0) goto LAB_02adf3c0;
      if (bVar6) {
        iVar7 = *(int *)(param_2 + 4);
      }
      else {
        iVar7 = FUN_00a321d4(iVar7 + -1);
        psVar12 = *(short **)(param_1 + 0x310);
        psVar11 = *(short **)(param_1 + 0x318);
        sVar9 = *(short *)(lVar20 + 2);
      }
      if (psVar12 != psVar11) {
        if (*psVar12 == sVar9) {
          psVar11 = psVar12;
        }
        else {
          do {
            psVar12 = psVar12 + 0x14;
            if (psVar11 == psVar12) goto LAB_02adf414;
          } while (*psVar12 != sVar9);
          psVar11 = psVar12;
        }
      }
LAB_02adf414:
      uVar10 = *(undefined4 *)(psVar11 + (long)iVar7 * 0x14 + 2);
    }
    uVar2 = *(undefined4 *)(lVar20 + 4);
    *(short *)(param_1 + 300) = sVar9;
    *(undefined4 *)(param_1 + 0x130) = 0;
    *(undefined4 *)(param_1 + 0x134) = uVar10;
    *(undefined4 *)(param_1 + 0x174) = 0;
    *(undefined4 *)(param_1 + 0x138) = uVar2;
    *(undefined8 *)(param_1 + 0x13c) = 0;
    *(undefined8 *)(param_1 + 0x144) = 0;
    *(undefined8 *)(param_1 + 0x14c) = 0;
    *(undefined8 *)(param_1 + 0x154) = 0;
    *(undefined8 *)(param_1 + 0x15c) = 0;
    *(undefined8 *)(param_1 + 0x164) = 0;
    *(undefined8 *)(param_1 + 0x16c) = 0;
    FUN_02ae06a0(&local_d0,*(undefined8 *)(param_1 + 8),param_1 + 300,lVar20,1);
    lVar20 = local_d0;
    local_d0 = 0;
    puVar16 = *(undefined8 **)(param_1 + 0x2b8);
    *(long *)(param_1 + 0x2b8) = lVar20;
    if (puVar16 != (undefined8 *)0x0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar20 = FUN_00c4e600();
      iVar3 = *(int *)(lVar20 + 0x12c8);
      iVar7 = iVar3 + 1;
      *(int *)(lVar20 + 0x12c8) = iVar7;
      if (*(int *)(lVar20 + 0x12cc) <= iVar3) {
        *(int *)(lVar20 + 0x12cc) = iVar7;
      }
      (**(code **)*puVar16)(puVar16);
      plVar21 = *(long **)(param_1 + 0x2c0);
      uVar17 = *(undefined8 *)(param_1 + 0x2c8);
      uVar18 = *(undefined8 *)(param_1 + 0x2d0);
      uVar8 = (**(code **)(*plVar21 + 0xf8))(plVar21);
      if (((uVar8 & 1) == 0) || (lVar20 = FUN_00c4e600(), *(int *)(lVar20 + 0x12c8) < 1)) {
        (**(code **)(*plVar21 + 0x18))(plVar21,puVar16,uVar17,uVar18);
      }
      else {
        FUN_00c48fe8(plVar21,puVar16,uVar17,uVar18);
      }
      lVar20 = FUN_00c4e600();
      iVar7 = *(int *)(lVar20 + 0x12c8) + -1;
      *(int *)(lVar20 + 0x12c8) = iVar7;
      if (iVar7 == 0) {
        plVar21 = (long *)FUN_00c4e600();
        if (plVar21[600] != 0) {
          local_78 = plVar21 + plVar21[600] * 3;
          local_68 = plVar21;
          FUN_00c4ea30(&local_68,&local_78);
          plVar19 = (long *)*plVar21;
          plVar1 = plVar21;
          if (plVar21[600] != 0) {
            plVar1 = plVar21 + plVar21[600] * 3;
          }
          if (plVar1 == plVar21) {
            lVar24 = 0;
            lVar23 = 0;
          }
          else {
            lVar23 = 0;
            lVar24 = 0;
            plVar22 = plVar21;
            do {
              (**(code **)(*(long *)*plVar22 + 0xd0))();
              if ((long *)*plVar22 != plVar19) {
                (**(code **)(*plVar19 + 0x100))(plVar19,plVar21 + lVar24 * 3,plVar22);
                plVar19 = (long *)*plVar22;
                lVar24 = lVar23;
              }
              plVar22 = plVar22 + 3;
              lVar23 = lVar23 + 1;
            } while (plVar1 != plVar22);
          }
          (**(code **)(*plVar19 + 0x100))(plVar19,plVar21 + lVar24 * 3,plVar21 + lVar23 * 3);
          plVar21[600] = 0;
        }
        *(undefined4 *)(lVar20 + 0x12cc) = 0;
      }
    }
    *(undefined8 *)(param_1 + 0x2d0) = local_b8;
    *(undefined8 *)(param_1 + 0x2c8) = uStack_c0;
    *(undefined8 *)(param_1 + 0x2c0) = local_c8;
  }
  if (local_b0 == (long *)0x0) {
    return;
  }
LAB_02adf550:
  plVar1 = plStack_98;
  plVar21 = local_b0;
  lVar20 = local_a0 - (long)local_b0;
  local_a8 = local_b0;
  uVar8 = (**(code **)(*plStack_98 + 0xf8))(plStack_98);
  if (((uVar8 & 1) == 0) || (lVar23 = FUN_00c4e600(), *(int *)(lVar23 + 0x12c8) < 1)) {
    (**(code **)(*plVar1 + 0x18))(plVar1,plVar21,lVar20,8);
  }
  else {
    FUN_00c48fe8(plVar1,plVar21,lVar20,8);
  }
  return;
}


