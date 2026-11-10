/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b7e9c0; name: FUN_00b7e9c0
 */


void FUN_00b7e9c0(long *param_1,string *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  string sVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  string sVar8;
  string *__s2;
  ulong uVar9;
  long lVar10;
  string *psVar11;
  long *plVar12;
  string *psVar13;
  ulong uVar14;
  ulong uVar15;
  ulong unaff_x25;
  
  sVar3 = *param_2;
  __s2 = *(string **)(param_2 + 0x10);
  if (((byte)sVar3 & 1) == 0) {
    __s2 = param_2 + 1;
  }
  sVar8 = *__s2;
  if (sVar8 == (string)0x0) {
    uVar14 = 0;
  }
  else {
    uVar14 = 0;
    psVar11 = __s2;
    do {
      psVar11 = psVar11 + 1;
      uVar14 = uVar14 * 5 + (ulong)(byte)sVar8;
      sVar8 = *psVar11;
    } while (sVar8 != (string)0x0);
  }
  uVar15 = param_1[1];
  if (uVar15 != 0) {
    uVar9 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
    uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar9 < 2) {
      unaff_x25 = uVar15 - 1 & uVar14;
    }
    else {
      unaff_x25 = uVar14;
      if (uVar15 <= uVar14) {
        uVar5 = 0;
        if (uVar15 != 0) {
          uVar5 = uVar14 / uVar15;
        }
        unaff_x25 = uVar14 - uVar5 * uVar15;
      }
    }
    plVar12 = *(long **)(*param_1 + unaff_x25 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      __n = (ulong)((byte)sVar3 >> 1);
      if (((byte)sVar3 & 1) != 0) {
        __n = *(size_t *)(param_2 + 8);
      }
      if (uVar9 < 2) {
        if (__n == 0) {
          do {
            if (plVar12[1] != uVar14 && (plVar12[1] & uVar15 - 1) != unaff_x25) break;
            uVar9 = (ulong)(*(byte *)(plVar12 + 2) >> 1);
            if ((*(byte *)(plVar12 + 2) & 1) != 0) {
              uVar9 = plVar12[3];
            }
            if (uVar9 == 0) {
              return;
            }
            plVar12 = (long *)*plVar12;
          } while (plVar12 != (long *)0x0);
        }
        else {
          do {
            if (plVar12[1] != uVar14 && (plVar12[1] & uVar15 - 1) != unaff_x25) break;
            bVar2 = *(byte *)(plVar12 + 2);
            uVar9 = (ulong)(bVar2 >> 1);
            sVar1 = uVar9;
            if ((bVar2 & 1) != 0) {
              sVar1 = plVar12[3];
            }
            if (sVar1 == __n) {
              if ((bVar2 & 1) == 0) {
                psVar11 = (string *)((long)plVar12 + 0x11);
                psVar13 = __s2;
                while (*psVar11 == *psVar13) {
                  uVar9 = uVar9 - 1;
                  psVar11 = psVar11 + 1;
                  psVar13 = psVar13 + 1;
                  if (uVar9 == 0) {
                    return;
                  }
                }
              }
              else {
                iVar4 = memcmp((void *)plVar12[4],__s2,__n);
                if (iVar4 == 0) {
                  return;
                }
              }
            }
            plVar12 = (long *)*plVar12;
          } while (plVar12 != (long *)0x0);
        }
      }
      else if (__n == 0) {
        do {
          uVar9 = plVar12[1];
          if (uVar9 != uVar14) {
            if (uVar15 <= uVar9) {
              uVar5 = 0;
              if (uVar15 != 0) {
                uVar5 = uVar9 / uVar15;
              }
              uVar9 = uVar9 - uVar5 * uVar15;
            }
            if (uVar9 != unaff_x25) break;
          }
          uVar9 = (ulong)(*(byte *)(plVar12 + 2) >> 1);
          if ((*(byte *)(plVar12 + 2) & 1) != 0) {
            uVar9 = plVar12[3];
          }
          if (uVar9 == 0) {
            return;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar12[1];
          if (uVar9 != uVar14) {
            if (uVar15 <= uVar9) {
              uVar5 = 0;
              if (uVar15 != 0) {
                uVar5 = uVar9 / uVar15;
              }
              uVar9 = uVar9 - uVar5 * uVar15;
            }
            if (uVar9 != unaff_x25) break;
          }
          bVar2 = *(byte *)(plVar12 + 2);
          uVar9 = (ulong)(bVar2 >> 1);
          sVar1 = uVar9;
          if ((bVar2 & 1) != 0) {
            sVar1 = plVar12[3];
          }
          if (sVar1 == __n) {
            if ((bVar2 & 1) == 0) {
              psVar11 = (string *)((long)plVar12 + 0x11);
              psVar13 = __s2;
              while (*psVar11 == *psVar13) {
                uVar9 = uVar9 - 1;
                psVar11 = psVar11 + 1;
                psVar13 = psVar13 + 1;
                if (uVar9 == 0) {
                  return;
                }
              }
            }
            else {
              iVar4 = memcmp((void *)plVar12[4],__s2,__n);
              if (iVar4 == 0) {
                return;
              }
            }
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
  lVar10 = tpidr_el0;
  plVar12 = *(long **)(lVar10 + 0x30);
  if (plVar12 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar12 = DAT_04859430;
    *(long **)(lVar10 + 0x30) = DAT_04859430;
  }
  plVar12 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x28,8);
  std::string::string((string *)(plVar12 + 2),param_2);
  *plVar12 = 0;
  plVar12[1] = uVar14;
  if ((uVar15 == 0) || (*(float *)(param_1 + 4) * (float)uVar15 < (float)(param_1[3] + 1))) {
    uVar15 = (ulong)(uVar15 < 3 || (uVar15 & uVar15 - 1) != 0) | uVar15 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar9 <= uVar15) {
      uVar9 = uVar15;
    }
    if (uVar9 - 1 == 0) {
      uVar9 = 2;
    }
    else if ((uVar9 & uVar9 - 1) != 0) {
      uVar9 = std::__next_prime(uVar9);
    }
    uVar15 = param_1[1];
    if (uVar15 < uVar9) {
      uVar5 = uVar9;
LAB_00b7ec9c:
      FUN_00badd38(param_1,uVar5);
    }
    else if (uVar9 < uVar15) {
      uVar5 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar15 < 3) ||
         (uVar6 = uVar15 - (uVar15 >> 1 & 0x5555555555555555),
         uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333),
         1 < (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar5 = std::__next_prime(uVar5);
      }
      else if (1 < uVar5) {
        uVar5 = 1L << (-LZCOUNT(uVar5 - 1) & 0x3fU);
      }
      if (uVar5 <= uVar9) {
        uVar5 = uVar9;
      }
      if (uVar5 < uVar15) goto LAB_00b7ec9c;
    }
    uVar15 = param_1[1];
    if ((uVar15 & uVar15 - 1) == 0) {
      unaff_x25 = uVar15 - 1 & uVar14;
    }
    else if (uVar14 < uVar15) {
      unaff_x25 = uVar14;
    }
    else {
      uVar9 = 0;
      if (uVar15 != 0) {
        uVar9 = uVar14 / uVar15;
      }
      unaff_x25 = uVar14 - uVar9 * uVar15;
    }
  }
  lVar10 = *param_1;
  plVar7 = *(long **)(lVar10 + unaff_x25 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = param_1 + 2;
    *plVar12 = *plVar7;
    *plVar7 = (long)plVar12;
    *(long **)(lVar10 + unaff_x25 * 8) = plVar7;
    if (*plVar12 == 0) goto LAB_00b7edd0;
    uVar14 = *(ulong *)(*plVar12 + 8);
    if ((uVar15 & uVar15 - 1) == 0) {
      uVar14 = uVar14 & uVar15 - 1;
    }
    else if (uVar15 <= uVar14) {
      uVar9 = 0;
      if (uVar15 != 0) {
        uVar9 = uVar14 / uVar15;
      }
      uVar14 = uVar14 - uVar9 * uVar15;
    }
    plVar7 = (long *)(*param_1 + uVar14 * 8);
  }
  else {
    *plVar12 = *plVar7;
  }
  *plVar7 = (long)plVar12;
LAB_00b7edd0:
  param_1[3] = param_1[3] + 1;
  return;
}


