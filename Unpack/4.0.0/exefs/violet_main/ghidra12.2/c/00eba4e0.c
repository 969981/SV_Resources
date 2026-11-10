/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00eba4e0; name: FUN_00eba4e0
 */


int FUN_00eba4e0(long param_1,uint param_2,long *param_3)

{
  long *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  long *plVar23;
  long lVar24;
  long *local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  undefined8 *local_68;
  
  lVar24 = *param_3;
  if (lVar24 != 0) {
    piVar2 = (int *)(lVar24 + 0x28);
    do {
      iVar7 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar23 = (long *)(*(long *)(lVar24 + 0x88) + (ulong)param_2 * 0x108);
  lVar19 = *plVar23;
  plVar17 = plVar23 + 1;
  lVar20 = *plVar17;
  plVar12 = plVar23 + 2;
  lVar21 = *plVar12;
  plVar9 = plVar23 + 3;
  plVar18 = (long *)*plVar9;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x18))(plVar18);
  }
  plVar10 = *(long **)(param_1 + 0xf8);
  puVar3 = (undefined8 *)(param_1 + 0x108);
  if (plVar10 < *(long **)(param_1 + 0x100)) {
    uVar22 = *puVar3;
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar8 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar8 != 0) {
      if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_00ebac08;
      *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar22;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    }
    *plVar10 = lVar24;
    *(uint *)(plVar10 + 1) = param_2;
    *(undefined1 *)(plVar10 + 6) = 1;
    plVar10[2] = lVar19;
    plVar10[3] = lVar20;
    plVar10[4] = lVar21;
    plVar10[5] = (long)plVar18;
    if (lVar8 != 0) {
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    }
    *(long **)(param_1 + 0xf8) = plVar10 + 7;
  }
  else {
    uVar11 = *(ulong *)(param_1 + 0x110);
    lVar8 = (long)plVar10 - *(long *)(param_1 + 0xf0) >> 3;
    if (0x7ffffffffffffffe < uVar11) {
      uVar11 = 0x7fffffffffffffff;
    }
    uVar16 = lVar8 * 0x6db6db6db6db6db7 + 1;
    if (uVar11 < uVar16) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar13 = (long)*(long **)(param_1 + 0x100) - *(long *)(param_1 + 0xf0) >> 3;
    local_70 = (long *)0x0;
    uVar14 = lVar13 * -0x2492492492492492;
    if (uVar16 <= uVar14) {
      uVar16 = uVar14;
    }
    if (uVar11 >> 1 <= (ulong)(lVar13 * 0x6db6db6db6db6db7)) {
      uVar16 = uVar11;
    }
    local_68 = puVar3;
    if (uVar16 == 0) {
      plVar10 = (long *)0x0;
    }
    else {
      plVar10 = (long *)(**(code **)(*(long *)*puVar3 + 0x10))((long *)*puVar3,uVar16 * 0x38,8);
      if (plVar10 == (long *)0x0) {
        (**(code **)(*(long *)*puVar3 + 0xe8))();
      }
    }
    plVar15 = plVar10 + lVar8;
    local_70 = plVar10 + uVar16 * 7;
    uVar22 = *puVar3;
    local_88 = plVar10;
    local_80 = plVar15;
    local_78 = plVar15;
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar13 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar13 != 0) {
      if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_00ebac08;
      *(undefined8 *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = uVar22;
      *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
    }
    *plVar15 = lVar24;
    *(uint *)(plVar10 + lVar8 + 1) = param_2;
    plVar10[lVar8 + 2] = lVar19;
    plVar10[lVar8 + 3] = lVar20;
    plVar10[lVar8 + 4] = lVar21;
    plVar10[lVar8 + 5] = (long)plVar18;
    *(undefined1 *)(plVar10 + lVar8 + 6) = 1;
    if (lVar13 != 0) {
      *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
    }
    local_78 = local_78 + 7;
    FUN_00eab3ec(param_1 + 0xf0,&local_88);
    FUN_00eab2b0(&local_88);
  }
  plVar18 = *(long **)(param_1 + 0x130);
  plVar10 = *(long **)(param_1 + 0x138);
  if (plVar18 != plVar10) {
    lVar24 = *plVar23;
    bVar5 = *plVar18 == lVar24;
    if ((!bVar5) && (plVar18 + 4 != plVar10)) {
      plVar15 = plVar18 + 8;
      do {
        plVar1 = plVar15 + -4;
        bVar6 = plVar10 != plVar15;
        plVar15 = plVar15 + 4;
        bVar5 = (bool)(bVar5 | *plVar1 == lVar24);
      } while (*plVar1 != lVar24 && bVar6);
    }
    if (bVar5) goto LAB_00eba6ac;
  }
  puVar3 = (undefined8 *)(param_1 + 0x148);
  if (plVar10 < *(long **)(param_1 + 0x140)) {
    uVar22 = *puVar3;
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar24 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar24 != 0) {
      if (0xf < *(ulong *)(lVar24 + 0x80)) {
LAB_00ebac08:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar24 + *(ulong *)(lVar24 + 0x80) * 8) = uVar22;
      *(long *)(lVar24 + 0x80) = *(long *)(lVar24 + 0x80) + 1;
    }
    *plVar10 = *plVar23;
    plVar10[1] = *plVar17;
    plVar10[2] = *plVar12;
    plVar9 = (long *)*plVar9;
    plVar10[3] = (long)plVar9;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x18))();
    }
    if (lVar24 != 0) {
      *(long *)(lVar24 + 0x80) = *(long *)(lVar24 + 0x80) + -1;
    }
    *(long **)(param_1 + 0x138) = plVar10 + 4;
  }
  else {
    uVar16 = *(ulong *)(param_1 + 0x150);
    lVar24 = (long)plVar10 - (long)plVar18 >> 5;
    uVar11 = lVar24 + 1;
    if (0x7ffffffffffffffe < uVar16) {
      uVar16 = 0x7fffffffffffffff;
    }
    if (uVar16 < uVar11) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar19 = (long)*(long **)(param_1 + 0x140) - (long)plVar18;
    uVar14 = lVar19 >> 4;
    local_70 = (long *)0x0;
    if (uVar11 <= uVar14) {
      uVar11 = uVar14;
    }
    if (uVar16 >> 1 <= (ulong)(lVar19 >> 5)) {
      uVar11 = uVar16;
    }
    local_68 = puVar3;
    if (uVar11 == 0) {
      plVar18 = (long *)0x0;
    }
    else {
      plVar18 = (long *)(**(code **)(*(long *)*puVar3 + 0x10))((long *)*puVar3,uVar11 << 5,8);
      if (plVar18 == (long *)0x0) {
        (**(code **)(*(long *)*puVar3 + 0xe8))();
      }
    }
    plVar10 = plVar18 + lVar24 * 4;
    local_70 = plVar18 + uVar11 * 4;
    uVar22 = *puVar3;
    local_88 = plVar18;
    local_80 = plVar10;
    local_78 = plVar10;
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar24 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar24 != 0) {
      if (0xf < *(ulong *)(lVar24 + 0x80)) goto LAB_00ebac08;
      *(undefined8 *)(lVar24 + *(ulong *)(lVar24 + 0x80) * 8) = uVar22;
      *(long *)(lVar24 + 0x80) = *(long *)(lVar24 + 0x80) + 1;
    }
    *plVar10 = *plVar23;
    plVar10[1] = *plVar17;
    plVar10[2] = *plVar12;
    plVar9 = (long *)*plVar9;
    plVar10[3] = (long)plVar9;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x18))();
    }
    if (lVar24 != 0) {
      *(long *)(lVar24 + 0x80) = *(long *)(lVar24 + 0x80) + -1;
    }
    local_78 = local_78 + 4;
    FUN_00ed5b44(puVar3,*(undefined8 *)(param_1 + 0x130),*(undefined8 *)(param_1 + 0x138),&local_80)
    ;
    plVar17 = *(long **)(param_1 + 0x130);
    plVar9 = *(long **)(param_1 + 0x138);
    lVar24 = *(long *)(param_1 + 0x140);
    *(long **)(param_1 + 0x130) = local_80;
    *(long **)(param_1 + 0x138) = local_78;
    *(long **)(param_1 + 0x140) = local_70;
    local_88 = plVar17;
    local_80 = plVar17;
    local_78 = plVar9;
    local_70 = (long *)lVar24;
    while (plVar9 != plVar17) {
      local_78 = plVar9 + -4;
      plVar12 = plVar9 + -1;
      plVar9 = local_78;
      if ((long *)*plVar12 != (long *)0x0) {
        (**(code **)(*(long *)*plVar12 + 0x20))();
      }
    }
    if (plVar17 != (long *)0x0) {
      lVar24 = lVar24 - (long)plVar17;
      plVar9 = (long *)*local_68;
      uVar11 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (((uVar11 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
        (**(code **)(*plVar9 + 0x18))(plVar9,plVar17,lVar24,8);
      }
      else {
        FUN_00c48fe8(plVar9,plVar17,lVar24,8);
      }
    }
  }
LAB_00eba6ac:
  *(undefined1 *)(param_1 + 0x1a5) = 1;
  return (int)((ulong)(*(long *)(param_1 + 0xf8) - *(long *)(param_1 + 0xf0)) >> 3) * -0x49249249 +
         -1;
}


