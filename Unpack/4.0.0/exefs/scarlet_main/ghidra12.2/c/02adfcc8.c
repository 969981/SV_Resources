/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02adfcc8; name: FUN_02adfcc8
 */


void FUN_02adfcc8(long param_1,short *param_2)

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
  long lVar18;
  undefined8 uVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  long lVar24;
  long lVar25;
  float fVar26;
  float fVar27;
  float fVar28;
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
  lVar18 = *(long *)(param_1 + 0x2d8);
  lVar21 = *(long *)(param_1 + 0x2e0);
  if (lVar18 != lVar21) {
    fVar28 = 0.0;
    do {
      if ((*(char *)(lVar18 + 0x15) == '\x02') &&
         (*(char *)(param_1 + *(char *)(lVar18 + 0x14) + 0x128) != '\0')) {
        sVar9 = *(short *)(lVar18 + 2);
        sVar5 = *(short *)(param_1 + 0x178);
        if ((((sVar5 != sVar9) && ((sVar9 != 0x17 || (sVar5 != 0x16)))) &&
            ((sVar9 != 0x16 || (sVar5 != 0x17)))) &&
           ((((sVar9 != 0x22 || (sVar5 != 0x20)) && ((sVar9 != 0x20 || (sVar5 != 0x22)))) &&
            (*(short *)(param_1 + 0x34a) != sVar9)))) {
          cVar4 = *(char *)(lVar18 + 0x16);
          if (cVar4 == '\x02') {
            if ((((DAT_048406a0 != (code *)0x0) &&
                 (uVar8 = (*DAT_048406a0)(&DAT_048406c0), (uVar8 & 1) != 0)) &&
                (DAT_04840720 != (code *)0x0)) &&
               (uVar8 = (*DAT_04840720)(&DAT_04840740), (uVar8 & 1) != 0)) {
LAB_02adfe44:
              local_d0 = lVar18;
              FUN_02ae02e8(&local_b0,&local_d0);
              fVar28 = fVar28 + *(float *)(lVar18 + 0x18);
            }
          }
          else if (cVar4 == '\x01') {
            if ((DAT_048406a0 != (code *)0x0) &&
               (uVar8 = (*DAT_048406a0)(&DAT_048406c0), (uVar8 & 1) != 0)) goto LAB_02adfe30;
          }
          else if ((cVar4 == '\0') &&
                  ((DAT_048406a0 == (code *)0x0 ||
                   (uVar8 = (*DAT_048406a0)(&DAT_048406c0), (uVar8 & 1) == 0)))) {
LAB_02adfe30:
            if ((DAT_04840720 == (code *)0x0) ||
               (uVar8 = (*DAT_04840720)(&DAT_04840740), (uVar8 & 1) == 0)) goto LAB_02adfe44;
          }
        }
      }
      lVar18 = lVar18 + 0x1c;
    } while (lVar21 != lVar18);
    if (local_b0 != local_a8) {
      if (((char)param_2[0x26] == '\0') || (sVar9 = *param_2, sVar9 == 0)) {
LAB_02adff6c:
        uVar8 = DAT_04540820 + DAT_04540818;
        uVar13 = DAT_04540820 ^ DAT_04540818;
        DAT_04540818 = uVar13 ^ (DAT_04540818 >> 0x28 | DAT_04540818 << 0x18) ^ uVar13 << 0x10;
        DAT_04540820 = uVar13 >> 0x1b | uVar13 << 0x25;
        fVar26 = fVar28 * (float)uVar8 * 5.421011e-20 + 0.0;
        plVar22 = local_b0;
        fVar28 = 0.0;
        do {
          lVar18 = *plVar22;
          fVar27 = fVar28 + *(float *)(lVar18 + 0x18);
          if ((fVar28 <= fVar26) && (fVar26 < fVar27)) {
            if (lVar18 != 0) goto LAB_02adffe8;
            break;
          }
          plVar22 = plVar22 + 1;
          fVar28 = fVar27;
        } while (local_a8 != plVar22);
        lVar18 = *local_b0;
        if (lVar18 == 0) goto LAB_02adff04;
LAB_02adffe8:
        bVar6 = false;
      }
      else {
        lVar18 = *(long *)(param_1 + 0x2d8);
        lVar21 = *(long *)(param_1 + 0x2e0);
        if ((lVar18 != lVar21) &&
           ((*(short *)(lVar18 + 2) != sVar9 || (*(int *)(lVar18 + 4) != *(int *)(param_2 + 6))))) {
          do {
            lVar24 = lVar18;
            if (lVar21 + -0x1c == lVar24) goto LAB_02adff6c;
            lVar18 = lVar24 + 0x1c;
          } while ((*(short *)(lVar24 + 0x1e) != sVar9) ||
                  (*(int *)(lVar24 + 0x20) != *(int *)(param_2 + 6)));
        }
        if ((lVar18 == lVar21) || (*(char *)(lVar18 + 0x15) != '\x02')) goto LAB_02adff6c;
        bVar6 = true;
      }
      psVar12 = *(short **)(param_1 + 0x310);
      psVar11 = *(short **)(param_1 + 0x318);
      sVar9 = *(short *)(lVar18 + 2);
      if (psVar12 == psVar11) {
LAB_02ae002c:
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
        if (iVar7 == 0) goto LAB_02ae002c;
        if (bVar6) {
          iVar7 = *(int *)(param_2 + 4);
        }
        else {
          iVar7 = FUN_00a321d4(iVar7 + -1);
          psVar12 = *(short **)(param_1 + 0x310);
          psVar11 = *(short **)(param_1 + 0x318);
          sVar9 = *(short *)(lVar18 + 2);
        }
        if (psVar12 != psVar11) {
          if (*psVar12 == sVar9) {
            psVar11 = psVar12;
          }
          else {
            do {
              psVar12 = psVar12 + 0x14;
              if (psVar11 == psVar12) goto LAB_02ae0080;
            } while (*psVar12 != sVar9);
            psVar11 = psVar12;
          }
        }
LAB_02ae0080:
        uVar10 = *(undefined4 *)(psVar11 + (long)iVar7 * 0x14 + 2);
      }
      uVar2 = *(undefined4 *)(lVar18 + 4);
      *(short *)(param_1 + 0x178) = sVar9;
      *(undefined4 *)(param_1 + 0x17c) = 0;
      *(undefined4 *)(param_1 + 0x180) = uVar10;
      *(undefined8 *)(param_1 + 0x188) = 0;
      *(undefined8 *)(param_1 + 400) = 0;
      *(undefined4 *)(param_1 + 0x184) = uVar2;
      *(undefined8 *)(param_1 + 0x1b8) = 0;
      *(undefined4 *)(param_1 + 0x1c0) = 0;
      *(undefined8 *)(param_1 + 0x198) = 0;
      *(undefined8 *)(param_1 + 0x1a0) = 0;
      *(undefined8 *)(param_1 + 0x1a8) = 0;
      *(undefined8 *)(param_1 + 0x1b0) = 0;
      FUN_02ae06a0(&local_d0,*(undefined8 *)(param_1 + 8),param_1 + 0x178,lVar18,1);
      lVar21 = local_d0;
      local_d0 = 0;
      puVar16 = *(undefined8 **)(param_1 + 0xb00);
      *(long *)(param_1 + 0xb00) = lVar21;
      if (puVar16 != (undefined8 *)0x0) {
        FUN_00c4e600();
        FUN_00c4e600();
        lVar21 = FUN_00c4e600();
        iVar3 = *(int *)(lVar21 + 0x12c8);
        iVar7 = iVar3 + 1;
        *(int *)(lVar21 + 0x12c8) = iVar7;
        if (*(int *)(lVar21 + 0x12cc) <= iVar3) {
          *(int *)(lVar21 + 0x12cc) = iVar7;
        }
        (**(code **)*puVar16)(puVar16);
        plVar22 = *(long **)(param_1 + 0xb08);
        uVar17 = *(undefined8 *)(param_1 + 0xb10);
        uVar19 = *(undefined8 *)(param_1 + 0xb18);
        uVar8 = (**(code **)(*plVar22 + 0xf8))(plVar22);
        if (((uVar8 & 1) == 0) || (lVar21 = FUN_00c4e600(), *(int *)(lVar21 + 0x12c8) < 1)) {
          (**(code **)(*plVar22 + 0x18))(plVar22,puVar16,uVar17,uVar19);
        }
        else {
          FUN_00c48fe8(plVar22,puVar16,uVar17,uVar19);
        }
        lVar21 = FUN_00c4e600();
        iVar7 = *(int *)(lVar21 + 0x12c8) + -1;
        *(int *)(lVar21 + 0x12c8) = iVar7;
        if (iVar7 == 0) {
          plVar22 = (long *)FUN_00c4e600();
          if (plVar22[600] != 0) {
            local_78 = plVar22 + plVar22[600] * 3;
            local_68 = plVar22;
            FUN_00c4ea30(&local_68,&local_78);
            plVar20 = (long *)*plVar22;
            plVar1 = plVar22;
            if (plVar22[600] != 0) {
              plVar1 = plVar22 + plVar22[600] * 3;
            }
            if (plVar1 == plVar22) {
              lVar25 = 0;
              lVar24 = 0;
            }
            else {
              lVar24 = 0;
              lVar25 = 0;
              plVar23 = plVar22;
              do {
                (**(code **)(*(long *)*plVar23 + 0xd0))();
                if ((long *)*plVar23 != plVar20) {
                  (**(code **)(*plVar20 + 0x100))(plVar20,plVar22 + lVar25 * 3,plVar23);
                  plVar20 = (long *)*plVar23;
                  lVar25 = lVar24;
                }
                plVar23 = plVar23 + 3;
                lVar24 = lVar24 + 1;
              } while (plVar1 != plVar23);
            }
            (**(code **)(*plVar20 + 0x100))(plVar20,plVar22 + lVar25 * 3,plVar22 + lVar24 * 3);
            plVar22[600] = 0;
          }
          *(undefined4 *)(lVar21 + 0x12cc) = 0;
        }
      }
      *(undefined8 *)(param_1 + 0xb18) = local_b8;
      *(undefined8 *)(param_1 + 0xb10) = uStack_c0;
      *(undefined8 *)(param_1 + 0xb08) = local_c8;
      sVar9 = *(short *)(lVar18 + 2);
      if (sVar9 == 0xe) {
        if (*(int *)(param_1 + 0xb40) < 0) {
          *(int *)(param_1 + 0xb64) = (int)*(char *)(lVar18 + 0x16);
        }
        FUN_00a3743c(param_1 + 0xb3c);
        sVar9 = *(short *)(lVar18 + 2);
      }
      if (sVar9 == 0xf) {
        *(int *)(param_1 + 0xb78) = (int)*(char *)(lVar18 + 0x16);
      }
      goto LAB_02adff04;
    }
  }
  *(undefined4 *)(param_1 + 0x17c) = 0;
LAB_02adff04:
  plVar1 = plStack_98;
  plVar22 = local_b0;
  if (local_b0 != (long *)0x0) {
    local_a8 = local_b0;
    lVar18 = local_a0 - (long)local_b0;
    uVar8 = (**(code **)(*plStack_98 + 0xf8))(plStack_98);
    if (((uVar8 & 1) == 0) || (lVar21 = FUN_00c4e600(), *(int *)(lVar21 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,plVar22,lVar18,8);
    }
    else {
      FUN_00c48fe8(plVar1,plVar22,lVar18,8);
    }
  }
  return;
}


