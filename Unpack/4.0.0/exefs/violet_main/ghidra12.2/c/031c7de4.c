/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031c7de4; name: FUN_031c7de4
 */


ulong FUN_031c7de4(char **param_1,char *param_2,char *param_3,int param_4)

{
  undefined *puVar1;
  uint uVar2;
  char *__s;
  byte bVar3;
  long lVar4;
  size_t sVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  char *pcVar18;
  int iVar19;
  char *pcVar20;
  int iVar21;
  uint uVar22;
  ulong uVar23;
  int iVar24;
  char *local_100;
  ulong local_f8;
  char acStack_f0 [128];
  undefined4 local_70;
  
  if (param_2 == (char *)0x0) {
    sVar5 = 0;
    goto LAB_031c8644;
  }
  sVar5 = strlen(param_2);
  iVar17 = (int)sVar5;
  if (iVar17 == 0) goto LAB_031c8644;
  __s = "";
  if (param_3 != (char *)0x0) {
    __s = param_3;
  }
  sVar5 = strlen(__s);
  iVar19 = (int)sVar5;
  if (iVar19 <= iVar17) {
    iVar21 = *(int *)(param_1 + 1);
    pcVar20 = *param_1;
    if (iVar21 < 1) {
LAB_031c8454:
      sVar5 = 0;
      iVar24 = 0;
      uVar23 = 0;
    }
    else {
      if (param_4 == 0) {
        pcVar6 = strstr(pcVar20,param_2);
        if ((pcVar6 == (char *)0x0) || (uVar22 = (int)pcVar6 - (int)pcVar20, uVar22 == 0xffffffff))
        goto LAB_031c8454;
        uVar22 = uVar22 & ((int)uVar22 >> 0x1f ^ 0xffffffffU);
        if (iVar19 < 1) {
          uVar23 = (ulong)uVar22;
        }
        else {
          uVar23 = (ulong)uVar22;
          if ((sVar5 & 0xffffffff) == 1) {
            lVar10 = 0;
          }
          else {
            lVar10 = 0;
            do {
              pcVar20[lVar10 + uVar23 + 1 + -1] = __s[lVar10];
              pcVar20[lVar10 + uVar23 + 1] = (__s + lVar10)[1];
              lVar10 = lVar10 + 2;
            } while ((sVar5 & 0xffffffff) - (sVar5 & 1) != lVar10);
            uVar23 = uVar23 + lVar10;
          }
          if ((sVar5 & 1) != 0) {
            pcVar20[uVar23] = __s[lVar10];
            uVar23 = uVar23 + 1;
          }
          iVar21 = *(int *)(param_1 + 1);
        }
        iVar24 = uVar22 + iVar17;
      }
      else {
        pcVar6 = strstr(pcVar20,param_2);
        if ((pcVar6 == (char *)0x0) || (lVar10 = (long)pcVar6 - (long)pcVar20, (int)lVar10 == -1))
        goto LAB_031c8454;
        uVar11 = sVar5 & 3;
        uVar23 = 0;
        iVar24 = 0;
        while( true ) {
          iVar8 = (int)lVar10;
          if (iVar24 < iVar8) {
            uVar15 = (ulong)iVar24;
            uVar12 = ~uVar15;
            uVar14 = (ulong)(uint)(iVar8 - iVar24) & 3;
            uVar23 = (ulong)(int)uVar23;
            uVar13 = uVar23;
            uVar16 = uVar15;
            if ((iVar8 - iVar24 & 3U) != 0) {
              do {
                uVar15 = uVar16 + 1;
                uVar23 = uVar13 + 1;
                pcVar20[uVar13] = pcVar20[uVar16];
                uVar14 = uVar14 - 1;
                uVar13 = uVar23;
                uVar16 = uVar15;
              } while (uVar14 != 0);
            }
            iVar24 = iVar8;
            if (2 < uVar12 + (long)iVar8) {
              do {
                pcVar6 = pcVar20 + uVar15;
                uVar15 = uVar15 + 4;
                pcVar18 = pcVar20 + uVar23;
                uVar23 = uVar23 + 4;
                *pcVar18 = *pcVar6;
                pcVar18[1] = pcVar6[1];
                pcVar18[2] = pcVar6[2];
                pcVar18[3] = pcVar6[3];
              } while ((long)iVar8 != uVar15);
            }
          }
          if (0 < iVar19) {
            uVar15 = (ulong)(int)uVar23;
            if ((sVar5 & 0xffffffff) - 1 < 3) {
              lVar10 = 0;
            }
            else {
              lVar10 = 0;
              do {
                pcVar6 = __s + lVar10 + 1;
                lVar4 = lVar10 + uVar15 + 1;
                pcVar20[lVar4 + -1] = pcVar6[-1];
                pcVar20[lVar10 + uVar15 + 1] = *pcVar6;
                pcVar20[lVar4 + 1] = pcVar6[1];
                lVar10 = lVar10 + 4;
                pcVar20[lVar4 + 2] = pcVar6[2];
              } while ((sVar5 & 0xffffffff) - uVar11 != lVar10);
              uVar15 = uVar15 + lVar10;
              uVar23 = uVar15;
            }
            if (uVar11 != 0) {
              pcVar6 = __s + lVar10;
              uVar14 = uVar11;
              do {
                uVar23 = uVar15 + 1;
                pcVar20[uVar15] = *pcVar6;
                uVar14 = uVar14 - 1;
                uVar15 = uVar23;
                pcVar6 = pcVar6 + 1;
              } while (uVar14 != 0);
            }
          }
          iVar21 = *(int *)(param_1 + 1);
          iVar24 = iVar24 + iVar17;
          if (iVar21 <= (int)((long)iVar8 + (long)iVar17)) break;
          pcVar18 = *param_1;
          pcVar6 = strstr(pcVar18 + (long)iVar8 + (long)iVar17,param_2);
          if ((pcVar6 == (char *)0x0) || (lVar10 = (long)pcVar6 - (long)pcVar18, (int)lVar10 == -1))
          break;
        }
      }
      sVar5 = 1;
    }
    if (iVar24 < iVar21 + -1) {
      lVar10 = (long)iVar24;
      uVar11 = (long)(int)uVar23;
      do {
        uVar23 = uVar11 + 1;
        pcVar20[uVar11] = pcVar20[lVar10];
        lVar10 = lVar10 + 1;
        uVar11 = uVar23;
      } while (lVar10 < (long)*(int *)(param_1 + 1) + -1);
    }
    iVar21 = (int)uVar23;
    pcVar20[iVar21] = '\0';
    uVar22 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
    iVar19 = uVar22 - 1;
    iVar17 = iVar21;
    if (iVar19 <= iVar21) {
      iVar17 = iVar19;
    }
    if (*(int *)(param_1 + 0x12) != 0) {
      iVar17 = iVar21;
    }
    iVar19 = iVar17 + 1;
    if ((int)uVar22 <= iVar17) {
      FUN_030b4a20(param_1,PTR_PTR_047d1a50 + 0x20,(long)iVar19);
    }
    if (*(int *)(param_1 + 1) <= iVar17 || iVar19 < *(int *)(param_1 + 1)) {
      *(int *)(param_1 + 1) = iVar19;
    }
    (*param_1)[iVar17] = '\0';
    goto LAB_031c8644;
  }
  local_100 = acStack_f0;
  local_f8 = 0x8000008000000000;
  if (&local_100 != param_1) {
    iVar21 = *(int *)(param_1 + 1);
    pcVar20 = *param_1;
    if (0x80 < iVar21) {
      FUN_031ca4ac(&local_100,PTR_PTR_047d1a50 + 0x20,(long)iVar21);
    }
    memcpy(local_100,pcVar20,(long)iVar21);
    local_f8 = CONCAT44(local_f8._4_4_,iVar21);
  }
  local_70 = *(undefined4 *)(param_1 + 0x12);
  if ((*(uint *)((long)param_1 + 0xc) & 0x7fffffff) == 0) {
    FUN_030b4a20(param_1,PTR_PTR_047d1a50 + 0x20,1);
  }
  pcVar20 = local_100;
  if (*(int *)(param_1 + 1) != 1) {
    *(undefined4 *)(param_1 + 1) = 1;
  }
  **param_1 = '\0';
  iVar21 = (int)local_f8;
  if ((int)local_f8 < 1) {
LAB_031c8400:
    uVar22 = 0;
    bVar3 = 0;
    pcVar20 = local_100;
  }
  else {
    pcVar6 = strstr(local_100,param_2);
    if (param_4 == 0) {
      if (pcVar6 != (char *)0x0) {
        iVar24 = (int)pcVar6 - (int)pcVar20;
        if (-1 < iVar24) {
          if (pcVar20 != (char *)0x0) {
            iVar9 = *(int *)(param_1 + 1);
            iVar21 = (int)((long)iVar9 + -1) + iVar24;
            uVar22 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
            iVar7 = uVar22 - 1;
            iVar8 = iVar21;
            if (iVar7 <= iVar21) {
              iVar8 = iVar7;
            }
            if (*(int *)(param_1 + 0x12) != 0) {
              iVar8 = iVar21;
            }
            iVar21 = iVar8 + 1;
            iVar7 = iVar9;
            if ((int)uVar22 <= iVar8) {
              FUN_030b4a20(param_1,PTR_PTR_047d1a50 + 0x20,(long)iVar21);
              iVar7 = *(int *)(param_1 + 1);
            }
            if ((iVar7 <= iVar8) || (iVar21 < iVar7)) {
              *(int *)(param_1 + 1) = iVar21;
            }
            (*param_1)[iVar8] = '\0';
            memmove(*param_1 + (long)iVar9 + -1,pcVar20,(long)(*(int *)(param_1 + 1) - iVar9));
          }
          if (iVar19 < 0) {
            sVar5 = strlen(__s);
            iVar19 = (int)sVar5;
          }
          iVar8 = *(int *)(param_1 + 1);
          iVar19 = (int)((long)iVar8 + -1) + iVar19;
          uVar22 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
          iVar9 = uVar22 - 1;
          iVar21 = iVar19;
          if (iVar9 <= iVar19) {
            iVar21 = iVar9;
          }
          if (*(int *)(param_1 + 0x12) != 0) {
            iVar21 = iVar19;
          }
          iVar19 = iVar21 + 1;
          iVar9 = iVar8;
          if ((int)uVar22 <= iVar21) {
            FUN_030b4a20(param_1,PTR_PTR_047d1a50 + 0x20,(long)iVar19);
            iVar9 = *(int *)(param_1 + 1);
          }
          if ((iVar9 <= iVar21) || (iVar19 < iVar9)) {
            *(int *)(param_1 + 1) = iVar19;
          }
          (*param_1)[iVar21] = '\0';
          memmove(*param_1 + (long)iVar8 + -1,__s,(long)(*(int *)(param_1 + 1) - iVar8));
          uVar23 = (ulong)(uint)(iVar24 + iVar17);
          iVar21 = (int)local_f8;
          goto LAB_031c83f8;
        }
        goto LAB_031c8400;
      }
    }
    else if (pcVar6 != (char *)0x0) {
      iVar24 = (int)pcVar6 - (int)pcVar20;
      if (iVar24 < 0) goto LAB_031c8400;
      puVar1 = PTR_PTR_047d1a50 + 0x20;
      uVar23 = 0;
      while( true ) {
        if (pcVar20 != (char *)0x0) {
          iVar21 = iVar24 - (int)uVar23;
          if (iVar21 < 0) {
            sVar5 = strlen(pcVar20 + uVar23);
            iVar21 = (int)sVar5;
          }
          iVar9 = *(int *)(param_1 + 1);
          iVar21 = (int)((long)iVar9 + -1) + iVar21;
          uVar22 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
          iVar7 = uVar22 - 1;
          iVar8 = iVar21;
          if (iVar7 <= iVar21) {
            iVar8 = iVar7;
          }
          if (*(int *)(param_1 + 0x12) != 0) {
            iVar8 = iVar21;
          }
          iVar21 = iVar8 + 1;
          iVar7 = iVar9;
          if ((int)uVar22 <= iVar8) {
            FUN_030b4a20(param_1,PTR_PTR_047d1a50 + 0x20,(long)iVar21);
            iVar7 = *(int *)(param_1 + 1);
          }
          if (iVar7 <= iVar8 || iVar21 < iVar7) {
            *(int *)(param_1 + 1) = iVar21;
          }
          (*param_1)[iVar8] = '\0';
          memmove(*param_1 + (long)iVar9 + -1,pcVar20 + uVar23,(long)(*(int *)(param_1 + 1) - iVar9)
                 );
        }
        iVar21 = iVar19;
        if (iVar19 < 0) {
          sVar5 = strlen(__s);
          iVar21 = (int)sVar5;
        }
        iVar9 = *(int *)(param_1 + 1);
        iVar21 = (int)((long)iVar9 + -1) + iVar21;
        uVar22 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
        iVar7 = uVar22 - 1;
        iVar8 = iVar21;
        if (iVar7 <= iVar21) {
          iVar8 = iVar7;
        }
        if (*(int *)(param_1 + 0x12) != 0) {
          iVar8 = iVar21;
        }
        iVar21 = iVar8 + 1;
        iVar7 = iVar9;
        if ((int)uVar22 <= iVar8) {
          FUN_030b4a20(param_1,puVar1,(long)iVar21);
          iVar7 = *(int *)(param_1 + 1);
        }
        if (iVar7 <= iVar8 || iVar21 < iVar7) {
          *(int *)(param_1 + 1) = iVar21;
        }
        (*param_1)[iVar8] = '\0';
        memmove(*param_1 + (long)iVar9 + -1,__s,(long)(*(int *)(param_1 + 1) - iVar9));
        pcVar20 = local_100;
        iVar21 = (int)local_f8;
        uVar23 = (long)iVar24 + (long)iVar17;
        if ((int)local_f8 <= (int)uVar23) break;
        pcVar6 = strstr(local_100 + uVar23,param_2);
        if ((pcVar6 == (char *)0x0) || (iVar24 = (int)pcVar6 - (int)pcVar20, iVar24 < 0)) break;
      }
LAB_031c83f8:
      uVar22 = (uint)uVar23;
      bVar3 = 1;
      pcVar20 = local_100;
      goto joined_r0x031c840c;
    }
    uVar22 = 0;
    bVar3 = 0;
  }
joined_r0x031c840c:
  if (pcVar20 != (char *)0x0) {
    iVar21 = iVar21 + ~uVar22;
    if (iVar21 < 0) {
      sVar5 = strlen(pcVar20 + (int)uVar22);
      iVar21 = (int)sVar5;
    }
    iVar19 = *(int *)(param_1 + 1);
    iVar21 = (int)((long)iVar19 + -1) + iVar21;
    uVar2 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
    iVar24 = uVar2 - 1;
    iVar17 = iVar21;
    if (iVar24 <= iVar21) {
      iVar17 = iVar24;
    }
    if (*(int *)(param_1 + 0x12) != 0) {
      iVar17 = iVar21;
    }
    iVar21 = iVar17 + 1;
    iVar24 = iVar19;
    if ((int)uVar2 <= iVar17) {
      FUN_030b4a20(param_1,PTR_PTR_047d1a50 + 0x20,(long)iVar21);
      iVar24 = *(int *)(param_1 + 1);
    }
    if ((iVar24 <= iVar17) || (iVar21 < iVar24)) {
      *(int *)(param_1 + 1) = iVar21;
    }
    (*param_1)[iVar17] = '\0';
    memmove(*param_1 + (long)iVar19 + -1,pcVar20 + (int)uVar22,
            (long)(*(int *)(param_1 + 1) - iVar19));
  }
  uVar23 = local_f8;
  local_f8 = local_f8 & 0xffffffff00000000;
  if ((-1 < (long)uVar23) && (local_100 != (char *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
  }
  sVar5 = (size_t)bVar3;
LAB_031c8644:
  return sVar5 & 0xffffffff;
}


