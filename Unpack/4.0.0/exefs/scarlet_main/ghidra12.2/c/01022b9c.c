/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01022b9c; name: FUN_01022b9c
 */


void FUN_01022b9c(long param_1,undefined8 *param_2,uint param_3)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  uint local_5c;
  undefined1 auStack_58 [8];
  uint *local_50;
  undefined8 *local_48;
  uint local_40;
  
  if ((param_3 < 0x10) && ((1 << (ulong)(param_3 & 0x1f) & 0xd800U) != 0)) {
    return;
  }
  local_50 = &local_5c;
  plVar4 = (long *)(param_1 + 0x90);
  plVar5 = (long *)*plVar4;
  plVar12 = (long *)(param_1 + 0x88);
  if (plVar5 == (long *)0x0) {
    plVar6 = plVar4;
    plVar10 = plVar4;
  }
  else {
    plVar10 = (long *)(param_1 + 0x90);
    do {
      while( true ) {
        plVar6 = plVar5;
        if ((int)plVar5[4] <= (int)param_3) break;
        plVar10 = plVar5;
        if ((long *)*plVar5 == (long *)0x0) goto LAB_01022c28;
        plVar5 = (long *)*plVar5;
      }
      if ((int)param_3 <= (int)plVar5[4]) break;
      plVar10 = plVar5 + 1;
      plVar5 = (long *)*plVar10;
    } while ((long *)*plVar10 != (long *)0x0);
  }
LAB_01022c28:
  puVar11 = (undefined8 *)*plVar10;
  local_5c = param_3;
  if ((undefined8 *)*plVar10 == (undefined8 *)0x0) {
    FUN_00dec8e8(&local_48,plVar12,&DAT_03d30400,&local_50,auStack_58);
    *local_48 = 0;
    local_48[1] = 0;
    local_48[2] = plVar6;
    *plVar10 = (long)local_48;
    puVar11 = local_48;
    if (*(long *)*plVar12 != 0) {
      *plVar12 = *(long *)*plVar12;
      puVar11 = (undefined8 *)*plVar10;
    }
    FUN_010108e0(*(undefined8 *)(param_1 + 0x90),puVar11);
    *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + 1;
    puVar11 = local_48;
  }
  puVar7 = (undefined8 *)puVar11[6];
  plVar5 = (long *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    uVar8 = (long)puVar7 - ((ulong)puVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      puVar9 = (undefined8 *)((long)puVar7 - 1U & (ulong)param_2);
    }
    else if (param_2 < puVar7) {
      puVar9 = param_2;
    }
    else {
      uVar1 = 0;
      if (puVar7 != (undefined8 *)0x0) {
        uVar1 = (ulong)param_2 / (ulong)puVar7;
      }
      puVar9 = (undefined8 *)((long)param_2 - uVar1 * (long)puVar7);
    }
    plVar10 = *(long **)(puVar11[5] + (long)puVar9 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if ((undefined8 *)plVar10[1] == param_2) {
            plVar5 = plVar10;
            if ((undefined8 *)plVar10[2] == param_2) break;
          }
          else if ((undefined8 *)((ulong)plVar10[1] & (long)puVar7 - 1U) != puVar9)
          goto LAB_01022c8c;
          plVar10 = (long *)*plVar10;
          plVar5 = (long *)0x0;
        } while (plVar10 != (long *)0x0);
        goto LAB_01022c90;
      }
      do {
        puVar11 = (undefined8 *)plVar10[1];
        if (puVar11 == param_2) {
          plVar5 = plVar10;
          if ((undefined8 *)plVar10[2] == param_2) goto LAB_01022c90;
        }
        else {
          if (puVar7 <= puVar11) {
            uVar8 = 0;
            if (puVar7 != (undefined8 *)0x0) {
              uVar8 = (ulong)puVar11 / (ulong)puVar7;
            }
            puVar11 = (undefined8 *)((long)puVar11 - uVar8 * (long)puVar7);
          }
          if (puVar11 != puVar9) break;
        }
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
LAB_01022c8c:
    plVar5 = (long *)0x0;
  }
LAB_01022c90:
  local_50 = &local_5c;
  if ((long *)*plVar4 != (long *)0x0) {
    plVar10 = (long *)(param_1 + 0x90);
    plVar4 = (long *)*plVar4;
    do {
      if ((int)local_5c < (int)plVar4[4]) {
        plVar10 = plVar4;
        if ((long *)*plVar4 == (long *)0x0) goto LAB_01022ce0;
        plVar6 = (long *)*plVar4;
      }
      else {
        if ((int)local_5c <= (int)plVar4[4]) goto LAB_01022cdc;
        plVar10 = plVar4 + 1;
        plVar6 = (long *)*plVar10;
        if ((long *)*plVar10 == (long *)0x0) goto LAB_01022cdc;
      }
      plVar4 = plVar6;
    } while( true );
  }
  plVar10 = plVar4;
LAB_01022ce0:
  if (*plVar10 == 0) {
    FUN_00dec8e8(&local_48,plVar12,&DAT_03d30400,&local_50,auStack_58);
    *local_48 = 0;
    local_48[1] = 0;
    local_48[2] = plVar4;
    *plVar10 = (long)local_48;
    if (*(long *)*plVar12 != 0) {
      *plVar12 = *(long *)*plVar12;
      local_48 = (undefined8 *)*plVar10;
    }
    FUN_010108e0(*(undefined8 *)(param_1 + 0x90),local_48);
    *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + 1;
  }
  if ((plVar5 != (long *)0x0) && ((*(byte *)(plVar5 + 3) >> 2 & 1) == 0)) {
    *(byte *)(plVar5 + 3) = *(byte *)(plVar5 + 3) | 4;
    local_40 = local_5c;
    local_48 = param_2;
    if (((*PTR_DAT_047d9228 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d9228), iVar2 != 0)) {
      FUN_00100190(&LAB_00b1dc18,PTR_DAT_047d9230,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d9228);
    }
    lVar3 = *(long *)PTR_DAT_047d9230;
    *(long *)PTR_DAT_047d9238 = lVar3;
    if (lVar3 != 0) {
      FUN_01022f34(lVar3,&local_48);
    }
  }
  return;
LAB_01022cdc:
  goto LAB_01022ce0;
}


