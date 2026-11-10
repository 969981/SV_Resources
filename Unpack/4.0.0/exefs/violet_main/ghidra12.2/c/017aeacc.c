/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017aeacc; name: FUN_017aeacc
 */


void FUN_017aeacc(long param_1,int *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  long local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  long local_50;
  long *local_48;
  
  uVar4 = *(long *)(param_2 + 2) + 7U & 0xfffffffffffffff8;
  *(ulong *)(param_2 + 2) = uVar4;
  *(int *)(param_1 + 0x58) = (int)uVar4 - *param_2;
  lVar5 = *(long *)(param_2 + 2);
  *(long *)(param_2 + 2) = lVar5 + 0x18;
  lVar7 = *(long *)(param_1 + 0x18);
  *(int *)(lVar7 + 8) = (int)(lVar5 + 0x18) - *param_2;
  uVar4 = *(long *)(param_2 + 2) + 8U & 0xfffffffffffffff8;
  *(ulong *)(param_2 + 2) = uVar4;
  *(int *)(lVar7 + 0xc) = (int)uVar4 - *param_2;
  plVar12 = *(long **)(param_2 + 4);
  *(long *)(param_2 + 2) = *(long *)(param_2 + 2) + 8;
  local_70 = param_1;
  if ((ulong)plVar12[1] < (ulong)plVar12[2]) {
    FUN_017aef50(plVar12,&local_70);
  }
  else {
    uVar9 = plVar12[4];
    lVar5 = plVar12[1] - *plVar12 >> 7;
    uVar4 = lVar5 + 1;
    if (0x7ffffffffffffffe < uVar9) {
      uVar9 = 0x7fffffffffffffff;
    }
    if (uVar9 < uVar4) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar7 = plVar12[2] - *plVar12;
    uVar6 = lVar7 >> 6;
    if (uVar4 <= uVar6) {
      uVar4 = uVar6;
    }
    plVar1 = plVar12 + 3;
    if (uVar9 >> 1 <= (ulong)(lVar7 >> 7)) {
      uVar4 = uVar9;
    }
    local_50 = 0;
    local_48 = plVar1;
    if (uVar4 == 0) {
      local_68 = (undefined8 *)0x0;
    }
    else {
      local_68 = (undefined8 *)
                 (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,uVar4 << 7,0x10);
      if (local_68 == (undefined8 *)0x0) {
        (**(code **)(*(long *)*plVar1 + 0xe8))((long *)*plVar1);
      }
    }
    puVar10 = (undefined8 *)((long)local_68 + lVar5 * 0x80);
    local_50 = (long)local_68 + uVar4 * 0x80;
    lVar5 = *plVar1;
    local_60 = puVar10;
    local_58 = puVar10;
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar7 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar7 != 0) {
      if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar5;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      param_1 = local_70;
    }
    puVar10[2] = 0;
    puVar10[3] = 0;
    puVar10[2] = &LAB_02e6bb48;
    *puVar10 = FUN_029f3bc4;
    puVar10[1] = &LAB_02e6bb44;
    puVar10[3] = &LAB_02e6bb54;
    puVar10[4] = param_1;
    if (lVar7 != 0) {
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    }
    local_58 = local_58 + 0x10;
    FUN_017aede8(plVar1,*plVar12,plVar12[1],&local_60);
    puVar11 = (undefined8 *)*plVar12;
    puVar10 = (undefined8 *)plVar12[1];
    lVar5 = plVar12[2];
    *plVar12 = (long)local_60;
    plVar12[1] = (long)local_58;
    plVar12[2] = local_50;
    local_68 = puVar11;
    local_60 = puVar11;
    local_58 = puVar10;
    local_50 = lVar5;
    while (puVar2 = puVar10, puVar2 != puVar11) {
      puVar10 = puVar2 + -0x10;
      pcVar8 = (code *)puVar2[-0xf];
      local_58 = puVar10;
      if (pcVar8 != (code *)0x0) {
        puVar2[-0xe] = 0;
        puVar2[-0xd] = 0;
        puVar2[-0x10] = 0;
        puVar2[-0xf] = 0;
        (*pcVar8)(puVar2 + -0xc);
      }
    }
    if (puVar11 != (undefined8 *)0x0) {
      lVar5 = lVar5 - (long)puVar11;
      plVar12 = (long *)*local_48;
      uVar4 = (**(code **)(*plVar12 + 0xf8))(plVar12);
      if (((uVar4 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
        (**(code **)(*plVar12 + 0x18))(plVar12,puVar11,lVar5,0x10);
      }
      else {
        FUN_00c48fe8(plVar12,puVar11,lVar5,0x10);
      }
    }
  }
  return;
}


