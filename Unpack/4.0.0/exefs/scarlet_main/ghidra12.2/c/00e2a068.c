/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e2a068; name: FUN_00e2a068
 */


void FUN_00e2a068(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  
  if (*(char *)(param_1 + 0x50) != '\0') {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("!IsActivated()","AddPointTree",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/src/scene/streaming_unit.cpp"
               ,0xc9);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x78);
  if (puVar1 == *(undefined8 **)(param_1 + 0x80)) {
    lVar5 = *(long *)(param_1 + 0x70);
    lVar8 = (long)puVar1 - lVar5 >> 3;
    uVar4 = lVar8 + 1;
    if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar5 = (long)*(undefined8 **)(param_1 + 0x80) - lVar5;
    uVar6 = lVar5 >> 2;
    if (uVar4 <= uVar6) {
      uVar4 = uVar6;
    }
    if (0xffffffffffffffe < (ulong)(lVar5 >> 3)) {
      uVar4 = 0x1fffffffffffffff;
    }
    if (uVar4 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = (**(code **)(**(long **)(param_1 + 0x88) + 0x10))
                        (*(long **)(param_1 + 0x88),uVar4 << 3,8);
      if (lVar5 == 0) {
        (**(code **)(**(long **)(param_1 + 0x88) + 0xe8))();
      }
    }
    uVar9 = *(undefined8 *)(param_1 + 0x88);
    puVar1 = (undefined8 *)(lVar5 + lVar8 * 8);
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar8 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar8 == 0) {
      *puVar1 = param_2;
    }
    else {
      if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_00e2a404;
      *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar9;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
      *puVar1 = param_2;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    }
    lVar8 = *(long *)(param_1 + 0x70);
    lVar11 = *(long *)(param_1 + 0x78);
    puVar10 = puVar1;
    if (lVar11 != lVar8) {
      do {
        uVar9 = *(undefined8 *)(param_1 + 0x88);
        if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar3 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar3 == 0) {
          puVar10[-1] = *(undefined8 *)(lVar11 + -8);
        }
        else {
          if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_00e2a404;
          *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar9;
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
          puVar10[-1] = *(undefined8 *)(lVar11 + -8);
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
        }
        lVar11 = lVar11 + -8;
        puVar10 = puVar10 + -1;
      } while (lVar8 != lVar11);
      lVar8 = *(long *)(param_1 + 0x70);
    }
    *(undefined8 **)(param_1 + 0x70) = puVar10;
    *(undefined8 **)(param_1 + 0x78) = puVar1 + 1;
    lVar11 = *(long *)(param_1 + 0x80);
    *(ulong *)(param_1 + 0x80) = lVar5 + uVar4 * 8;
    if (lVar8 != 0) {
      plVar7 = *(long **)(param_1 + 0x88);
      lVar11 = lVar11 - lVar8;
      uVar4 = (**(code **)(*plVar7 + 0xf8))(plVar7);
      if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00e2a230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x18))(plVar7,lVar8,lVar11,8);
        return;
      }
      FUN_00c48fe8(plVar7,lVar8,lVar11,8);
      return;
    }
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 0x88);
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar5 == 0) {
      *puVar1 = param_2;
    }
    else {
      if (0xf < *(ulong *)(lVar5 + 0x80)) {
LAB_00e2a404:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar9;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      *puVar1 = param_2;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    }
    *(undefined8 **)(param_1 + 0x78) = puVar1 + 1;
  }
  return;
}


