/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010c2da8; name: FUN_010c2da8
 */


void FUN_010c2da8(long param_1,ulong param_2,int param_3,ulong param_4)

{
  ulong uVar1;
  bool bVar2;
  long *plVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  int local_5c;
  undefined1 auStack_58 [8];
  int *local_50;
  undefined8 *local_48 [3];
  
  if ((param_3 == 10) || (param_3 == 0xd)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  local_50 = &local_5c;
  plVar6 = (long *)(param_1 + 0x90);
  plVar7 = (long *)*plVar6;
  plVar12 = (long *)(param_1 + 0x88);
  if (plVar7 != (long *)0x0) {
    plVar11 = (long *)(param_1 + 0x90);
    do {
      if (param_3 < (int)plVar7[4]) {
        plVar11 = plVar7;
        if ((long *)*plVar7 == (long *)0x0) {
          goto LAB_010c2e34;
        }
        plVar3 = (long *)*plVar7;
      }
      else {
        if (param_3 <= (int)plVar7[4]) goto LAB_010c2e34;
        plVar11 = plVar7 + 1;
        plVar3 = (long *)*plVar11;
        if ((long *)*plVar11 == (long *)0x0) goto LAB_010c2e34;
      }
      plVar7 = plVar3;
    } while( true );
  }
  plVar7 = plVar6;
  plVar11 = plVar6;
LAB_010c2e34:
  puVar5 = (undefined8 *)*plVar11;
  local_5c = param_3;
  if ((undefined8 *)*plVar11 == (undefined8 *)0x0) {
    FUN_00dec8e8(local_48,plVar12,&DAT_03d30400,&local_50,auStack_58);
    *local_48[0] = 0;
    local_48[0][1] = 0;
    local_48[0][2] = plVar7;
    *plVar11 = (long)local_48[0];
    puVar5 = local_48[0];
    if (*(long *)*plVar12 != 0) {
      *plVar12 = *(long *)*plVar12;
      puVar5 = (undefined8 *)*plVar11;
    }
    FUN_010108e0(*(undefined8 *)(param_1 + 0x90),puVar5);
    *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + 1;
    param_4 = param_4 & 0xffffffff;
    puVar5 = local_48[0];
  }
  uVar8 = puVar5[6];
  plVar7 = (long *)0x0;
  if (uVar8 != 0) {
    uVar9 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
    uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar9 < 2) {
      uVar10 = uVar8 - 1 & param_2;
    }
    else if (param_2 < uVar8) {
      uVar10 = param_2;
    }
    else {
      uVar10 = 0;
      if (uVar8 != 0) {
        uVar10 = param_2 / uVar8;
      }
      uVar10 = param_2 - uVar10 * uVar8;
    }
    plVar11 = *(long **)(puVar5[5] + uVar10 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      if (uVar9 < 2) {
        do {
          if (plVar11[1] == param_2) {
            plVar7 = plVar11;
            if (plVar11[2] == param_2) break;
          }
          else if ((plVar11[1] & uVar8 - 1) != uVar10) goto LAB_010c2e98;
          plVar11 = (long *)*plVar11;
          plVar7 = (long *)0x0;
        } while (plVar11 != (long *)0x0);
        goto LAB_010c2e9c;
      }
      do {
        uVar9 = plVar11[1];
        if (uVar9 == param_2) {
          plVar7 = plVar11;
          if (plVar11[2] == param_2) goto LAB_010c2e9c;
        }
        else {
          if (uVar8 <= uVar9) {
            uVar1 = 0;
            if (uVar8 != 0) {
              uVar1 = uVar9 / uVar8;
            }
            uVar9 = uVar9 - uVar1 * uVar8;
          }
          if (uVar9 != uVar10) break;
        }
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
LAB_010c2e98:
    plVar7 = (long *)0x0;
  }
LAB_010c2e9c:
  local_50 = &local_5c;
  if ((long *)*plVar6 != (long *)0x0) {
    plVar11 = (long *)(param_1 + 0x90);
    plVar6 = (long *)*plVar6;
    do {
      if (local_5c < (int)plVar6[4]) {
        plVar11 = plVar6;
        if ((long *)*plVar6 == (long *)0x0) goto LAB_010c2eec;
        plVar3 = (long *)*plVar6;
      }
      else {
        if (local_5c <= (int)plVar6[4]) goto LAB_010c2ee8;
        plVar11 = plVar6 + 1;
        plVar3 = (long *)*plVar11;
        if ((long *)*plVar11 == (long *)0x0) goto LAB_010c2ee8;
      }
      plVar6 = plVar3;
    } while( true );
  }
  plVar11 = plVar6;
LAB_010c2eec:
  if (*plVar11 == 0) {
    FUN_00dec8e8(local_48,plVar12,&DAT_03d30400,&local_50,auStack_58);
    *local_48[0] = 0;
    local_48[0][1] = 0;
    local_48[0][2] = plVar6;
    *plVar11 = (long)local_48[0];
    if (*(long *)*plVar12 != 0) {
      *plVar12 = *(long *)*plVar12;
      local_48[0] = (undefined8 *)*plVar11;
    }
    FUN_010108e0(*(undefined8 *)(param_1 + 0x90),local_48[0]);
    *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + 1;
    param_4 = param_4 & 0xffffffff;
  }
  if (plVar7 != (long *)0x0) {
    if ((param_4 & 1) == 0) {
      *(byte *)(plVar7 + 3) = *(byte *)(plVar7 + 3) & 0xfb;
      if (!bVar2) {
        return;
      }
      if (((DAT_04837480 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04837480), iVar4 != 0)) {
        DAT_04837400 = &LAB_00a9266c;
        DAT_04837408 = &LAB_00a929b0;
        DAT_04837410 = &LAB_00a929b4;
        DAT_04837418 = &LAB_00a929c0;
        DAT_04837420 = param_1;
        FUN_00100190(&LAB_00a922ec,&DAT_04837400,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04837480);
      }
      puVar5 = &DAT_04837400;
    }
    else {
      *(byte *)(plVar7 + 3) = *(byte *)(plVar7 + 3) | 2;
      if (!bVar2) {
        return;
      }
      if (((DAT_048373f0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_048373f0), iVar4 != 0)) {
        DAT_04837370 = &LAB_00a9230c;
        DAT_04837378 = &LAB_00a92650;
        DAT_04837380 = &LAB_00a92654;
        DAT_04837388 = &LAB_00a92660;
        DAT_04837390 = param_1;
        FUN_00100190(&LAB_00a922ec,&DAT_04837370,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_048373f0);
      }
      puVar5 = &DAT_04837370;
    }
    FUN_00dec528(param_2 + 0x40,puVar5);
  }
  return;
LAB_010c2ee8:
  goto LAB_010c2eec;
}


