/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03364b58; name: FUN_03364b58
 */


ulong * FUN_03364b58(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  ulong *puVar10;
  size_t sVar11;
  char *pcVar12;
  ulong *puVar13;
  void *__dest;
  char *pcVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  uint uVar17;
  code *pcVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  char *local_300;
  char *local_2f8;
  char *local_2f0;
  char *pcStack_2e8;
  undefined *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  char **local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined1 local_f8;
  char *local_f0;
  undefined8 local_e8;
  char local_e0 [128];
  int local_60;
  undefined1 auStack_58 [8];
  
  puVar6 = PTR_DAT_047d1a08;
  local_2f0 = &DAT_00000028;
  puVar10 = (ulong *)(**(code **)PTR_DAT_047d1a08)(0,&local_2f0,0);
  if (*(code **)(puVar6 + 0x10) != (code *)0x0) {
    (**(code **)(puVar6 + 0x10))(puVar10,"Field");
  }
  *puVar10 = 0;
  puVar13 = puVar10 + 1;
  *puVar13 = 0;
  puVar10[2] = 0;
  puVar10[3] = 0xffffffff00000000;
  *(byte *)(puVar10 + 4) = (byte)puVar10[4] & 0xfc;
  FUN_031ca644(puVar10,*param_2,param_2[1]);
  FUN_031ca644(puVar13,*param_3,param_3[1]);
  *(byte *)(puVar10 + 4) = (byte)puVar10[4] | 1;
  pcVar14 = (char *)(*puVar13 & 0xfffffffffffffffe);
  if (pcVar14 == (char *)0x0) {
    iVar9 = 0;
  }
  else {
    sVar11 = strlen(pcVar14);
    iVar9 = (int)sVar11;
  }
  FUN_03366938(auStack_58,pcVar14,pcVar14 + iVar9);
  local_f0 = local_e0;
  local_e8._0_4_ = 0;
  local_e8._4_4_ = 0x80000080;
  local_60 = 1;
  FUN_031c6afc(&local_f0,*puVar13 & 0xfffffffffffffffe,0xffffffff);
  lVar22 = (long)(int)(uint)local_e8;
  uVar24 = lVar22 - 1;
  uVar25 = uVar24 & ((long)uVar24 >> 0x3f ^ 0xffffffffffffffffU);
  for (uVar20 = 0;
      (byte)local_f0[uVar20] < 0x21 &&
      (1L << ((ulong)(byte)local_f0[uVar20] & 0x3f) & 0x100002600U) != 0; uVar20 = uVar20 + 1) {
    if (uVar25 == uVar20) {
      uVar20 = uVar25;
      break;
    }
  }
  uVar19 = (uint)uVar20;
  if ((int)(uint)uVar24 <= (int)(uint)uVar20) {
    uVar19 = (uint)uVar24;
  }
  if (0 < (int)uVar19) {
    uVar20 = lVar22 - (int)uVar19;
    local_e8._0_4_ = (uint)uVar20;
    if ((uint)local_e8 != 0) {
      if ((ulong)(lVar22 + (int)~uVar19) < 3) {
        uVar24 = 0;
      }
      else {
        uVar24 = 0;
        do {
          pcVar14 = local_f0 + uVar24 + (ulong)uVar19 + 3;
          pcVar12 = local_f0 + uVar24 + 1;
          uVar24 = uVar24 + 4;
          pcVar12[-1] = pcVar14[-3];
          *pcVar12 = pcVar14[-2];
          pcVar12[1] = pcVar14[-1];
          pcVar12[2] = *pcVar14;
        } while ((uVar20 & 0xfffffffffffffffc) != uVar24);
      }
      if ((uVar20 & 3) != 0) {
        lVar22 = -(uVar20 & 3);
        pcVar14 = local_f0 + uVar24;
        do {
          bVar7 = lVar22 != -1;
          lVar22 = lVar22 + 1;
          *pcVar14 = pcVar14[uVar19];
          pcVar14 = pcVar14 + 1;
        } while (bVar7);
      }
    }
  }
  FUN_031c9cc4(&local_f0);
  pcVar14 = local_f0;
  sVar11 = strlen(local_f0);
  iVar9 = (int)sVar11;
  if (iVar9 < 1) {
LAB_03365244:
    if (*pcVar14 != 'h') goto switchD_03365370_caseD_51;
    if (((pcVar14[1] != 'k') || (pcVar14[2] != 'A')) ||
       ((pcVar14[3] != 'r' || (((pcVar14[4] != 'r' || (pcVar14[5] != 'a')) || (pcVar14[6] != 'y'))))
       )) {
      lVar22 = 1;
LAB_033652f4:
      if (lVar22 != 0x1d) goto code_r0x033652fc;
      uVar19 = 0x1d;
      if ((int)(uint)local_e8 < 0x1e) {
        uVar19 = (uint)local_e8 - 1;
      }
      uVar17 = (uint)local_e8;
      if (0 < (int)uVar19) {
        uVar4 = (uint)local_e8 - uVar19;
        if (uVar4 == 0) {
          uVar17 = 0;
          local_e8._0_4_ = uVar4;
        }
        else {
          uVar20 = (long)(int)uVar4 & 3;
          if ((ulong)((long)(int)(uint)local_e8 + (long)(int)~uVar19) < 3) {
            uVar24 = 0;
          }
          else {
            uVar24 = 0;
            do {
              pcVar12 = pcVar14 + uVar24 + (ulong)uVar19 + 3;
              pcVar2 = pcVar14 + uVar24 + 1;
              uVar24 = uVar24 + 4;
              pcVar2[-1] = pcVar12[-3];
              *pcVar2 = pcVar12[-2];
              pcVar2[1] = pcVar12[-1];
              pcVar2[2] = *pcVar12;
            } while (((long)(int)uVar4 & 0xfffffffffffffffcU) != uVar24);
          }
          if (uVar20 != 0) {
            pcVar14 = pcVar14 + uVar24;
            do {
              uVar20 = uVar20 - 1;
              *pcVar14 = pcVar14[uVar19];
              pcVar14 = pcVar14 + 1;
            } while (uVar20 != 0);
          }
          pcVar14 = local_f0;
          local_e8._0_4_ = uVar4;
          uVar17 = uVar4;
        }
      }
      uVar19 = uVar17 - 1;
      for (uVar20 = 0; bVar3 = pcVar14[uVar20],
          bVar3 < 0x21 && (1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) != 0; uVar20 = uVar20 + 1) {
        if (((long)(int)uVar19 & ((long)(int)uVar19 >> 0x3f ^ 0xffffffffffffffffU)) == uVar20)
        goto LAB_03365a80;
      }
      if ((bVar3 == 0x3c) && (iVar9 = (int)uVar20, iVar9 < (int)(uVar17 - 2))) {
        uVar4 = uVar19;
        if (iVar9 + 1 < (int)uVar19) {
          uVar4 = iVar9 + 1;
        }
        if ((1 < (int)uVar17) && (local_e8._0_4_ = uVar17 - uVar4, (uint)local_e8 != 0)) {
          uVar21 = iVar9 + 1;
          if ((ulong)((long)(int)~uVar4 + (long)(int)uVar17) < 3) {
            uVar20 = 0;
          }
          else {
            uVar4 = uVar21;
            if ((int)uVar19 <= (int)uVar21) {
              uVar4 = uVar19;
            }
            uVar20 = 0;
            do {
              pcVar12 = pcVar14 + uVar20 + (ulong)uVar4 + 3;
              pcVar2 = pcVar14 + uVar20 + 1;
              uVar20 = uVar20 + 4;
              pcVar2[-1] = pcVar12[-3];
              *pcVar2 = pcVar12[-2];
              pcVar2[1] = pcVar12[-1];
              pcVar2[2] = *pcVar12;
            } while (((long)(int)uVar17 - (long)(int)uVar4 & 0xfffffffffffffffcU) != uVar20);
          }
          if (((uint)local_e8 & 3) != 0) {
            if ((int)uVar19 <= (int)uVar21) {
              uVar21 = uVar19;
            }
            lVar22 = -((ulong)(uVar17 - uVar21) & 3);
            pcVar14 = pcVar14 + uVar20;
            do {
              bVar7 = lVar22 != -1;
              lVar22 = lVar22 + 1;
              *pcVar14 = pcVar14[uVar21];
              pcVar14 = pcVar14 + 1;
            } while (bVar7);
          }
        }
      }
LAB_03365a80:
      FUN_031c9dbc(&local_f0,0x3e);
      lVar22 = (long)(int)(uint)local_e8;
      uVar24 = lVar22 - 1;
      uVar25 = uVar24 & ((long)uVar24 >> 0x3f ^ 0xffffffffffffffffU);
      uVar20 = 0;
      do {
        if (0x20 < (byte)local_f0[uVar20] ||
            (1L << ((ulong)(byte)local_f0[uVar20] & 0x3f) & 0x100002600U) == 0) {
LAB_03365ad0:
          uVar19 = (uint)uVar20;
          if ((int)(uint)uVar24 <= (int)(uint)uVar20) {
            uVar19 = (uint)uVar24;
          }
          if (0 < (int)uVar19) {
            uVar20 = lVar22 - (int)uVar19;
            local_e8._0_4_ = (uint)uVar20;
            if ((uint)local_e8 != 0) {
              if ((ulong)(lVar22 + (int)~uVar19) < 3) {
                uVar24 = 0;
              }
              else {
                uVar24 = 0;
                do {
                  pcVar14 = local_f0 + uVar24 + (ulong)uVar19 + 3;
                  pcVar12 = local_f0 + uVar24 + 1;
                  uVar24 = uVar24 + 4;
                  pcVar12[-1] = pcVar14[-3];
                  *pcVar12 = pcVar14[-2];
                  pcVar12[1] = pcVar14[-1];
                  pcVar12[2] = *pcVar14;
                } while ((uVar20 & 0xfffffffffffffffc) != uVar24);
              }
              if ((uVar20 & 3) != 0) {
                lVar22 = -(uVar20 & 3);
                pcVar14 = local_f0 + uVar24;
                do {
                  bVar7 = lVar22 != -1;
                  lVar22 = lVar22 + 1;
                  *pcVar14 = pcVar14[uVar19];
                  pcVar14 = pcVar14 + 1;
                } while (bVar7);
              }
            }
          }
          goto LAB_033660c4;
        }
        if (uVar25 == uVar20) {
          uVar20 = uVar25;
          goto LAB_03365ad0;
        }
        uVar20 = uVar20 + 1;
      } while( true );
    }
    uVar19 = 7;
    if ((int)(uint)local_e8 < 8) {
      uVar19 = (uint)local_e8 - 1;
    }
    uVar17 = (uint)local_e8;
    if (0 < (int)uVar19) {
      uVar4 = (uint)local_e8 - uVar19;
      if (uVar4 == 0) {
        uVar17 = 0;
        local_e8._0_4_ = uVar4;
      }
      else {
        uVar20 = (long)(int)uVar4 & 3;
        if ((ulong)((long)(int)(uint)local_e8 + (long)(int)~uVar19) < 3) {
          uVar24 = 0;
        }
        else {
          uVar24 = 0;
          do {
            pcVar12 = pcVar14 + uVar24 + (ulong)uVar19 + 3;
            pcVar2 = pcVar14 + uVar24 + 1;
            uVar24 = uVar24 + 4;
            pcVar2[-1] = pcVar12[-3];
            *pcVar2 = pcVar12[-2];
            pcVar2[1] = pcVar12[-1];
            pcVar2[2] = *pcVar12;
          } while (((long)(int)uVar4 & 0xfffffffffffffffcU) != uVar24);
        }
        if (uVar20 != 0) {
          pcVar14 = pcVar14 + uVar24;
          do {
            uVar20 = uVar20 - 1;
            *pcVar14 = pcVar14[uVar19];
            pcVar14 = pcVar14 + 1;
          } while (uVar20 != 0);
        }
        pcVar14 = local_f0;
        local_e8._0_4_ = uVar4;
        uVar17 = uVar4;
      }
    }
    uVar19 = uVar17 - 1;
    for (uVar20 = 0; bVar3 = pcVar14[uVar20],
        bVar3 < 0x21 && (1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) != 0; uVar20 = uVar20 + 1) {
      if (((long)(int)uVar19 & ((long)(int)uVar19 >> 0x3f ^ 0xffffffffffffffffU)) == uVar20)
      goto LAB_03366318;
    }
    if ((bVar3 == 0x3c) && (iVar9 = (int)uVar20, iVar9 < (int)(uVar17 - 2))) {
      uVar4 = uVar19;
      if (iVar9 + 1 < (int)uVar19) {
        uVar4 = iVar9 + 1;
      }
      if ((1 < (int)uVar17) && (local_e8._0_4_ = uVar17 - uVar4, (uint)local_e8 != 0)) {
        uVar21 = iVar9 + 1;
        if ((ulong)((long)(int)~uVar4 + (long)(int)uVar17) < 3) {
          uVar20 = 0;
        }
        else {
          uVar4 = uVar21;
          if ((int)uVar19 <= (int)uVar21) {
            uVar4 = uVar19;
          }
          uVar20 = 0;
          do {
            pcVar12 = pcVar14 + uVar20 + (ulong)uVar4 + 3;
            pcVar2 = pcVar14 + uVar20 + 1;
            uVar20 = uVar20 + 4;
            pcVar2[-1] = pcVar12[-3];
            *pcVar2 = pcVar12[-2];
            pcVar2[1] = pcVar12[-1];
            pcVar2[2] = *pcVar12;
          } while (((long)(int)uVar17 - (long)(int)uVar4 & 0xfffffffffffffffcU) != uVar20);
        }
        if (((uint)local_e8 & 3) != 0) {
          if ((int)uVar19 <= (int)uVar21) {
            uVar21 = uVar19;
          }
          lVar22 = -((ulong)(uVar17 - uVar21) & 3);
          pcVar14 = pcVar14 + uVar20;
          do {
            bVar7 = lVar22 != -1;
            lVar22 = lVar22 + 1;
            *pcVar14 = pcVar14[uVar21];
            pcVar14 = pcVar14 + 1;
          } while (bVar7);
        }
      }
    }
LAB_03366318:
    FUN_031c9dbc(&local_f0,0x3e);
    lVar22 = (long)(int)(uint)local_e8;
    uVar24 = lVar22 - 1;
    uVar25 = uVar24 & ((long)uVar24 >> 0x3f ^ 0xffffffffffffffffU);
    for (uVar20 = 0;
        (byte)local_f0[uVar20] < 0x21 &&
        (1L << ((ulong)(byte)local_f0[uVar20] & 0x3f) & 0x100002600U) != 0; uVar20 = uVar20 + 1) {
      if (uVar25 == uVar20) {
        uVar20 = uVar25;
        break;
      }
    }
    uVar19 = (uint)uVar20;
    if ((int)(uint)uVar24 <= (int)(uint)uVar20) {
      uVar19 = (uint)uVar24;
    }
    if (0 < (int)uVar19) {
      uVar20 = lVar22 - (int)uVar19;
      local_e8._0_4_ = (uint)uVar20;
      if ((uint)local_e8 != 0) {
        if ((ulong)(lVar22 + (int)~uVar19) < 3) {
          uVar24 = 0;
        }
        else {
          uVar24 = 0;
          do {
            pcVar14 = local_f0 + uVar24 + (ulong)uVar19 + 3;
            pcVar12 = local_f0 + uVar24 + 1;
            uVar24 = uVar24 + 4;
            pcVar12[-1] = pcVar14[-3];
            *pcVar12 = pcVar14[-2];
            pcVar12[1] = pcVar14[-1];
            pcVar12[2] = *pcVar14;
          } while ((uVar20 & 0xfffffffffffffffc) != uVar24);
        }
        if ((uVar20 & 3) != 0) {
          lVar22 = -(uVar20 & 3);
          pcVar14 = local_f0 + uVar24;
          do {
            bVar7 = lVar22 != -1;
            lVar22 = lVar22 + 1;
            *pcVar14 = pcVar14[uVar19];
            pcVar14 = pcVar14 + 1;
          } while (bVar7);
        }
      }
    }
    FUN_031c9cc4(&local_f0);
    if ((0x1a < (int)(uint)local_e8) &&
       ((*(long *)(local_f0 + ((ulong)(uint)local_e8 - 0x1b)) == 0x746e6f436b68202c &&
        *(long *)(local_f0 + ((ulong)(uint)local_e8 - 0x13)) == 0x61654872656e6961) &&
        (*(long *)(local_f0 + ((ulong)(uint)local_e8 - 0xb)) == 0x7461636f6c6c4170 &&
        *(short *)(local_f0 + ((ulong)(uint)local_e8 - 3)) == 0x726f))) {
      uVar19 = (uint)local_e8;
      if ((int)(uint)local_e8 < 0x1c) {
        uVar19 = 0x1b;
      }
      iVar8 = uVar19 - 0x1b;
      iVar5 = (local_e8._4_4_ & 0x7fffffff) - 1;
      iVar9 = iVar8;
      if (iVar5 <= iVar8) {
        iVar9 = iVar5;
      }
      if (local_60 != 0) {
        iVar9 = iVar8;
      }
      uVar19 = iVar9 + 1;
      if ((int)(local_e8._4_4_ & 0x7fffffff) <= iVar9) {
        FUN_030b4a20(&local_f0,PTR_PTR_047d1a50 + 0x20,uVar19);
      }
      if (((int)(uint)local_e8 <= iVar9) || ((int)uVar19 < (int)(uint)local_e8)) {
        local_e8._0_4_ = uVar19;
      }
      local_f0[iVar9] = '\0';
    }
    *(undefined4 *)((long)puVar10 + 0x1c) = 4;
    local_2f8 = local_f0 + (int)(uint)local_e8;
    local_300 = local_f0;
LAB_033660f4:
    local_2f8 = local_2f8 + -1;
    pcStack_2e8 = "";
    local_2f0 = "";
    uVar20 = FUN_03364b58(param_1,&local_2f0,&local_300);
    if (uVar20 != 0) {
      puVar10[2] = uVar20;
      *(undefined4 *)(puVar10 + 3) = 0;
      goto LAB_03366138;
    }
LAB_03366118:
    FUN_03364aa0(puVar10);
    (**(code **)(puVar6 + 8))(0,puVar10,0);
  }
  else {
    if (pcVar14[(long)((sVar11 << 0x20) + -0x100000000) >> 0x20] == '*') {
      iVar8 = strcmp(pcVar14,"const char*");
      if (iVar8 == 0) goto LAB_03364f88;
      uVar19 = (uint)local_e8 - 2 & ((int)((uint)local_e8 - 2) >> 0x1f ^ 0xffffffffU);
      uVar4 = (local_e8._4_4_ & 0x7fffffff) - 1;
      uVar17 = uVar19;
      if ((int)uVar4 <= (int)uVar19) {
        uVar17 = uVar4;
      }
      if (local_60 != 0) {
        uVar17 = uVar19;
      }
      uVar19 = uVar17 + 1;
      if ((int)(local_e8._4_4_ & 0x7fffffff) <= (int)uVar17) {
        FUN_030b4a20(&local_f0,PTR_PTR_047d1a50 + 0x20,uVar19);
      }
      pcVar14 = local_f0;
      if (((int)(uint)local_e8 <= (int)uVar17) || ((int)uVar19 < (int)(uint)local_e8)) {
        local_e8._0_4_ = uVar19;
      }
      local_f0[(int)uVar17] = '\0';
      iVar9 = strcmp(local_f0,"hkReflect::Type");
      if (iVar9 == 0) {
        uVar20 = 0x200000000;
        goto LAB_03365678;
      }
      *(undefined4 *)((long)puVar10 + 0x1c) = 1;
      local_2f8 = pcVar14 + (int)(uint)local_e8;
      local_300 = pcVar14;
      goto LAB_033660f4;
    }
    if (pcVar14[(long)((sVar11 << 0x20) + -0x100000000) >> 0x20] != ']') {
LAB_03364f88:
      lVar22 = sVar11 << 0x20;
      if (iVar9 < 0xe) {
        if (iVar9 < 9) goto LAB_03365244;
        bVar7 = true;
      }
      else {
        lVar23 = lVar22 + -0xe00000000 >> 0x20;
        if (((pcVar14[lVar23] == 'h') && (pcVar14[lVar23 + 1] == 'k')) &&
           (((((pcVar14[lVar23 + 2] == 'V' &&
               ((((((pcVar14[lVar23 + 3] == 'a' && (pcVar14[lVar23 + 4] == 'r')) &&
                   (pcVar14[lVar23 + 5] == 'i')) &&
                  ((pcVar14[lVar23 + 6] == 'a' && (pcVar14[lVar23 + 7] == 'n')))) &&
                 (pcVar14[lVar23 + 8] == 't')) &&
                ((pcVar14[lVar23 + 9] == 'A' && (pcVar14[lVar23 + 10] == 'r')))))) &&
              (pcVar14[lVar23 + 0xb] == 'r')) &&
             ((pcVar14[lVar23 + 0xc] == 'a' && (pcVar14[lVar23 + 0xd] == 'y')))) ||
            ((((pcVar14[lVar23 + 2] == 'R' &&
               (((pcVar14[lVar23 + 3] == 'e' && (pcVar14[lVar23 + 4] == 'f')) &&
                (pcVar14[lVar23 + 5] == 'l')))) &&
              ((((pcVar14[lVar23 + 6] == 'e' && (pcVar14[lVar23 + 7] == 'c')) &&
                (pcVar14[lVar23 + 8] == 't')) &&
               ((pcVar14[lVar23 + 9] == ':' && (pcVar14[lVar23 + 10] == ':')))))) &&
             ((pcVar14[lVar23 + 0xb] == 'A' &&
              ((pcVar14[lVar23 + 0xc] == 'n' && (pcVar14[lVar23 + 0xd] == 'y')))))))))) {
          uVar20 = 0x400000000;
          goto LAB_03365678;
        }
        bVar7 = false;
      }
      lVar23 = lVar22 + -0x900000000 >> 0x20;
      if ((((((pcVar14[lVar23] != 'h') || (pcVar14[lVar23 + 1] != 'k')) ||
            (pcVar14[lVar23 + 2] != 'V')) ||
           ((pcVar14[lVar23 + 3] != 'a' || (pcVar14[lVar23 + 4] != 'r')))) ||
          (((pcVar14[lVar23 + 5] != 'i' ||
            ((pcVar14[lVar23 + 6] != 'a' || (pcVar14[lVar23 + 7] != 'n')))) ||
           (pcVar14[lVar23 + 8] != 't')))) &&
         (((((((bVar7 || (lVar22 = lVar22 + -0xe00000000 >> 0x20, pcVar14[lVar22] != 'h')) ||
              (pcVar14[lVar22 + 1] != 'k')) ||
             ((pcVar14[lVar22 + 2] != 'R' || (pcVar14[lVar22 + 3] != 'e')))) ||
            ((pcVar14[lVar22 + 4] != 'f' ||
             ((pcVar14[lVar22 + 5] != 'l' || (pcVar14[lVar22 + 6] != 'e')))))) ||
           ((pcVar14[lVar22 + 7] != 'c' ||
            (((pcVar14[lVar22 + 8] != 't' || (pcVar14[lVar22 + 9] != ':')) ||
             (pcVar14[lVar22 + 10] != ':')))))) ||
          (((pcVar14[lVar22 + 0xb] != 'V' || (pcVar14[lVar22 + 0xc] != 'a')) ||
           (pcVar14[lVar22 + 0xd] != 'r')))))) goto LAB_03365244;
      uVar20 = 0x100000000;
LAB_03365678:
      puVar10[2] = 0;
      puVar10[3] = uVar20;
      goto LAB_03365f08;
    }
    uVar19 = (uint)local_e8 - 2 & ((int)((uint)local_e8 - 2) >> 0x1f ^ 0xffffffffU);
    uVar4 = (local_e8._4_4_ & 0x7fffffff) - 1;
    uVar17 = uVar19;
    if ((int)uVar4 <= (int)uVar19) {
      uVar17 = uVar4;
    }
    if (local_60 != 0) {
      uVar17 = uVar19;
    }
    uVar19 = uVar17 + 1;
    if ((int)(local_e8._4_4_ & 0x7fffffff) <= (int)uVar17) {
      FUN_030b4a20(&local_f0,PTR_PTR_047d1a50 + 0x20,uVar19);
    }
    if (((int)(uint)local_e8 <= (int)uVar17) || ((int)uVar19 < (int)(uint)local_e8)) {
      local_e8._0_4_ = uVar19;
    }
    local_f0[(int)uVar17] = '\0';
    FUN_031c9cc4(&local_f0);
    iVar9 = (uint)local_e8 - 2;
    lVar22 = 0;
    do {
      lVar23 = lVar22;
      lVar22 = lVar23 + 1;
      if ((long)(int)(uint)local_e8 + -1 <= lVar23) break;
      lVar1 = (long)iVar9;
      iVar9 = iVar9 + -1;
    } while ((byte)(local_f0[lVar1] - 0x30U) < 10);
    if ((int)lVar22 != 1) {
      uVar20 = strtoul(local_f0 + (((long)(int)(uint)local_e8 + -1) - lVar22) + 1,(char **)0x0,0);
      if (0 < (int)lVar23) {
        uVar19 = (uint)local_e8 - (int)lVar22;
        uVar19 = uVar19 & ((int)uVar19 >> 0x1f ^ 0xffffffffU);
        uVar4 = (local_e8._4_4_ & 0x7fffffff) - 1;
        uVar17 = uVar19;
        if ((int)uVar4 <= (int)uVar19) {
          uVar17 = uVar4;
        }
        if (local_60 != 0) {
          uVar17 = uVar19;
        }
        uVar19 = uVar17 + 1;
        if ((int)(local_e8._4_4_ & 0x7fffffff) <= (int)uVar17) {
          FUN_030b4a20(&local_f0,PTR_PTR_047d1a50 + 0x20,uVar19);
        }
        if (((int)(uint)local_e8 <= (int)uVar17) || ((int)uVar19 < (int)(uint)local_e8)) {
          local_e8._0_4_ = uVar19;
        }
        local_f0[(int)uVar17] = '\0';
      }
      FUN_031c9cc4(&local_f0);
      pcVar14 = local_f0;
      sVar11 = strlen(local_f0);
      if (((int)sVar11 < 1) || (pcVar14[(int)sVar11 + -1] != '[')) {
        local_120 = 1;
        uStack_118 = 0;
        local_110 = &local_2f0;
        uStack_108 = 0;
        local_130 = PTR_DAT_047e34b8 + 0x10;
        uStack_128 = 0xffffffff;
        local_100 = 0x1bf;
        local_f8 = 0;
        memset(&local_2f0,0,0x1c0);
        FUN_0322bd4c(&local_130,"Invalid array count in field ",0x1d);
        pcVar14 = (char *)(*puVar10 & 0xfffffffffffffffe);
        if (pcVar14 == (char *)0x0) {
          pcVar14 = "(null)";
          pcVar18 = *(code **)(local_130 + 0x28);
          lVar22 = 6;
        }
        else {
          sVar11 = strlen(pcVar14);
          lVar22 = (long)(int)sVar11;
          pcVar18 = *(code **)(local_130 + 0x28);
        }
        (*pcVar18)(&local_130,pcVar14,lVar22);
        (**(code **)(local_130 + 0x28))(&local_130,&DAT_03c0e877,3);
        pcVar14 = (char *)(*puVar13 & 0xfffffffffffffffe);
        if (pcVar14 == (char *)0x0) {
          pcVar14 = "(null)";
          pcVar18 = *(code **)(local_130 + 0x28);
          lVar22 = 6;
        }
        else {
          sVar11 = strlen(pcVar14);
          lVar22 = (long)(int)sVar11;
          pcVar18 = *(code **)(local_130 + 0x28);
        }
        (*pcVar18)(&local_130,pcVar14,lVar22);
        (**(code **)(local_130 + 0x28))(&local_130,&DAT_03c8f4f1,1);
        uVar16 = 0x5b3ff9fe;
        uVar15 = 0x76;
        goto LAB_033658ec;
      }
      uVar19 = (uint)local_e8 - 2 & ((int)((uint)local_e8 - 2) >> 0x1f ^ 0xffffffffU);
      uVar4 = (local_e8._4_4_ & 0x7fffffff) - 1;
      uVar17 = uVar19;
      if ((int)uVar4 <= (int)uVar19) {
        uVar17 = uVar4;
      }
      if (local_60 != 0) {
        uVar17 = uVar19;
      }
      uVar19 = uVar17 + 1;
      if ((int)(local_e8._4_4_ & 0x7fffffff) <= (int)uVar17) {
        FUN_030b4a20(&local_f0,PTR_PTR_047d1a50 + 0x20,uVar19);
      }
      if (((int)(uint)local_e8 <= (int)uVar17) || ((int)uVar19 < (int)(uint)local_e8)) {
        local_e8._0_4_ = uVar19;
      }
      local_f0[(int)uVar17] = '\0';
      *(undefined4 *)((long)puVar10 + 0x1c) = 5;
      local_2f0 = "";
      pcStack_2e8 = "";
      local_2f8 = local_f0 + (long)(int)(uint)local_e8 + -1;
      local_300 = local_f0;
      uVar24 = FUN_03364b58(param_1,&local_2f0,&local_300);
      if (uVar24 != 0) {
        puVar10[2] = uVar24;
        *(int *)(puVar10 + 3) = (int)uVar20;
        goto LAB_03366138;
      }
      goto LAB_03366118;
    }
    local_120 = 1;
    uStack_118 = 0;
    local_110 = &local_2f0;
    uStack_108 = 0;
    local_130 = PTR_DAT_047e34b8 + 0x10;
    uStack_128 = 0xffffffff;
    local_100 = 0x1bf;
    local_f8 = 0;
    memset(&local_2f0,0,0x1c0);
    FUN_0322bd4c(&local_130,"Invalid array count in field ",0x1d);
    pcVar14 = (char *)(*puVar10 & 0xfffffffffffffffe);
    if (pcVar14 == (char *)0x0) {
      pcVar14 = "(null)";
      pcVar18 = *(code **)(local_130 + 0x28);
      lVar22 = 6;
    }
    else {
      sVar11 = strlen(pcVar14);
      lVar22 = (long)(int)sVar11;
      pcVar18 = *(code **)(local_130 + 0x28);
    }
    (*pcVar18)(&local_130,pcVar14,lVar22);
    (**(code **)(local_130 + 0x28))(&local_130,&DAT_03c0e877,3);
    pcVar14 = (char *)(*puVar13 & 0xfffffffffffffffe);
    if (pcVar14 == (char *)0x0) {
      pcVar14 = "(null)";
      pcVar18 = *(code **)(local_130 + 0x28);
      lVar22 = 6;
    }
    else {
      sVar11 = strlen(pcVar14);
      lVar22 = (long)(int)sVar11;
      pcVar18 = *(code **)(local_130 + 0x28);
    }
    (*pcVar18)(&local_130,pcVar14,lVar22);
    (**(code **)(local_130 + 0x28))(&local_130,&DAT_03c8f4f1,1);
    uVar16 = 0x5b3ff9fd;
    uVar15 = 0x6c;
LAB_033658ec:
    FUN_03226c50(uVar16,&local_2f0,
                 "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkVersionBundleUtil.cpp"
                 ,uVar15);
  }
  puVar10 = (ulong *)0x0;
LAB_03366138:
  uVar19 = local_e8._4_4_;
  local_e8 = (ulong)local_e8._4_4_ << 0x20;
  if ((-1 < (int)uVar19) && (local_f0 != (char *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
  }
  FUN_03367004(auStack_58);
  return puVar10;
code_r0x033652fc:
  pcVar12 = "hkDefaultFreeListArrayStorage" + lVar22;
  pcVar2 = pcVar14 + lVar22;
  lVar22 = lVar22 + 1;
  if (*pcVar2 != *pcVar12) goto code_r0x03365310;
  goto LAB_033652f4;
code_r0x03365310:
  lVar22 = 1;
LAB_0336531c:
  if (lVar22 != 0x19) goto code_r0x03365324;
  uVar19 = 0x19;
  if ((int)(uint)local_e8 < 0x1a) {
    uVar19 = (uint)local_e8 - 1;
  }
  uVar17 = (uint)local_e8;
  if (0 < (int)uVar19) {
    uVar4 = (uint)local_e8 - uVar19;
    if (uVar4 == 0) {
      uVar17 = 0;
      local_e8._0_4_ = uVar4;
    }
    else {
      uVar20 = (long)(int)uVar4 & 3;
      if ((ulong)((long)(int)(uint)local_e8 + (long)(int)~uVar19) < 3) {
        uVar24 = 0;
      }
      else {
        uVar24 = 0;
        do {
          pcVar12 = pcVar14 + uVar24 + (ulong)uVar19 + 3;
          pcVar2 = pcVar14 + uVar24 + 1;
          uVar24 = uVar24 + 4;
          pcVar2[-1] = pcVar12[-3];
          *pcVar2 = pcVar12[-2];
          pcVar2[1] = pcVar12[-1];
          pcVar2[2] = *pcVar12;
        } while (((long)(int)uVar4 & 0xfffffffffffffffcU) != uVar24);
      }
      if (uVar20 != 0) {
        pcVar14 = pcVar14 + uVar24;
        do {
          uVar20 = uVar20 - 1;
          *pcVar14 = pcVar14[uVar19];
          pcVar14 = pcVar14 + 1;
        } while (uVar20 != 0);
      }
      pcVar14 = local_f0;
      local_e8._0_4_ = uVar4;
      uVar17 = uVar4;
    }
  }
  uVar19 = uVar17 - 1;
  for (uVar20 = 0; bVar3 = pcVar14[uVar20],
      bVar3 < 0x21 && (1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) != 0; uVar20 = uVar20 + 1) {
    if (((long)(int)uVar19 & ((long)(int)uVar19 >> 0x3f ^ 0xffffffffffffffffU)) == uVar20)
    goto LAB_03365fd4;
  }
  if ((bVar3 == 0x3c) && (iVar9 = (int)uVar20, iVar9 < (int)(uVar17 - 2))) {
    uVar4 = uVar19;
    if (iVar9 + 1 < (int)uVar19) {
      uVar4 = iVar9 + 1;
    }
    if ((1 < (int)uVar17) && (local_e8._0_4_ = uVar17 - uVar4, (uint)local_e8 != 0)) {
      uVar21 = iVar9 + 1;
      if ((ulong)((long)(int)~uVar4 + (long)(int)uVar17) < 3) {
        uVar20 = 0;
      }
      else {
        uVar4 = uVar21;
        if ((int)uVar19 <= (int)uVar21) {
          uVar4 = uVar19;
        }
        uVar20 = 0;
        do {
          pcVar12 = pcVar14 + uVar20 + (ulong)uVar4 + 3;
          pcVar2 = pcVar14 + uVar20 + 1;
          uVar20 = uVar20 + 4;
          pcVar2[-1] = pcVar12[-3];
          *pcVar2 = pcVar12[-2];
          pcVar2[1] = pcVar12[-1];
          pcVar2[2] = *pcVar12;
        } while (((long)(int)uVar17 - (long)(int)uVar4 & 0xfffffffffffffffcU) != uVar20);
      }
      if (((uint)local_e8 & 3) != 0) {
        if ((int)uVar19 <= (int)uVar21) {
          uVar21 = uVar19;
        }
        lVar22 = -((ulong)(uVar17 - uVar21) & 3);
        pcVar14 = pcVar14 + uVar20;
        do {
          bVar7 = lVar22 != -1;
          lVar22 = lVar22 + 1;
          *pcVar14 = pcVar14[uVar21];
          pcVar14 = pcVar14 + 1;
        } while (bVar7);
      }
    }
  }
LAB_03365fd4:
  FUN_031c9dbc(&local_f0,0x3e);
  lVar22 = (long)(int)(uint)local_e8;
  uVar24 = lVar22 - 1;
  uVar25 = uVar24 & ((long)uVar24 >> 0x3f ^ 0xffffffffffffffffU);
  uVar20 = 0;
  do {
    if (0x20 < (byte)local_f0[uVar20] ||
        (1L << ((ulong)(byte)local_f0[uVar20] & 0x3f) & 0x100002600U) == 0) {
LAB_03366024:
      uVar19 = (uint)uVar20;
      if ((int)(uint)uVar24 <= (int)(uint)uVar20) {
        uVar19 = (uint)uVar24;
      }
      if (0 < (int)uVar19) {
        uVar20 = lVar22 - (int)uVar19;
        local_e8._0_4_ = (uint)uVar20;
        if ((uint)local_e8 != 0) {
          if ((ulong)(lVar22 + (int)~uVar19) < 3) {
            uVar24 = 0;
          }
          else {
            uVar24 = 0;
            do {
              pcVar14 = local_f0 + uVar24 + (ulong)uVar19 + 3;
              pcVar12 = local_f0 + uVar24 + 1;
              uVar24 = uVar24 + 4;
              pcVar12[-1] = pcVar14[-3];
              *pcVar12 = pcVar14[-2];
              pcVar12[1] = pcVar14[-1];
              pcVar12[2] = *pcVar14;
            } while ((uVar20 & 0xfffffffffffffffc) != uVar24);
          }
          if ((uVar20 & 3) != 0) {
            lVar22 = -(uVar20 & 3);
            pcVar14 = local_f0 + uVar24;
            do {
              bVar7 = lVar22 != -1;
              lVar22 = lVar22 + 1;
              *pcVar14 = pcVar14[uVar19];
              pcVar14 = pcVar14 + 1;
            } while (bVar7);
          }
        }
      }
LAB_033660c4:
      FUN_031c9cc4(&local_f0);
      uVar16 = 4;
      goto LAB_033660d0;
    }
    if (uVar25 == uVar20) {
      uVar20 = uVar25;
      goto LAB_03366024;
    }
    uVar20 = uVar20 + 1;
  } while( true );
code_r0x03365324:
  pcVar12 = "hkFreeListRelArrayStorage" + lVar22;
  pcVar2 = pcVar14 + lVar22;
  lVar22 = lVar22 + 1;
  if (*pcVar2 != *pcVar12) goto code_r0x03365340;
  goto LAB_0336531c;
code_r0x03365340:
  if (pcVar14[1] == 'k') {
    uVar19 = (uint)local_e8;
    switch(pcVar14[2]) {
    case 'P':
      if ((pcVar14[3] == 't') && (pcVar14[4] == 'r')) {
        uVar17 = 5;
        if ((int)(uint)local_e8 < 6) {
          uVar17 = (uint)local_e8 - 1;
        }
        if (0 < (int)uVar17) {
          uVar19 = (uint)local_e8 - uVar17;
          if (uVar19 == 0) goto LAB_0336628c;
          uVar20 = (long)(int)uVar19 & 3;
          if ((ulong)((long)(int)(uint)local_e8 + (long)(int)~uVar17) < 3) {
            uVar24 = 0;
          }
          else {
            uVar24 = 0;
            do {
              pcVar12 = pcVar14 + uVar24 + (ulong)uVar17 + 3;
              pcVar2 = pcVar14 + uVar24 + 1;
              uVar24 = uVar24 + 4;
              pcVar2[-1] = pcVar12[-3];
              *pcVar2 = pcVar12[-2];
              pcVar2[1] = pcVar12[-1];
              pcVar2[2] = *pcVar12;
            } while (((long)(int)uVar19 & 0xfffffffffffffffcU) != uVar24);
          }
          local_e8._0_4_ = uVar19;
          if (uVar20 != 0) {
            pcVar14 = pcVar14 + uVar24;
            do {
              uVar20 = uVar20 - 1;
              *pcVar14 = pcVar14[uVar17];
              pcVar14 = pcVar14 + 1;
            } while (uVar20 != 0);
          }
LAB_03366588:
          pcVar14 = local_f0;
          uVar19 = (uint)local_e8;
        }
LAB_03366590:
        uVar17 = uVar19 - 1;
        for (uVar20 = 0; bVar3 = pcVar14[uVar20],
            bVar3 < 0x21 && (1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) != 0; uVar20 = uVar20 + 1)
        {
          if (((long)(int)uVar17 & ((long)(int)uVar17 >> 0x3f ^ 0xffffffffffffffffU)) == uVar20)
          goto LAB_033666a8;
        }
        if ((bVar3 == 0x3c) && (iVar9 = (int)uVar20, iVar9 < (int)(uVar19 - 2))) {
          uVar4 = uVar17;
          if (iVar9 + 1 < (int)uVar17) {
            uVar4 = iVar9 + 1;
          }
          if ((1 < (int)uVar19) && (local_e8._0_4_ = uVar19 - uVar4, (uint)local_e8 != 0)) {
            uVar21 = iVar9 + 1;
            if ((ulong)((long)(int)~uVar4 + (long)(int)uVar19) < 3) {
              uVar20 = 0;
            }
            else {
              uVar4 = uVar21;
              if ((int)uVar17 <= (int)uVar21) {
                uVar4 = uVar17;
              }
              uVar20 = 0;
              do {
                pcVar12 = pcVar14 + uVar20 + (ulong)uVar4 + 3;
                pcVar2 = pcVar14 + uVar20 + 1;
                uVar20 = uVar20 + 4;
                pcVar2[-1] = pcVar12[-3];
                *pcVar2 = pcVar12[-2];
                pcVar2[1] = pcVar12[-1];
                pcVar2[2] = *pcVar12;
              } while (((long)(int)uVar19 - (long)(int)uVar4 & 0xfffffffffffffffcU) != uVar20);
            }
            if (((uint)local_e8 & 3) != 0) {
              if ((int)uVar17 <= (int)uVar21) {
                uVar21 = uVar17;
              }
              lVar22 = -((ulong)(uVar19 - uVar21) & 3);
              pcVar14 = pcVar14 + uVar20;
              do {
                bVar7 = lVar22 != -1;
                lVar22 = lVar22 + 1;
                *pcVar14 = pcVar14[uVar21];
                pcVar14 = pcVar14 + 1;
              } while (bVar7);
            }
          }
        }
LAB_033666a8:
        FUN_031c9dbc(&local_f0,0x3e);
        lVar22 = (long)(int)(uint)local_e8;
        uVar24 = lVar22 - 1;
        uVar25 = uVar24 & ((long)uVar24 >> 0x3f ^ 0xffffffffffffffffU);
        for (uVar20 = 0;
            (byte)local_f0[uVar20] < 0x21 &&
            (1L << ((ulong)(byte)local_f0[uVar20] & 0x3f) & 0x100002600U) != 0; uVar20 = uVar20 + 1)
        {
          if (uVar25 == uVar20) {
            uVar20 = uVar25;
            break;
          }
        }
        uVar19 = (uint)uVar20;
        if ((int)(uint)uVar24 <= (int)(uint)uVar20) {
          uVar19 = (uint)uVar24;
        }
        if (0 < (int)uVar19) {
          uVar20 = lVar22 - (int)uVar19;
          local_e8._0_4_ = (uint)uVar20;
          if ((uint)local_e8 != 0) {
            if ((ulong)(lVar22 + (int)~uVar19) < 3) {
              uVar24 = 0;
            }
            else {
              uVar24 = 0;
              do {
                pcVar14 = local_f0 + uVar24 + (ulong)uVar19 + 3;
                pcVar12 = local_f0 + uVar24 + 1;
                uVar24 = uVar24 + 4;
                pcVar12[-1] = pcVar14[-3];
                *pcVar12 = pcVar14[-2];
                pcVar12[1] = pcVar14[-1];
                pcVar12[2] = *pcVar14;
              } while ((uVar20 & 0xfffffffffffffffc) != uVar24);
            }
            if ((uVar20 & 3) != 0) {
              lVar22 = -(uVar20 & 3);
              pcVar14 = local_f0 + uVar24;
              do {
                bVar7 = lVar22 != -1;
                lVar22 = lVar22 + 1;
                *pcVar14 = pcVar14[uVar19];
                pcVar14 = pcVar14 + 1;
              } while (bVar7);
            }
          }
        }
        FUN_031c9cc4(&local_f0);
        uVar16 = 1;
LAB_033660d0:
        *(undefined4 *)((long)puVar10 + 0x1c) = uVar16;
        local_2f8 = local_f0 + (int)(uint)local_e8;
        local_300 = local_f0;
        goto LAB_033660f4;
      }
      break;
    case 'R':
      if ((((pcVar14[3] == 'e') && (pcVar14[4] == 'f')) && (pcVar14[5] == 'P')) &&
         ((pcVar14[6] == 't' && (pcVar14[7] == 'r')))) {
        uVar17 = 8;
        if ((int)(uint)local_e8 < 9) {
          uVar17 = (uint)local_e8 - 1;
        }
        if (0 < (int)uVar17) {
          uVar19 = (uint)local_e8 - uVar17;
          if (uVar19 != 0) {
            uVar20 = (long)(int)uVar19 & 3;
            if ((ulong)((long)(int)(uint)local_e8 + (long)(int)~uVar17) < 3) {
              uVar24 = 0;
            }
            else {
              uVar24 = 0;
              do {
                pcVar12 = pcVar14 + uVar24 + (ulong)uVar17 + 3;
                pcVar2 = pcVar14 + uVar24 + 1;
                uVar24 = uVar24 + 4;
                pcVar2[-1] = pcVar12[-3];
                *pcVar2 = pcVar12[-2];
                pcVar2[1] = pcVar12[-1];
                pcVar2[2] = *pcVar12;
              } while (((long)(int)uVar19 & 0xfffffffffffffffcU) != uVar24);
            }
            local_e8._0_4_ = uVar19;
            if (uVar20 != 0) {
              pcVar14 = pcVar14 + uVar24;
              do {
                uVar20 = uVar20 - 1;
                *pcVar14 = pcVar14[uVar17];
                pcVar14 = pcVar14 + 1;
              } while (uVar20 != 0);
            }
            goto LAB_03366588;
          }
LAB_0336628c:
          local_e8._0_4_ = uVar19;
          uVar19 = 0;
        }
        goto LAB_03366590;
      }
      break;
    case 'S':
      if ((((pcVar14[3] == 't') && (pcVar14[4] == 'r')) &&
          ((pcVar14[5] == 'o' &&
           (((pcVar14[6] == 'n' && (pcVar14[7] == 'g')) && (pcVar14[8] == 'R')))))) &&
         (((pcVar14[9] == 'e' && (pcVar14[10] == 'f')) &&
          ((pcVar14[0xb] == 'P' && ((pcVar14[0xc] == 't' && (pcVar14[0xd] == 'r')))))))) {
        uVar17 = 0xe;
        if ((int)(uint)local_e8 < 0xf) {
          uVar17 = (uint)local_e8 - 1;
        }
        if (0 < (int)uVar17) {
          uVar19 = (uint)local_e8 - uVar17;
          if (uVar19 != 0) {
            uVar20 = (long)(int)uVar19 & 3;
            if ((ulong)((long)(int)(uint)local_e8 + (long)(int)~uVar17) < 3) {
              uVar24 = 0;
            }
            else {
              uVar24 = 0;
              do {
                pcVar12 = pcVar14 + uVar24 + (ulong)uVar17 + 3;
                pcVar2 = pcVar14 + uVar24 + 1;
                uVar24 = uVar24 + 4;
                pcVar2[-1] = pcVar12[-3];
                *pcVar2 = pcVar12[-2];
                pcVar2[1] = pcVar12[-1];
                pcVar2[2] = *pcVar12;
              } while (((long)(int)uVar19 & 0xfffffffffffffffcU) != uVar24);
            }
            local_e8._0_4_ = uVar19;
            if (uVar20 != 0) {
              pcVar14 = pcVar14 + uVar24;
              do {
                uVar20 = uVar20 - 1;
                *pcVar14 = pcVar14[uVar17];
                pcVar14 = pcVar14 + 1;
              } while (uVar20 != 0);
            }
            goto LAB_03366588;
          }
          goto LAB_0336628c;
        }
        goto LAB_03366590;
      }
      break;
    case 'V':
      if (((((pcVar14[3] == 'i') && (pcVar14[4] == 'e')) && (pcVar14[5] == 'w')) &&
          ((pcVar14[6] == 'P' && (pcVar14[7] == 't')))) && (pcVar14[8] == 'r')) {
        uVar17 = 9;
        if ((int)(uint)local_e8 < 10) {
          uVar17 = (uint)local_e8 - 1;
        }
        if (0 < (int)uVar17) {
          uVar19 = (uint)local_e8 - uVar17;
          if (uVar19 != 0) {
            uVar20 = (long)(int)uVar19 & 3;
            if ((ulong)((long)(int)(uint)local_e8 + (long)(int)~uVar17) < 3) {
              uVar24 = 0;
            }
            else {
              uVar24 = 0;
              do {
                pcVar12 = pcVar14 + uVar24 + (ulong)uVar17 + 3;
                pcVar2 = pcVar14 + uVar24 + 1;
                uVar24 = uVar24 + 4;
                pcVar2[-1] = pcVar12[-3];
                *pcVar2 = pcVar12[-2];
                pcVar2[1] = pcVar12[-1];
                pcVar2[2] = *pcVar12;
              } while (((long)(int)uVar19 & 0xfffffffffffffffcU) != uVar24);
            }
            local_e8._0_4_ = uVar19;
            if (uVar20 != 0) {
              pcVar14 = pcVar14 + uVar24;
              do {
                uVar20 = uVar20 - 1;
                *pcVar14 = pcVar14[uVar17];
                pcVar14 = pcVar14 + 1;
              } while (uVar20 != 0);
            }
            goto LAB_03366588;
          }
          goto LAB_0336628c;
        }
        goto LAB_03366590;
      }
      break;
    case 'W':
      if (((pcVar14[3] == 'e') && (pcVar14[4] == 'a')) &&
         (((pcVar14[5] == 'k' && ((pcVar14[6] == 'P' && (pcVar14[7] == 't')))) &&
          (pcVar14[8] == 'r')))) {
        uVar17 = 9;
        if ((int)(uint)local_e8 < 10) {
          uVar17 = (uint)local_e8 - 1;
        }
        if (0 < (int)uVar17) {
          uVar19 = (uint)local_e8 - uVar17;
          if (uVar19 != 0) {
            uVar20 = (long)(int)uVar19 & 3;
            if ((ulong)((long)(int)(uint)local_e8 + (long)(int)~uVar17) < 3) {
              uVar24 = 0;
            }
            else {
              uVar24 = 0;
              do {
                pcVar12 = pcVar14 + uVar24 + (ulong)uVar17 + 3;
                pcVar2 = pcVar14 + uVar24 + 1;
                uVar24 = uVar24 + 4;
                pcVar2[-1] = pcVar12[-3];
                *pcVar2 = pcVar12[-2];
                pcVar2[1] = pcVar12[-1];
                pcVar2[2] = *pcVar12;
              } while (((long)(int)uVar19 & 0xfffffffffffffffcU) != uVar24);
            }
            local_e8._0_4_ = uVar19;
            if (uVar20 != 0) {
              pcVar14 = pcVar14 + uVar24;
              do {
                uVar20 = uVar20 - 1;
                *pcVar14 = pcVar14[uVar17];
                pcVar14 = pcVar14 + 1;
              } while (uVar20 != 0);
            }
            goto LAB_03366588;
          }
          goto LAB_0336628c;
        }
        goto LAB_03366590;
      }
    }
  }
switchD_03365370_caseD_51:
  pcVar12 = strchr(pcVar14,0x24);
  if (pcVar12 != (char *)0x0) {
    pcStack_2e8 = pcVar14 + (long)(int)(uint)local_e8 + -1;
    local_2f0 = pcVar14;
    puVar13 = (ulong *)(**(code **)(*param_1 + 0x10))(param_1,&local_2f0);
    if (puVar13 != (ulong *)0x0) {
      pcVar14 = (char *)(*puVar10 & 0xfffffffffffffffe);
      uVar20 = *puVar13;
      if ((char *)(uVar20 & 0xfffffffffffffffe) != pcVar14) {
        if (pcVar14 == (char *)0x0) {
          uVar24 = 0;
        }
        else {
          sVar11 = strlen(pcVar14);
          sVar11 = (size_t)((int)sVar11 + 1);
          __dest = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar11);
          memcpy(__dest,pcVar14,sVar11);
          uVar24 = (ulong)__dest | 1;
        }
        *puVar13 = uVar24;
        if ((uVar20 & 1) != 0) {
          (**(code **)(puVar6 + 8))(0,uVar20 - 1,0);
        }
      }
    }
    FUN_03364aa0(puVar10);
    (**(code **)(puVar6 + 8))(0,puVar10,0);
    puVar10 = puVar13;
    goto LAB_03366138;
  }
  pcStack_2e8 = pcVar14 + (long)(int)(uint)local_e8 + -1;
  local_2f0 = pcVar14;
  uVar20 = (**(code **)(*param_1 + 8))(param_1,&local_2f0);
  if (uVar20 != 0) {
    puVar10[2] = uVar20;
    puVar10[3] = 0;
    goto LAB_03366138;
  }
  *(undefined4 *)((long)puVar10 + 0x1c) = 3;
  pcStack_2e8 = local_f0 + (long)(int)(uint)local_e8 + -1;
  local_2f0 = local_f0;
  uVar20 = (**(code **)*param_1)(param_1,&local_2f0);
  puVar10[2] = uVar20;
  *(undefined4 *)(puVar10 + 3) = 0;
LAB_03365f08:
  goto LAB_03366138;
}


