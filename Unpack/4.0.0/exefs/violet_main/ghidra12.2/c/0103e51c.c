/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0103e51c; name: FUN_0103e51c
 */


void FUN_0103e51c(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined4 *puVar12;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long *local_68;
  
  puVar2 = PTR_LAB_047d3900;
  lVar10 = param_1[1];
  if ((ulong)(param_1[2] - lVar10 >> 4) < param_2) {
    plVar8 = param_1 + 3;
    lVar11 = FUN_0103e868(param_1,param_2 + (lVar10 - *param_1 >> 4));
    lVar10 = *param_1;
    lVar7 = param_1[1];
    local_70 = 0;
    local_68 = plVar8;
    if (lVar11 == 0) {
      local_88 = 0;
    }
    else {
      local_88 = (**(code **)(*(long *)*plVar8 + 0x10))((long *)*plVar8,lVar11 << 4,8);
      if (local_88 == 0) {
        (**(code **)(*(long *)*plVar8 + 0xe8))();
      }
    }
    local_80 = local_88 + (lVar7 - lVar10 >> 4) * 0x10;
    local_70 = local_88 + lVar11 * 0x10;
    local_78 = local_80;
    FUN_0103e8b8(&local_88,param_2);
    puVar2 = PTR_LAB_047d3900;
    lVar10 = *param_1;
    lVar7 = param_1[1];
    if (lVar7 == lVar10) {
      lVar7 = lVar10;
    }
    else {
      do {
        lVar11 = local_80;
        puVar9 = (undefined8 *)(local_80 + -0x10);
        lVar4 = *plVar8;
        if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(puVar2,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar6 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar6 == 0) {
          uVar1 = *(undefined8 *)(lVar7 + -8);
          *puVar9 = *(undefined8 *)(lVar7 + -0x10);
          *(undefined8 *)(lVar11 + -8) = uVar1;
        }
        else {
          if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_0103e858;
          *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar4;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
          uVar1 = *(undefined8 *)(lVar7 + -8);
          *puVar9 = *(undefined8 *)(lVar7 + -0x10);
          *(undefined8 *)(lVar11 + -8) = uVar1;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        }
        lVar7 = lVar7 + -0x10;
        local_80 = local_80 + -0x10;
      } while (lVar10 != lVar7);
      lVar10 = *param_1;
      lVar7 = param_1[1];
    }
    *param_1 = local_80;
    lVar11 = param_1[2];
    param_1[1] = local_78;
    param_1[2] = local_70;
    local_78 = lVar7;
    if (lVar7 - lVar10 != 0) {
      local_78 = lVar7 + ((lVar7 - lVar10) - 0x10U >> 4 ^ 0xffffffffffffffff) * 0x10;
    }
    if (lVar10 != 0) {
      lVar7 = lVar11 - lVar10;
      plVar8 = (long *)*local_68;
      local_88 = lVar10;
      local_80 = lVar10;
      local_70 = lVar11;
      uVar5 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if (((uVar5 & 1) != 0) && (lVar11 = FUN_00c4e600(), 0 < *(int *)(lVar11 + 0x12c8))) {
        FUN_00c48fe8(plVar8,lVar10,lVar7,8);
        return;
      }
      (**(code **)(*plVar8 + 0x18))(plVar8,lVar10,lVar7,8);
    }
  }
  else {
    lVar7 = lVar10;
    if (param_2 != 0) {
      lVar7 = lVar10 + param_2 * 0x10;
      lVar11 = param_2 << 4;
      puVar12 = (undefined4 *)(lVar10 + 8);
      do {
        lVar10 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(puVar2,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar4 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar4 == 0) {
          *(undefined8 *)(puVar12 + -2) = 0xffffffffffffffff;
          *puVar12 = 0;
        }
        else {
          if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_0103e858:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar10;
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
          *(undefined8 *)(puVar12 + -2) = 0xffffffffffffffff;
          *puVar12 = 0;
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
        }
        lVar11 = lVar11 + -0x10;
        puVar12 = puVar12 + 4;
      } while (lVar11 != 0);
    }
    param_1[1] = lVar7;
  }
  return;
}


