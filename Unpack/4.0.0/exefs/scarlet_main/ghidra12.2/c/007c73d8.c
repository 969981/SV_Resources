/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007c73d8; name: FUN_007c73d8
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_007c73d8(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  char cVar9;
  ulong uVar10;
  char *pcVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  undefined *local_78;
  undefined *local_70;
  char local_64 [4];
  
  pcVar11 = PTR_DAT_047d1018;
  cVar3 = *PTR_DAT_047d1018;
  *DAT_047fa5c8 = cVar3;
  iVar5 = (**(code **)*param_2)(param_2,local_64,1);
  if (iVar5 != 0) {
    bVar8 = false;
    cVar9 = '\0';
    uVar14 = 0;
    puVar1 = PTR_DAT_047d0878 + 0x10;
    do {
      pcVar7 = DAT_047fa5c8;
      if (cVar9 == '\0') {
LAB_007c74d8:
        cVar9 = local_64[0];
        uVar13 = (uint)uVar14;
        if (bVar8) {
          if (local_64[0] == '\"') {
            if ((int)uVar13 < 2) {
              return;
            }
            uVar10 = (long)(int)uVar13 - 1;
            if ((int)uVar13 <= DAT_047fa5d0) {
              pcVar11 = DAT_047fa5c8 + (uVar10 & 0xffffffff);
            }
            if (*pcVar11 != '\\') {
              return;
            }
            local_70 = &DAT_03c246d6;
            local_78 = puVar1;
            (**(code **)(DAT_047fa5c0 + 0x18))(&DAT_047fa5c0);
            lVar12 = 0;
            do {
              if (DAT_047fa5c8[lVar12] == cVar3) goto LAB_007c7764;
              if (DAT_047fa5c8[lVar12 + 1] == cVar3) {
                lVar12 = lVar12 + 1;
                goto LAB_007c7764;
              }
              if (DAT_047fa5c8[lVar12 + 2] == cVar3) {
                lVar12 = lVar12 + 2;
                goto LAB_007c7764;
              }
              lVar12 = lVar12 + 3;
            } while (lVar12 != 0x80001);
            lVar12 = 0;
LAB_007c7764:
            uVar13 = DAT_047fa5d0 - uVar13;
            if (1 < DAT_047fa5d0 - (int)uVar10) {
              uVar13 = 1;
            }
            if (0 < (int)uVar13) {
              (**(code **)(local_78 + 0x18))(&local_78);
              memcpy(pcVar7 + (int)uVar10,local_70,(ulong)uVar13);
              if ((int)lVar12 < (int)(uVar10 + (long)(int)uVar13)) {
                pcVar7[uVar10 + (long)(int)uVar13] = cVar3;
              }
            }
            bVar8 = true;
            pcVar11 = PTR_DAT_047d1018;
            cVar9 = '\0';
          }
          else {
            (**(code **)(DAT_047fa5c0 + 0x18))(&DAT_047fa5c0);
            lVar12 = 0;
            do {
              if (DAT_047fa5c8[lVar12] == cVar3) {
LAB_007c7714:
                iVar5 = (int)lVar12;
                if (DAT_047fa5d0 + -1 <= iVar5) goto LAB_007c7730;
                goto LAB_007c7724;
              }
              if (DAT_047fa5c8[lVar12 + 1] == cVar3) {
                lVar12 = lVar12 + 1;
                goto LAB_007c7714;
              }
              if (DAT_047fa5c8[lVar12 + 2] == cVar3) {
                iVar5 = (int)lVar12 + 2;
                if (DAT_047fa5d0 + -1 <= iVar5) goto LAB_007c7730;
                goto LAB_007c7724;
              }
              lVar12 = lVar12 + 3;
            } while (lVar12 != 0x80001);
            iVar5 = 0;
            if (0 < DAT_047fa5d0 + -1) {
LAB_007c7724:
              pcVar7 = DAT_047fa5c8 + iVar5;
              *pcVar7 = cVar9;
              pcVar7[1] = cVar3;
            }
LAB_007c7730:
            bVar8 = true;
            uVar14 = (ulong)(uVar13 + 1);
            cVar9 = '\0';
          }
        }
        else if ((uVar13 == 0) && (local_64[0] == '\"')) {
          bVar8 = true;
          uVar14 = 0;
          cVar9 = '\0';
        }
        else {
          (**(code **)(*(long *)(param_1 + 8) + 0x18))(param_1 + 8);
          cVar9 = local_64[0];
          pcVar7 = (char *)(*(long *)(param_1 + 0x10) + 2);
          lVar12 = 0x80001;
          do {
            if (pcVar7[-2] == cVar3) break;
            if (pcVar7[-2] == local_64[0]) goto LAB_007c76f0;
            if (pcVar7[-1] == cVar3) break;
            if (pcVar7[-1] == local_64[0]) goto LAB_007c76f0;
            if (*pcVar7 == cVar3) break;
            if (*pcVar7 == local_64[0]) goto LAB_007c76f0;
            lVar12 = lVar12 + -3;
            pcVar7 = pcVar7 + 3;
          } while (lVar12 != 0);
          if (local_64[0] == '\0') {
LAB_007c76f0:
            if (*DAT_047fa5c8 != cVar3) {
              return;
            }
            bVar8 = false;
            cVar9 = '\0';
          }
          else {
            (**(code **)(DAT_047fa5c0 + 0x18))(&DAT_047fa5c0);
            lVar12 = 0;
            do {
              if (DAT_047fa5c8[lVar12] == cVar3) {
LAB_007c77d8:
                iVar5 = (int)lVar12;
                if (DAT_047fa5d0 + -1 <= iVar5) goto LAB_007c77f4;
                goto LAB_007c77e8;
              }
              if (DAT_047fa5c8[lVar12 + 1] == cVar3) {
                lVar12 = lVar12 + 1;
                goto LAB_007c77d8;
              }
              if (DAT_047fa5c8[lVar12 + 2] == cVar3) {
                iVar5 = (int)lVar12 + 2;
                if (DAT_047fa5d0 + -1 <= iVar5) goto LAB_007c77f4;
                goto LAB_007c77e8;
              }
              lVar12 = lVar12 + 3;
            } while (lVar12 != 0x80001);
            iVar5 = 0;
            if (0 < DAT_047fa5d0 + -1) {
LAB_007c77e8:
              pcVar7 = DAT_047fa5c8 + iVar5;
              *pcVar7 = cVar9;
              pcVar7[1] = cVar3;
            }
LAB_007c77f4:
            if ((int)uVar13 < 0) {
LAB_007c7848:
              cVar9 = '\0';
              uVar4 = uVar13 - 1;
              uVar14 = (ulong)(uVar13 + 1);
              uVar13 = uVar13 + 1;
            }
            else {
              pcVar7 = DAT_047fa5c8 + uVar14;
              if (DAT_047fa5d0 <= (int)uVar13) {
                pcVar7 = pcVar11;
              }
              if (*pcVar7 != '#') goto LAB_007c7848;
              if ((int)uVar13 < DAT_047fa5d0) {
                DAT_047fa5c8[uVar13 & ((int)uVar13 >> 0x1f ^ 0xffffffffU)] = cVar3;
                cVar9 = '\n';
                uVar4 = uVar13 - 2;
              }
              else {
                (**(code **)(DAT_047fa5c0 + 0x18))();
                cVar9 = '\n';
                uVar4 = uVar13 - 2;
              }
            }
            if (1 < (int)uVar13) {
              uVar10 = (ulong)uVar4;
              pcVar7 = DAT_047fa5c8 + uVar10;
              if (DAT_047fa5d0 <= (int)uVar4) {
                pcVar7 = pcVar11;
              }
              if (*pcVar7 == '/') {
                iVar5 = (int)uVar14;
                pcVar7 = pcVar11;
                if (iVar5 <= DAT_047fa5d0) {
                  pcVar7 = DAT_047fa5c8 + (iVar5 - 1U);
                }
                if (*pcVar7 == '/') {
                  if ((int)uVar4 < DAT_047fa5d0) {
                    bVar8 = false;
                    DAT_047fa5c8[uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)] = cVar3;
                    uVar14 = uVar10;
                    cVar9 = '\n';
                  }
                  else {
                    (**(code **)(DAT_047fa5c0 + 0x18))();
                    bVar8 = false;
                    uVar14 = uVar10;
                    cVar9 = '\n';
                  }
                }
                else {
                  pcVar7 = pcVar11;
                  if (iVar5 <= DAT_047fa5d0) {
                    pcVar7 = DAT_047fa5c8 + (iVar5 - 1U);
                  }
                  if (*pcVar7 != '*') goto LAB_007c7924;
                  if ((int)uVar4 < DAT_047fa5d0) {
                    DAT_047fa5c8[uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)] = cVar3;
                  }
                  else {
                    (**(code **)(DAT_047fa5c0 + 0x18))();
                  }
                  bVar8 = false;
                  uVar14 = uVar10;
                  cVar9 = '*';
                }
                goto LAB_007c7474;
              }
            }
LAB_007c7924:
            bVar8 = false;
          }
        }
      }
      else if (local_64[0] == cVar9) {
        if (cVar9 != '*') {
          if (*(int *)(param_1 + 0x18) < 1) {
            pcVar6 = pcVar11;
          }
          else {
            pcVar6 = *(char **)(param_1 + 0x10);
          }
          local_64[0] = *pcVar6;
          goto LAB_007c74d8;
        }
        cVar9 = '/';
      }
      else {
        cVar2 = '*';
        if (cVar9 != '/') {
          cVar2 = cVar9;
        }
        cVar9 = cVar2;
      }
LAB_007c7474:
      iVar5 = (**(code **)*param_2)(param_2,local_64,1);
    } while (iVar5 != 0);
  }
  return;
}


