/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001ca778; name: FUN_001ca778
 */


undefined8 FUN_001ca778(char *param_1,ulong param_2,uint param_3,uint *param_4)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ushort uVar11;
  
  if (param_2 < 0xc) {
    uVar5 = 4;
  }
  else if (((param_1 == (char *)0x0) || (*param_1 != '\0')) || (param_1[1] != '\0')) {
    uVar5 = 0xc;
  }
  else if ((param_1[3] & 0xfU) == 0) {
    uVar10 = 0xc;
    for (uVar11 = *(ushort *)(param_1 + 4) >> 8 | *(ushort *)(param_1 + 4) << 8; uVar11 != 0;
        uVar11 = uVar11 - 1) {
      do {
        uVar8 = (int)uVar10 + 1;
        if (param_2 < uVar8) {
          return 2;
        }
        bVar2 = param_1[uVar10];
        if ((bVar2 & 0xc0) != 0) {
          if ((bVar2 & 0xc0) != 0xc0) {
            return 1;
          }
          uVar8 = (int)uVar10 + 2;
          if (param_2 < uVar8) {
            return 2;
          }
          break;
        }
        uVar8 = uVar8 + bVar2;
        uVar10 = (ulong)uVar8;
        if (param_2 < uVar10) {
          return 2;
        }
      } while (bVar2 != 0);
      uVar10 = (ulong)(uVar8 + 4);
      if (param_2 < uVar10) {
        return 2;
      }
    }
    uVar11 = *(ushort *)(param_1 + 6) >> 8 | *(ushort *)(param_1 + 6) << 8;
    if (uVar11 == 0) {
      uVar8 = 0;
    }
    else {
LAB_001ca8a0:
      do {
        uVar9 = (int)uVar10 + 1;
        if (param_2 < uVar9) {
          return 2;
        }
        bVar2 = param_1[uVar10];
        if ((bVar2 & 0xc0) == 0) {
          uVar9 = uVar9 + bVar2;
          uVar10 = (ulong)uVar9;
          if (param_2 < uVar10) {
            return 2;
          }
          if (bVar2 != 0) goto LAB_001ca8a0;
        }
        else {
          if ((bVar2 & 0xc0) != 0xc0) {
            return 1;
          }
          uVar9 = (int)uVar10 + 2;
          if (param_2 < uVar9) {
            return 2;
          }
        }
        if (param_2 < uVar9 + 2) {
          return 2;
        }
        uVar8 = ((*(ushort *)(param_1 + (int)uVar9) & 0xff00) << 8 |
                (uint)*(ushort *)(param_1 + (int)uVar9) << 0x18) >> 0x10;
        if ((uVar8 != 5) && (uVar8 != param_3)) {
          return 9;
        }
        if (param_2 < uVar9 + 4) {
          return 2;
        }
        if (CONCAT11(param_1[(int)(uVar9 + 2)],param_1[(int)(uVar9 + 3)]) != 1) {
          return 10;
        }
        if (param_2 < uVar9 + 8) {
          return 2;
        }
        uVar3 = (uint)(byte)param_1[(int)(uVar9 + 4)] << 0x18 |
                (uint)(byte)param_1[(int)(uVar9 + 5)] << 0x10 |
                (uint)(byte)param_1[(int)(uVar9 + 6)] << 8 | (uint)(byte)param_1[(int)(uVar9 + 7)];
        if (uVar3 < *param_4) {
          *param_4 = uVar3;
        }
        uVar3 = uVar9 + 10;
        uVar6 = (ulong)uVar3;
        if (param_2 < uVar6) {
          return 2;
        }
        uVar9 = (uint)CONCAT11(param_1[(int)(uVar9 + 8)],param_1[(int)(uVar9 + 9)]);
        uVar10 = (ulong)(uVar3 + uVar9);
        if (param_2 < uVar10) {
          return 2;
        }
        if (uVar8 == 0x1c) {
          if (uVar9 != 0x10) {
            return 6;
          }
          uVar9 = param_4[1];
          if ((int)uVar9 < 0x18) {
            param_4[(long)(int)uVar9 * 5 + 2] = 0x1c;
            uVar5 = *(undefined8 *)(param_1 + (int)uVar3);
            *(undefined8 *)(param_4 + (long)(int)uVar9 * 5 + 5) =
                 *(undefined8 *)(param_1 + (int)uVar3 + 8);
            *(undefined8 *)(param_4 + (long)(int)uVar9 * 5 + 3) = uVar5;
LAB_001caa0c:
            param_4[1] = param_4[1] + 1;
          }
        }
        else if (uVar8 == 5) {
          uVar9 = param_4[0x7a];
          if (uVar9 != 4) {
            param_4[0x7a] = uVar9 + 1;
            puVar1 = param_4 + (long)(int)uVar9 * 6 + 0x7c;
            iVar7 = -0x80;
            do {
              if (param_2 <= uVar6) {
                return 2;
              }
              bVar2 = param_1[uVar6];
              uVar9 = (uint)bVar2;
              if ((bVar2 & 0xc0) == 0) {
                if (bVar2 == 0) break;
                if ((*(long *)puVar1 != 0) &&
                   (uVar5 = FUN_001cad8c(puVar1,&DAT_03bdface,1), (int)uVar5 != 0)) {
                  return uVar5;
                }
                uVar3 = (int)uVar6 + 1;
                uVar6 = (ulong)(uVar3 + uVar9);
                if (param_2 < uVar6) {
                  return 1;
                }
                uVar5 = FUN_001cad8c(puVar1,param_1 + uVar3,bVar2);
                if ((int)uVar5 != 0) {
                  return uVar5;
                }
              }
              else {
                if ((bVar2 & 0xc0) != 0xc0) {
                  return 1;
                }
                uVar6 = (ulong)((int)uVar6 + 1);
                if (param_2 <= uVar6) {
                  return 2;
                }
                if (uVar9 == 0) break;
                uVar6 = (ulong)((uint)(byte)param_1[uVar6] | (uVar9 & 0x3f) << 8);
              }
              bVar4 = iVar7 == -1;
              iVar7 = iVar7 + 1;
              if (bVar4) {
                return 3;
              }
            } while( true );
          }
        }
        else if (uVar8 == 1) {
          if (uVar9 != 4) {
            return 6;
          }
          uVar9 = param_4[1];
          if ((int)uVar9 < 0x18) {
            param_4[(long)(int)uVar9 * 5 + 2] = 1;
            param_4[(long)(int)uVar9 * 5 + 3] = *(uint *)(param_1 + (int)uVar3);
            goto LAB_001caa0c;
          }
        }
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    for (uVar11 = *(ushort *)(param_1 + 8) >> 8 | *(ushort *)(param_1 + 8) << 8; uVar11 != 0;
        uVar11 = uVar11 - 1) {
      do {
        uVar9 = (int)uVar10 + 1;
        if (param_2 < uVar9) {
          return 2;
        }
        bVar2 = param_1[uVar10];
        if ((bVar2 & 0xc0) != 0) {
          if ((bVar2 & 0xc0) != 0xc0) {
            return 1;
          }
          uVar9 = (int)uVar10 + 2;
          if (param_2 < uVar9) {
            return 2;
          }
          break;
        }
        uVar9 = uVar9 + bVar2;
        uVar10 = (ulong)uVar9;
        if (param_2 < uVar10) {
          return 2;
        }
      } while (bVar2 != 0);
      if (param_2 < uVar9 + 8) {
        return 2;
      }
      if (param_2 < uVar9 + 10) {
        return 2;
      }
      uVar10 = (ulong)(uVar9 + 10 +
                      (uint)CONCAT11(param_1[(int)(uVar9 + 8)],param_1[(int)(uVar9 + 9)]));
      if (param_2 < uVar10) {
        return 2;
      }
    }
    for (uVar11 = *(ushort *)(param_1 + 10) >> 8 | *(ushort *)(param_1 + 10) << 8; uVar11 != 0;
        uVar11 = uVar11 - 1) {
      do {
        uVar9 = (int)uVar10 + 1;
        if (param_2 < uVar9) {
          return 2;
        }
        bVar2 = param_1[uVar10];
        if ((bVar2 & 0xc0) != 0) {
          if ((bVar2 & 0xc0) != 0xc0) {
            return 1;
          }
          uVar9 = (int)uVar10 + 2;
          if (param_2 < uVar9) {
            return 2;
          }
          break;
        }
        uVar9 = uVar9 + bVar2;
        uVar10 = (ulong)uVar9;
        if (param_2 < uVar10) {
          return 2;
        }
      } while (bVar2 != 0);
      if (((param_2 < uVar9 + 8) || (param_2 < uVar9 + 10)) ||
         (uVar10 = (ulong)(uVar9 + 10 +
                          (uint)CONCAT11(param_1[(int)(uVar9 + 8)],param_1[(int)(uVar9 + 9)])),
         param_2 < uVar10)) {
        return 2;
      }
    }
    if (uVar10 == param_2) {
      if (((uVar8 == 2) || (param_4[0x7a] != 0)) || (param_4[1] != 0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0xb;
      }
    }
    else {
      uVar5 = 7;
    }
  }
  else {
    uVar5 = 8;
  }
  return uVar5;
}


