/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c12278; name: FUN_00c12278
 */


void FUN_00c12278(undefined8 *param_1)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  uint *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  int iVar10;
  byte *pbVar11;
  long *plVar12;
  long *plVar13;
  int local_90;
  long *local_88;
  long lStack_80;
  ulong local_78;
  long local_70;
  long *local_68;
  
  *param_1 = &PTR_FUN_0455c658;
  cVar1 = *(char *)((long)param_1 + 0x44);
  if (cVar1 == '\0') {
    lStack_80 = param_1[9];
    local_78 = *(ulong *)(lStack_80 + 0x18);
    uVar3 = *(ulong *)(lStack_80 + 8);
    if (local_78 < uVar3) {
      do {
        local_88 = *(long **)(*(long *)(lStack_80 + 0x20) + local_78 * 8);
        if (local_88 != (long *)0x0) {
          if (local_88 == *(long **)(*(long *)(lStack_80 + 0x20) + (local_78 ^ 1) * 8)) {
            local_70 = *local_88;
            local_88 = *(long **)(local_70 + 0x20);
          }
          else {
            local_70 = 0;
          }
          goto LAB_00c12334;
        }
        local_78 = local_78 + 1;
      } while (uVar3 != local_78);
      local_70 = 0;
      local_88 = (long *)0x0;
      local_78 = uVar3;
    }
    else {
      local_70 = 0;
      local_88 = (long *)0x0;
    }
LAB_00c12334:
    iVar2 = 2;
    local_90 = 2;
    local_68 = (long *)0x0;
  }
  else {
    iVar2 = 1;
    local_68 = *(long **)(param_1[9] + 0x18);
    local_90 = 1;
    local_88 = (long *)0x0;
    local_70 = 0;
  }
  plVar7 = param_1 + 7;
  while( true ) {
    plVar9 = local_68;
    iVar10 = 1;
    if (cVar1 == '\0') {
      iVar10 = 2;
    }
    if ((iVar2 == iVar10) &&
       (((plVar13 = local_68, iVar2 != 1 && (plVar13 = local_88, iVar2 == 0)) ||
        (plVar13 == (long *)0x0)))) break;
    plVar13 = local_68 + 4;
    if (iVar2 != 1) {
      plVar13 = local_88 + 2;
    }
    FUN_00c12a00(*plVar13 + 0x10);
    if (iVar2 == 1) {
      local_68 = (long *)*plVar9;
    }
    else {
      FUN_00c1a764(&local_88);
      iVar2 = local_90;
    }
    cVar1 = *(char *)((long)param_1 + 0x44);
  }
  FUN_00c12cbc(plVar7);
  FUN_00c12cbc(plVar7);
  if (*plVar7 == 0) {
    if (*(char *)((long)param_1 + 0x44) == '\0') {
      plVar7 = (long *)param_1[9];
      if (plVar7 != (long *)0x0) {
        if (((plVar7[4] != 0) && (FUN_00c19da8(plVar7), plVar7[5] == 0)) &&
           (lVar8 = plVar7[4], lVar8 != 0)) goto LAB_00c126d0;
        goto LAB_00c12748;
      }
    }
    else {
      plVar7 = (long *)param_1[9];
      if (plVar7 != (long *)0x0) {
        if ((long *)plVar7[3] != (long *)0x0) {
          lVar8 = tpidr_el0;
          plVar9 = (long *)plVar7[3];
          do {
            while( true ) {
              plVar13 = (long *)*plVar9;
              if (((int)plVar9[3] == 9) && (pbVar11 = (byte *)plVar9[2], pbVar11 != (byte *)0x0)) {
                if (((*pbVar11 & 1) != 0) && (lVar6 = *(long *)(pbVar11 + 0x10), lVar6 != 0)) {
                  plVar12 = *(long **)(lVar8 + 0x30);
                  if (plVar12 == (long *)0x0) {
                    if (((DAT_04859438 & 1) == 0) &&
                       (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
                      DAT_04859430 = DAT_04859418;
                      __cxa_guard_release(&DAT_04859438);
                    }
                    plVar12 = DAT_04859430;
                    *(long **)(lVar8 + 0x30) = DAT_04859430;
                  }
                  uVar3 = (**(code **)(*plVar12 + 0xf8))(plVar12);
                  if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1))
                  {
                    (**(code **)(*plVar12 + 0x18))(plVar12,lVar6,0,8);
                  }
                  else {
                    FUN_00c48fe8(plVar12,lVar6,0,8);
                  }
                }
                plVar12 = *(long **)(lVar8 + 0x30);
                if (plVar12 == (long *)0x0) {
                  if (((DAT_04859438 & 1) == 0) &&
                     (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
                    DAT_04859430 = DAT_04859418;
                    __cxa_guard_release(&DAT_04859438);
                  }
                  plVar12 = DAT_04859430;
                  *(long **)(lVar8 + 0x30) = DAT_04859430;
                }
                uVar3 = (**(code **)(*plVar12 + 0xf8))(plVar12);
                if (((uVar3 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
                  (**(code **)(*plVar12 + 0x18))(plVar12,pbVar11,0,8);
                }
                else {
                  FUN_00c48fe8(plVar12,pbVar11,0,8);
                }
              }
              if (plVar7[4] == 0) break;
LAB_00c124d4:
              plVar9 = plVar13;
              if (plVar13 == (long *)0x0) goto LAB_00c126bc;
            }
            plVar12 = *(long **)(lVar8 + 0x30);
            if (plVar12 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar12 = DAT_04859430;
              *(long **)(lVar8 + 0x30) = DAT_04859430;
            }
            uVar3 = (**(code **)(*plVar12 + 0xf8))(plVar12);
            if (((uVar3 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
              (**(code **)(*plVar12 + 0x18))(plVar12,plVar9,0,8);
              goto LAB_00c124d4;
            }
            FUN_00c48fe8(plVar12,plVar9,0,8);
            plVar9 = plVar13;
          } while (plVar13 != (long *)0x0);
        }
LAB_00c126bc:
        lVar8 = *plVar7;
        *plVar7 = 0;
        if ((lVar8 != 0) && (plVar7[2] == 0)) {
LAB_00c126d0:
          lVar6 = tpidr_el0;
          plVar9 = *(long **)(lVar6 + 0x30);
          if (plVar9 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar9 = DAT_04859430;
            *(long **)(lVar6 + 0x30) = DAT_04859430;
          }
          uVar3 = (**(code **)(*plVar9 + 0xf8))(plVar9);
          if (((uVar3 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
            (**(code **)(*plVar9 + 0x18))(plVar9,lVar8,0,8);
          }
          else {
            FUN_00c48fe8(plVar9,lVar8,0,8);
          }
        }
LAB_00c12748:
        lVar8 = tpidr_el0;
        plVar9 = *(long **)(lVar8 + 0x30);
        if (plVar9 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar9 = DAT_04859430;
          *(long **)(lVar8 + 0x30) = DAT_04859430;
        }
        uVar3 = (**(code **)(*plVar9 + 0xf8))(plVar9);
        if (((uVar3 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
          (**(code **)(*plVar9 + 0x18))(plVar9,plVar7,0,8);
        }
        else {
          FUN_00c48fe8(plVar9,plVar7,0,8);
        }
      }
    }
  }
  plVar7 = (long *)param_1[2];
  *param_1 = &PTR_LAB_0455c5c8;
  if ((plVar7 == (long *)0x0) || (param_1[1] != 0)) goto LAB_00c12848;
  puVar5 = (uint *)plVar7[2];
  if ((puVar5 != (uint *)0x0) && (*plVar7 == 0)) {
    uVar3 = (ulong)*puVar5;
    if (0 < (int)*puVar5) {
      do {
        puVar5 = puVar5 + 2;
        if (*(long **)puVar5 != (long *)0x0) {
          (**(code **)(**(long **)puVar5 + 8))();
        }
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      puVar5 = (uint *)plVar7[2];
      if (puVar5 == (uint *)0x0) goto LAB_00c127fc;
    }
    operator_delete__(puVar5);
  }
LAB_00c127fc:
  lVar8 = tpidr_el0;
  plVar9 = *(long **)(lVar8 + 0x30);
  if (plVar9 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar9 = DAT_04859430;
    *(long **)(lVar8 + 0x30) = DAT_04859430;
  }
  uVar3 = (**(code **)(*plVar9 + 0xf8))(plVar9);
  if (((uVar3 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
    (**(code **)(*plVar9 + 0x18))(plVar9,plVar7,0,8);
  }
  else {
    FUN_00c48fe8(plVar9,plVar7,0,8);
  }
LAB_00c12848:
  FUN_00bb1224(param_1 + 5);
  return;
}


