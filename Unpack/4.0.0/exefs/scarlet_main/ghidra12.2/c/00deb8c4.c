/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00deb8c4; name: FUN_00deb8c4
 */


void FUN_00deb8c4(long param_1,ulong param_2,int param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  int local_6c;
  undefined1 auStack_68 [8];
  int *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  
  local_60 = &local_6c;
  plVar12 = (long *)(param_1 + 0x90);
  plVar4 = (long *)*plVar12;
  plVar10 = (long *)(param_1 + 0x88);
  if (plVar4 != (long *)0x0) {
    plVar11 = (long *)(param_1 + 0x90);
    do {
      if (param_3 < (int)plVar4[4]) {
        plVar11 = plVar4;
        if ((long *)*plVar4 == (long *)0x0) {
          goto LAB_00deb938;
        }
        plVar9 = (long *)*plVar4;
      }
      else {
        if (param_3 <= (int)plVar4[4]) goto LAB_00deb938;
        plVar11 = plVar4 + 1;
        plVar9 = (long *)*plVar11;
        if ((long *)*plVar11 == (long *)0x0) goto LAB_00deb938;
      }
      plVar4 = plVar9;
    } while( true );
  }
  plVar4 = plVar12;
  plVar11 = plVar12;
LAB_00deb938:
  puVar3 = (undefined8 *)*plVar11;
  local_6c = param_3;
  if ((undefined8 *)*plVar11 == (undefined8 *)0x0) {
    FUN_00dec8e8(&local_58,plVar10,&DAT_03d30400,&local_60,auStack_68);
    *local_58 = 0;
    local_58[1] = 0;
    local_58[2] = plVar4;
    *plVar11 = (long)local_58;
    puVar3 = local_58;
    if (*(long *)*plVar10 != 0) {
      *plVar10 = *(long *)*plVar10;
      puVar3 = (undefined8 *)*plVar11;
    }
    FUN_010108e0(*(undefined8 *)(param_1 + 0x90),puVar3);
    *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + 1;
    puVar3 = local_58;
  }
  uVar5 = puVar3[6];
  if (uVar5 != 0) {
    uVar7 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar7 < 2) {
      uVar8 = uVar5 - 1 & param_2;
    }
    else if (param_2 < uVar5) {
      uVar8 = param_2;
    }
    else {
      uVar8 = 0;
      if (uVar5 != 0) {
        uVar8 = param_2 / uVar5;
      }
      uVar8 = param_2 - uVar8 * uVar5;
    }
    plVar4 = *(long **)(puVar3[5] + uVar8 * 8);
    if ((plVar4 != (long *)0x0) && (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar4[1] == param_2) {
            if (plVar4[2] == param_2) goto LAB_00deba38;
          }
          else if ((plVar4[1] & uVar5 - 1) != uVar8) goto LAB_00deb99c;
          plVar4 = (long *)*plVar4;
          plVar11 = (long *)0x0;
        } while (plVar4 != (long *)0x0);
        goto LAB_00deb9a0;
      }
      do {
        uVar7 = plVar4[1];
        if (uVar7 == param_2) {
          if (plVar4[2] == param_2) goto LAB_00deba38;
        }
        else {
          if (uVar5 <= uVar7) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar7 / uVar5;
            }
            uVar7 = uVar7 - uVar1 * uVar5;
          }
          if (uVar7 != uVar8) break;
        }
        plVar4 = (long *)*plVar4;
      } while (plVar4 != (long *)0x0);
    }
  }
LAB_00deb99c:
  plVar11 = (long *)0x0;
LAB_00deb9a0:
  local_60 = &local_6c;
  plVar4 = (long *)*plVar12;
  if (plVar4 == (long *)0x0) {
    plVar6 = plVar12;
    plVar9 = plVar12;
  }
  else {
    plVar9 = (long *)(param_1 + 0x90);
    do {
      while( true ) {
        plVar6 = plVar4;
        if ((int)plVar4[4] <= local_6c) break;
        plVar9 = plVar4;
        if ((long *)*plVar4 == (long *)0x0) goto LAB_00debaec;
        plVar4 = (long *)*plVar4;
      }
      if (local_6c <= (int)plVar4[4]) break;
      plVar9 = plVar4 + 1;
      plVar4 = (long *)*plVar9;
    } while ((long *)*plVar9 != (long *)0x0);
  }
LAB_00debaec:
  if (*plVar9 == 0) {
    FUN_00dec8e8(&local_58,plVar10,&DAT_03d30400,&local_60,auStack_68);
    *local_58 = 0;
    local_58[1] = 0;
    local_58[2] = plVar6;
    *plVar9 = (long)local_58;
    puVar3 = local_58;
    if (*(long *)*plVar10 != 0) {
      *plVar10 = *(long *)*plVar10;
      puVar3 = (undefined8 *)*plVar9;
    }
    FUN_010108e0(*(undefined8 *)(param_1 + 0x90),puVar3);
    *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + 1;
  }
  if (plVar11 != (long *)0x0) {
    FUN_00debe6c(param_1,param_2,local_6c);
    local_60 = &local_6c;
    plVar4 = *(long **)(param_1 + 0x90);
    if (plVar4 != (long *)0x0) {
      plVar12 = (long *)(param_1 + 0x90);
      do {
        if (local_6c < (int)plVar4[4]) {
          plVar12 = plVar4;
          if ((long *)*plVar4 == (long *)0x0) {
            goto LAB_00debb6c;
          }
          plVar9 = (long *)*plVar4;
        }
        else {
          if (local_6c <= (int)plVar4[4]) goto LAB_00debb68;
          plVar12 = plVar4 + 1;
          plVar9 = (long *)*plVar12;
          if ((long *)*plVar12 == (long *)0x0) goto LAB_00debb68;
        }
        plVar4 = plVar9;
      } while( true );
    }
    plVar4 = plVar12;
LAB_00debb6c:
    puVar3 = (undefined8 *)*plVar12;
    if ((undefined8 *)*plVar12 == (undefined8 *)0x0) {
      FUN_00dec8e8(&local_58,plVar10,&DAT_03d30400,&local_60,auStack_68);
      *local_58 = 0;
      local_58[1] = 0;
      local_58[2] = plVar4;
      *plVar12 = (long)local_58;
      puVar3 = local_58;
      if (*(long *)*plVar10 != 0) {
        *plVar10 = *(long *)*plVar10;
        puVar3 = (undefined8 *)*plVar12;
      }
      FUN_010108e0(*(undefined8 *)(param_1 + 0x90),puVar3);
      *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + 1;
      puVar3 = local_58;
    }
    FUN_00debd0c(&local_58,puVar3 + 5,plVar11);
    puVar3 = local_58;
    local_58 = (undefined8 *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
      plVar12 = (long *)*local_50;
      uVar5 = (**(code **)(*plVar12 + 0xf8))(plVar12);
      if (((uVar5 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
        (**(code **)(*plVar12 + 0x18))(plVar12,puVar3,0x20,8);
      }
      else {
        FUN_00c48fe8(plVar12,puVar3,0x20,8);
      }
    }
  }
  return;
LAB_00deba38:
  plVar11 = plVar4;
  goto LAB_00deb9a0;
LAB_00debb68:
  goto LAB_00debb6c;
}


