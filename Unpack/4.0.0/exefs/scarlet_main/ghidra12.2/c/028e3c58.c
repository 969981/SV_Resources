/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028e3c58; name: FUN_028e3c58
 */


void FUN_028e3c58(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  undefined8 *puVar16;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    lVar15 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar6 == 0) {
      uVar10 = *param_2;
      *param_2 = 0;
      *puVar2 = uVar10;
    }
    else {
      if (0xf < *(ulong *)(lVar6 + 0x80)) {
LAB_028e4034:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar15;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      uVar10 = *param_2;
      *param_2 = 0;
      *puVar2 = uVar10;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    }
    param_1[1] = (long)(puVar2 + 1);
  }
  else {
    uVar12 = param_1[4];
    lVar15 = (long)puVar2 - *param_1 >> 3;
    uVar9 = lVar15 + 1;
    if (0x7ffffffffffffffe < uVar12) {
      uVar12 = 0x7fffffffffffffff;
    }
    if (uVar12 < uVar9) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar6 = param_1[2] - *param_1;
    uVar11 = lVar6 >> 2;
    if (uVar9 <= uVar11) {
      uVar9 = uVar11;
    }
    if (uVar12 >> 1 <= (ulong)(lVar6 >> 3)) {
      uVar9 = uVar12;
    }
    if (uVar9 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar9 << 3,8);
      if (lVar6 == 0) {
        (**(code **)(*(long *)param_1[3] + 0xe8))();
      }
    }
    puVar2 = (undefined8 *)(lVar6 + lVar15 * 8);
    lVar15 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar7 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar7 == 0) {
      uVar10 = *param_2;
      *param_2 = 0;
      *puVar2 = uVar10;
    }
    else {
      if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_028e4034;
      *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar15;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      uVar10 = *param_2;
      *param_2 = 0;
      *puVar2 = uVar10;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    }
    plVar14 = (long *)*param_1;
    plVar13 = (long *)param_1[1];
    puVar16 = puVar2;
    if (plVar13 == plVar14) {
      plVar13 = plVar14;
    }
    else {
      do {
        lVar15 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar7 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar7 == 0) {
          lVar15 = plVar13[-1];
          plVar13[-1] = 0;
          puVar16[-1] = lVar15;
        }
        else {
          if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_028e4034;
          *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar15;
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
          lVar15 = plVar13[-1];
          plVar13[-1] = 0;
          puVar16[-1] = lVar15;
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
        }
        plVar13 = plVar13 + -1;
        puVar16 = puVar16 + -1;
      } while (plVar14 != plVar13);
      plVar14 = (long *)*param_1;
      plVar13 = (long *)param_1[1];
    }
    lVar15 = param_1[2];
    *param_1 = (long)puVar16;
    param_1[1] = (long)(puVar2 + 1);
    param_1[2] = lVar6 + uVar9 * 8;
    while (plVar13 != plVar14) {
      plVar13 = plVar13 + -1;
      plVar8 = (long *)*plVar13;
      if (plVar8 != (long *)0x0) {
        plVar1 = plVar8 + 5;
        do {
          lVar6 = *plVar1;
          iVar5 = (int)lVar6 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
        else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
    }
    if (plVar14 != (long *)0x0) {
      plVar13 = (long *)param_1[3];
      uVar9 = (**(code **)(*plVar13 + 0xf8))(plVar13);
      if (((uVar9 & 1) != 0) && (lVar6 = FUN_00c4e600(), 0 < *(int *)(lVar6 + 0x12c8))) {
        FUN_00c48fe8(plVar13,plVar14,lVar15 - (long)plVar14,8);
        return;
      }
      (**(code **)(*plVar13 + 0x18))(plVar13,plVar14,lVar15 - (long)plVar14,8);
    }
  }
  return;
}


