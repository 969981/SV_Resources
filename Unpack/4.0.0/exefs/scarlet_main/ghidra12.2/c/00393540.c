/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00393540; name: FUN_00393540
 */


undefined8 FUN_00393540(double param_1,ulong param_2,int param_3,long param_4,int *param_5)

{
  byte bVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  char cVar5;
  bool bVar6;
  byte bVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong uVar12;
  undefined1 *puVar13;
  ulong uVar14;
  byte *pbVar15;
  ulong uVar16;
  char *pcVar17;
  long *plVar18;
  ulong uVar19;
  ulong uVar20;
  int iVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  long *plVar25;
  undefined1 auVar26 [16];
  
  if (0x27 < param_3) {
    return 0;
  }
  lVar23 = param_4 + 0x29;
  uVar12 = (ulong)param_1;
  plVar25 = (long *)(param_4 + 0x60);
  *plVar25 = lVar23;
  plVar18 = (long *)(param_4 + 0x58);
  *plVar18 = lVar23;
  iVar21 = (int)param_2;
  if (-1 < iVar21) {
    if (iVar21 < 0xc) {
      uVar12 = uVar12 << (param_2 & 0x3f);
      if (uVar12 == 0) {
        *param_5 = -1;
        param_3 = param_3 + 1;
      }
      else {
        uVar14 = uVar12 / 10;
        pbVar8 = (byte *)(param_4 + 0x28);
        *pbVar8 = (char)uVar12 + (char)uVar14 * -10 | 0x30;
        *(byte **)(param_4 + 0x58) = pbVar8;
        if (9 < uVar12) {
          *(byte *)(param_4 + 0x27) = (char)uVar14 + (char)(uVar14 / 10) * -10 | 0x30;
          *(byte **)(param_4 + 0x58) = (byte *)(param_4 + 0x27);
          while (uVar9 = uVar14, 99 < uVar12) {
            uVar14 = uVar9 / 10;
            lVar23 = *plVar18;
            *plVar18 = lVar23 + -1;
            *(byte *)(lVar23 + -1) = (char)uVar14 + (char)(uVar14 / 10) * -10 | 0x30;
            uVar12 = uVar9;
          }
          lVar23 = *plVar25;
          pbVar8 = (byte *)*plVar18;
        }
        bVar7 = *pbVar8;
        *plVar18 = (long)(pbVar8 + -1);
        pbVar8[-1] = bVar7;
        *(undefined1 *)(*plVar18 + 1) = 0x2e;
        iVar21 = ~(uint)pbVar8 + (int)lVar23;
        *param_5 = iVar21;
        param_3 = param_3 - iVar21;
      }
      if (-1 < param_3) {
        if (param_3 == 0) {
          return 1;
        }
        param_3 = param_3 + 1;
        do {
          puVar13 = (undefined1 *)*plVar25;
          param_3 = param_3 + -1;
          *plVar25 = (long)(puVar13 + 1);
          *puVar13 = 0x30;
        } while (1 < param_3);
        return 1;
      }
      lVar23 = *plVar25;
      uVar2 = -param_3;
      pbVar8 = (byte *)(lVar23 - (ulong)uVar2);
      *plVar25 = (long)pbVar8;
      if (*pbVar8 < 0x36) {
        if (*pbVar8 != 0x35) {
          return 1;
        }
        if (uVar2 != 1) {
          lVar22 = 1 - (ulong)uVar2;
          do {
            if (*(char *)(lVar23 + lVar22) != '0') goto LAB_00393b78;
            lVar22 = lVar22 + 1;
          } while (lVar22 != 0);
        }
        bVar7 = pbVar8[-1];
        if (bVar7 == 0x2e) {
          bVar7 = pbVar8[-2];
        }
        if ((bVar7 & 1) == 0) {
          return 1;
        }
      }
LAB_00393b78:
      pbVar15 = (byte *)*plVar18;
      pbVar11 = pbVar8 + -1;
      if (pbVar15 <= pbVar11) {
        do {
          bVar7 = *pbVar11;
          if (bVar7 != 0x2e) {
            if (bVar7 != 0x39) goto LAB_00393c10;
            *pbVar11 = 0x30;
            pbVar15 = (byte *)*plVar18;
          }
          pbVar11 = pbVar11 + -1;
        } while (pbVar15 <= pbVar11);
        goto LAB_00393e38;
      }
    }
    else {
      *plVar25 = lVar23;
      *plVar18 = lVar23;
      if (0x4b < iVar21) {
        return 0;
      }
      auVar26 = __fixunsdfti();
      uVar14 = auVar26._0_8_;
      uVar12 = 0;
      if ((param_2 & 0xffffffff) != 0) {
        uVar12 = uVar14 >> (-(param_2 & 0xffffffff) & 0x3f);
      }
      bVar6 = (long)((param_2 & 0xffffffff) - 0x40) < 0;
      uVar9 = uVar14 << (param_2 & 0x3f);
      if (bVar6) {
        uVar9 = uVar12 | auVar26._8_8_ << (param_2 & 0x3f);
      }
      uVar12 = 0;
      if (bVar6) {
        uVar12 = uVar14 << (param_2 & 0x3f);
      }
      if (uVar12 == 0 && uVar9 == 0) {
        *param_5 = -1;
        param_3 = param_3 + 1;
      }
      else {
        auVar26 = __udivti3(uVar12,uVar9,10,0);
        pbVar8 = (byte *)(param_4 + 0x28);
        *pbVar8 = (char)uVar12 + auVar26[0] * -10 | 0x30;
        *(byte **)(param_4 + 0x58) = pbVar8;
        if (uVar9 != 0 || 9 < uVar12) {
          bVar7 = __umodti3(auVar26._0_8_,auVar26._8_8_,10,0);
          *(byte *)(param_4 + 0x27) = bVar7 | 0x30;
          *(byte **)(param_4 + 0x58) = (byte *)(param_4 + 0x27);
          if (uVar9 != 0 || 99 < uVar12) {
            do {
              lVar23 = auVar26._8_8_;
              uVar12 = auVar26._0_8_;
              lVar22 = *plVar18;
              auVar26 = __udivti3(uVar12,lVar23,10,0);
              bVar7 = __umodti3(auVar26._0_8_,auVar26._8_8_,10,0);
              *plVar18 = lVar22 + -1;
              *(byte *)(lVar22 + -1) = bVar7 | 0x30;
            } while (lVar23 != 0 || 99 < uVar12);
          }
          lVar23 = *plVar25;
          pbVar8 = (byte *)*plVar18;
        }
        bVar7 = *pbVar8;
        *plVar18 = (long)(pbVar8 + -1);
        pbVar8[-1] = bVar7;
        iVar21 = ~(uint)pbVar8 + (int)lVar23;
        *(undefined1 *)(*plVar18 + 1) = 0x2e;
        *param_5 = iVar21;
        param_3 = param_3 - iVar21;
      }
      if (-1 < param_3) {
        if (param_3 == 0) {
          return 1;
        }
        param_3 = param_3 + 1;
        do {
          puVar13 = (undefined1 *)*plVar25;
          param_3 = param_3 + -1;
          *plVar25 = (long)(puVar13 + 1);
          *puVar13 = 0x30;
        } while (1 < param_3);
        return 1;
      }
      lVar23 = *plVar25;
      uVar2 = -param_3;
      pbVar8 = (byte *)(lVar23 - (ulong)uVar2);
      *plVar25 = (long)pbVar8;
      if (*pbVar8 < 0x36) {
        if (*pbVar8 != 0x35) {
          return 1;
        }
        if (uVar2 != 1) {
          lVar22 = 1 - (ulong)uVar2;
          do {
            if (*(char *)(lVar23 + lVar22) != '0') goto LAB_00393d60;
            lVar22 = lVar22 + 1;
          } while (lVar22 != 0);
        }
        bVar7 = pbVar8[-1];
        if (bVar7 == 0x2e) {
          bVar7 = pbVar8[-2];
        }
        if ((bVar7 & 1) == 0) {
          return 1;
        }
      }
LAB_00393d60:
      pbVar15 = (byte *)*plVar18;
      pbVar11 = pbVar8 + -1;
      if (pbVar15 <= pbVar11) {
        do {
          bVar7 = *pbVar11;
          if (bVar7 != 0x2e) {
            if (bVar7 != 0x39) goto LAB_00393c10;
            *pbVar11 = 0x30;
            pbVar15 = (byte *)*plVar18;
          }
          pbVar11 = pbVar11 + -1;
        } while (pbVar15 <= pbVar11);
LAB_00393e38:
        pbVar8 = pbVar11 + 1;
      }
    }
LAB_00393e3c:
    *pbVar11 = 0x31;
    *plVar18 = (long)pbVar11;
    bVar7 = *pbVar8;
    *pbVar8 = pbVar8[1];
    pbVar8[1] = bVar7;
    goto LAB_00394058;
  }
  if (iVar21 < -0x3c) {
    auVar26 = __fixunsdfti();
    uVar14 = auVar26._8_8_;
    uVar12 = auVar26._0_8_;
    *plVar25 = lVar23;
    *plVar18 = lVar23;
    if (iVar21 < -0x7c) {
      return 0;
    }
    uVar20 = (ulong)(uint)-iVar21;
    uVar16 = -1L << (uVar20 & 0x3f);
    uVar9 = 0;
    if (uVar20 != 0) {
      uVar9 = 0xffffffffffffffff >> (-uVar20 & 0x3f);
    }
    uVar10 = 0;
    if (uVar20 != 0) {
      uVar10 = uVar14 << (-uVar20 & 0x3f);
    }
    bVar6 = (long)(uVar20 - 0x40) < 0;
    uVar19 = -1L << (uVar20 & 0x3f);
    uVar24 = 0;
    if (bVar6) {
      uVar19 = uVar9 | uVar16;
      uVar24 = uVar16;
    }
    uVar19 = ~uVar19;
    uVar9 = 0;
    if (bVar6) {
      uVar9 = uVar14 >> (uVar20 & 0x3f);
    }
    uVar24 = ~uVar24;
    uVar16 = uVar14 >> (uVar20 & 0x3f);
    if (bVar6) {
      uVar16 = uVar12 >> (uVar20 & 0x3f) | uVar10;
    }
    if (uVar16 == 0 && uVar9 == 0) {
LAB_00393df0:
      uVar12 = uVar24 & uVar12;
      uVar14 = uVar19 & uVar14;
      *param_5 = 0;
      if (uVar12 == 0 && uVar14 == 0) {
        uVar12 = 0;
        uVar14 = 0;
      }
      else {
        iVar21 = 0;
        do {
          auVar26._8_8_ = 0;
          auVar26._0_8_ = uVar12;
          iVar21 = iVar21 + -1;
          uVar14 = SUB168(auVar26 * ZEXT816(10),8) + uVar14 * 10;
          uVar12 = uVar12 * 10;
          bVar6 = uVar12 <= uVar24;
          if (uVar14 != uVar19) {
            bVar6 = uVar14 <= uVar19;
          }
        } while (bVar6);
        *param_5 = iVar21;
      }
      uVar9 = uVar14 & uVar19;
      bVar7 = 0;
      if (uVar20 != 0) {
        bVar7 = (byte)(uVar14 << (-uVar20 & 0x3f));
      }
      uVar16 = uVar12 & uVar24;
      lVar23 = *plVar18;
      bVar1 = (byte)(uVar14 >> (uVar20 & 0x3f));
      if ((long)(uVar20 - 0x40) < 0) {
        bVar1 = (byte)(uVar12 >> (uVar20 & 0x3f)) | bVar7;
      }
      *plVar18 = lVar23 + -1;
      *(byte *)(lVar23 + -1) = bVar1 + 0x30;
      puVar13 = (undefined1 *)*plVar25;
      *plVar25 = (long)(puVar13 + 1);
      *puVar13 = 0x2e;
    }
    else {
      auVar26 = __udivti3(uVar16,uVar9,10,0);
      pbVar8 = (byte *)(param_4 + 0x28);
      *pbVar8 = (char)uVar16 + auVar26[0] * -10 | 0x30;
      *(byte **)(param_4 + 0x58) = pbVar8;
      if (uVar9 != 0 || 9 < uVar16) {
        bVar7 = __umodti3(auVar26._0_8_,auVar26._8_8_,10,0);
        *(byte *)(param_4 + 0x27) = bVar7 | 0x30;
        *(byte **)(param_4 + 0x58) = (byte *)(param_4 + 0x27);
        if (uVar9 != 0 || 99 < uVar16) {
          do {
            lVar22 = auVar26._8_8_;
            uVar9 = auVar26._0_8_;
            lVar23 = *plVar18;
            auVar26 = __udivti3(uVar9,lVar22,10,0);
            bVar7 = __umodti3(auVar26._0_8_,auVar26._8_8_,10,0);
            *plVar18 = lVar23 + -1;
            *(byte *)(lVar23 + -1) = bVar7 | 0x30;
          } while (lVar22 != 0 || 99 < uVar9);
        }
        lVar23 = *plVar25;
        pbVar8 = (byte *)*plVar18;
      }
      bVar7 = *pbVar8;
      *plVar18 = (long)(pbVar8 + -1);
      pbVar8[-1] = bVar7;
      iVar21 = (int)lVar23 - (int)pbVar8;
      *(undefined1 *)(*plVar18 + 1) = 0x2e;
      uVar16 = uVar24 & uVar12;
      uVar9 = uVar19 & uVar14;
      if (iVar21 == 0) goto LAB_00393df0;
      iVar21 = iVar21 + -1;
      param_3 = param_3 - iVar21;
      *param_5 = iVar21;
      if (param_3 < 0) {
        lVar23 = *plVar25;
        uVar2 = -param_3;
        pbVar11 = (byte *)(lVar23 - (ulong)uVar2);
        *plVar25 = (long)pbVar11;
        if (*pbVar11 < 0x36) {
          if (*pbVar11 != 0x35) {
            return 1;
          }
          if (uVar16 == 0 && uVar9 == 0) {
            if (uVar2 != 1) {
              lVar22 = 1 - (ulong)uVar2;
              do {
                if (*(char *)(lVar23 + lVar22) != '0') goto LAB_0039392c;
                lVar22 = lVar22 + 1;
              } while (lVar22 != 0);
            }
            bVar7 = pbVar11[-1];
            if (bVar7 == 0x2e) {
              bVar7 = pbVar11[-2];
            }
            if ((bVar7 & 1) == 0) {
              return 1;
            }
          }
        }
LAB_0039392c:
        pbVar15 = (byte *)*plVar18;
        pbVar8 = pbVar11 + -1;
        if (pbVar15 <= pbVar8) {
          do {
            pbVar11 = pbVar8;
            bVar7 = *pbVar11;
            if (bVar7 != 0x2e) {
              if (bVar7 != 0x39) goto LAB_00394030;
              *pbVar11 = 0x30;
              pbVar15 = (byte *)*plVar18;
            }
            pbVar8 = pbVar11 + -1;
          } while (pbVar15 <= pbVar8);
        }
        *pbVar8 = 0x31;
        *plVar18 = (long)pbVar8;
        bVar7 = *pbVar11;
        *pbVar11 = pbVar11[1];
        pbVar11[1] = bVar7;
        goto LAB_00394058;
      }
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar16;
    uVar14 = SUB168(auVar3 * ZEXT816(10),8) + uVar9 * 10;
    uVar12 = 0;
    if (uVar20 != 0) {
      uVar12 = uVar14 << (-uVar20 & 0x3f);
    }
    uVar9 = uVar14 & uVar19;
    uVar14 = uVar14 >> (uVar20 & 0x3f);
    if ((long)(uVar20 - 0x40) < 0) {
      uVar14 = uVar16 * 10 >> (uVar20 & 0x3f) | uVar12;
    }
    iVar21 = (int)uVar14;
    uVar12 = uVar16 * 10 & uVar24;
    if (0 < param_3) {
      param_3 = param_3 + 1;
      do {
        pcVar17 = (char *)*plVar25;
        *plVar25 = (long)(pcVar17 + 1);
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar12;
        uVar10 = SUB168(auVar4 * ZEXT816(10),8) + uVar9 * 10;
        *pcVar17 = (char)uVar14 + '0';
        uVar16 = 0;
        if (uVar20 != 0) {
          uVar16 = uVar10 << (-uVar20 & 0x3f);
        }
        uVar9 = uVar10 & uVar19;
        param_3 = param_3 + -1;
        uVar14 = uVar10 >> (uVar20 & 0x3f);
        if ((long)(uVar20 - 0x40) < 0) {
          uVar14 = uVar12 * 10 >> (uVar20 & 0x3f) | uVar16;
        }
        iVar21 = (int)uVar14;
        uVar12 = uVar12 * 10 & uVar24;
      } while (1 < param_3);
    }
    if (iVar21 < 6) {
      if (iVar21 != 5) {
        return 1;
      }
      if (uVar12 == 0 && uVar9 == 0) {
        bVar7 = *(byte *)(*plVar25 + -1);
        if (bVar7 == 0x2e) {
          bVar7 = *(byte *)(*plVar25 + -2);
        }
        if ((bVar7 & 1) == 0) {
          return 1;
        }
      }
    }
    pbVar8 = (byte *)*plVar25;
    pbVar11 = pbVar8 + -1;
    pbVar15 = (byte *)*plVar18;
    if (pbVar15 <= pbVar11) {
      do {
        bVar7 = *pbVar11;
        if (bVar7 != 0x2e) {
          if (bVar7 != 0x39) goto LAB_00394030;
          *pbVar11 = 0x30;
          pbVar15 = (byte *)*plVar18;
        }
        pbVar11 = pbVar11 + -1;
      } while (pbVar15 <= pbVar11);
      goto LAB_00394038;
    }
  }
  else {
    uVar9 = (ulong)(uint)-iVar21;
    uVar16 = ~(-1L << (uVar9 & 0x3f));
    uVar14 = uVar12 >> (uVar9 & 0x3f);
    if (uVar14 == 0) {
LAB_00393c20:
      uVar12 = uVar16 & uVar12;
      *param_5 = 0;
      uVar20 = 0;
      if (uVar12 != 0) {
        iVar21 = 0;
        do {
          uVar12 = uVar12 * 10;
          iVar21 = iVar21 + -1;
        } while (uVar12 <= uVar16);
        *param_5 = iVar21;
        uVar20 = uVar12;
      }
      lVar23 = *plVar18;
      uVar14 = uVar20 & uVar16;
      *plVar18 = lVar23 + -1;
      *(char *)(lVar23 + -1) = (char)(uVar20 >> (uVar9 & 0x3f)) + '0';
      puVar13 = (undefined1 *)*plVar25;
      *plVar25 = (long)(puVar13 + 1);
      *puVar13 = 0x2e;
    }
    else {
      uVar20 = uVar14 / 10;
      pbVar8 = (byte *)(param_4 + 0x28);
      *pbVar8 = (char)uVar14 + (char)uVar20 * -10 | 0x30;
      *(byte **)(param_4 + 0x58) = pbVar8;
      if (9 < uVar14) {
        *(byte *)(param_4 + 0x27) = (char)uVar20 + (char)(uVar20 / 10) * -10 | 0x30;
        *(byte **)(param_4 + 0x58) = (byte *)(param_4 + 0x27);
        while (uVar10 = uVar20, 99 < uVar14) {
          uVar20 = uVar10 / 10;
          lVar23 = *plVar18;
          *plVar18 = lVar23 + -1;
          *(byte *)(lVar23 + -1) = (char)uVar20 + (char)(uVar20 / 10) * -10 | 0x30;
          uVar14 = uVar10;
        }
        lVar23 = *plVar25;
        pbVar8 = (byte *)*plVar18;
      }
      bVar7 = *pbVar8;
      *plVar18 = (long)(pbVar8 + -1);
      pbVar8[-1] = bVar7;
      iVar21 = (int)lVar23 - (int)pbVar8;
      uVar14 = uVar16 & uVar12;
      *(undefined1 *)(*plVar18 + 1) = 0x2e;
      if (iVar21 == 0) goto LAB_00393c20;
      iVar21 = iVar21 + -1;
      param_3 = param_3 - iVar21;
      *param_5 = iVar21;
      if (param_3 < 0) {
        lVar23 = *plVar25;
        uVar2 = -param_3;
        pbVar8 = (byte *)(lVar23 - (ulong)uVar2);
        *plVar25 = (long)pbVar8;
        if (*pbVar8 < 0x36) {
          if (*pbVar8 != 0x35) {
            return 1;
          }
          if (uVar14 == 0) {
            if (uVar2 != 1) {
              lVar22 = 1 - (ulong)uVar2;
              do {
                if (*(char *)(lVar23 + lVar22) != '0') goto LAB_00393b30;
                lVar22 = lVar22 + 1;
              } while (lVar22 != 0);
            }
            bVar7 = pbVar8[-1];
            if (bVar7 == 0x2e) {
              bVar7 = pbVar8[-2];
            }
            if ((bVar7 & 1) == 0) {
              return 1;
            }
          }
        }
LAB_00393b30:
        pbVar15 = (byte *)*plVar18;
        pbVar11 = pbVar8 + -1;
        if (pbVar15 <= pbVar11) {
          do {
            bVar7 = *pbVar11;
            if (bVar7 != 0x2e) {
              if (bVar7 != 0x39) {
LAB_00393c10:
                *pbVar11 = bVar7 + 1;
                return 1;
              }
              *pbVar11 = 0x30;
              pbVar15 = (byte *)*plVar18;
            }
            pbVar11 = pbVar11 + -1;
          } while (pbVar15 <= pbVar11);
          goto LAB_00393e38;
        }
        goto LAB_00393e3c;
      }
    }
    uVar20 = uVar14 * 10 >> (uVar9 & 0x3f);
    iVar21 = (int)uVar20;
    uVar12 = uVar14 * 10 & uVar16;
    if (0 < param_3) {
      param_3 = param_3 + 1;
      do {
        pcVar17 = (char *)*plVar25;
        param_3 = param_3 + -1;
        cVar5 = (char)uVar20;
        uVar20 = uVar12 * 10 >> (uVar9 & 0x3f);
        iVar21 = (int)uVar20;
        uVar12 = uVar12 * 10 & uVar16;
        *plVar25 = (long)(pcVar17 + 1);
        *pcVar17 = cVar5 + '0';
      } while (1 < param_3);
    }
    if (iVar21 < 6) {
      if (iVar21 != 5) {
        return 1;
      }
      if (uVar12 == 0) {
        bVar7 = *(byte *)(*plVar25 + -1);
        if (bVar7 == 0x2e) {
          bVar7 = *(byte *)(*plVar25 + -2);
        }
        if ((bVar7 & 1) == 0) {
          return 1;
        }
      }
    }
    pbVar8 = (byte *)*plVar25;
    pbVar11 = pbVar8 + -1;
    pbVar15 = (byte *)*plVar18;
    if (pbVar15 <= pbVar11) {
      do {
        bVar7 = *pbVar11;
        if (bVar7 != 0x2e) {
          if (bVar7 != 0x39) {
LAB_00394030:
            *pbVar11 = bVar7 + 1;
            return 1;
          }
          *pbVar11 = 0x30;
          pbVar15 = (byte *)*plVar18;
        }
        pbVar11 = pbVar11 + -1;
      } while (pbVar15 <= pbVar11);
LAB_00394038:
      pbVar8 = pbVar11 + 1;
    }
  }
  *pbVar11 = 0x31;
  *plVar18 = (long)pbVar11;
  bVar7 = *pbVar8;
  *pbVar8 = pbVar8[1];
  pbVar8[1] = bVar7;
LAB_00394058:
  *param_5 = *param_5 + 1;
  *plVar25 = *plVar25 + -1;
  return 1;
}


