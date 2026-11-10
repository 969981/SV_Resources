/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003a0900; name: FUN_003a0900
 */


char * FUN_003a0900(char *param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  
  if (param_1 == (char *)0x0) {
    return (char *)0x0;
  }
  if (*param_1 == ',') {
    bVar1 = param_1[1];
    if (bVar1 == 0x4d) {
      iVar6 = 0;
      lVar10 = 2;
      do {
        pvVar4 = memchr("0123456789",(uint)(byte)param_1[lVar10],0xb);
        if (pvVar4 == (void *)0x0) goto LAB_003a0b00;
        iVar7 = (int)pvVar4 + -0x3cdc2fc;
        if (iVar7 < 10) {
          if (iVar6 < 0xccccccd) {
            iVar8 = iVar6 * 10;
            iVar6 = 0;
            if (iVar8 <= 0x7fffffff - iVar7) {
              iVar6 = iVar7;
            }
            iVar6 = iVar6 + iVar8;
            if (iVar8 <= 0x7fffffff - iVar7) {
              iVar7 = 0;
              lVar10 = lVar10 + 1;
              goto LAB_003a09f0;
            }
          }
          iVar7 = 1;
        }
        else {
          iVar7 = 2;
        }
LAB_003a09f0:
      } while (iVar7 == 0);
      if (iVar7 != 2) {
        return (char *)0x0;
      }
LAB_003a0b00:
      if (lVar10 == 2) {
        return (char *)0x0;
      }
      if (0xb < iVar6 - 1U) {
        return (char *)0x0;
      }
      param_1 = param_1 + lVar10;
      if (*param_1 == '.') {
        iVar7 = 0;
        lVar10 = 1;
        do {
          pvVar4 = memchr("0123456789",(uint)(byte)param_1[lVar10],0xb);
          if (pvVar4 == (void *)0x0) goto LAB_003a0c20;
          iVar8 = (int)pvVar4 + -0x3cdc2fc;
          if (iVar8 < 10) {
            if (iVar7 < 0xccccccd) {
              iVar2 = iVar7 * 10;
              iVar7 = 0;
              if (iVar2 <= 0x7fffffff - iVar8) {
                iVar7 = iVar8;
              }
              iVar7 = iVar7 + iVar2;
              if (iVar2 <= 0x7fffffff - iVar8) {
                iVar8 = 0;
                lVar10 = lVar10 + 1;
                goto LAB_003a0b48;
              }
            }
            iVar8 = 1;
          }
          else {
            iVar8 = 2;
          }
LAB_003a0b48:
        } while (iVar8 == 0);
        if (iVar8 != 2) {
          return (char *)0x0;
        }
LAB_003a0c20:
        if (lVar10 == 1) {
          return (char *)0x0;
        }
        if (4 < iVar7 - 1U) {
          return (char *)0x0;
        }
        param_1 = param_1 + lVar10;
        if (*param_1 == '.') {
          uVar9 = 0;
          lVar10 = 1;
          do {
            pvVar4 = memchr("0123456789",(uint)(byte)param_1[lVar10],0xb);
            if (pvVar4 == (void *)0x0) goto LAB_003a0ccc;
            iVar8 = (int)pvVar4 + -0x3cdc2fc;
            if (iVar8 < 10) {
              if ((int)uVar9 < 0xccccccd) {
                iVar3 = uVar9 * 10;
                iVar2 = 0;
                if (iVar3 <= 0x7fffffff - iVar8) {
                  iVar2 = iVar8;
                }
                uVar9 = iVar2 + iVar3;
                if (iVar3 <= 0x7fffffff - iVar8) {
                  iVar8 = 0;
                  lVar10 = lVar10 + 1;
                  goto LAB_003a0c68;
                }
              }
              iVar8 = 1;
            }
            else {
              iVar8 = 2;
            }
LAB_003a0c68:
          } while (iVar8 == 0);
          if (iVar8 != 2) {
            return (char *)0x0;
          }
LAB_003a0ccc:
          if (lVar10 == 1) {
            return (char *)0x0;
          }
          if (6 < uVar9) {
            return (char *)0x0;
          }
          *param_2 = 2;
          param_1 = param_1 + lVar10;
          *(char *)(param_2 + 1) = (char)iVar6;
          *(char *)((long)param_2 + 5) = (char)iVar7;
          *(char *)((long)param_2 + 6) = (char)uVar9;
        }
      }
    }
    else {
      if (bVar1 == 0x4a) {
        uVar9 = 0;
        lVar10 = 2;
        do {
          pvVar4 = memchr("0123456789",(uint)(byte)param_1[lVar10],0xb);
          if (pvVar4 == (void *)0x0) goto LAB_003a0ad4;
          iVar6 = (int)pvVar4 + -0x3cdc2fc;
          if (iVar6 < 10) {
            if ((int)uVar9 < 0xccccccd) {
              iVar8 = uVar9 * 10;
              iVar7 = 0;
              if (iVar8 <= 0x7fffffff - iVar6) {
                iVar7 = iVar6;
              }
              uVar9 = iVar7 + iVar8;
              if (iVar8 <= 0x7fffffff - iVar6) {
                iVar6 = 0;
                lVar10 = lVar10 + 1;
                goto LAB_003a096c;
              }
            }
            iVar6 = 1;
          }
          else {
            iVar6 = 2;
          }
LAB_003a096c:
        } while (iVar6 == 0);
        if (iVar6 != 2) {
          return (char *)0x0;
        }
LAB_003a0ad4:
        if (lVar10 == 2) {
          return (char *)0x0;
        }
        if (0x16c < uVar9 - 1) {
          return (char *)0x0;
        }
        *param_2 = 0;
      }
      else {
        pvVar4 = memchr("0123456789",(uint)bVar1,0xb);
        uVar9 = 0;
        if (pvVar4 == (void *)0x0) {
          lVar10 = 1;
        }
        else {
          lVar10 = 2;
          do {
            iVar6 = (int)pvVar4 + -0x3cdc2fc;
            if (9 < iVar6) break;
            if (0xccccccc < (int)uVar9) {
              return (char *)0x0;
            }
            if (0x7fffffff - iVar6 < (int)(uVar9 * 10)) {
              return (char *)0x0;
            }
            uVar9 = iVar6 + uVar9 * 10;
            pvVar4 = memchr("0123456789",(uint)(byte)param_1[lVar10],0xb);
            lVar10 = lVar10 + 1;
          } while (pvVar4 != (void *)0x0);
          lVar10 = lVar10 + -1;
        }
        if (lVar10 == 1) {
          return (char *)0x0;
        }
        if (0x16d < uVar9) {
          return (char *)0x0;
        }
        *param_2 = 1;
      }
      param_1 = param_1 + lVar10;
      param_2[1] = uVar9;
    }
  }
  param_2[2] = 0x1c20;
  if (*param_1 == '/') {
    pcVar5 = (char *)FUN_003a0670(param_1 + 1,0xffffff59,0xa7,1,param_2 + 2);
    return pcVar5;
  }
  return param_1;
}


