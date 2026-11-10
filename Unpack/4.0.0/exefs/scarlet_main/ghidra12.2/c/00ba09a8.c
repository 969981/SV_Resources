/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ba09a8; name: FUN_00ba09a8
 */


undefined1  [16] FUN_00ba09a8(long *param_1,string *param_2)

{
  char *pcVar1;
  string sVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  char *pcVar6;
  long *plVar7;
  long *plVar8;
  string *psVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined1 auVar16 [16];
  
  auVar16 = FUN_00bab644(param_1,*param_1,param_2);
  uVar13 = auVar16._8_8_;
  iVar4 = auVar16._0_4_;
  if (iVar4 == 0) {
    return auVar16;
  }
  if (*(char *)(*param_1 + 0x28) == '\0') {
    return auVar16;
  }
  switch(iVar4) {
  case 1:
  case 4:
  case 6:
    uVar13 = *(ulong *)(uVar13 + 0x10);
    break;
  case 2:
    uVar13 = *(ulong *)(uVar13 + 0x30);
    break;
  case 3:
  case 7:
    lVar15 = *(long *)(uVar13 + 0x10);
    goto LAB_00ba0a38;
  case 5:
    lVar15 = *(long *)(uVar13 + 0x18);
LAB_00ba0a38:
    uVar13 = *(ulong *)(lVar15 + 0x10);
    break;
  case 8:
    break;
  default:
    uVar13 = 0;
  }
  uVar14 = param_1[10];
  if (uVar13 == uVar14) {
LAB_00ba0ab0:
    plVar11 = param_1 + 0x10;
    plVar7 = (long *)*plVar11;
    if (plVar7 == (long *)0x0) {
      return auVar16;
    }
    plVar10 = plVar7;
    plVar8 = plVar11;
    do {
      if ((ulong)plVar10[4] >= uVar13) {
        plVar8 = plVar10;
      }
      plVar10 = (long *)plVar10[(ulong)plVar10[4] < uVar13];
    } while (plVar10 != (long *)0x0);
    if (plVar8 == plVar11) {
      return auVar16;
    }
    if (uVar13 < (ulong)plVar8[4]) {
      return auVar16;
    }
    plVar11 = (long *)plVar8[1];
    if ((long *)plVar8[1] == (long *)0x0) {
      plVar11 = plVar8 + 2;
      plVar10 = (long *)*plVar11;
      if ((long *)*plVar10 != plVar8) {
        do {
          lVar15 = *plVar11;
          plVar11 = (long *)(lVar15 + 0x10);
          plVar10 = (long *)*plVar11;
        } while (*plVar10 != lVar15);
      }
    }
    else {
      do {
        plVar10 = plVar11;
        plVar11 = (long *)*plVar10;
      } while ((long *)*plVar10 != (long *)0x0);
    }
    if ((long *)param_1[0xf] == plVar8) {
      param_1[0xf] = (long)plVar10;
    }
    param_1[0x11] = param_1[0x11] + -1;
    FUN_01336080(plVar7,plVar8);
    if (plVar8 == (long *)0x0) {
      return auVar16;
    }
    lVar15 = tpidr_el0;
    plVar7 = *(long **)(lVar15 + 0x30);
    if (plVar7 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar7 = DAT_04859430;
      *(long **)(lVar15 + 0x30) = DAT_04859430;
    }
    uVar13 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar13 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,plVar8,0,8);
      return auVar16;
    }
    FUN_00c48fe8(plVar7,plVar8,0,8);
    return auVar16;
  }
  plVar11 = param_1 + 0xd;
  for (plVar7 = (long *)*plVar11; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
    if ((ulong)plVar7[4] <= uVar13) {
      if (uVar13 <= (ulong)plVar7[4]) goto LAB_00ba0ab0;
      plVar7 = plVar7 + 1;
    }
  }
  if (iVar4 != 8) goto LAB_00ba0c4c;
  pbVar5 = *(byte **)(uVar14 + 8);
  sVar2 = *param_2;
  pcVar1 = (char *)(ulong)(*pbVar5 >> 1);
  if ((*pbVar5 & 1) != 0) {
    pcVar1 = *(char **)(pbVar5 + 8);
  }
  if (((byte)sVar2 & 1) == 0) {
    if ((char *)(ulong)((byte)sVar2 >> 1) <= pcVar1) {
      pcVar6 = (char *)(ulong)((byte)sVar2 >> 1);
      goto LAB_00ba0b14;
    }
  }
  else {
    pcVar6 = *(char **)(param_2 + 8);
    if (pcVar6 <= pcVar1) {
LAB_00ba0b14:
      psVar9 = *(string **)(param_2 + 0x10);
      if (((byte)sVar2 & 1) == 0) {
        psVar9 = param_2 + 1;
      }
      iVar4 = std::string::compare((ulong)pbVar5,0,pcVar6,(ulong)psVar9);
      if (iVar4 == 0) {
        pbVar5 = *(byte **)(uVar14 + 8);
        bVar3 = *pbVar5;
        if ((bVar3 & 1) == 0) {
          uVar14 = (ulong)(bVar3 >> 1);
        }
        else {
          uVar14 = *(ulong *)(pbVar5 + 8);
        }
        sVar2 = *param_2;
        if (((byte)sVar2 & 1) == 0) {
          if (uVar14 == (byte)sVar2 >> 1) {
            return auVar16;
          }
          uVar12 = (ulong)((byte)sVar2 >> 1);
        }
        else {
          uVar12 = *(ulong *)(param_2 + 8);
          if (uVar14 == uVar12) {
            return auVar16;
          }
        }
        if ((bVar3 & 1) == 0) {
          pbVar5 = pbVar5 + 1;
        }
        else {
          pbVar5 = *(byte **)(pbVar5 + 0x10);
        }
        if (pbVar5[uVar12] == 0x2e) {
          return auVar16;
        }
      }
    }
  }
  if ((long *)param_1[0xc] != plVar11) {
    plVar7 = (long *)param_1[0xc];
    do {
      lVar15 = plVar7[4];
      if (lVar15 != 0) {
        pbVar5 = *(byte **)(lVar15 + 8);
        sVar2 = *param_2;
        pcVar1 = (char *)(ulong)(*pbVar5 >> 1);
        if ((*pbVar5 & 1) != 0) {
          pcVar1 = *(char **)(pbVar5 + 8);
        }
        if (((byte)sVar2 & 1) == 0) {
          if ((char *)(ulong)((byte)sVar2 >> 1) <= pcVar1) {
            pcVar6 = (char *)(ulong)((byte)sVar2 >> 1);
            goto LAB_00ba0b84;
          }
        }
        else {
          pcVar6 = *(char **)(param_2 + 8);
          if (pcVar6 <= pcVar1) {
LAB_00ba0b84:
            psVar9 = param_2 + 1;
            if (((byte)sVar2 & 1) != 0) {
              psVar9 = *(string **)(param_2 + 0x10);
            }
            iVar4 = std::string::compare((ulong)pbVar5,0,pcVar6,(ulong)psVar9);
            if (iVar4 == 0) {
              pbVar5 = *(byte **)(lVar15 + 8);
              bVar3 = *pbVar5;
              if ((bVar3 & 1) == 0) {
                uVar14 = (ulong)(bVar3 >> 1);
              }
              else {
                uVar14 = *(ulong *)(pbVar5 + 8);
              }
              sVar2 = *param_2;
              if (((byte)sVar2 & 1) == 0) {
                if (uVar14 == (byte)sVar2 >> 1) {
                  return auVar16;
                }
                uVar12 = (ulong)((byte)sVar2 >> 1);
              }
              else {
                uVar12 = *(ulong *)(param_2 + 8);
                if (uVar14 == uVar12) {
                  return auVar16;
                }
              }
              if ((bVar3 & 1) == 0) {
                pbVar5 = pbVar5 + 1;
              }
              else {
                pbVar5 = *(byte **)(pbVar5 + 0x10);
              }
              if (pbVar5[uVar12] == 0x2e) {
                return auVar16;
              }
            }
          }
        }
      }
      plVar8 = (long *)plVar7[1];
      if ((long *)plVar7[1] == (long *)0x0) {
        plVar8 = plVar7 + 2;
        plVar10 = (long *)*plVar8;
        if ((long *)*plVar10 != plVar7) {
          do {
            lVar15 = *plVar8;
            plVar8 = (long *)(lVar15 + 0x10);
            plVar10 = (long *)*plVar8;
          } while (*plVar10 != lVar15);
        }
      }
      else {
        do {
          plVar10 = plVar8;
          plVar8 = (long *)*plVar10;
        } while ((long *)*plVar10 != (long *)0x0);
      }
      plVar7 = plVar10;
    } while (plVar10 != plVar11);
  }
LAB_00ba0c4c:
  param_1[0x12] = uVar13;
  std::string::operator=((string *)(param_1 + 0x13),param_2);
  return ZEXT816(0);
}


