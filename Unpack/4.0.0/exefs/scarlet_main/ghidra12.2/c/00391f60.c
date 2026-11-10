/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00391f60; name: FUN_00391f60
 */


/* WARNING: Removing unreachable block (ram,0x00391fc4) */

uint FUN_00391f60(double param_1,byte *param_2,undefined8 param_3)

{
  byte bVar1;
  undefined2 uVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  uint uVar6;
  ulong uVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined2 *puVar15;
  ulong uVar16;
  int iVar17;
  undefined **ppuVar18;
  ulong uVar19;
  byte *pbVar20;
  long lVar21;
  char cVar22;
  byte *pbVar23;
  ulong uVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  int local_e0 [8];
  byte local_bd [4];
  undefined2 local_b9;
  byte local_b7 [47];
  byte *local_88;
  byte *local_80;
  uint local_74;
  
  if ((long)param_1 < 0) {
    bVar5 = param_2[1];
    dVar25 = -param_1;
    cVar22 = '-';
    bVar1 = *param_2;
    uVar8 = *(undefined4 *)(param_2 + 4);
LAB_00391fe0:
    piVar10 = (int *)((ulong)local_e0 | 1);
    local_e0[0] = CONCAT31(local_e0[0]._1_3_,cVar22);
  }
  else {
    bVar5 = param_2[1];
    if ((bVar5 >> 2 & 1) == 0) {
      cVar22 = (bVar5 & 8) << 2;
    }
    else {
      cVar22 = '+';
    }
    bVar1 = *param_2;
    piVar10 = local_e0;
    uVar8 = *(undefined4 *)(param_2 + 4);
    dVar25 = param_1;
    if (cVar22 != '\0') goto LAB_00391fe0;
  }
  if (NAN(dVar25)) {
    if (bVar1 - 9 < 9) {
      ppuVar18 = &PTR_DAT_044972b0;
LAB_00392018:
      puVar15 = (undefined2 *)ppuVar18[(char)(bVar1 - 9)];
    }
    else {
      puVar15 = &DAT_03c475d9;
    }
LAB_0039202c:
    uVar2 = *puVar15;
    *(undefined1 *)((long)piVar10 + 2) = *(undefined1 *)(puVar15 + 1);
    *(undefined2 *)piVar10 = uVar2;
    uVar7 = FUN_00391cac(param_3,local_e0,(long)piVar10 + (3 - (long)local_e0),uVar8,0xffffffff,
                         bVar5 >> 1 & 1);
    if ((uVar7 & 1) == 0) goto LAB_00392060;
LAB_00392b18:
    uVar6 = 1;
  }
  else {
    if (ABS(dVar25) == INFINITY) {
      if (bVar1 - 9 < 9) {
        ppuVar18 = &PTR_DAT_044972f8;
        goto LAB_00392018;
      }
      puVar15 = &DAT_03be063e;
      goto LAB_0039202c;
    }
LAB_00392060:
    iVar9 = 6;
    if (-1 < *(int *)(param_2 + 8)) {
      iVar9 = *(int *)(param_2 + 8);
    }
    local_74 = 0;
    dVar25 = frexp(dVar25,local_e0);
    dVar25 = ldexp(dVar25,0x35);
    iVar17 = local_e0[0];
    if (7 < *param_2 - 10) {
      uVar6 = 0;
      goto LAB_00392b1c;
    }
    uVar6 = local_e0[0] - 0x35;
    uVar7 = (ulong)uVar6;
    switch((uint)*param_2) {
    default:
      if (iVar9 < 0x28) {
        uVar16 = (ulong)dVar25;
        pbVar20 = (byte *)((long)&local_b9 + 1);
        local_88 = pbVar20;
        local_80 = pbVar20;
        if (0x34 < local_e0[0]) {
          if (local_e0[0] < 0x41) {
            uVar16 = uVar16 << (uVar7 & 0x3f);
            if (uVar16 == 0) {
              local_b9 = 0x2e30;
              local_88 = (byte *)&local_b9;
            }
            else {
              cVar3 = (char)(uVar16 / 10);
              local_88 = (byte *)&local_b9;
              local_b9 = CONCAT11(local_b9._1_1_,(char)uVar16 + cVar3 * -10) | 0x30;
              if (9 < uVar16) {
                local_bd[3] = cVar3 + (char)((uVar16 / 10) / 10) * -10 | 0x30;
                local_88 = local_bd + 3;
                if (99 < uVar16) {
                  local_88 = local_bd + 2;
                  local_bd[2] = (char)(uVar16 / 100) + (char)((uVar16 / 100) / 10) * -10 | 0x30;
                  if (999 < uVar16) {
                    uVar7 = uVar16 / 1000;
                    local_bd[1] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
                    local_88 = local_bd + 1;
                    if (0x270 < uVar16 >> 4) {
                      do {
                        uVar16 = uVar7 / 10;
                        pbVar20 = local_88 + -1;
                        local_88[-1] = (char)uVar16 + (char)(uVar16 / 10) * -10 | 0x30;
                        bVar4 = 99 < uVar7;
                        uVar7 = uVar16;
                        local_88 = pbVar20;
                      } while (bVar4);
                    }
                  }
                }
              }
            }
            local_80 = local_b7;
            if (0 < iVar9) {
              iVar9 = iVar9 + 1;
              do {
                iVar9 = iVar9 + -1;
                pbVar20 = local_80 + 1;
                *local_80 = 0x30;
                local_80 = pbVar20;
              } while (1 < iVar9);
            }
          }
          else {
            if (0x80 < local_e0[0]) break;
            auVar26 = __fixunsdfti();
            uVar16 = 0;
            if (uVar7 != 0) {
              uVar16 = auVar26._0_8_ >> (-uVar7 & 0x3f);
            }
            bVar4 = (long)(uVar7 - 0x40) < 0;
            uVar11 = auVar26._0_8_ << (uVar7 & 0x3f);
            uVar19 = uVar11;
            if (bVar4) {
              uVar19 = uVar16 | auVar26._8_8_ << (uVar7 & 0x3f);
            }
            uVar7 = 0;
            if (bVar4) {
              uVar7 = uVar11;
            }
            if (uVar7 == 0 && uVar19 == 0) {
              local_b9 = 0x2e30;
              local_88 = (byte *)&local_b9;
              local_80 = local_b7;
            }
            else {
              auVar26 = __udivti3(uVar7,uVar19,10,0);
              local_88 = (byte *)&local_b9;
              local_b9 = CONCAT11(local_b9._1_1_,(char)uVar7 + auVar26[0] * -10) | 0x30;
              if (uVar19 != 0 || 9 < uVar7) {
                local_bd[3] = __umodti3(auVar26._0_8_,auVar26._8_8_,10,0);
                local_bd[3] = local_bd[3] | 0x30;
                local_88 = local_bd + 3;
                if (uVar19 != 0 || 99 < uVar7) {
                  auVar26 = __udivti3(uVar7,uVar19,100,0);
                  local_bd[2] = __umodti3(auVar26._0_8_,auVar26._8_8_,10,0);
                  local_bd[2] = local_bd[2] | 0x30;
                  local_88 = local_bd + 2;
                  if (uVar19 != 0 || 999 < uVar7) {
                    auVar26 = __udivti3(uVar7,uVar19,1000,0);
                    local_bd[1] = __umodti3(auVar26._0_8_,auVar26._8_8_,10,0);
                    local_88 = local_bd + 1;
                    local_bd[1] = local_bd[1] | 0x30;
                    if (uVar19 >> 4 != 0 || 0x270 < (uVar7 >> 4 | uVar19 << 0x3c)) {
                      do {
                        pbVar20 = local_88;
                        lVar21 = auVar26._8_8_;
                        uVar7 = auVar26._0_8_;
                        auVar26 = __udivti3(uVar7,lVar21,10,0);
                        bVar5 = __umodti3(auVar26._0_8_,auVar26._8_8_,10,0);
                        local_88 = pbVar20 + -1;
                        pbVar20[-1] = bVar5 | 0x30;
                      } while (lVar21 != 0 || 99 < uVar7);
                    }
                    pbVar20 = local_80;
                  }
                }
              }
              local_80 = pbVar20 + 1;
              *pbVar20 = 0x2e;
            }
            if (0 < iVar9) {
              iVar9 = iVar9 + 1;
              do {
                iVar9 = iVar9 + -1;
                pbVar20 = local_80 + 1;
                *local_80 = 0x30;
                local_80 = pbVar20;
              } while (1 < iVar9);
            }
          }
          goto LAB_00392cec;
        }
        if (local_e0[0] < -7) {
          auVar26 = __fixunsdfti();
          uVar7 = auVar26._8_8_;
          local_88 = pbVar20;
          local_80 = pbVar20;
          if (iVar17 < -0x47) break;
          uVar11 = (ulong)-uVar6;
          uVar19 = -1L << (uVar11 & 0x3f);
          uVar16 = 0;
          if (uVar11 != 0) {
            uVar16 = 0xffffffffffffffff >> (-uVar11 & 0x3f);
          }
          uVar12 = 0;
          if (uVar11 != 0) {
            uVar12 = uVar7 << (-uVar11 & 0x3f);
          }
          bVar4 = (long)(uVar11 - 0x40) < 0;
          uVar24 = -1L << (uVar11 & 0x3f);
          if (bVar4) {
            uVar24 = uVar16 | uVar19;
          }
          uVar24 = ~uVar24;
          uVar16 = 0;
          if (bVar4) {
            uVar16 = uVar19;
          }
          uVar16 = ~uVar16;
          uVar19 = 0;
          if (bVar4) {
            uVar19 = uVar7 >> (uVar11 & 0x3f);
          }
          uVar13 = uVar7 >> (uVar11 & 0x3f);
          if (bVar4) {
            uVar13 = auVar26._0_8_ >> (uVar11 & 0x3f) | uVar12;
          }
          if (uVar13 == 0 && uVar19 == 0) {
            local_b9 = 0x2e30;
            local_88 = (byte *)&local_b9;
            local_80 = local_b7;
          }
          else {
            auVar27 = __udivti3(uVar13,uVar19,10,0);
            local_88 = (byte *)&local_b9;
            local_b9 = CONCAT11(local_b9._1_1_,(char)uVar13 + auVar27[0] * -10) | 0x30;
            if (uVar19 == 0 && uVar13 < 10) {
LAB_0039281c:
            }
            else {
              local_bd[3] = __umodti3(auVar27._0_8_,auVar27._8_8_,10,0);
              local_bd[3] = local_bd[3] | 0x30;
              local_88 = local_bd + 3;
              if (uVar19 == 0 && uVar13 < 100) goto LAB_0039281c;
              auVar27 = __udivti3(uVar13,uVar19,100,0);
              local_bd[2] = __umodti3(auVar27._0_8_,auVar27._8_8_,10,0);
              local_bd[2] = local_bd[2] | 0x30;
              local_88 = local_bd + 2;
              if (uVar19 != 0 || 999 < uVar13) {
                auVar27 = __udivti3(uVar13,uVar19,1000,0);
                local_bd[1] = __umodti3(auVar27._0_8_,auVar27._8_8_,10,0);
                local_88 = local_bd + 1;
                local_bd[1] = local_bd[1] | 0x30;
                if (uVar19 >> 4 != 0 || 0x270 < (uVar13 >> 4 | uVar19 << 0x3c)) {
                  do {
                    pbVar20 = local_88;
                    lVar21 = auVar27._8_8_;
                    uVar19 = auVar27._0_8_;
                    auVar27 = __udivti3(uVar19,lVar21,10,0);
                    bVar5 = __umodti3(auVar27._0_8_,auVar27._8_8_,10,0);
                    local_88 = pbVar20 + -1;
                    pbVar20[-1] = bVar5 | 0x30;
                  } while (lVar21 != 0 || 99 < uVar19);
                }
                pbVar20 = local_80;
              }
            }
            local_80 = pbVar20 + 1;
            *pbVar20 = 0x2e;
          }
          uVar19 = uVar16 & auVar26._0_8_;
          auVar26._8_8_ = 0;
          auVar26._0_8_ = uVar19;
          uVar12 = SUB168(auVar26 * ZEXT816(10),8) + (uVar24 & uVar7) * 10;
          uVar19 = uVar19 * 10;
          uVar7 = 0;
          if (uVar11 != 0) {
            uVar7 = uVar12 << (-uVar11 & 0x3f);
          }
          uVar13 = uVar12 & uVar24;
          uVar12 = uVar12 >> (uVar11 & 0x3f);
          if ((long)(uVar11 - 0x40) < 0) {
            uVar12 = uVar19 >> (uVar11 & 0x3f) | uVar7;
          }
          iVar17 = (int)uVar12;
          uVar19 = uVar19 & uVar16;
          if (0 < iVar9) {
            iVar9 = iVar9 + 1;
            do {
              auVar27._8_8_ = 0;
              auVar27._0_8_ = uVar19;
              uVar14 = SUB168(auVar27 * ZEXT816(10),8) + uVar13 * 10;
              pbVar20 = local_80 + 1;
              *local_80 = (char)uVar12 + 0x30;
              local_80 = pbVar20;
              uVar7 = 0;
              if (uVar11 != 0) {
                uVar7 = uVar14 << (-uVar11 & 0x3f);
              }
              uVar13 = uVar14 & uVar24;
              iVar9 = iVar9 + -1;
              uVar12 = uVar14 >> (uVar11 & 0x3f);
              if ((long)(uVar11 - 0x40) < 0) {
                uVar12 = uVar19 * 10 >> (uVar11 & 0x3f) | uVar7;
              }
              iVar17 = (int)uVar12;
              uVar19 = uVar19 * 10 & uVar16;
            } while (1 < iVar9);
          }
          pbVar20 = local_80;
          if (5 < iVar17) {
joined_r0x00392c9c:
            while (pbVar20 = pbVar20 + -1, local_88 <= pbVar20) {
              bVar5 = *pbVar20;
              if (bVar5 != 0x2e) {
                if (bVar5 != 0x39) goto LAB_00392ce4;
                *pbVar20 = 0x30;
              }
            }
            goto LAB_00392ca0;
          }
          if (iVar17 == 5) {
            if (uVar19 == 0 && uVar13 == 0) {
              bVar5 = local_80[-1];
              if (bVar5 == 0x2e) {
                bVar5 = local_80[-2];
              }
              if ((bVar5 & 1) == 0) goto LAB_00392cec;
            }
            goto joined_r0x00392c9c;
          }
        }
        else {
          uVar7 = (ulong)-uVar6;
          uVar19 = ~(-1L << (uVar7 & 0x3f));
          uVar11 = uVar16 >> (uVar7 & 0x3f);
          if (uVar11 == 0) {
            local_b9 = 0x2e30;
            local_88 = (byte *)&local_b9;
          }
          else {
            cVar3 = (char)(uVar11 / 10);
            local_88 = (byte *)&local_b9;
            local_b9 = CONCAT11(local_b9._1_1_,(char)uVar11 + cVar3 * -10) | 0x30;
            if (9 < uVar11) {
              local_bd[3] = cVar3 + (char)((uVar11 / 10) / 10) * -10 | 0x30;
              local_88 = local_bd + 3;
              if (99 < uVar11) {
                local_88 = local_bd + 2;
                local_bd[2] = (char)(uVar11 / 100) + (char)((uVar11 / 100) / 10) * -10 | 0x30;
                if (999 < uVar11) {
                  uVar12 = uVar11 / 1000;
                  local_bd[1] = (char)uVar12 + (char)(uVar12 / 10) * -10 | 0x30;
                  local_88 = local_bd + 1;
                  if (0x270 < uVar11 >> 4) {
                    do {
                      uVar11 = uVar12 / 10;
                      pbVar20 = local_88 + -1;
                      local_88[-1] = (char)uVar11 + (char)(uVar11 / 10) * -10 | 0x30;
                      bVar4 = 99 < uVar12;
                      uVar12 = uVar11;
                      local_88 = pbVar20;
                    } while (bVar4);
                  }
                }
              }
            }
          }
          local_80 = local_b7;
          uVar16 = (uVar19 & uVar16) * 10;
          uVar11 = uVar16 >> (uVar7 & 0x3f);
          iVar17 = (int)uVar11;
          uVar16 = uVar16 & uVar19;
          if (0 < iVar9) {
            iVar9 = iVar9 + 1;
            do {
              iVar9 = iVar9 + -1;
              cVar3 = (char)uVar11;
              uVar11 = uVar16 * 10 >> (uVar7 & 0x3f);
              iVar17 = (int)uVar11;
              uVar16 = uVar16 * 10 & uVar19;
              pbVar20 = local_80 + 1;
              *local_80 = cVar3 + 0x30;
              local_80 = pbVar20;
            } while (1 < iVar9);
          }
          pbVar20 = local_80;
          if (iVar17 < 6) {
            if (iVar17 != 5) goto LAB_00392cec;
            if (uVar16 == 0) {
              bVar5 = local_80[-1];
              if (bVar5 == 0x2e) {
                bVar5 = local_80[-2];
              }
              if ((bVar5 & 1) == 0) goto LAB_00392cec;
            }
          }
          while (pbVar20 = pbVar20 + -1, local_88 <= pbVar20) {
            bVar5 = *pbVar20;
            if (bVar5 != 0x2e) {
              if (bVar5 != 0x39) goto LAB_00392ce4;
              *pbVar20 = 0x30;
            }
          }
LAB_00392ca0:
          *pbVar20 = 0x31;
          local_88 = pbVar20;
        }
LAB_00392cec:
        if ((param_2[1] >> 4 & 1) == 0) {
          if (local_80[-1] == 0x2e) {
            local_80 = local_80 + -1;
          }
        }
LAB_00392afc:
        FUN_00392e60(cVar22,local_88,(long)local_80 - (long)local_88,param_2[1],
                     *(undefined4 *)(param_2 + 4),param_3);
        goto LAB_00392b18;
      }
      break;
    case 0xc:
    case 0xd:
      uVar7 = FUN_00393540(dVar25,uVar7,iVar9,local_e0,&local_74);
      if ((uVar7 & 1) != 0) {
        if ((param_2[1] >> 4 & 1) == 0) {
          if (local_80[-1] == 0x2e) {
            local_80 = local_80 + -1;
          }
        }
        bVar5 = 0x65;
        if ((*param_2 < 0x12) && ((1 << (ulong)(*param_2 & 0x1f) & 0x2aa00U) != 0)) {
          bVar5 = 0x45;
        }
        *local_80 = bVar5;
        pbVar20 = local_80 + 2;
        if ((int)local_74 < 0) {
          local_80[1] = 0x2d;
          uVar6 = -local_74;
        }
        else {
          local_80[1] = 0x2b;
          uVar6 = local_74;
        }
        if ((int)uVar6 < 100) {
          cVar3 = (char)((uVar6 & 0xff) / 10);
          local_80 = local_80 + 3;
          *pbVar20 = cVar3 + 0x30;
          bVar5 = (char)uVar6 + cVar3 * -10;
        }
        else {
          pbVar23 = local_80 + 3;
          *pbVar20 = (char)(uVar6 / 100) + 0x30;
          local_80 = local_80 + 4;
          cVar3 = (char)(uVar6 / 10);
          bVar5 = (char)uVar6 + cVar3 * -10;
          *pbVar23 = cVar3 + (char)(((ulong)uVar6 * 0xcccccccd) / 0x5000000000) * -10 | 0x30;
        }
LAB_00392ae8:
        *local_80 = bVar5 | 0x30;
        local_80 = local_80 + 1;
        goto LAB_00392afc;
      }
      break;
    case 0xe:
    case 0xf:
      if (iVar9 < 2) {
        iVar9 = 1;
      }
      uVar7 = FUN_00393540(dVar25,uVar7,iVar9 + -1,local_e0,&local_74);
      if ((uVar7 & 1) != 0) {
        uVar7 = (ulong)local_74;
        if (((int)local_74 < iVar9) && (-5 < (int)local_74)) {
          if ((int)local_74 < 0) {
            local_88[1] = *local_88;
            pbVar23 = local_88 + -1;
            pbVar20 = local_88;
            if (local_74 != 0xffffffff) {
              if ((local_74 & 1) == 0) {
                *local_88 = 0x30;
                pbVar20 = pbVar23;
                uVar6 = local_74 + 1;
                local_88 = local_88 + -2;
              }
              else {
                uVar6 = local_74;
                local_88 = pbVar23;
              }
              pbVar23 = local_88;
              if (local_74 != 0xfffffffe) {
                iVar9 = uVar6 + 1;
                do {
                  *pbVar20 = 0x30;
                  pbVar20 = local_88 + -1;
                  *local_88 = 0x30;
                  local_88 = local_88 + -2;
                  iVar9 = iVar9 + 2;
                  pbVar23 = local_88;
                } while (iVar9 != 0);
              }
            }
            local_88 = pbVar23;
            *pbVar20 = 0x2e;
            *local_88 = 0x30;
          }
          else if (local_74 != 0) {
            pbVar23 = local_88 + 1;
            bVar5 = *pbVar23;
            pbVar20 = local_88 + (uVar7 - (long)(local_88 + 2)) + 2;
            if (pbVar20 != (byte *)0x0) {
              memmove(pbVar23,local_88 + 2,(size_t)pbVar20);
            }
            pbVar23[(long)pbVar20] = bVar5;
          }
          uVar7 = 0;
          local_74 = 0;
        }
        uVar6 = (uint)uVar7;
        if ((param_2[1] >> 4 & 1) == 0) {
          bVar5 = local_80[-1];
          pbVar20 = local_80 + -1;
          while (pbVar23 = pbVar20, bVar5 == 0x30) {
            pbVar20 = pbVar23 + -1;
            local_80 = pbVar23;
            bVar5 = pbVar23[-1];
          }
          if (bVar5 == 0x2e) {
            local_80 = pbVar23;
          }
        }
        if (uVar6 != 0) {
          bVar5 = 0x65;
          if ((*param_2 < 0x12) && ((1 << (ulong)(*param_2 & 0x1f) & 0x2aa00U) != 0)) {
            bVar5 = 0x45;
          }
          *local_80 = bVar5;
          pbVar20 = local_80 + 2;
          if ((int)uVar6 < 0) {
            local_80[1] = 0x2d;
            uVar6 = -uVar6;
            uVar7 = (ulong)uVar6;
          }
          else {
            local_80[1] = 0x2b;
          }
          if ((int)uVar6 < 100) {
            cVar3 = (char)((uVar6 & 0xff) / 10);
            local_80 = local_80 + 3;
            *pbVar20 = cVar3 + 0x30;
            bVar5 = (char)uVar6 + cVar3 * -10;
          }
          else {
            pbVar23 = local_80 + 3;
            *pbVar20 = (char)(uVar7 / 100) + 0x30;
            local_80 = local_80 + 4;
            cVar3 = (char)(uVar7 / 10);
            bVar5 = (char)uVar7 + cVar3 * -10;
            *pbVar23 = cVar3 + (char)(uVar7 / 100) * -10 | 0x30;
          }
          goto LAB_00392ae8;
        }
        goto LAB_00392afc;
      }
      break;
    case 0x10:
    case 0x11:
      break;
    }
    uVar6 = FUN_003931e0(param_1,param_2,param_3);
  }
LAB_00392b1c:
  return uVar6 & 1;
LAB_00392ce4:
  *pbVar20 = bVar5 + 1;
  goto LAB_00392cec;
}


