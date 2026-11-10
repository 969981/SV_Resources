/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00da473c; name: FUN_00da473c
 */


long FUN_00da473c(long param_1,ulong *param_2,long param_3,long param_4)

{
  ulong uVar1;
  size_t sVar2;
  ulong uVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  long *plVar11;
  char *__src;
  undefined1 *puVar12;
  byte local_440 [1024];
  
  uVar6 = *(ulong *)(param_1 + 0xb8);
  if (uVar6 == 0) {
    return 0;
  }
  uVar8 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar3 = *param_2;
  uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar8 < 2) {
    uVar9 = uVar6 - 1 & uVar3;
  }
  else if (uVar3 < uVar6) {
    uVar9 = uVar3;
  }
  else {
    uVar9 = 0;
    if (uVar6 != 0) {
      uVar9 = uVar3 / uVar6;
    }
    uVar9 = uVar3 - uVar9 * uVar6;
  }
  plVar11 = *(long **)(*(long *)(param_1 + 0xb0) + uVar9 * 8);
  if (plVar11 == (long *)0x0) {
    return 0;
  }
  plVar11 = (long *)*plVar11;
  if (plVar11 == (long *)0x0) {
    return 0;
  }
  if (uVar8 < 2) {
    do {
      if (plVar11[1] == uVar3) {
        if (plVar11[2] == uVar3) goto LAB_00da4858;
      }
      else if ((plVar11[1] & uVar6 - 1) != uVar9) {
        return 0;
      }
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) {
        return 0;
      }
    } while( true );
  }
  do {
    uVar8 = plVar11[1];
    if (uVar8 == uVar3) {
      if (plVar11[2] == uVar3) break;
    }
    else {
      if (uVar6 <= uVar8) {
        uVar1 = 0;
        if (uVar6 != 0) {
          uVar1 = uVar8 / uVar6;
        }
        uVar8 = uVar8 - uVar1 * uVar6;
      }
      if (uVar8 != uVar9) {
        return 0;
      }
    }
    plVar11 = (long *)*plVar11;
    if (plVar11 == (long *)0x0) {
      return 0;
    }
  } while( true );
LAB_00da4858:
  puVar12 = &DAT_cbf29ce484222645;
  memset(local_440,0,0x400);
  __src = *(char **)(param_3 + 8);
  local_440[0] = 0;
  strcat((char *)local_440,*(char **)(param_4 + 8));
  sVar2 = strlen((char *)local_440);
  (local_440 + sVar2)[0] = 0x2f;
  (local_440 + sVar2)[1] = 0;
  strcat((char *)local_440,__src);
  if (local_440[0] != 0) {
    pbVar4 = (byte *)((ulong)local_440 | 1);
    do {
      puVar12 = (undefined1 *)(((ulong)puVar12 ^ (ulong)local_440[0]) * 0x100000001b3);
      local_440[0] = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (local_440[0] != 0);
  }
  puVar7 = (undefined1 *)plVar11[4];
  if (puVar7 != (undefined1 *)0x0) {
    uVar6 = (long)puVar7 - ((ulong)puVar7 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar6 < 2) {
      puVar5 = (undefined1 *)((ulong)(puVar7 + -1) & (ulong)puVar12);
    }
    else {
      puVar5 = puVar12;
      if (puVar7 <= puVar12) {
        uVar8 = 0;
        if (puVar7 != (undefined1 *)0x0) {
          uVar8 = (ulong)puVar12 / (ulong)puVar7;
        }
        puVar5 = puVar12 + -(uVar8 * (long)puVar7);
      }
    }
    plVar11 = *(long **)(plVar11[3] + (long)puVar5 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      if (uVar6 < 2) {
        do {
          if ((undefined1 *)plVar11[1] == puVar12) {
            if ((undefined1 *)plVar11[2] == puVar12) goto LAB_00da49d0;
          }
          else if ((undefined1 *)((ulong)plVar11[1] & (ulong)(puVar7 + -1)) != puVar5) {
            return 0;
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) {
            return 0;
          }
        } while( true );
      }
      do {
        puVar10 = (undefined1 *)plVar11[1];
        if (puVar10 == puVar12) {
          if ((undefined1 *)plVar11[2] == puVar12) {
LAB_00da49d0:
            return plVar11[3];
          }
        }
        else {
          if (puVar7 <= puVar10) {
            uVar6 = 0;
            if (puVar7 != (undefined1 *)0x0) {
              uVar6 = (ulong)puVar10 / (ulong)puVar7;
            }
            puVar10 = puVar10 + -(uVar6 * (long)puVar7);
          }
          if (puVar10 != puVar5) {
            return 0;
          }
        }
        plVar11 = (long *)*plVar11;
        if (plVar11 == (long *)0x0) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}


