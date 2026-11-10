/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d24494; name: FUN_00d24494
 */


void FUN_00d24494(long *param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long local_80;
  long local_78;
  long local_70;
  long *local_68;
  
  if (param_2 <= (ulong)(param_1[2] - param_1[1] >> 5)) {
    FUN_01763088(param_1,param_2);
    return;
  }
  uVar9 = param_1[4];
  lVar4 = param_1[1] - *param_1 >> 5;
  uVar3 = param_2 + lVar4;
  if (0x7ffffffffffffffe < uVar9) {
    uVar9 = 0x7fffffffffffffff;
  }
  if (uVar9 < uVar3) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar5 = param_1[2] - *param_1;
  uVar6 = lVar5 >> 4;
  if (uVar3 <= uVar6) {
    uVar3 = uVar6;
  }
  plVar10 = param_1 + 3;
  if (uVar9 >> 1 <= (ulong)(lVar5 >> 5)) {
    uVar3 = uVar9;
  }
  local_70 = 0;
  local_68 = plVar10;
  if (uVar3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = (**(code **)(*(long *)*plVar10 + 0x10))((long *)*plVar10,uVar3 << 5,8);
    if (lVar5 == 0) {
      (**(code **)(*(long *)*plVar10 + 0xe8))();
    }
  }
  local_80 = lVar5 + lVar4 * 0x20;
  lVar8 = param_2 * 0x20;
  local_70 = lVar5 + uVar3 * 0x20;
  lVar4 = local_80 + param_2 * 0x20;
  puVar11 = (undefined8 *)(local_80 + 0x10);
  plVar7 = plVar10;
  local_78 = local_80;
  while( true ) {
    lVar8 = lVar8 + -0x20;
    lVar5 = *plVar7;
    if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar2 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar2 == 0) {
      puVar11[-2] = &DAT_cbf29ce484222645;
      puVar11[-1] = &DAT_03c886bc;
      *puVar11 = 0;
      puVar11[1] = 0;
    }
    else {
      if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar5;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      *puVar11 = 0;
      puVar11[1] = 0;
      puVar11[-2] = &DAT_cbf29ce484222645;
      puVar11[-1] = &DAT_03c886bc;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    }
    if (lVar8 == 0) break;
    puVar11 = puVar11 + 4;
    plVar7 = local_68;
  }
  local_78 = lVar4;
  FUN_00d24794(plVar10,*param_1,param_1[1],&local_80);
  lVar8 = *param_1;
  lVar4 = param_1[1];
  lVar5 = param_1[2];
  *param_1 = local_80;
  param_1[1] = local_78;
  param_1[2] = local_70;
  local_80 = lVar8;
  local_78 = lVar4;
  local_70 = lVar5;
  while (lVar4 != lVar8) {
    local_78 = lVar4 + -0x20;
    plVar10 = (long *)(lVar4 + -8);
    lVar4 = local_78;
    if ((long *)*plVar10 != (long *)0x0) {
      (**(code **)(*(long *)*plVar10 + 0x20))();
    }
  }
  if (lVar8 != 0) {
    lVar5 = lVar5 - lVar8;
    plVar10 = (long *)*local_68;
    uVar3 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar8,lVar5,8);
    }
    else {
      FUN_00c48fe8(plVar10,lVar8,lVar5,8);
    }
  }
  return;
}


