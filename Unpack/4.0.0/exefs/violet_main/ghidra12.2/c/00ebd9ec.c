/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ebd9ec; name: FUN_00ebd9ec
 */


long * FUN_00ebd9ec(long param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  long *plVar14;
  long *local_78;
  long *local_70;
  long *local_68;
  long *local_60;
  undefined8 *puStack_58;
  
  plVar12 = *(long **)(param_1 + 8);
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar6 + 0x80)) {
LAB_00ebddc4:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar12;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  lVar7 = (**(code **)(*plVar12 + 0x10))(plVar12,0x1a0,0x10);
  if (lVar7 == 0) {
    (**(code **)(*plVar12 + 0xe8))(plVar12);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  FUN_00ebe000(lVar7,param_1 + 0x30);
  *(undefined4 *)(lVar7 + 0x18) = 0x1001a0;
  *(long **)(lVar7 + 8) = plVar12;
  *(long *)(lVar7 + 0x10) = lVar7;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  piVar1 = (int *)(lVar7 + 0x28);
  do {
    iVar5 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar5 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar5 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","IncrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
               ,0x53,"Reference counter overflows.");
  }
  plVar12 = *(long **)(param_1 + 0x58);
  puVar2 = (undefined8 *)(param_1 + 0x68);
  if (plVar12 < *(long **)(param_1 + 0x60)) {
    uVar13 = *puVar2;
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar6 == 0) {
      *plVar12 = lVar7;
    }
    else {
      if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_00ebddc4;
      *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar13;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      *plVar12 = lVar7;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    }
    plVar12 = plVar12 + 1;
    *(long **)(param_1 + 0x58) = plVar12;
    goto LAB_00ebdbd8;
  }
  uVar11 = *(ulong *)(param_1 + 0x70);
  lVar6 = (long)plVar12 - *(long *)(param_1 + 0x50) >> 3;
  uVar8 = lVar6 + 1;
  if (0x7ffffffffffffffe < uVar11) {
    uVar11 = 0x7fffffffffffffff;
  }
  if (uVar11 < uVar8) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar9 = (long)*(long **)(param_1 + 0x60) - *(long *)(param_1 + 0x50);
  uVar10 = lVar9 >> 2;
  local_60 = (long *)0x0;
  if (uVar8 <= uVar10) {
    uVar8 = uVar10;
  }
  if (uVar11 >> 1 <= (ulong)(lVar9 >> 3)) {
    uVar8 = uVar11;
  }
  puStack_58 = puVar2;
  if (uVar8 == 0) {
    local_78 = (long *)0x0;
  }
  else {
    local_78 = (long *)(**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,uVar8 << 3,8);
    if (local_78 == (long *)0x0) {
      (**(code **)(*(long *)*puVar2 + 0xe8))();
    }
  }
  plVar12 = local_78 + lVar6;
  local_60 = local_78 + uVar8;
  uVar13 = *puVar2;
  local_70 = plVar12;
  local_68 = plVar12;
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar6 == 0) {
    *plVar12 = lVar7;
  }
  else {
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_00ebddc4;
    *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar13;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    *plVar12 = lVar7;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar12 = local_68;
  }
  local_68 = plVar12 + 1;
  FUN_00ebded8(puVar2,*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),&local_70);
  local_78 = *(long **)(param_1 + 0x50);
  uVar13 = *(undefined8 *)(param_1 + 0x58);
  *(long **)(param_1 + 0x50) = local_70;
  *(long **)(param_1 + 0x58) = local_68;
  lVar6 = *(long *)(param_1 + 0x60);
  *(long **)(param_1 + 0x60) = local_60;
  local_70 = local_78;
  local_68 = (long *)uVar13;
  local_60 = (long *)lVar6;
  FUN_00ebde38(&local_78);
  plVar12 = local_78;
  if (local_78 != (long *)0x0) {
    lVar6 = (long)local_60 - (long)local_78;
    plVar14 = (long *)*puStack_58;
    uVar8 = (**(code **)(*plVar14 + 0xf8))(plVar14);
    if ((uVar8 & 1) != 0) {
      lVar7 = FUN_00c4e600();
      if (0 < *(int *)(lVar7 + 0x12c8)) {
        FUN_00c48fe8(plVar14,plVar12,lVar6,8);
        goto LAB_00ebdbd4;
      }
    }
    (**(code **)(*plVar14 + 0x18))(plVar14,plVar12,lVar6,8);
  }
LAB_00ebdbd4:
  plVar12 = *(long **)(param_1 + 0x58);
LAB_00ebdbd8:
  return plVar12 + -1;
}


