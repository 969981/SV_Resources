/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00125400; name: FUN_00125400
 */


undefined8 FUN_00125400(long param_1,char *param_2,long param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  bool bVar11;
  undefined8 uVar12;
  undefined *puVar13;
  char cVar14;
  long lVar15;
  undefined *puVar16;
  char *pcVar17;
  long *plVar18;
  long lVar19;
  int *piVar20;
  ulong uVar21;
  int iVar22;
  uint uVar23;
  ulong uVar24;
  int *piVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  uint uVar29;
  int iVar30;
  uint uVar31;
  undefined8 uVar32;
  char *pcVar33;
  int *piVar34;
  ulong uVar35;
  long *plVar36;
  undefined8 *puVar37;
  undefined1 auStack_70 [8];
  undefined1 local_68;
  
  if (*param_2 == '>') {
    lVar15 = *(long *)(param_1 + 0x10);
    plVar36 = (long *)(lVar15 + -0x10);
    puVar37 = (undefined8 *)0x0;
    param_2 = param_2 + 1;
    *(long **)(param_1 + 0x10) = plVar36;
    bVar9 = *(byte *)(lVar15 + -8);
  }
  else {
    puVar37 = *(undefined8 **)(param_3 + 0x80);
    plVar36 = (long *)*puVar37;
    bVar9 = *(byte *)(plVar36 + 1);
  }
  if ((bVar9 | 0x20) == 0x66) {
    cVar14 = *param_2;
    lVar15 = *plVar36;
    if (cVar14 == 's') {
      if ((lVar15 != 0) && (*(char *)(lVar15 + 8) != '&')) {
        lVar15 = *(long *)(lVar15 + 0x18);
        if (*(long *)(lVar15 + 0x70) == 0) {
          *(undefined **)(param_3 + 0x20) = &DAT_03c53ce5;
          uVar35 = 2;
        }
        else {
          *(long *)(param_3 + 0x20) = *(long *)(lVar15 + 0x70) + 0x18;
          lVar19 = *(long *)(lVar15 + 0x70);
          if (*(char *)(lVar19 + 8) == '\x04') {
            uVar35 = (ulong)*(byte *)(lVar19 + 0xb);
          }
          else {
            uVar35 = *(ulong *)(lVar19 + 0x10);
          }
        }
        *(ulong *)(param_3 + 0x28) = uVar35;
        iVar22 = *(int *)(lVar15 + 0x2c);
        *(int *)(param_3 + 0x34) = iVar22;
        *(undefined4 *)(param_3 + 0x38) = *(undefined4 *)(lVar15 + 0x30);
        puVar13 = &DAT_03c60f6f;
        if (iVar22 != 0) {
          puVar13 = &DAT_03ca32f1;
        }
        *(undefined **)(param_3 + 0x18) = puVar13;
        return 1;
      }
      goto LAB_001254a8;
    }
  }
  else {
    cVar14 = *param_2;
    if (cVar14 == 's') {
LAB_001254a8:
      *(undefined8 *)(param_3 + 0x34) = 0xffffffffffffffff;
      *(undefined **)(param_3 + 0x20) = &DAT_03bdfaf1;
      *(undefined8 *)(param_3 + 0x28) = 4;
      *(undefined **)(param_3 + 0x18) = &DAT_03bf34eb;
      return 1;
    }
    lVar15 = 0;
  }
  uVar32 = 1;
  pcVar33 = param_2;
LAB_00125508:
  switch(cVar14) {
  case 'M':
  case 'N':
  case 'O':
  case 'P':
  case 'Q':
  case 'R':
  case 'T':
  case 'U':
  case 'V':
  case 'W':
  case 'X':
  case 'Y':
  case 'Z':
  case '[':
  case '\\':
  case ']':
  case '^':
  case '_':
  case '`':
  case 'a':
  case 'b':
  case 'c':
  case 'd':
  case 'e':
  case 'g':
  case 'h':
  case 'i':
  case 'j':
  case 'k':
  case 'm':
  case 'o':
  case 'p':
  case 'q':
  case 's':
    goto switchD_00125524_caseD_4d;
  case 'S':
    if ((lVar15 == 0) || (*(char *)(lVar15 + 8) == '&')) {
      puVar13 = &DAT_03bdfaf1;
      *(undefined **)(param_3 + 0x20) = &DAT_03bdfaf1;
      *(undefined8 *)(param_3 + 0x28) = 4;
      puVar16 = &DAT_03bf34eb;
      *(undefined8 *)(param_3 + 0x34) = 0xffffffffffffffff;
      uVar35 = 4;
    }
    else {
      lVar19 = *(long *)(lVar15 + 0x18);
      if (*(long *)(lVar19 + 0x70) == 0) {
        puVar13 = &DAT_03c53ce5;
        *(undefined **)(param_3 + 0x20) = &DAT_03c53ce5;
        uVar35 = 2;
      }
      else {
        puVar13 = (undefined *)(*(long *)(lVar19 + 0x70) + 0x18);
        *(undefined **)(param_3 + 0x20) = puVar13;
        lVar27 = *(long *)(lVar19 + 0x70);
        if (*(char *)(lVar27 + 8) == '\x04') {
          uVar35 = (ulong)*(byte *)(lVar27 + 0xb);
        }
        else {
          uVar35 = *(ulong *)(lVar27 + 0x10);
        }
      }
      *(ulong *)(param_3 + 0x28) = uVar35;
      iVar22 = *(int *)(lVar19 + 0x2c);
      *(int *)(param_3 + 0x34) = iVar22;
      *(undefined4 *)(param_3 + 0x38) = *(undefined4 *)(lVar19 + 0x30);
      puVar16 = &DAT_03c60f6f;
      if (iVar22 != 0) {
        puVar16 = &DAT_03ca32f1;
      }
    }
    *(undefined **)(param_3 + 0x18) = puVar16;
    FUN_0012e8d0(param_3 + 0x44,puVar13,uVar35);
    pcVar33 = pcVar33 + 1;
    cVar14 = *pcVar33;
    goto LAB_00125508;
  case 'l':
    if (puVar37 == (undefined8 *)0x0) {
      *(undefined4 *)(param_3 + 0x30) = 0xffffffff;
      pcVar33 = pcVar33 + 1;
      cVar14 = *pcVar33;
    }
    else {
      iVar22 = -1;
      if ((*(byte *)((long)puVar37 + 0x3e) >> 1 & 1) != 0) goto LAB_00125864;
      lVar27 = *(long *)(*(long *)*puVar37 + 0x18);
      lVar19 = *(long *)(lVar27 + 0x58);
      if (lVar19 == 0) {
        *(undefined4 *)(param_3 + 0x30) = 0xffffffff;
        pcVar33 = pcVar33 + 1;
        cVar14 = *pcVar33;
      }
      else {
        uVar8 = *(uint *)(lVar27 + 0x28);
        iVar22 = (int)((ulong)(puVar37[4] - *(long *)(lVar27 + 0x40)) >> 2);
        uVar31 = iVar22 - 1;
        if ((uVar8 == 0) || (piVar34 = *(int **)(lVar27 + 0x60), iVar22 <= *piVar34)) {
          iVar30 = -1;
          iVar22 = *(int *)(lVar27 + 0x2c);
          if (-1 < (int)uVar31) goto LAB_00125750;
        }
        else {
          uVar23 = uVar31 >> 7;
          if ((int)uVar8 <= (int)uVar23) {
            uVar8 = uVar23;
          }
          piVar25 = piVar34 + (ulong)uVar23 * 2;
          do {
            uVar29 = uVar23;
            uVar10 = uVar8;
            if (uVar8 == uVar29) break;
            iVar30 = *piVar25;
            piVar25 = piVar25 + 2;
            uVar23 = uVar29 + 1;
            uVar10 = uVar29;
          } while (iVar30 < iVar22);
          iVar30 = piVar34[(long)(int)(uVar10 - 1) * 2];
          iVar22 = (piVar34 + (long)(int)(uVar10 - 1) * 2)[1];
          if (iVar30 < (int)uVar31) {
LAB_00125750:
            uVar35 = (ulong)iVar30;
            uVar24 = ~uVar35;
            if ((uVar31 - iVar30 & 7) != 0) {
              lVar27 = -((ulong)(uVar31 - iVar30) & 7);
              uVar28 = uVar35;
              do {
                uVar35 = uVar28 + 1;
                iVar22 = iVar22 + *(char *)(lVar19 + 1 + uVar28);
                bVar11 = lVar27 != -1;
                lVar27 = lVar27 + 1;
                uVar28 = uVar35;
              } while (bVar11);
            }
            if (6 < uVar24 + (long)(int)uVar31) {
              lVar27 = uVar35 - (long)(int)uVar31;
              pcVar17 = (char *)(lVar19 + uVar35 + 4);
              do {
                pbVar5 = (byte *)(pcVar17 + -3);
                pbVar6 = (byte *)(pcVar17 + -2);
                pbVar7 = (byte *)(pcVar17 + -1);
                cVar14 = *pcVar17;
                pcVar1 = pcVar17 + 1;
                pcVar2 = pcVar17 + 2;
                pcVar3 = pcVar17 + 3;
                pcVar4 = pcVar17 + 4;
                pcVar17 = pcVar17 + 8;
                iVar22 = iVar22 + (uint)*pbVar5 + (uint)*pbVar6 + (uint)*pbVar7 + (int)cVar14 +
                         (int)*pcVar1 + (int)*pcVar2 + (int)*pcVar3 + (int)*pcVar4;
                lVar27 = lVar27 + 8;
              } while (lVar27 != 0);
            }
          }
        }
LAB_00125864:
        *(int *)(param_3 + 0x30) = iVar22;
        pcVar33 = pcVar33 + 1;
        cVar14 = *pcVar33;
      }
    }
    goto LAB_00125508;
  case 'n':
    if (puVar37 == (undefined8 *)0x0) {
LAB_001256a4:
      *(undefined8 *)(param_3 + 0x10) = 0;
    }
    else {
      if ((*(ushort *)((long)puVar37 + 0x3e) >> 7 & 1) != 0) {
        *(undefined **)(param_3 + 8) = &DAT_03c3fc49;
        *(char **)(param_3 + 0x10) = "metamethod";
        pcVar33 = pcVar33 + 1;
        cVar14 = *pcVar33;
        goto LAB_00125508;
      }
      if (((*(ushort *)((long)puVar37 + 0x3e) >> 5 & 1) != 0) ||
         ((*(byte *)(puVar37[2] + 0x3e) >> 1 & 1) != 0)) goto LAB_001256a4;
      lVar19 = FUN_00125f60(param_1,puVar37[2],param_3 + 8);
      *(long *)(param_3 + 0x10) = lVar19;
      if (lVar19 != 0) goto switchD_00125524_caseD_4c;
    }
    *(undefined8 *)(param_3 + 8) = 0;
    *(undefined1 **)(param_3 + 0x10) = &DAT_03c886bc;
    pcVar33 = pcVar33 + 1;
    cVar14 = *pcVar33;
    goto LAB_00125508;
  case 'r':
    if ((puVar37 == (undefined8 *)0x0) || ((*(byte *)((long)puVar37 + 0x3f) & 1) == 0)) {
      *(undefined4 *)(param_3 + 0x40) = 0;
      pcVar33 = pcVar33 + 1;
      cVar14 = *pcVar33;
      goto LAB_00125508;
    }
    *(undefined2 *)(param_3 + 0x40) = *(undefined2 *)(puVar37 + 7);
    *(undefined2 *)(param_3 + 0x42) = *(undefined2 *)((long)puVar37 + 0x3a);
  case 'L':
  case 'f':
switchD_00125524_caseD_4c:
    pcVar33 = pcVar33 + 1;
    cVar14 = *pcVar33;
    goto LAB_00125508;
  case 't':
    if (puVar37 == (undefined8 *)0x0) {
      *(undefined1 *)(param_3 + 0x3f) = 0;
      pcVar33 = pcVar33 + 1;
      cVar14 = *pcVar33;
    }
    else {
      *(byte *)(param_3 + 0x3f) = *(byte *)((long)puVar37 + 0x3e) & 0x20;
      pcVar33 = pcVar33 + 1;
      cVar14 = *pcVar33;
    }
    goto LAB_00125508;
  case 'u':
    if (lVar15 == 0) {
      *(undefined1 *)(param_3 + 0x3c) = 0;
LAB_001256e0:
      *(undefined2 *)(param_3 + 0x3d) = 0x100;
      pcVar33 = pcVar33 + 1;
      cVar14 = *pcVar33;
    }
    else {
      *(undefined1 *)(param_3 + 0x3c) = *(undefined1 *)(lVar15 + 10);
      if (*(char *)(lVar15 + 8) == '&') goto LAB_001256e0;
      *(undefined1 *)(param_3 + 0x3e) = *(undefined1 *)(*(long *)(lVar15 + 0x18) + 0xb);
      *(undefined1 *)(param_3 + 0x3d) = *(undefined1 *)(*(long *)(lVar15 + 0x18) + 10);
      pcVar33 = pcVar33 + 1;
      cVar14 = *pcVar33;
    }
    goto LAB_00125508;
  }
  if (cVar14 != '\0') {
switchD_00125524_caseD_4d:
    pcVar33 = pcVar33 + 1;
    cVar14 = *pcVar33;
    uVar32 = 0;
    goto LAB_00125508;
  }
  pcVar33 = strchr(param_2,0x66);
  if (pcVar33 != (char *)0x0) {
    plVar18 = *(long **)(param_1 + 0x10);
    *plVar18 = *plVar36;
    *(char *)(plVar18 + 1) = (char)plVar36[1];
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  }
  pcVar33 = strchr(param_2,0x4c);
  if (pcVar33 != (char *)0x0) {
    if ((lVar15 == 0) || (*(char *)(lVar15 + 8) == '&')) {
      *(undefined1 *)(*(long *)(param_1 + 0x10) + 8) = 0;
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
    }
    else {
      lVar15 = *(long *)(lVar15 + 0x18);
      piVar34 = (int *)(lVar15 + 0x2c);
      iVar22 = *piVar34;
      uVar12 = FUN_0013ca00(param_1);
      puVar37 = *(undefined8 **)(param_1 + 0x10);
      *puVar37 = uVar12;
      *(undefined1 *)(puVar37 + 1) = 0x45;
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
      local_68 = 0x11;
      if (0 < *(int *)(lVar15 + 0x1c)) {
        uVar35 = 0;
        do {
          lVar19 = *(long *)(lVar15 + 0x58);
          if (*(char *)(lVar19 + uVar35) == -0x80) {
            if (lVar19 == 0) {
              iVar22 = -1;
            }
            else {
              uVar8 = *(uint *)(lVar15 + 0x28);
              if (uVar8 == 0) {
                iVar22 = *piVar34;
                uVar24 = 0xffffffffffffffff;
                if (-1 < (long)uVar35) goto LAB_00125a2c;
              }
              else {
                piVar20 = *(int **)(lVar15 + 0x60);
                iVar30 = -1;
                piVar25 = piVar34;
                if ((long)*piVar20 <= (long)uVar35) {
                  uVar31 = (uint)(uVar35 >> 7) & 0x1ffffff;
                  uVar24 = uVar35 >> 7;
                  if ((int)uVar8 <= (int)uVar31) {
                    uVar8 = uVar31;
                  }
                  piVar25 = piVar20 + uVar24 * 2;
                  do {
                    uVar23 = (uint)uVar24;
                    uVar31 = uVar8;
                    if (uVar8 == uVar23) break;
                    iVar22 = *piVar25;
                    uVar24 = (ulong)(uVar23 + 1);
                    piVar25 = piVar25 + 2;
                    uVar31 = uVar23;
                  } while ((long)iVar22 <= (long)uVar35);
                  piVar25 = piVar20 + (long)(int)(uVar31 - 1) * 2 + 1;
                  iVar30 = piVar20[(long)(int)(uVar31 - 1) * 2];
                }
                iVar22 = *piVar25;
                uVar24 = (ulong)iVar30;
                if ((long)uVar24 < (long)uVar35) {
LAB_00125a2c:
                  uVar8 = (int)uVar35 - (int)uVar24;
                  uVar21 = ~uVar24;
                  uVar28 = (ulong)uVar8 & 7;
                  if ((uVar8 & 7) != 0) {
                    uVar26 = uVar24;
                    do {
                      uVar24 = uVar26 + 1;
                      iVar22 = iVar22 + *(char *)(lVar19 + 1 + uVar26);
                      uVar28 = uVar28 - 1;
                      uVar26 = uVar24;
                    } while (uVar28 != 0);
                  }
                  if (6 < uVar35 + uVar21) {
                    do {
                      pcVar33 = (char *)(lVar19 + 4 + uVar24);
                      uVar24 = uVar24 + 8;
                      iVar22 = iVar22 + (uint)(byte)pcVar33[-3] + (uint)(byte)pcVar33[-2] +
                               (uint)(byte)pcVar33[-1] + (int)*pcVar33 + (int)pcVar33[1] +
                               (int)pcVar33[2] + (int)pcVar33[3] + (int)pcVar33[4];
                    } while (uVar35 != uVar24);
                  }
                }
              }
            }
          }
          else {
            iVar22 = iVar22 + *(char *)(lVar19 + uVar35);
          }
          FUN_0013c890(param_1,uVar12,(long)iVar22,auStack_70);
          uVar35 = uVar35 + 1;
        } while ((long)uVar35 < (long)*(int *)(lVar15 + 0x1c));
      }
    }
  }
  return uVar32;
}


