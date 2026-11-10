/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001e315c; name: FUN_001e315c
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_001e315c(long *param_1,undefined4 param_2,char *param_3,uint param_4)

{
  size_t sVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  void *__src;
  char *pcVar5;
  ulong uVar6;
  size_t sVar7;
  size_t sVar8;
  char *pcVar9;
  char cVar10;
  long lVar11;
  char cVar12;
  long lVar13;
  uint uVar14;
  char *pcVar15;
  char *pcVar16;
  long *plVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  char *pcVar21;
  char *pcVar22;
  char *local_68;
  
  if (param_1 == (long *)0x0) {
    return 1;
  }
  if (param_3 == (char *)0x0) {
    switch(param_2) {
    case 0:
      return 0;
    case 1:
      break;
    case 2:
      param_1 = param_1 + 1;
      break;
    case 3:
      param_1 = param_1 + 2;
      break;
    case 4:
      param_1 = param_1 + 3;
      break;
    case 5:
      param_1 = param_1 + 4;
      break;
    case 6:
      param_1 = param_1 + 5;
      break;
    case 7:
      param_1 = param_1 + 6;
      break;
    case 8:
      param_1 = param_1 + 7;
      break;
    case 9:
      param_1 = param_1 + 8;
      break;
    default:
      goto LAB_001e35e0;
    }
    if (*param_1 == 0) {
      return 0;
    }
    FUN_001ec308();
    *param_1 = 0;
    return 0;
  }
  switch(param_2) {
  case 0:
    uVar6 = FUN_001e2aac(param_3,0,8);
    if (((uVar6 & 1) != 0) || (iVar4 = FUN_001e2d14(param_1,0,&local_68,param_4), iVar4 != 0)) {
      __src = (void *)FUN_001ec338(0x58,1);
      if (__src == (void *)0x0) {
        return 7;
      }
      iVar4 = FUN_001e39e4(param_3,__src,param_4);
      goto joined_r0x001e399c;
    }
    pcVar5 = (char *)FUN_001ec328(local_68);
    if (pcVar5 != (char *)0x0) {
      pcVar9 = strstr(pcVar5,"//");
      cVar10 = *param_3;
      pcVar15 = pcVar5;
      if (pcVar9 != (char *)0x0) {
        pcVar15 = pcVar9 + 2;
      }
      pcVar9 = param_3;
      if (cVar10 == '/') {
        if (param_3[1] != '/') {
          pcVar22 = strchr(pcVar15,0x2f);
          pcVar21 = strchr(pcVar15,0x3f);
          if (pcVar22 == (char *)0x0) {
            if (pcVar21 != (char *)0x0) {
              *pcVar21 = '\0';
            }
          }
          else {
            if ((pcVar21 == (char *)0x0) == pcVar21 < pcVar22) {
              pcVar21 = pcVar22;
            }
            *pcVar21 = '\0';
          }
          goto LAB_001e37d0;
        }
        pcVar9 = param_3 + 2;
        *pcVar15 = '\0';
        pcVar21 = (char *)FUN_001e4178(pcVar9);
        bVar20 = false;
      }
      else {
        pcVar21 = strchr(pcVar15,0x3f);
        if (pcVar21 != (char *)0x0) {
          *pcVar21 = '\0';
          cVar10 = *param_3;
        }
        if ((cVar10 != '?') && (pcVar21 = strrchr(pcVar15,0x2f), pcVar21 != (char *)0x0)) {
          *pcVar21 = '\0';
          cVar10 = *param_3;
        }
        pcVar21 = strchr(pcVar15,0x2f);
        pcVar15 = (char *)0x0;
        if (pcVar21 != (char *)0x0) {
          pcVar15 = pcVar21 + 1;
        }
        if (cVar10 == '.') {
          pcVar9 = param_3 + 2;
          if (param_3[1] != '/') {
            pcVar9 = param_3;
          }
          if (param_3[(ulong)(param_3[1] == '/') * 2] == '.') {
            iVar4 = 0;
            do {
              if ((pcVar9[1] != '.') || (pcVar9[2] != '/')) break;
              pcVar9 = pcVar9 + 3;
              iVar4 = iVar4 + 1;
            } while (*pcVar9 == '.');
          }
          else {
            iVar4 = 0;
          }
        }
        else {
          iVar4 = 0;
        }
        if (pcVar21 == (char *)0x0) {
          pcVar15 = (char *)0x0;
        }
        else if (iVar4 == 0) {
          pcVar15 = pcVar21 + 1;
        }
        else {
          do {
            pcVar21 = strrchr(pcVar15,0x2f);
            if (pcVar21 == (char *)0x0) {
              *pcVar15 = '\0';
              break;
            }
            iVar4 = iVar4 + -1;
            *pcVar21 = '\0';
          } while (iVar4 != 0);
        }
LAB_001e37d0:
        bVar20 = true;
        pcVar21 = pcVar9;
      }
      cVar10 = *pcVar9;
      if (cVar10 == '\0') {
        lVar13 = 0;
      }
      else {
        lVar13 = 0;
        bVar3 = true;
        pcVar22 = pcVar9;
        do {
          if (pcVar22 < pcVar21) {
LAB_001e37f4:
            lVar13 = lVar13 + 1;
          }
          else if (cVar10 == ' ') {
            if (!bVar3) {
              bVar3 = false;
              goto LAB_001e37f4;
            }
            lVar13 = lVar13 + 3;
            bVar3 = true;
          }
          else {
            if (cVar10 == '?') {
              bVar3 = false;
            }
            uVar6 = FUN_001e4204();
            lVar11 = lVar13 + 2;
            if ((uVar6 & 1) == 0) {
              lVar11 = lVar13;
            }
            lVar13 = lVar11 + 1;
          }
          pcVar22 = pcVar22 + 1;
          cVar10 = *pcVar22;
        } while (cVar10 != '\0');
      }
      sVar7 = strlen(pcVar5);
      pcVar21 = (char *)FUN_001ec2f8(lVar13 + sVar7 + 1 + 1);
      if (pcVar21 == (char *)0x0) {
        FUN_001ec308(pcVar5);
      }
      else {
        memcpy(pcVar21,pcVar5,sVar7);
        cVar10 = *pcVar9;
        if (cVar10 != '/') {
          if (pcVar15 == (char *)0x0) {
            if (cVar10 != '?') goto LAB_001e389c;
          }
          else if ((cVar10 != '?') && (*pcVar15 != '\0')) {
LAB_001e389c:
            pcVar21[sVar7] = '/';
            sVar7 = sVar7 + 1;
          }
        }
        pcVar15 = pcVar21 + sVar7;
        pcVar22 = pcVar9;
        if (!bVar20) {
          pcVar22 = (char *)FUN_001e4178(pcVar9);
        }
        cVar10 = *pcVar9;
        if (cVar10 != '\0') {
          bVar20 = true;
          pcVar16 = pcVar15;
          do {
            if (pcVar9 < pcVar22) {
              pcVar15 = pcVar16 + 1;
              *pcVar16 = cVar10;
            }
            else if (cVar10 == ' ') {
              if (bVar20) {
                pcVar16[0] = '%';
                pcVar16[1] = '2';
                pcVar16[2] = '0';
                pcVar15 = pcVar16 + 3;
                bVar20 = true;
              }
              else {
                bVar20 = false;
                pcVar15 = pcVar16 + 1;
                *pcVar16 = '+';
              }
            }
            else {
              if (cVar10 == '?') {
                bVar20 = false;
              }
              uVar6 = FUN_001e4204();
              if ((uVar6 & 1) == 0) {
                pcVar15 = pcVar16 + 1;
                *pcVar16 = *pcVar9;
              }
              else {
                FUN_001ce394(pcVar16,4,"%%%02x");
                pcVar15 = pcVar16 + 3;
              }
            }
            pcVar9 = pcVar9 + 1;
            cVar10 = *pcVar9;
            pcVar16 = pcVar15;
          } while (cVar10 != '\0');
        }
        *pcVar15 = '\0';
        FUN_001ec308(pcVar5);
        FUN_001ec308(local_68);
        __src = (void *)FUN_001ec338(0x58,1);
        if (__src != (void *)0x0) {
          iVar4 = FUN_001e39e4(pcVar21,__src,param_4);
          FUN_001ec308(pcVar21);
joined_r0x001e399c:
          if (iVar4 == 0) {
            FUN_001e2ba4(param_1);
            memcpy(param_1,__src,0x58);
          }
          else {
            FUN_001e2ba4(__src);
          }
          FUN_001ec308(__src);
          return iVar4;
        }
        local_68 = pcVar21;
      }
    }
    goto LAB_001e3584;
  case 1:
    if (((param_4 >> 3 & 1) == 0) && (lVar13 = FUN_001e5320(param_3), lVar13 == 0)) {
      return 5;
    }
    lVar13 = 0;
    uVar18 = 0;
    plVar17 = param_1;
    goto LAB_001e3314;
  case 2:
    plVar17 = param_1 + 1;
    break;
  case 3:
    plVar17 = param_1 + 2;
    break;
  case 4:
    plVar17 = param_1 + 3;
    break;
  case 5:
    plVar17 = param_1 + 4;
    break;
  case 6:
    lVar13 = strtol(param_3,(char **)0x0,10);
    if (0xfffe < lVar13 - 1U) {
      return 4;
    }
    uVar18 = 0;
    plVar17 = param_1 + 5;
    goto LAB_001e3314;
  case 7:
    plVar17 = param_1 + 6;
    if ((param_4 >> 7 & 1) == 0) goto LAB_001e3310;
    bVar2 = 0;
    goto LAB_001e33a4;
  case 8:
    uVar18 = param_4 >> 8 & 1;
    plVar17 = param_1 + 7;
    if ((param_4 >> 7 & 1) == 0) {
      lVar13 = 0;
      goto LAB_001e3314;
    }
    uVar14 = 1;
    bVar2 = 1;
    goto LAB_001e33a8;
  case 9:
    plVar17 = param_1 + 8;
    break;
  default:
LAB_001e35e0:
    return 9;
  }
  if ((param_4 >> 7 & 1) == 0) {
LAB_001e3310:
    uVar18 = 0;
    lVar13 = 0;
LAB_001e3314:
    pcVar5 = (char *)FUN_001ec328(param_3);
    if (pcVar5 != (char *)0x0) {
      pcVar15 = pcVar5;
      do {
        if (*pcVar15 == '%') {
          iVar4 = FUN_001cb2d4(pcVar15[1]);
          if (((iVar4 == 0) || (iVar4 = FUN_001cb2d4(pcVar15[2]), iVar4 == 0)) ||
             ((iVar4 = FUN_001cb34c(pcVar15[1]), iVar4 == 0 &&
              (iVar4 = FUN_001cb34c(pcVar15[2]), iVar4 == 0)))) goto LAB_001e338c;
          iVar4 = tolower((uint)(byte)pcVar15[1]);
          pcVar15[1] = (char)iVar4;
          iVar4 = tolower((uint)(byte)pcVar15[2]);
          lVar11 = 3;
          pcVar15[2] = (char)iVar4;
        }
        else {
          if (*pcVar15 == '\0') goto joined_r0x001e34dc;
LAB_001e338c:
          lVar11 = 1;
        }
        pcVar15 = pcVar15 + lVar11;
      } while( true );
    }
  }
  else {
    bVar2 = 1;
LAB_001e33a4:
    uVar18 = 0;
    uVar14 = uVar18;
LAB_001e33a8:
    sVar7 = strlen(param_3);
    pcVar5 = (char *)FUN_001ec2f8(sVar7 * 3 + 1);
    if (pcVar5 != (char *)0x0) {
      if (uVar14 != 0) {
        lVar13 = 0;
        do {
          cVar10 = param_3[lVar13];
          cVar12 = '+';
          if (cVar10 != ' ') {
            if (cVar10 == '\0') goto LAB_001e33fc;
            cVar12 = cVar10;
          }
          pcVar5[lVar13] = cVar12;
          lVar13 = lVar13 + 1;
        } while( true );
      }
      bVar20 = false;
LAB_001e3418:
      pcVar15 = pcVar5;
      if (*param_3 != '\0') {
        uVar19 = uVar18;
        pcVar9 = param_3;
        do {
          pcVar21 = pcVar9 + 1;
          uVar6 = FUN_001e4494();
          cVar10 = *pcVar9;
          if ((uVar6 & 1) == 0) {
            cVar12 = '/';
            if ((bool)(cVar10 == '/' & (bVar2 ^ 1))) goto LAB_001e34a0;
            if ((cVar10 == '=' & uVar19) != 0) goto LAB_001e3444;
            cVar12 = cVar10;
            if (cVar10 == '+' && uVar14 == 1) goto LAB_001e34a0;
            FUN_001ce394(pcVar15,4,"%%%02x");
            lVar13 = 3;
          }
          else {
LAB_001e3444:
            cVar12 = cVar10;
LAB_001e34a0:
            uVar19 = uVar19 & cVar12 != '=';
            *pcVar15 = cVar12;
            lVar13 = 1;
          }
          pcVar15 = pcVar15 + lVar13;
          pcVar9 = pcVar21;
        } while (*pcVar21 != '\0');
      }
      *pcVar15 = '\0';
      if (bVar20) {
        FUN_001ec308(param_3);
      }
      lVar13 = 0;
joined_r0x001e34dc:
      if (((uVar18 == 0) || (pcVar15 = (char *)param_1[7], pcVar15 == (char *)0x0)) ||
         (sVar7 = strlen(pcVar15), sVar7 == 0)) {
        FUN_001ec308(*plVar17);
        *plVar17 = (long)pcVar5;
        if (lVar13 == 0) {
          return 0;
        }
        param_1[10] = lVar13;
        return 0;
      }
      cVar10 = pcVar15[sVar7 - 1];
      sVar8 = strlen(pcVar5);
      sVar1 = sVar7;
      if (cVar10 != '&') {
        sVar1 = sVar7 + 1;
      }
      pcVar15 = (char *)FUN_001ec2f8(sVar8 + sVar1 + 1);
      if (pcVar15 != (char *)0x0) {
        strcpy(pcVar15,(char *)param_1[7]);
        if (cVar10 != '&') {
          pcVar15[sVar7] = '&';
        }
        strcpy(pcVar15 + sVar1,pcVar5);
        FUN_001ec308(pcVar5);
        FUN_001ec308(*plVar17);
        *plVar17 = (long)pcVar15;
        return 0;
      }
LAB_001e3580:
      local_68 = pcVar5;
LAB_001e3584:
      FUN_001ec308(local_68);
    }
  }
  return 7;
LAB_001e33fc:
  pcVar5[lVar13] = '\0';
  param_3 = (char *)FUN_001ec328(pcVar5);
  if (param_3 != (char *)0x0) {
    bVar20 = true;
    goto LAB_001e3418;
  }
  goto LAB_001e3580;
}


