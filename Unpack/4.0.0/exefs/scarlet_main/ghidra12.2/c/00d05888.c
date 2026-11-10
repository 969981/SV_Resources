/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d05888; name: FUN_00d05888
 */


void FUN_00d05888(ulong *param_1)

{
  ulong *puVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long *local_b0;
  long *local_a8;
  long *local_a0;
  long *local_98;
  ulong *local_90;
  long *local_88;
  long *plStack_80;
  long *local_78;
  long *local_70;
  ulong *local_68;
  
  if (param_1[8] < 0x200) {
    uVar12 = (long)(param_1[2] - param_1[1]) >> 3;
    lVar9 = param_1[3] - *param_1;
    if ((ulong)(lVar9 >> 3) <= uVar12) {
      puVar1 = param_1 + 4;
      local_98 = (long *)0x0;
      uVar7 = lVar9 >> 2;
      if (lVar9 == 0) {
        uVar7 = 1;
      }
      local_90 = puVar1;
      plVar4 = (long *)(**(code **)(*(long *)param_1[4] + 0x10))((long *)param_1[4],uVar7 << 3,8);
      if (plVar4 == (long *)0x0) {
        (**(code **)(*(long *)*puVar1 + 0xe8))();
      }
      plVar10 = plVar4 + uVar12;
      plVar2 = plVar4 + uVar7;
      local_b0 = plVar4;
      local_a8 = plVar10;
      local_a0 = plVar10;
      local_98 = plVar2;
      lVar9 = (**(code **)(*(long *)param_1[10] + 0x10))((long *)param_1[10],0x1000,8);
      if (lVar9 == 0) {
        (**(code **)(*(long *)param_1[10] + 0xe8))();
      }
      plVar11 = plVar10;
      if (uVar12 == uVar7) {
        if (plVar10 < plVar4 || (long)plVar10 - (long)plVar4 == 0) {
          local_70 = (long *)0x0;
          lVar5 = (long)plVar2 - (long)plVar4;
          uVar12 = lVar5 >> 2;
          if (lVar5 == 0) {
            uVar12 = 1;
          }
          local_68 = puVar1;
          local_88 = (long *)(**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar12 << 3,8);
          if (local_88 == (long *)0x0) {
            (**(code **)(*(long *)*puVar1 + 0xe8))((long *)*puVar1);
          }
          plStack_80 = local_88 + (uVar12 >> 2);
          local_70 = local_88 + uVar12;
          local_78 = plStack_80;
          FUN_00d06698(&local_88,plVar10,plVar10);
          plVar11 = local_78;
          local_b0 = local_88;
          local_a8 = plStack_80;
          local_a0 = local_78;
          local_98 = local_70;
          local_88 = plVar4;
          plStack_80 = plVar10;
          local_78 = plVar10;
          local_70 = plVar2;
          if (plVar4 != (long *)0x0) {
            plVar10 = (long *)*local_68;
            uVar12 = (**(code **)(*plVar10 + 0xf8))(plVar10);
            if (((uVar12 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
              (**(code **)(*plVar10 + 0x18))(plVar10,plVar4,lVar5,8);
            }
            else {
              FUN_00c48fe8(plVar10,plVar4,lVar5,8);
            }
          }
        }
        else {
          lVar5 = (long)plVar10 - (long)plVar4 >> 3;
          uVar12 = lVar5 + 2;
          if (-1 < lVar5 + 1) {
            uVar12 = lVar5 + 1;
          }
          plVar11 = (long *)((long)plVar10 + (uVar12 & 0x3ffffffffffffffe) * -4);
          local_a8 = plVar11;
          local_a0 = plVar11;
        }
      }
      uVar12 = *puVar1;
      if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar5 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar5 == 0) {
        *plVar11 = lVar9;
      }
      else {
        if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(ulong *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar12;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
        *plVar11 = lVar9;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      }
      local_a0 = local_a0 + 1;
      uVar12 = param_1[2];
      uVar7 = uVar12;
      if (uVar12 != param_1[1]) {
        do {
          uVar7 = uVar7 - 8;
          FUN_00d05d0c(&local_b0,uVar7);
        } while (uVar7 != param_1[1]);
        uVar12 = param_1[2];
      }
      plVar4 = (long *)*param_1;
      *param_1 = (ulong)local_b0;
      param_1[1] = (ulong)local_a8;
      param_1[2] = (ulong)local_a0;
      uVar8 = param_1[3];
      param_1[3] = (ulong)local_98;
      local_a0 = (long *)uVar12;
      if (uVar7 != uVar12) {
        local_a0 = (long *)(uVar12 + ((uVar12 - uVar7) - 8 >> 3 ^ 0xffffffffffffffff) * 8);
      }
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar9 = uVar8 - (long)plVar4;
      plVar10 = (long *)*local_90;
      local_b0 = plVar4;
      local_a8 = (long *)uVar7;
      local_98 = (long *)uVar8;
      uVar12 = (**(code **)(*plVar10 + 0xf8))(plVar10);
      if (((uVar12 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar10 + 0x18))(plVar10,plVar4,lVar9,8);
        return;
      }
      FUN_00c48fe8(plVar10,plVar4,lVar9,8);
      return;
    }
    if (param_1[3] != param_1[2]) {
      local_88 = (long *)(**(code **)(*(long *)param_1[10] + 0x10))((long *)param_1[10],0x1000,8);
      if (local_88 == (long *)0x0) {
        (**(code **)(*(long *)param_1[10] + 0xe8))();
      }
      FUN_028a4c4c(param_1,&local_88);
      return;
    }
    local_88 = (long *)(**(code **)(*(long *)param_1[10] + 0x10))((long *)param_1[10],0x1000,8);
    if (local_88 == (long *)0x0) {
      (**(code **)(*(long *)param_1[10] + 0xe8))();
    }
    FUN_028a4ec8(param_1,&local_88);
  }
  else {
    param_1[8] = param_1[8] - 0x200;
  }
  local_88 = *(long **)param_1[1];
  param_1[1] = (ulong)((undefined8 *)param_1[1] + 1);
  FUN_00d05f9c(param_1,&local_88);
  return;
}


