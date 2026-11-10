/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012d0398; name: FUN_012d0398
 */


void FUN_012d0398(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  int iVar3;
  void *pvVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *puVar17;
  void *local_80;
  long *local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  plVar14 = *(long **)(param_1 + 0x78);
  pvVar4 = (void *)(**(code **)(*plVar14 + 0x10))(plVar14,0x438,8);
  if (pvVar4 == (void *)0x0) {
    local_70 = 0;
    local_68 = 0;
    local_80 = (void *)0x0;
    local_78 = (long *)0x0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_012d0820;
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar14;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    memset(pvVar4,0,0x438);
    local_70 = 0x438;
    local_68 = 8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    local_80 = pvVar4;
    local_78 = plVar14;
  }
  if (*(ulong *)(param_1 + 0x40) < *(ulong *)(param_1 + 0x48)) {
    FUN_012d3e44(param_1 + 0x38,&local_80);
  }
  else {
    uVar12 = *(ulong *)(param_1 + 0x58);
    lVar5 = (long)(*(ulong *)(param_1 + 0x40) - *(long *)(param_1 + 0x38)) >> 5;
    uVar6 = lVar5 + 1;
    if (0x7ffffffffffffffe < uVar12) {
      uVar12 = 0x7fffffffffffffff;
    }
    if (uVar12 < uVar6) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar7 = *(ulong *)(param_1 + 0x48) - *(long *)(param_1 + 0x38);
    uVar8 = lVar7 >> 4;
    if (uVar6 <= uVar8) {
      uVar6 = uVar8;
    }
    if (uVar12 >> 1 <= (ulong)(lVar7 >> 5)) {
      uVar6 = uVar12;
    }
    if (uVar6 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = (**(code **)(**(long **)(param_1 + 0x50) + 0x10))
                        (*(long **)(param_1 + 0x50),uVar6 << 5,8);
      if (lVar7 == 0) {
        (**(code **)(**(long **)(param_1 + 0x50) + 0xe8))();
      }
    }
    puVar1 = (undefined8 *)(lVar7 + lVar5 * 0x20);
    uVar13 = *(undefined8 *)(param_1 + 0x50);
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar5 == 0) {
      *puVar1 = pvVar4;
      puVar1[1] = local_78;
      puVar1[2] = local_70;
      puVar1[3] = local_68;
    }
    else {
      if (0xf < *(ulong *)(lVar5 + 0x80)) {
LAB_012d0820:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar13;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      *puVar1 = local_80;
      puVar1[1] = local_78;
      puVar1[2] = local_70;
      puVar1[3] = local_68;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    }
    local_80 = (void *)0x0;
    plVar14 = *(long **)(param_1 + 0x38);
    plVar16 = *(long **)(param_1 + 0x40);
    if (plVar16 == plVar14) {
      puVar9 = puVar1;
      plVar16 = plVar14;
    }
    else {
      puVar17 = puVar1;
      do {
        uVar13 = *(undefined8 *)(param_1 + 0x50);
        if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar5 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar5 != 0) {
          if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_012d0820;
          *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar13;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
        }
        lVar10 = plVar16[-4];
        plVar16[-4] = 0;
        puVar17[-4] = lVar10;
        lVar10 = plVar16[-3];
        lVar11 = plVar16[-1];
        puVar17[-2] = plVar16[-2];
        puVar17[-1] = lVar11;
        puVar9 = puVar17 + -4;
        plVar16 = plVar16 + -4;
        puVar17[-3] = lVar10;
        if (lVar5 != 0) {
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
        }
        puVar17 = puVar9;
      } while (plVar14 != plVar16);
      plVar16 = *(long **)(param_1 + 0x38);
      plVar14 = *(long **)(param_1 + 0x40);
    }
    lVar5 = *(long *)(param_1 + 0x48);
    *(undefined8 **)(param_1 + 0x38) = puVar9;
    *(undefined8 **)(param_1 + 0x40) = puVar1 + 4;
    *(ulong *)(param_1 + 0x48) = lVar7 + uVar6 * 0x20;
    if (plVar14 != plVar16) {
      plVar15 = plVar14 + -4;
      lVar7 = *plVar15;
      *plVar15 = 0;
      if (lVar7 != 0) {
        FUN_01313b38(plVar14 + -3);
      }
      while (plVar14 = plVar15, plVar14 != plVar16) {
        plVar15 = plVar14 + -4;
        lVar7 = *plVar15;
        *plVar15 = 0;
        if (lVar7 != 0) {
          FUN_01313b38(plVar14 + -3);
        }
      }
    }
    if (plVar16 != (long *)0x0) {
      plVar14 = *(long **)(param_1 + 0x50);
      lVar5 = lVar5 - (long)plVar16;
      uVar6 = (**(code **)(*plVar14 + 0xf8))(plVar14);
      if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
        (**(code **)(*plVar14 + 0x18))(plVar14,plVar16,lVar5,8);
      }
      else {
        FUN_00c48fe8(plVar14,plVar16,lVar5,8);
      }
    }
  }
  pvVar4 = local_80;
  local_80 = (void *)0x0;
  if (pvVar4 != (void *)0x0) {
    FUN_01313b38(&local_78);
  }
  *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x40) + -0x20;
  lVar5 = *(long *)(*(long *)(param_1 + 0x40) + -0x20);
  *(undefined8 *)(lVar5 + 0x410) = 0;
  puVar2 = PTR_DAT_047d96b0;
  *(undefined2 *)(lVar5 + 0x418) = 0;
  *(long *)(lVar5 + 0x420) = lVar5;
  *(long *)(lVar5 + 0x428) = lVar5;
  *(undefined **)(lVar5 + 0x408) = puVar2 + 0x128;
  *(undefined **)(lVar5 + 0x400) = puVar2 + 0x10;
  *(undefined8 *)(lVar5 + 0x430) = 0x400;
  return;
}


