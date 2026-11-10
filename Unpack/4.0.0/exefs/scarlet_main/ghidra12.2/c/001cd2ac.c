/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001cd2ac; name: FUN_001cd2ac
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_001cd2ac(undefined8 param_1,code *param_2,byte *param_3,undefined8 *param_4)

{
  char *pcVar1;
  char cVar2;
  double dVar3;
  byte *__nptr;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  size_t sVar11;
  undefined8 uVar12;
  long lVar13;
  byte bVar14;
  undefined1 uVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  undefined1 uVar20;
  uint uVar21;
  byte *pbVar22;
  double *pdVar23;
  double dVar24;
  undefined4 uVar25;
  long *plVar26;
  long *plVar27;
  double *pdVar28;
  uint *puVar29;
  double *pdVar30;
  double *pdVar31;
  double dVar32;
  uint uVar33;
  int iVar34;
  double dVar35;
  undefined1 *puVar36;
  undefined1 *puVar37;
  long lVar38;
  long lVar39;
  char *pcVar40;
  long lVar41;
  double dVar42;
  char *pcVar43;
  long local_15f0;
  undefined8 local_15e0;
  undefined8 uStack_15d8;
  undefined8 local_15d0;
  undefined8 uStack_15c8;
  char local_15c0 [323];
  char local_147d [5];
  long alStack_1478 [128];
  uint local_1078;
  undefined1 local_1074 [4];
  undefined1 local_1070 [8];
  undefined8 local_1068;
  double adStack_1060 [510];
  byte *local_68;
  
  lVar13 = param_4[2];
  pdVar23 = (double *)*param_4;
  lVar39 = param_4[1];
  iVar9 = *(int *)(param_4 + 3);
  iVar8 = *(int *)((long)param_4 + 0x1c);
  bVar14 = *param_3;
  local_15e0 = param_3;
  if (bVar14 != 0) {
    lVar41 = 0;
    iVar6 = 0;
    plVar26 = alStack_1478;
    do {
      while( true ) {
        pbVar22 = local_15e0 + 2;
        local_15e0 = local_15e0 + 1;
        plVar27 = plVar26;
        if (bVar14 != 0x25) break;
        if (*local_15e0 != 0x25) {
          iVar6 = iVar6 + 1;
          lVar10 = FUN_001ce684(local_15e0,&local_15e0);
          uVar33 = 0;
          local_15f0 = 0;
          lVar19 = (long)iVar6;
          if (lVar10 != 0) {
            lVar19 = lVar10;
          }
          lVar38 = 0;
          bVar4 = SBORROW8(lVar19,lVar41);
          lVar10 = lVar19 - lVar41;
          bVar5 = lVar19 == lVar41;
          lVar17 = lVar19;
          do {
            if (bVar5 || lVar10 < 0 != bVar4) {
              lVar17 = lVar41;
            }
            lVar41 = lVar17;
            pbVar22 = local_15e0;
switchD_001cd3d8_caseD_1:
            local_15e0 = pbVar22;
            __nptr = local_15e0;
            bVar14 = *local_15e0;
            uVar21 = bVar14 - 0x20;
            if ((0x2f < uVar21 || (1L << ((ulong)uVar21 & 0x3f) & 0x900003ff6c09U) == 0) &&
               (uVar16 = bVar14 - 0x68,
               0x12 < uVar16 || (1 << (ulong)(uVar16 & 0x1f) & 0x40211U) == 0)) {
              uVar18 = lVar19 - 1;
              if (0x7f < uVar18) {
                return -1;
              }
              if (bVar14 < 0x58) {
                if (bVar14 == 0x45) {
                  *(undefined4 *)(alStack_1478 + uVar18 * 4 + 0x80) = 7;
                  uVar21 = 0x41000;
                }
                else {
                  if (bVar14 != 0x47) {
                    if (bVar14 == 0x53) {
                      uVar33 = uVar33 | 8;
                      goto switchD_001cd598_caseD_73;
                    }
                    goto switchD_001cd598_caseD_68;
                  }
                  *(undefined4 *)(alStack_1478 + uVar18 * 4 + 0x80) = 7;
                  uVar21 = 0x81000;
                }
LAB_001cd6b4:
                uVar33 = uVar33 | uVar21;
                goto LAB_001cd6b8;
              }
              switch(bVar14) {
              case 99:
                uVar25 = 3;
                uVar33 = uVar33 | 0x20000;
                break;
              case 100:
              case 0x69:
                uVar25 = 3;
                break;
              case 0x65:
                uVar25 = 7;
                uVar33 = uVar33 | 0x40000;
                break;
              case 0x66:
                uVar25 = 7;
                break;
              case 0x67:
                uVar25 = 7;
                uVar33 = uVar33 | 0x80000;
                break;
              case 0x68:
              case 0x6a:
              case 0x6b:
              case 0x6c:
              case 0x6d:
              case 0x71:
              case 0x72:
              case 0x74:
              case 0x76:
              case 0x77:
                goto switchD_001cd598_caseD_68;
              case 0x6e:
                uVar25 = 4;
                break;
              case 0x6f:
                uVar25 = 3;
                uVar33 = uVar33 | 0x400;
                break;
              case 0x70:
                uVar25 = 2;
                break;
              case 0x73:
switchD_001cd598_caseD_73:
                *(undefined4 *)(alStack_1478 + uVar18 * 4 + 0x80) = 1;
                goto LAB_001cd6b8;
              case 0x75:
                uVar25 = 3;
                uVar33 = uVar33 | 0x200;
                break;
              case 0x78:
                *(undefined4 *)(alStack_1478 + uVar18 * 4 + 0x80) = 3;
                uVar21 = 0xa00;
                goto LAB_001cd6b4;
              default:
                if (bVar14 == 0x58) {
                  *(undefined4 *)(alStack_1478 + uVar18 * 4 + 0x80) = 3;
                  uVar21 = 0x1a00;
                  goto LAB_001cd6b4;
                }
                goto switchD_001cd598_caseD_68;
              }
              *(undefined4 *)(alStack_1478 + uVar18 * 4 + 0x80) = uVar25;
LAB_001cd6b8:
              lVar19 = uVar18 * 0x20;
              *(uint *)(local_1074 + lVar19) = uVar33;
              *(long *)(local_1070 + lVar19) = lVar38;
              *(long *)(local_1070 + lVar19 + 8) = local_15f0;
              if ((uVar33 >> 0xe & 1) != 0) {
                lVar38 = lVar38 + -1;
                *(long *)(local_1070 + lVar19) = lVar38;
                lVar10 = lVar38 * 0x20;
                *(undefined4 *)(alStack_1478 + lVar38 * 4 + 0x80) = 9;
                *(undefined8 *)(local_1074 + lVar10) = 0;
                *(undefined8 *)(local_1070 + lVar10 + 4) = 0;
                *(undefined4 *)((long)adStack_1060 + lVar10 + -4) = 0;
              }
              if ((uVar33 >> 0x10 & 1) != 0) {
                local_15f0 = local_15f0 + -1;
                *(long *)(local_1070 + lVar19 + 8) = local_15f0;
                lVar19 = local_15f0 * 0x20;
                *(undefined4 *)(alStack_1478 + local_15f0 * 4 + 0x80) = 9;
                *(undefined8 *)(local_1074 + lVar19) = 0;
                *(undefined8 *)(local_1070 + lVar19 + 4) = 0;
                *(undefined4 *)((long)adStack_1060 + lVar19 + -4) = 0;
              }
              plVar27 = plVar26 + 1;
              *plVar26 = (long)(local_15e0 + 1);
              goto LAB_001cd72c;
            }
            pbVar22 = local_15e0 + 1;
            if (0x4b < bVar14) {
              if (0x6b < bVar14) {
                if (bVar14 == 0x6c) {
                  if ((uVar33 >> 5 & 1) != 0) goto LAB_001cd508;
                }
                else {
                  if (bVar14 == 0x71) {
LAB_001cd508:
                    uVar33 = uVar33 | 0x40;
                    goto switchD_001cd3d8_caseD_1;
                  }
                  if (bVar14 != 0x7a) goto switchD_001cd3d8_caseD_1;
                }
LAB_001cd500:
                uVar33 = uVar33 | 0x20;
                goto switchD_001cd3d8_caseD_1;
              }
              if (bVar14 == 0x4c) {
                uVar33 = uVar33 | 0x80;
              }
              else {
                if (bVar14 == 0x4f) goto LAB_001cd500;
                if (bVar14 == 0x68) {
                  uVar33 = uVar33 | 0x10;
                }
              }
              goto switchD_001cd3d8_caseD_1;
            }
            switch((ulong)uVar21) {
            case 0:
              uVar33 = uVar33 | 1;
            default:
              goto switchD_001cd3d8_caseD_1;
            case 3:
              uVar33 = uVar33 | 8;
              goto switchD_001cd3d8_caseD_1;
            case 10:
              uVar33 = uVar33 | 0x4000;
              iVar6 = iVar6 + 1;
              local_15e0 = pbVar22;
              lVar10 = FUN_001ce684(pbVar22,&local_15e0);
              lVar38 = (long)iVar6;
              if (lVar10 != 0) {
                lVar38 = lVar10;
              }
              lVar10 = lVar38;
              if (lVar38 <= lVar41) {
                lVar10 = lVar41;
              }
              lVar41 = lVar10;
              pbVar22 = local_15e0;
              goto switchD_001cd3d8_caseD_1;
            case 0xb:
              uVar33 = uVar33 | 2;
              goto switchD_001cd3d8_caseD_1;
            case 0xd:
              uVar33 = uVar33 & 0xfffffeff | 4;
              goto switchD_001cd3d8_caseD_1;
            case 0xe:
              if (*pbVar22 != 0x2a) {
                uVar33 = uVar33 | 0x8000;
                local_15e0 = pbVar22;
                local_15f0 = strtol((char *)pbVar22,(char **)&local_15e0,10);
                pbVar22 = local_15e0;
                goto switchD_001cd3d8_caseD_1;
              }
              local_15e0 = local_15e0 + 2;
              uVar33 = uVar33 | 0x10000;
              iVar6 = iVar6 + 1;
              lVar10 = FUN_001ce684(local_15e0,&local_15e0);
              lVar17 = (long)iVar6;
              if (lVar10 != 0) {
                lVar17 = lVar10;
              }
              bVar4 = SBORROW8(lVar17,lVar41);
              lVar10 = lVar17 - lVar41;
              bVar5 = lVar17 == lVar41;
              local_15f0 = lVar17;
              break;
            case 0x10:
              uVar33 = (uVar33 << 6 ^ 0xffffffff) & 0x100 | uVar33;
            case 0x11:
            case 0x12:
            case 0x13:
            case 0x14:
            case 0x15:
            case 0x16:
            case 0x17:
            case 0x18:
            case 0x19:
              uVar33 = uVar33 | 0x2000;
              local_15e0 = pbVar22;
              lVar38 = strtol((char *)__nptr,(char **)&local_15e0,10);
              pbVar22 = local_15e0;
              goto switchD_001cd3d8_caseD_1;
            }
          } while( true );
        }
        bVar14 = *pbVar22;
        local_15e0 = pbVar22;
        if (bVar14 == 0) goto LAB_001cd734;
      }
LAB_001cd72c:
      bVar14 = *local_15e0;
      plVar26 = plVar27;
    } while (bVar14 != 0);
LAB_001cd734:
    if (0 < lVar41) {
      pdVar28 = adStack_1060;
      do {
        uVar33 = *(uint *)((long)pdVar28 + -0x14);
        pdVar30 = pdVar23;
        if ((uVar33 >> 0xe & 1) != 0) {
          if (iVar9 < 0) {
            iVar6 = iVar9 + 8;
            if (-8 < iVar9) goto LAB_001cd784;
            pdVar23 = (double *)(lVar39 + iVar9);
            iVar9 = iVar6;
          }
          else {
            iVar6 = iVar9;
LAB_001cd784:
            pdVar30 = pdVar23 + 1;
            iVar9 = iVar6;
          }
          adStack_1060[(long)pdVar28[-2] * 4] = (double)(long)(int)*(uint *)pdVar23;
        }
        pdVar31 = pdVar30;
        if ((uVar33 >> 0x10 & 1) != 0) {
          if (iVar9 < 0) {
            iVar6 = iVar9 + 8;
            if (-8 < iVar9) goto LAB_001cd7c8;
            pdVar30 = (double *)(lVar39 + iVar9);
            iVar9 = iVar6;
          }
          else {
            iVar6 = iVar9;
LAB_001cd7c8:
            pdVar31 = pdVar30 + 1;
            iVar9 = iVar6;
          }
          adStack_1060[(long)pdVar28[-1] * 4] = (double)(long)(int)*(uint *)pdVar30;
        }
        pdVar23 = pdVar31;
        switch(*(undefined4 *)(pdVar28 + -3)) {
        case 0:
        case 1:
        case 2:
        case 4:
switchD_001cd7fc_caseD_0:
          if (iVar9 < 0) {
            iVar6 = iVar9 + 8;
            if (-8 < iVar9) goto LAB_001cd824;
            pdVar31 = (double *)(lVar39 + iVar9);
          }
          else {
            iVar6 = iVar9;
LAB_001cd824:
            pdVar23 = pdVar31 + 1;
          }
          dVar42 = *pdVar31;
          iVar9 = iVar6;
          goto LAB_001cd82c;
        case 3:
          if ((((((uVar33 ^ 0xffffffff) & 0x240) == 0) || ((uVar33 >> 6 & 1) != 0)) ||
              (((uVar33 ^ 0xffffffff) & 0x220) == 0)) || ((uVar33 >> 5 & 1) != 0))
          goto switchD_001cd7fc_caseD_0;
          if ((uVar33 >> 9 & 1) == 0) {
            if (iVar9 < 0) {
              iVar6 = iVar9 + 8;
              if (-8 < iVar9) goto LAB_001cd8d4;
              pdVar31 = (double *)(lVar39 + iVar9);
              iVar9 = iVar6;
            }
            else {
              iVar6 = iVar9;
LAB_001cd8d4:
              pdVar23 = pdVar31 + 1;
              iVar9 = iVar6;
            }
            dVar42 = (double)(long)(int)*(uint *)pdVar31;
          }
          else {
            if (iVar9 < 0) {
              iVar6 = iVar9 + 8;
              if (-8 < iVar9) goto LAB_001cd8f8;
              pdVar31 = (double *)(lVar39 + iVar9);
              iVar9 = iVar6;
            }
            else {
              iVar6 = iVar9;
LAB_001cd8f8:
              pdVar23 = pdVar31 + 1;
              iVar9 = iVar6;
            }
            dVar42 = (double)(ulong)*(uint *)pdVar31;
          }
LAB_001cd82c:
          *pdVar28 = dVar42;
          break;
        case 7:
          if (iVar8 < 0) {
            iVar6 = iVar8 + 0x10;
            if (-0x10 < iVar8) goto LAB_001cd89c;
            pdVar31 = (double *)(lVar13 + iVar8);
            iVar8 = iVar6;
          }
          else {
            iVar6 = iVar8;
LAB_001cd89c:
            pdVar23 = pdVar31 + 1;
            iVar8 = iVar6;
          }
          *pdVar28 = *pdVar31;
          break;
        case 9:
          *(undefined4 *)(pdVar28 + -3) = 3;
        }
        pdVar28 = pdVar28 + 4;
        lVar41 = lVar41 + -1;
      } while (lVar41 != 0);
    }
  }
  lVar39 = 0;
  iVar8 = 0;
  iVar9 = 0;
  pcVar1 = local_147d + 1;
  pcVar43 = "0123456789abcdefghijklmnopqrstuvwxyz";
  plVar26 = alStack_1478;
  local_68 = param_3;
  do {
    pbVar22 = local_68;
    iVar6 = iVar9;
    while( true ) {
      while( true ) {
        iVar9 = iVar6;
        if (*pbVar22 == 0x25) break;
        if (*pbVar22 == 0) {
          return iVar9;
        }
        bVar14 = *pbVar22;
        do {
          iVar6 = (*param_2)(bVar14,param_1);
          if (iVar6 == -1) {
            return iVar8;
          }
          pbVar22 = pbVar22 + 1;
          bVar14 = *pbVar22;
          iVar9 = iVar9 + 1;
          iVar8 = iVar9;
        } while ((bVar14 != 0) && (bVar14 != 0x25));
        iVar6 = iVar9;
        local_68 = pbVar22;
      }
      local_68 = pbVar22 + 1;
      if (pbVar22[1] != 0x25) break;
      pbVar22 = pbVar22 + 2;
      local_68 = pbVar22;
      iVar7 = (*param_2)(0x25,param_1);
      iVar8 = iVar9 + 1;
      iVar6 = iVar8;
      if (iVar7 == -1) {
        return iVar9;
      }
    }
    lVar41 = FUN_001ce684(local_68,&local_68);
    lVar13 = lVar39;
    if (lVar41 != 0) {
      lVar13 = lVar41 + -1;
    }
    lVar41 = lVar13 * 0x20;
    uVar33 = *(uint *)(local_1074 + lVar41);
    dVar42 = *(double *)(local_1070 + lVar41);
    puVar29 = (uint *)((ulong)(alStack_1478 + lVar13 * 4 + 0x80) | 4);
    if ((uVar33 >> 0xe & 1) == 0) {
      lVar39 = lVar39 + 1;
      dVar32 = dVar42;
    }
    else {
      dVar32 = adStack_1060[(long)dVar42 * 4];
      lVar39 = lVar39 + 2;
      if ((long)dVar32 < 0) {
        uVar33 = uVar33 & 0xfffffeff | 4;
        dVar32 = (double)-(long)dVar32;
        *puVar29 = uVar33;
      }
    }
    if ((uVar33 >> 0x10 & 1) == 0) {
      if ((uVar33 >> 0xf & 1) == 0) {
        dVar35 = -NAN;
      }
      else {
        dVar35 = *(double *)(local_1070 + lVar41 + 8);
      }
    }
    else {
      dVar35 = adStack_1060[*(long *)(local_1070 + lVar41 + 8) * 4];
      lVar39 = lVar39 + 1;
      if ((long)dVar35 < 0) {
        dVar35 = -NAN;
      }
    }
    iVar6 = SUB84(dVar32,0);
    switch((int)alStack_1478[lVar13 * 4 + 0x80]) {
    case 1:
      pcVar40 = (char *)adStack_1060[lVar13 * 4];
      if (pcVar40 == (char *)0x0) {
        if ((dVar35 == -NAN) || (4 < (long)dVar35)) {
          uVar33 = uVar33 & 0xfffffff7;
          dVar42 = 2.47032822920623e-323;
          *puVar29 = uVar33;
          pcVar40 = "(nil)";
        }
        else {
          dVar42 = 0.0;
          pcVar40 = "";
        }
LAB_001cdfc0:
        dVar35 = dVar42;
      }
      else {
        if (dVar35 == -NAN) {
          dVar35 = (double)strlen(pcVar40);
        }
        dVar42 = dVar35;
        if ((ulong)dVar35 < 0x7fffffffffffffff) goto LAB_001cdfc0;
        dVar42 = NAN;
      }
      if ((uVar33 >> 3 & 1) != 0) {
        iVar8 = (*param_2)(0x22,param_1);
        if (iVar8 == -1) {
          return iVar9;
        }
        iVar9 = iVar9 + 1;
        uVar33 = *puVar29;
        iVar8 = iVar9;
      }
      lVar41 = (long)dVar32 - (long)dVar42;
      lVar13 = lVar41;
      if (((uVar33 >> 2 & 1) == 0) && (lVar13 = lVar41 + -1, 0 < lVar41)) {
        iVar8 = (iVar9 + iVar6) - SUB84(dVar42,0);
        do {
          iVar6 = (*param_2)(0x20,param_1);
          if (iVar6 == -1) {
            return iVar9;
          }
          lVar41 = lVar41 + -1;
          iVar9 = iVar9 + 1;
        } while (0 < lVar41);
        lVar13 = -1;
        iVar9 = iVar8;
      }
      if (dVar35 != 0.0) {
        iVar7 = iVar9 + SUB84(dVar35,0);
        iVar6 = iVar9;
        iVar34 = iVar8;
        do {
          iVar9 = iVar6;
          iVar8 = iVar34;
          if (*pcVar40 == '\0') break;
          iVar9 = (*param_2)(*pcVar40,param_1);
          if (iVar9 == -1) {
            return iVar6;
          }
          pcVar40 = pcVar40 + 1;
          iVar6 = iVar6 + 1;
          dVar35 = (double)((long)dVar35 + -1);
          iVar9 = iVar7;
          iVar8 = iVar7;
          iVar34 = iVar6;
        } while (dVar35 != 0.0);
      }
      uVar33 = *puVar29;
      if (((uVar33 >> 2 & 1) != 0) && (0 < lVar13)) {
        lVar13 = lVar13 + 1;
        do {
          iVar8 = (*param_2)(0x20,param_1);
          if (iVar8 == -1) {
            return iVar9;
          }
          lVar13 = lVar13 + -1;
          iVar9 = iVar9 + 1;
        } while (1 < lVar13);
        uVar33 = *puVar29;
        iVar8 = iVar9;
      }
      if ((uVar33 >> 3 & 1) != 0) {
        iVar8 = (*param_2)(0x22,param_1);
        if (iVar8 == -1) {
          return iVar9;
        }
        iVar9 = iVar9 + 1;
        iVar8 = iVar9;
      }
      break;
    case 2:
      dVar42 = adStack_1060[lVar13 * 4];
      if (dVar42 == 0.0) {
        lVar41 = (long)dVar32 + -5;
        lVar13 = lVar41;
        if (((uVar33 >> 2 & 1) != 0) && (lVar13 = (long)dVar32 + -6, 5 < (long)dVar32)) {
          iVar6 = iVar9 + iVar6;
          do {
            iVar8 = (*param_2)(0x20,param_1);
            if (iVar8 == -1) {
              return iVar9;
            }
            lVar41 = lVar41 + -1;
            iVar9 = iVar9 + 1;
          } while (0 < lVar41);
          lVar13 = -1;
          iVar9 = iVar6 + -5;
        }
        iVar8 = iVar9 + 5;
        uVar20 = 0x28;
        lVar41 = 0;
        do {
          iVar6 = (*param_2)(uVar20,param_1);
          if (iVar6 == -1) {
            return iVar9 + (int)lVar41;
          }
          lVar19 = lVar41 + 1;
          uVar20 = (&DAT_03c46c54)[lVar41];
          lVar41 = lVar19;
        } while (lVar19 != 5);
        iVar9 = iVar8;
        if ((((byte)*puVar29 >> 2 & 1) == 0) && (0 < lVar13)) {
          lVar13 = lVar13 + 1;
          do {
            iVar9 = (*param_2)(0x20,param_1);
            if (iVar9 == -1) {
              return iVar8;
            }
            lVar13 = lVar13 + -1;
            iVar8 = iVar8 + 1;
            iVar9 = iVar8;
          } while (1 < lVar13);
        }
        iVar8 = iVar9;
      }
      else {
        uVar16 = 0;
        bVar14 = 0;
        pcVar43 = "0123456789abcdefghijklmnopqrstuvwxyz";
        if ((uVar33 & 0x1000) != 0) {
          pcVar43 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        }
        uVar21 = 1;
        bVar5 = true;
        dVar24 = 7.90505033345994e-323;
LAB_001cde30:
        if (dVar35 == -NAN) {
          dVar35 = 4.94065645841247e-324;
        }
        lVar13 = 0;
        if (dVar42 == 0.0) {
          pcVar40 = pcVar1;
        }
        else {
          do {
            dVar3 = 0.0;
            if (dVar24 != 0.0) {
              dVar3 = (double)((ulong)dVar42 / (ulong)dVar24);
            }
            pcVar1[lVar13] = pcVar43[(long)dVar42 - (long)dVar3 * (long)dVar24];
            lVar13 = lVar13 + -1;
            bVar4 = (ulong)dVar24 <= (ulong)dVar42;
            dVar42 = dVar3;
          } while (bVar4);
          pcVar40 = pcVar1 + lVar13;
        }
        lVar41 = lVar13 + (long)dVar32;
        lVar19 = lVar13 + (long)dVar35;
        if (((bool)(uVar21 == 0 | bVar14 ^ 1)) || (0 < lVar19)) {
          if (0 < lVar19) {
            memset(local_147d + (2 - (long)dVar35),0x30,(long)dVar35 + lVar13);
            do {
              lVar13 = lVar13 + -1;
            } while (1 < (long)dVar35 + 1 + lVar13);
            lVar41 = lVar41 - lVar19;
          }
        }
        else {
          lVar13 = lVar13 + -1;
          *pcVar40 = '0';
          lVar41 = lVar41 + -1;
        }
        bVar5 = (bool)(uVar21 != 0 & bVar5);
        lVar19 = lVar41 + -2;
        if (!bVar5) {
          lVar19 = lVar41;
        }
        bVar4 = uVar16 != 0 || (uVar33 & 3) != 0;
        lVar10 = lVar19 - (ulong)bVar4;
        lVar41 = lVar10;
        if (((uVar33 & 0x104) == 0) && (lVar41 = lVar10 + -1, 0 < lVar10)) {
          iVar8 = iVar9 + (int)lVar10;
          lVar19 = lVar19 - (ulong)bVar4;
          do {
            iVar6 = (*param_2)(0x20,param_1);
            if (iVar6 == -1) {
              return iVar9;
            }
            lVar19 = lVar19 + -1;
            iVar9 = iVar9 + 1;
          } while (0 < lVar19);
          lVar41 = -1;
          iVar9 = iVar8;
        }
        if (uVar16 == 0) {
          if ((*puVar29 >> 1 & 1) != 0) {
            uVar12 = 0x2b;
            goto LAB_001ce04c;
          }
          if ((*puVar29 & 1) != 0) {
            uVar12 = 0x20;
            goto LAB_001ce04c;
          }
        }
        else {
          uVar12 = 0x2d;
LAB_001ce04c:
          iVar8 = (*param_2)(uVar12,param_1);
          if (iVar8 == -1) {
            return iVar9;
          }
          iVar9 = iVar9 + 1;
          iVar8 = iVar9;
        }
        if (bVar5) {
          iVar8 = (*param_2)(0x30,param_1);
          if (iVar8 == -1) {
            return iVar9;
          }
          if ((*(byte *)((long)puVar29 + 1) >> 4 & 1) == 0) {
            uVar12 = 0x78;
          }
          else {
            uVar12 = 0x58;
          }
          iVar8 = (*param_2)(uVar12,param_1);
          if (iVar8 == -1) {
            return iVar9 + 1;
          }
          iVar9 = iVar9 + 2;
          iVar8 = iVar9;
        }
        lVar19 = lVar41;
        if (((*puVar29 & 0x104) == 0x100) && (lVar19 = lVar41 + -1, 0 < lVar41)) {
          iVar8 = iVar9 + (int)lVar41;
          do {
            iVar6 = (*param_2)(0x30,param_1);
            if (iVar6 == -1) {
              return iVar9;
            }
            lVar41 = lVar41 + -1;
            iVar9 = iVar9 + 1;
          } while (0 < lVar41);
          lVar19 = -1;
          iVar9 = iVar8;
        }
        if (lVar13 < 0) {
          do {
            iVar8 = (*param_2)(local_147d[lVar13 + 2],param_1);
            if (iVar8 == -1) {
              return iVar9;
            }
            lVar13 = lVar13 + 1;
            iVar9 = iVar9 + 1;
            iVar8 = iVar9;
          } while (lVar13 != 0);
        }
        if ((((byte)*puVar29 >> 2 & 1) != 0) && (0 < lVar19)) {
          lVar19 = lVar19 + 1;
          do {
            iVar8 = (*param_2)(0x20,param_1);
            if (iVar8 == -1) {
              return iVar9;
            }
            lVar19 = lVar19 + -1;
            iVar9 = iVar9 + 1;
            iVar8 = iVar9;
          } while (1 < lVar19);
        }
      }
      break;
    case 3:
      dVar42 = adStack_1060[lVar13 * 4];
      if ((uVar33 >> 0x11 & 1) == 0) {
        uVar21 = uVar33 >> 3 & 1;
        if ((uVar33 >> 10 & 1) == 0) {
          dVar24 = (double)-(long)dVar42;
          if (-1 < (long)dVar42) {
            dVar24 = dVar42;
          }
          uVar16 = 0;
          dVar3 = dVar42;
          if ((uVar33 & 0x200) == 0) {
            uVar16 = (uint)((ulong)dVar42 >> 0x3f);
            dVar3 = dVar24;
          }
          pcVar40 = "0123456789abcdefghijklmnopqrstuvwxyz";
          if ((uVar33 & 0x1000) != 0) {
            pcVar40 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
          }
          bVar5 = (uVar33 & 0x800) != 0;
          if (bVar5) {
            uVar16 = 0;
          }
          bVar14 = 0;
          dVar24 = 4.94065645841247e-323;
          if (bVar5) {
            dVar24 = 7.90505033345994e-323;
            dVar3 = dVar42;
          }
          if ((uVar33 & 0x800) != 0) {
            pcVar43 = pcVar40;
          }
          dVar42 = dVar3;
        }
        else {
          uVar16 = 0;
          bVar5 = false;
          bVar14 = 1;
          dVar24 = 3.95252516672997e-323;
        }
        goto LAB_001cde30;
      }
      if ((uVar33 >> 2 & 1) == 0) {
        if ((long)dVar32 < 2) {
          dVar32 = (double)((long)dVar32 + -1);
        }
        else {
          iVar6 = iVar9 + iVar6;
          do {
            iVar8 = (*param_2)(0x20,param_1);
            if (iVar8 == -1) {
              return iVar9;
            }
            dVar32 = (double)((long)dVar32 + -1);
            iVar9 = iVar9 + 1;
          } while (1 < (long)dVar32);
          dVar32 = 0.0;
          iVar9 = iVar6 + -1;
        }
      }
      iVar8 = (*param_2)(SUB84(dVar42,0) & 0xff,param_1);
      if (iVar8 == -1) {
        return iVar9;
      }
      iVar9 = iVar9 + 1;
      iVar8 = iVar9;
      if ((((byte)*puVar29 >> 2 & 1) != 0) && (1 < (long)dVar32)) {
        lVar13 = (long)dVar32 + 1;
        do {
          iVar8 = (*param_2)(0x20,param_1);
          if (iVar8 == -1) {
            return iVar9;
          }
          lVar13 = lVar13 + -1;
          iVar9 = iVar9 + 1;
          iVar8 = iVar9;
        } while (2 < lVar13);
      }
      break;
    case 4:
      if (((uVar33 >> 6 & 1) == 0) && ((uVar33 >> 5 & 1) == 0)) {
        if ((uVar33 >> 4 & 1) == 0) {
          *(int *)adStack_1060[lVar13 * 4] = iVar9;
        }
        else {
          *(short *)adStack_1060[lVar13 * 4] = (short)iVar9;
        }
      }
      else {
        *(long *)adStack_1060[lVar13 * 4] = (long)iVar9;
      }
      break;
    case 7:
      local_15d0 = 0;
      uStack_15c8 = 0;
      local_15e0 = (byte *)0x25;
      uStack_15d8 = 0;
      sVar11 = strlen((char *)&local_15e0);
      dVar32 = dVar42;
      if (((uVar33 >> 0xd & 1) == 0) && (dVar32 = -NAN, (uVar33 >> 0xe & 1) != 0)) {
        dVar32 = adStack_1060[(long)dVar42 * 4];
      }
      if ((uVar33 >> 0xf & 1) == 0) {
        dVar42 = -NAN;
        if ((uVar33 >> 0x10 & 1) != 0) {
          pdVar23 = adStack_1060 + *(long *)(local_1070 + lVar41 + 8) * 4;
          goto LAB_001cdc5c;
        }
      }
      else {
        pdVar23 = (double *)(local_1070 + lVar41 + 8);
LAB_001cdc5c:
        dVar42 = *pdVar23;
      }
      puVar37 = (undefined1 *)((ulong)&local_15e0 | 1);
      if ((uVar33 >> 2 & 1) != 0) {
        local_15e0._0_2_ = CONCAT11(0x2d,(char)local_15e0);
        puVar37 = (undefined1 *)((ulong)&local_15e0 | 2);
      }
      if ((uVar33 >> 1 & 1) != 0) {
        *puVar37 = 0x2b;
        puVar37 = puVar37 + 1;
      }
      puVar36 = puVar37;
      if ((uVar33 & 1) != 0) {
        uVar33 = *puVar29;
        puVar36 = puVar37 + 1;
        *puVar37 = 0x20;
      }
      lVar41 = 0x20 - sVar11;
      puVar37 = puVar36;
      if ((uVar33 >> 3 & 1) != 0) {
        puVar37 = puVar36 + 1;
        *puVar36 = 0x23;
      }
      *puVar37 = 0;
      if (-1 < (long)dVar32) {
        if (0x144 < (long)dVar32) {
          dVar32 = 1.60571334898405e-321;
        }
        iVar6 = FUN_001ce394(puVar37,lVar41,&DAT_03be62d5,dVar32);
        puVar37 = puVar37 + iVar6;
        lVar41 = lVar41 - iVar6;
      }
      if (-1 < (long)dVar42) {
        lVar19 = 0x144;
        for (dVar32 = adStack_1060[lVar13 * 4]; 10.0 <= dVar32; dVar32 = dVar32 / 10.0) {
          lVar19 = lVar19 + -1;
        }
        dVar32 = (double)(lVar19 + -1);
        if ((long)dVar42 <= lVar19) {
          dVar32 = dVar42;
        }
        iVar6 = FUN_001ce394(puVar37,lVar41,&DAT_03c5aab9,dVar32);
        puVar37 = puVar37 + iVar6;
      }
      uVar33 = *puVar29;
      puVar36 = puVar37;
      if ((uVar33 >> 5 & 1) != 0) {
        puVar36 = puVar37 + 1;
        *puVar37 = 0x6c;
        uVar33 = *puVar29;
      }
      if ((uVar33 >> 0x12 & 1) == 0) {
        uVar20 = 0x66;
        if ((uVar33 >> 0x13 & 1) != 0) {
          uVar15 = 0x47;
          uVar20 = 0x67;
          goto LAB_001cdd6c;
        }
      }
      else {
        uVar15 = 0x45;
        uVar20 = 0x65;
LAB_001cdd6c:
        if ((uVar33 & 0x1000) != 0) {
          uVar20 = uVar15;
        }
      }
      dVar42 = adStack_1060[lVar13 * 4];
      *puVar36 = uVar20;
      puVar36[1] = 0;
      sprintf(local_15c0,(char *)&local_15e0,dVar42);
      if (local_15c0[0] != '\0') {
        pcVar40 = (char *)((ulong)local_15c0 | 1);
        cVar2 = local_15c0[0];
        do {
          iVar8 = (*param_2)(cVar2,param_1);
          if (iVar8 == -1) {
            return iVar9;
          }
          cVar2 = *pcVar40;
          iVar9 = iVar9 + 1;
          pcVar40 = pcVar40 + 1;
          iVar8 = iVar9;
        } while (cVar2 != '\0');
      }
    }
    local_68 = (byte *)*plVar26;
    plVar26 = plVar26 + 1;
  } while( true );
switchD_001cd598_caseD_68:
  *(undefined4 *)(alStack_1478 + uVar18 * 4 + 0x80) = 0;
  goto LAB_001cd6b8;
}


