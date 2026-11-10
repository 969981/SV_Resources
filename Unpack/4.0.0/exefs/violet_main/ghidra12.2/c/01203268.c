/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01203268; name: FUN_01203268
 */


void FUN_01203268(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  ulong uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  long local_70;
  long *plStack_68;
  
  puVar13 = (undefined8 *)param_1[1];
  plVar5 = param_1 + 3;
  if (puVar13 < (undefined8 *)param_1[2]) {
    lVar11 = *plVar5;
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar4 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar4 != 0) {
      if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_01203644:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar11;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    }
    uVar10 = *param_3;
    uVar2 = *param_4;
    *puVar13 = *param_2;
    puVar13[1] = param_2[1];
    puVar13[2] = param_2[2];
    plVar5 = (long *)param_2[3];
    puVar13[3] = plVar5;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))();
    }
    puVar13[4] = uVar10;
    *(undefined4 *)(puVar13 + 5) = uVar2;
    if (lVar4 != 0) {
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    }
    param_1[1] = (long)(puVar13 + 6);
  }
  else {
    uVar8 = param_1[4];
    lVar11 = (long)puVar13 - *param_1 >> 4;
    if (0x7ffffffffffffffe < uVar8) {
      uVar8 = 0x7fffffffffffffff;
    }
    uVar1 = lVar11 * -0x5555555555555555 + 1;
    if (uVar8 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar4 = param_1[2] - *param_1 >> 4;
    local_70 = 0;
    uVar7 = lVar4 * 0x5555555555555556;
    if (uVar1 <= uVar7) {
      uVar1 = uVar7;
    }
    if (uVar8 >> 1 <= (ulong)(lVar4 * -0x5555555555555555)) {
      uVar1 = uVar8;
    }
    plStack_68 = plVar5;
    if (uVar1 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (**(code **)(*(long *)*plVar5 + 0x10))((long *)*plVar5,uVar1 * 0x30,8);
      if (lVar4 == 0) {
        (**(code **)(*(long *)*plVar5 + 0xe8))();
      }
    }
    puVar13 = (undefined8 *)(lVar4 + lVar11 * 0x10);
    local_70 = lVar4 + uVar1 * 0x30;
    lVar12 = *plVar5;
    local_88 = lVar4;
    local_80 = puVar13;
    local_78 = puVar13;
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar6 != 0) {
      if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_01203644;
      *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar12;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    }
    uVar10 = *param_3;
    uVar2 = *param_4;
    *puVar13 = *param_2;
    lVar12 = lVar4 + lVar11 * 0x10;
    *(undefined8 *)(lVar12 + 8) = param_2[1];
    *(undefined8 *)(lVar12 + 0x10) = param_2[2];
    plVar5 = (long *)param_2[3];
    *(long **)(lVar12 + 0x18) = plVar5;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))();
    }
    lVar4 = lVar4 + lVar11 * 0x10;
    *(undefined8 *)(lVar4 + 0x20) = uVar10;
    *(undefined4 *)(lVar4 + 0x28) = uVar2;
    if (lVar6 != 0) {
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    }
    local_78 = local_78 + 6;
    FUN_01203650(param_1,&local_88);
    puVar13 = local_80;
    if (local_78 != local_80) {
      puVar9 = local_78 + -6;
      plVar5 = local_78 + -3;
      local_78 = puVar9;
      if ((long *)*plVar5 != (long *)0x0) {
        (**(code **)(*(long *)*plVar5 + 0x20))();
      }
      while (puVar9 != puVar13) {
        local_78 = puVar9 + -6;
        plVar5 = puVar9 + -3;
        puVar9 = local_78;
        if ((long *)*plVar5 != (long *)0x0) {
          (**(code **)(*(long *)*plVar5 + 0x20))();
        }
      }
    }
    lVar11 = local_88;
    if (local_88 != 0) {
      lVar4 = local_70 - local_88;
      plVar5 = (long *)*plStack_68;
      uVar8 = (**(code **)(*plVar5 + 0xf8))(plVar5);
      if (((uVar8 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
        (**(code **)(*plVar5 + 0x18))(plVar5,lVar11,lVar4,8);
      }
      else {
        FUN_00c48fe8(plVar5,lVar11,lVar4,8);
      }
    }
  }
  return;
}


