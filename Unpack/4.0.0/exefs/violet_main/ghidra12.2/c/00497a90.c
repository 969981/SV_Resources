/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00497a90; name: FUN_00497a90
 */


undefined4 FUN_00497a90(long param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  void *pvVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  char *__s2;
  void *__s;
  long lVar16;
  size_t sVar17;
  byte *pbVar18;
  uint *puVar19;
  
  uVar15 = 0x33;
  switch(*param_2) {
  case 1:
    pbVar18 = *(byte **)(*(uint **)(param_2 + 2) + 2);
    uVar10 = **(uint **)(param_2 + 2);
    __s2 = *(char **)(*(uint **)(param_1 + 8) + 2);
    uVar11 = uVar10;
    do {
      uVar14 = uVar11 - 1;
      if ((int)uVar11 < 1) {
        if (uVar11 == 0) {
          pbVar8 = (byte *)0x0;
          goto LAB_00497d60;
        }
        break;
      }
      uVar11 = uVar14;
    } while (pbVar18[uVar14] != 0x40);
    pbVar8 = pbVar18 + (int)uVar14;
LAB_00497d60:
    uVar11 = **(uint **)(param_1 + 8);
    lVar12 = (ulong)uVar11 << 0x20;
    uVar14 = uVar11;
    do {
      lVar12 = lVar12 + -0x100000000;
      if ((int)uVar14 < 1) {
        if ((uVar14 == 0) || (__s2 == (char *)0x0)) goto LAB_00497e14;
        sVar17 = lVar12 >> 0x20;
        break;
      }
      sVar17 = (size_t)(uVar14 - 1);
      uVar14 = uVar14 - 1;
    } while (__s2[sVar17] != '@');
    if (pbVar8 == (byte *)0x0) {
      pbVar8 = pbVar18;
      if (((int)uVar10 < 1) || (*pbVar18 != 0x2e)) goto LAB_00497e70;
      if ((int)uVar10 < (int)uVar11) {
        lVar12 = (ulong)uVar10 - 1;
        pbVar8 = (byte *)(__s2 + (int)(uVar11 - uVar10));
        pbVar18 = pbVar18 + 1;
        uVar10 = 0x2e;
        bVar4 = *pbVar8;
        pbVar7 = pbVar18;
        if (bVar4 == 0x2e) goto LAB_00497e60;
        do {
          uVar11 = uVar10 + 0x20;
          if (0x19 < (uVar10 - 0x41 & 0xff)) {
            uVar11 = uVar10;
          }
          uVar10 = bVar4 + 0x20;
          if (0x19 < bVar4 - 0x41) {
            uVar10 = (uint)bVar4;
          }
          pbVar7 = pbVar18;
          if ((uVar11 & 0xff) != (uVar10 & 0xff)) {
            return 0x2f;
          }
LAB_00497e60:
          do {
            if (lVar12 == 0) goto LAB_00497f78;
            pbVar18 = pbVar7 + 1;
            bVar3 = *pbVar7;
            uVar10 = (uint)bVar3;
            lVar12 = lVar12 + -1;
            pbVar8 = pbVar8 + 1;
            bVar4 = *pbVar8;
            pbVar7 = pbVar18;
          } while (bVar4 == bVar3);
        } while( true );
      }
    }
    else if ((pbVar8 == pbVar18) ||
            (((long)pbVar8 - (long)pbVar18 == sVar17 &&
             (iVar5 = strncmp((char *)pbVar18,__s2,sVar17), iVar5 == 0)))) {
      pbVar8 = pbVar8 + 1;
LAB_00497e70:
      pbVar7 = (byte *)(__s2 + sVar17 + 1);
      pbVar18 = pbVar18 + ((long)(int)uVar10 - (long)pbVar8);
      if (pbVar18 == (byte *)(__s2 + ((long)(int)uVar11 - (long)pbVar7))) {
        if (pbVar18 != (byte *)0x0) {
          do {
            bVar4 = *pbVar8;
            bVar3 = *pbVar7;
            if ((uint)bVar4 != (uint)bVar3) {
              bVar1 = bVar4 + 0x20;
              if (0x19 < bVar4 - 0x41) {
                bVar1 = bVar4;
              }
              bVar4 = bVar3 + 0x20;
              if (0x19 < bVar3 - 0x41) {
                bVar4 = bVar3;
              }
              if (bVar1 != bVar4) {
                return 0x2f;
              }
            }
            pbVar18 = pbVar18 + -1;
            pbVar8 = pbVar8 + 1;
            pbVar7 = pbVar7 + 1;
            if (pbVar18 == (byte *)0x0) {
              return 0;
            }
          } while( true );
        }
        goto LAB_00497f78;
      }
    }
LAB_00497f70:
    uVar15 = 0x2f;
    break;
  case 2:
    iVar5 = **(int **)(param_2 + 2);
    lVar12 = (long)iVar5;
    if (iVar5 != 0) {
      iVar2 = **(int **)(param_1 + 8);
      if (iVar5 <= iVar2) {
        pbVar8 = *(byte **)(*(int **)(param_2 + 2) + 2);
        pbVar18 = *(byte **)(*(int **)(param_1 + 8) + 2);
        if (((iVar2 <= iVar5) || (pbVar18 = pbVar18 + (iVar2 - iVar5), *pbVar8 == 0x2e)) ||
           (pbVar18[-1] == 0x2e)) {
          do {
            bVar4 = *pbVar8;
            bVar3 = *pbVar18;
            if ((uint)bVar4 != (uint)bVar3) {
              bVar1 = bVar4 + 0x20;
              if (0x19 < bVar4 - 0x41) {
                bVar1 = bVar4;
              }
              bVar4 = bVar3 + 0x20;
              if (0x19 < bVar3 - 0x41) {
                bVar4 = bVar3;
              }
              if (bVar1 != bVar4) {
                return 0x2f;
              }
            }
            lVar12 = lVar12 + -1;
            pbVar8 = pbVar8 + 1;
            pbVar18 = pbVar18 + 1;
            if (lVar12 == 0) {
              return 0;
            }
          } while( true );
        }
      }
      goto LAB_00497f70;
    }
LAB_00497f78:
    uVar15 = 0;
    break;
  case 4:
    lVar12 = *(long *)(param_1 + 8);
    lVar16 = *(long *)(param_2 + 2);
    if (((*(int *)(lVar12 + 8) == 0) || (iVar5 = FUN_0048b9c0(lVar12,0), -1 < iVar5)) &&
       ((*(int *)(lVar16 + 8) == 0 || (iVar5 = FUN_0048b9c0(lVar16,0), -1 < iVar5)))) {
      uVar15 = 0x2f;
      if (*(int *)(lVar16 + 0x20) <= *(int *)(lVar12 + 0x20)) {
        iVar5 = memcmp(*(void **)(lVar16 + 0x18),*(void **)(lVar12 + 0x18),
                       (long)*(int *)(lVar16 + 0x20));
        uVar15 = 0;
        if (iVar5 != 0) {
          uVar15 = 0x2f;
        }
      }
    }
    else {
      uVar15 = 0x11;
    }
    break;
  case 6:
    puVar19 = *(uint **)(param_2 + 2);
    __s = *(void **)(*(int **)(param_1 + 8) + 2);
    sVar17 = (size_t)**(int **)(param_1 + 8);
    pbVar18 = *(byte **)(puVar19 + 2);
    pvVar6 = memchr(__s,0x3a,sVar17);
    if ((((pvVar6 != (void *)0x0) && (2 < (long)((long)__s + (sVar17 - (long)pvVar6)))) &&
        (*(char *)((long)pvVar6 + 1) == '/')) && (*(char *)((long)pvVar6 + 2) == '/')) {
      pbVar8 = (byte *)((long)pvVar6 + 3);
      sVar17 = (long)__s + (sVar17 - (long)pbVar8);
      pvVar6 = memchr(pbVar8,0x3a,sVar17);
      if ((pvVar6 != (void *)0x0) || (pvVar6 = memchr(pbVar8,0x2f,sVar17), pvVar6 != (void *)0x0)) {
        sVar17 = (long)pvVar6 - (long)pbVar8;
      }
      uVar10 = (uint)sVar17;
      if (uVar10 != 0) {
        uVar11 = *puVar19;
        if (((int)uVar11 < 1) || (*pbVar18 != 0x2e)) {
          if (uVar11 == uVar10) {
            if (sVar17 << 0x20 != 0) {
              lVar12 = (long)(sVar17 << 0x20) >> 0x20;
              do {
                bVar4 = *pbVar8;
                bVar3 = *pbVar18;
                if ((uint)bVar4 != (uint)bVar3) {
                  bVar1 = bVar4 + 0x20;
                  if (0x19 < bVar4 - 0x41) {
                    bVar1 = bVar4;
                  }
                  bVar4 = bVar3 + 0x20;
                  if (0x19 < bVar3 - 0x41) {
                    bVar4 = bVar3;
                  }
                  if (bVar1 != bVar4) {
                    return 0x2f;
                  }
                }
                lVar12 = lVar12 + -1;
                pbVar8 = pbVar8 + 1;
                pbVar18 = pbVar18 + 1;
                if (lVar12 == 0) {
                  return 0;
                }
              } while( true );
            }
            goto LAB_00497f78;
          }
        }
        else if ((int)uVar11 < (int)uVar10) {
          lVar12 = -(ulong)uVar11;
          pbVar18 = pbVar18 + 1;
          uVar11 = 0x2e;
          bVar4 = pbVar8[lVar12 + (int)uVar10];
          pbVar7 = pbVar18;
          if (bVar4 == 0x2e) goto LAB_00497f40;
          do {
            uVar13 = (uint)bVar4;
            uVar14 = uVar13 + 0x20;
            if (0x19 < uVar13 - 0x41) {
              uVar14 = uVar13;
            }
            uVar13 = uVar11 + 0x20;
            if (0x19 < (uVar11 - 0x41 & 0xff)) {
              uVar13 = uVar11;
            }
            pbVar7 = pbVar18;
            if ((uVar14 & 0xff) != (uVar13 & 0xff)) {
              return 0x2f;
            }
LAB_00497f40:
            do {
              if (lVar12 == -1) goto LAB_00497f78;
              pbVar18 = pbVar7 + 1;
              bVar3 = *pbVar7;
              uVar11 = (uint)bVar3;
              lVar12 = lVar12 + 1;
              bVar4 = pbVar8[lVar12 + (int)uVar10];
              pbVar7 = pbVar18;
            } while (bVar4 == bVar3);
          } while( true );
        }
        goto LAB_00497f70;
      }
    }
    goto LAB_00497e14;
  case 7:
    uVar10 = **(uint **)(param_1 + 8);
    if (uVar10 == 0x10 || uVar10 == 4) {
      iVar5 = **(int **)(param_2 + 2);
      if (iVar5 == 0x20 || iVar5 == 8) {
        if (iVar5 == uVar10 * 2) {
          lVar12 = *(long *)(*(int **)(param_2 + 2) + 2);
          uVar9 = 0;
          do {
            if (((*(byte *)(lVar12 + uVar9) ^
                 *(byte *)(*(long *)(*(uint **)(param_1 + 8) + 2) + uVar9)) &
                *(byte *)(lVar12 + (ulong)uVar10 + uVar9)) != 0) {
              return 0x2f;
            }
            uVar9 = uVar9 + 1;
          } while (uVar10 != uVar9);
          return 0;
        }
        goto LAB_00497f70;
      }
    }
LAB_00497e14:
    uVar15 = 0x35;
  }
  return uVar15;
}


