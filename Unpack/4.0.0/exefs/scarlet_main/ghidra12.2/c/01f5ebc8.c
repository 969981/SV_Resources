/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f5ebc8; name: FUN_01f5ebc8
 */


void FUN_01f5ebc8(long *param_1,ulong param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long *plStack_68;
  
  puVar1 = PTR_LAB_047d3900;
  puVar11 = (undefined8 *)param_1[1];
  if ((ulong)(param_1[2] - (long)puVar11 >> 3) < param_2) {
    plVar10 = param_1 + 3;
    lVar3 = FUN_01f5c17c(param_1,param_2 + ((long)puVar11 - *param_1 >> 3));
    lVar9 = *param_1;
    lVar6 = param_1[1];
    local_70 = 0;
    plStack_68 = plVar10;
    if (lVar3 == 0) {
      local_88 = 0;
    }
    else {
      local_88 = (**(code **)(*(long *)*plVar10 + 0x10))((long *)*plVar10,lVar3 << 3,8);
      if (local_88 == 0) {
        (**(code **)(*(long *)*plVar10 + 0xe8))();
      }
    }
    local_80 = local_88 + (lVar6 - lVar9 >> 3) * 8;
    local_70 = local_88 + lVar3 * 8;
    local_78 = local_80;
    FUN_01f5ef94(&local_88,param_2);
    puVar1 = PTR_LAB_047d3900;
    lVar9 = *param_1;
    lVar6 = param_1[1];
    if (lVar6 == lVar9) {
      lVar6 = lVar9;
    }
    else {
      do {
        lVar3 = local_80;
        lVar7 = *plVar10;
        if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(puVar1,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar5 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar5 == 0) {
          uVar8 = *(undefined8 *)(lVar6 + -8);
          *(undefined8 *)(lVar6 + -8) = 0;
          *(undefined8 *)(lVar3 + -8) = uVar8;
        }
        else {
          if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_01f5ef80;
          *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar7;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
          uVar8 = *(undefined8 *)(lVar6 + -8);
          *(undefined8 *)(lVar6 + -8) = 0;
          *(undefined8 *)(lVar3 + -8) = uVar8;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
        }
        lVar6 = lVar6 + -8;
        local_80 = local_80 + -8;
      } while (lVar9 != lVar6);
      lVar9 = *param_1;
      lVar6 = param_1[1];
    }
    *param_1 = local_80;
    param_1[1] = local_78;
    lVar7 = param_1[2];
    param_1[2] = local_70;
    lVar3 = lVar9;
    local_80 = lVar9;
    local_78 = lVar6;
    local_70 = lVar7;
    if (lVar6 != lVar9) {
      local_78 = lVar6 + -8;
      local_88 = lVar9;
      if (*(long **)(lVar6 + -8) != (long *)0x0) {
        (**(code **)(**(long **)(lVar6 + -8) + 0x20))();
      }
      lVar3 = local_88;
      if (local_78 != lVar9) {
        plVar10 = (long *)(local_78 + -8);
        lVar6 = local_78 + -8;
        if ((long *)*plVar10 != (long *)0x0) {
          local_78 = local_78 + -8;
          (**(code **)(*(long *)*plVar10 + 0x20))();
          lVar6 = local_78;
        }
        while( true ) {
          lVar3 = local_88;
          local_78 = lVar6;
          if (lVar6 == lVar9) break;
          local_78 = lVar6 + -8;
          plVar10 = (long *)(lVar6 + -8);
          lVar6 = local_78;
          if ((long *)*plVar10 != (long *)0x0) {
            (**(code **)(*(long *)*plVar10 + 0x20))();
            lVar6 = local_78;
          }
        }
      }
    }
    if (lVar3 != 0) {
      lVar9 = local_70 - lVar3;
      plVar10 = (long *)*plStack_68;
      local_88 = lVar3;
      uVar4 = (**(code **)(*plVar10 + 0xf8))(plVar10);
      if (((uVar4 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*plVar10 + 0x18))(plVar10,lVar3,lVar9,8);
      }
      else {
        FUN_00c48fe8(plVar10,lVar3,lVar9,8);
      }
    }
  }
  else {
    puVar12 = puVar11;
    if (param_2 != 0) {
      puVar12 = puVar11 + param_2;
      lVar9 = param_2 << 3;
      do {
        lVar6 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(puVar1,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar3 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar3 == 0) {
          *puVar11 = 0;
        }
        else {
          if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_01f5ef80:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar6;
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
          *puVar11 = 0;
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
        }
        puVar11 = puVar11 + 1;
        lVar9 = lVar9 + -8;
      } while (lVar9 != 0);
    }
    param_1[1] = (long)puVar12;
  }
  return;
}


