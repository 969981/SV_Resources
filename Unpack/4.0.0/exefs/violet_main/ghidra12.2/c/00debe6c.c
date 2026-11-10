/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00debe6c; name: FUN_00debe6c
 */


void FUN_00debe6c(long param_1,undefined8 *param_2,int param_3)

{
  ulong uVar1;
  bool bVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  int local_74;
  undefined1 auStack_70 [8];
  undefined8 *local_68;
  int local_60;
  int *local_38;
  
  if ((param_3 == 10) || (param_3 == 0xd)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  local_38 = &local_74;
  plVar6 = (long *)(param_1 + 0x90);
  plVar7 = (long *)*plVar6;
  plVar12 = (long *)(param_1 + 0x88);
  if (plVar7 != (long *)0x0) {
    plVar13 = (long *)(param_1 + 0x90);
    do {
      if (param_3 < (int)plVar7[4]) {
        plVar13 = plVar7;
        if ((long *)*plVar7 == (long *)0x0) {
          goto LAB_00debf04;
        }
        plVar3 = (long *)*plVar7;
      }
      else {
        if (param_3 <= (int)plVar7[4]) goto LAB_00debf04;
        plVar13 = plVar7 + 1;
        plVar3 = (long *)*plVar13;
        if ((long *)*plVar13 == (long *)0x0) goto LAB_00debf04;
      }
      plVar7 = plVar3;
    } while( true );
  }
  plVar7 = plVar6;
  plVar13 = plVar6;
LAB_00debf04:
  puVar11 = (undefined8 *)*plVar13;
  local_74 = param_3;
  if ((undefined8 *)*plVar13 == (undefined8 *)0x0) {
    FUN_00dec8e8(&local_68,plVar12,&DAT_03d30400,&local_38,auStack_70);
    *local_68 = 0;
    local_68[1] = 0;
    local_68[2] = plVar7;
    *plVar13 = (long)local_68;
    puVar11 = local_68;
    if (*(long *)*plVar12 != 0) {
      *plVar12 = *(long *)*plVar12;
      puVar11 = (undefined8 *)*plVar13;
    }
    FUN_010108e0(*(undefined8 *)(param_1 + 0x90),puVar11);
    *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + 1;
    puVar11 = local_68;
  }
  puVar8 = (undefined8 *)puVar11[6];
  if (puVar8 != (undefined8 *)0x0) {
    uVar9 = (long)puVar8 - ((ulong)puVar8 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
    uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar9 < 2) {
      puVar10 = (undefined8 *)((long)puVar8 - 1U & (ulong)param_2);
    }
    else if (param_2 < puVar8) {
      puVar10 = param_2;
    }
    else {
      uVar1 = 0;
      if (puVar8 != (undefined8 *)0x0) {
        uVar1 = (ulong)param_2 / (ulong)puVar8;
      }
      puVar10 = (undefined8 *)((long)param_2 - uVar1 * (long)puVar8);
    }
    plVar7 = *(long **)(puVar11[5] + (long)puVar10 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      if (uVar9 < 2) {
        do {
          if ((undefined8 *)plVar7[1] == param_2) {
            if ((undefined8 *)plVar7[2] == param_2) goto LAB_00dec088;
          }
          else if ((undefined8 *)((ulong)plVar7[1] & (long)puVar8 - 1U) != puVar10)
          goto LAB_00debf68;
          plVar7 = (long *)*plVar7;
          plVar13 = (long *)0x0;
        } while (plVar7 != (long *)0x0);
        goto LAB_00debf6c;
      }
      do {
        puVar11 = (undefined8 *)plVar7[1];
        if (puVar11 == param_2) {
          if ((undefined8 *)plVar7[2] == param_2) goto LAB_00dec088;
        }
        else {
          if (puVar8 <= puVar11) {
            uVar9 = 0;
            if (puVar8 != (undefined8 *)0x0) {
              uVar9 = (ulong)puVar11 / (ulong)puVar8;
            }
            puVar11 = (undefined8 *)((long)puVar11 - uVar9 * (long)puVar8);
          }
          if (puVar11 != puVar10) break;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
LAB_00debf68:
  plVar13 = (long *)0x0;
LAB_00debf6c:
  local_38 = &local_74;
  if ((long *)*plVar6 != (long *)0x0) {
    plVar7 = (long *)(param_1 + 0x90);
    plVar6 = (long *)*plVar6;
    do {
      if (local_74 < (int)plVar6[4]) {
        plVar7 = plVar6;
        if ((long *)*plVar6 == (long *)0x0) goto LAB_00debfbc;
        plVar3 = (long *)*plVar6;
      }
      else {
        if (local_74 <= (int)plVar6[4]) goto LAB_00debfb8;
        plVar7 = plVar6 + 1;
        plVar3 = (long *)*plVar7;
        if ((long *)*plVar7 == (long *)0x0) goto LAB_00debfb8;
      }
      plVar6 = plVar3;
    } while( true );
  }
  plVar7 = plVar6;
LAB_00debfbc:
  if (*plVar7 == 0) {
    FUN_00dec8e8(&local_68,plVar12,&DAT_03d30400,&local_38,auStack_70);
    *local_68 = 0;
    local_68[1] = 0;
    local_68[2] = plVar6;
    *plVar7 = (long)local_68;
    if (*(long *)*plVar12 != 0) {
      *plVar12 = *(long *)*plVar12;
      local_68 = (undefined8 *)*plVar7;
    }
    FUN_010108e0(*(undefined8 *)(param_1 + 0x90),local_68);
    *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + 1;
  }
  if ((plVar13 != (long *)0x0) && ((*(byte *)(plVar13 + 3) >> 2 & 1) != 0)) {
    local_60 = local_74;
    local_68 = param_2;
    if (((*PTR_DAT_047d9228 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d9228), iVar4 != 0)) {
      FUN_00100190(&LAB_00b1dc18,PTR_DAT_047d9230,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d9228);
    }
    lVar5 = *(long *)PTR_DAT_047d9230;
    *(long *)PTR_DAT_047d9238 = lVar5;
    if (lVar5 != 0) {
      FUN_00dec29c(lVar5,&local_68);
    }
    *(byte *)(plVar13 + 3) = *(byte *)(plVar13 + 3) & 0xf9;
    if (bVar2) {
      if (((DAT_04837510 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04837510), iVar4 != 0)) {
        DAT_04837490 = &LAB_01e090d4;
        DAT_04837498 = &LAB_00a929cc;
        DAT_048374a0 = &LAB_00a929d0;
        DAT_048374a8 = &LAB_00a929dc;
        DAT_048374b0 = param_1;
        FUN_00100190(&LAB_00a922ec,&DAT_04837490,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04837510);
      }
      FUN_00dec528(param_2 + 8,&DAT_04837490);
    }
  }
  return;
LAB_00dec088:
  plVar13 = plVar7;
  goto LAB_00debf6c;
LAB_00debfb8:
  goto LAB_00debfbc;
}


