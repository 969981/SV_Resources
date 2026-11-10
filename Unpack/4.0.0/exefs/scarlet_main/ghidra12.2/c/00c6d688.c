/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c6d688; name: FUN_00c6d688
 */


void FUN_00c6d688(long *param_1,ulong param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  long lVar12;
  undefined4 *local_80;
  undefined4 *local_78;
  long local_70;
  long *local_68;
  
  puVar1 = PTR_LAB_047d3900;
  puVar10 = (undefined4 *)param_1[1];
  if ((ulong)(param_1[2] - (long)puVar10 >> 2) < param_2) {
    uVar7 = param_1[4];
    lVar12 = (long)puVar10 - *param_1 >> 2;
    uVar4 = param_2 + lVar12;
    if (0x7ffffffffffffffe < uVar7) {
      uVar7 = 0x7fffffffffffffff;
    }
    if (uVar7 < uVar4) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar9 = param_1[2] - *param_1;
    uVar5 = lVar9 >> 1;
    if (uVar4 <= uVar5) {
      uVar4 = uVar5;
    }
    plVar8 = param_1 + 3;
    if (uVar7 >> 1 <= (ulong)(lVar9 >> 2)) {
      uVar4 = uVar7;
    }
    local_70 = 0;
    local_68 = plVar8;
    if (uVar4 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = (**(code **)(*(long *)*plVar8 + 0x10))((long *)*plVar8,uVar4 << 2,4);
      if (lVar9 == 0) {
        (**(code **)(*(long *)*plVar8 + 0xe8))();
      }
    }
    puVar10 = (undefined4 *)(lVar9 + lVar12 * 4);
    lVar12 = param_2 * 4;
    local_70 = lVar9 + uVar4 * 4;
    puVar11 = puVar10 + param_2;
    plVar6 = plVar8;
    local_80 = puVar10;
    local_78 = puVar10;
    while( true ) {
      lVar12 = lVar12 + -4;
      lVar9 = *plVar6;
      if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar3 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar3 == 0) {
        *puVar10 = 0;
      }
      else {
        if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_00c6d9d4;
        *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar9;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        *puVar10 = 0;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      }
      if (lVar12 == 0) break;
      puVar10 = puVar10 + 1;
      plVar6 = local_68;
    }
    local_78 = puVar11;
    FUN_00c6ebb0(plVar8,*param_1,param_1[1],&local_80);
    puVar10 = (undefined4 *)*param_1;
    lVar12 = param_1[1];
    *param_1 = (long)local_80;
    param_1[1] = (long)local_78;
    lVar9 = param_1[2];
    param_1[2] = local_70;
    local_78 = (undefined4 *)lVar12;
    if (lVar12 - (long)puVar10 != 0) {
      local_78 = (undefined4 *)
                 (lVar12 + ((lVar12 - (long)puVar10) - 4U >> 2 ^ 0xffffffffffffffff) * 4);
    }
    if (puVar10 != (undefined4 *)0x0) {
      lVar12 = lVar9 - (long)puVar10;
      plVar8 = (long *)*local_68;
      local_80 = puVar10;
      local_70 = lVar9;
      uVar4 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if (((uVar4 & 1) != 0) && (lVar9 = FUN_00c4e600(), 0 < *(int *)(lVar9 + 0x12c8))) {
        FUN_00c48fe8(plVar8,puVar10,lVar12,4);
        return;
      }
      (**(code **)(*plVar8 + 0x18))(plVar8,puVar10,lVar12,4);
    }
  }
  else {
    puVar11 = puVar10;
    if (param_2 != 0) {
      puVar11 = puVar10 + param_2;
      lVar12 = param_2 << 2;
      do {
        lVar9 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(puVar1,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar3 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar3 == 0) {
          *puVar10 = 0;
        }
        else {
          if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_00c6d9d4:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar9;
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
          *puVar10 = 0;
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
        }
        puVar10 = puVar10 + 1;
        lVar12 = lVar12 + -4;
      } while (lVar12 != 0);
    }
    param_1[1] = (long)puVar11;
  }
  return;
}


