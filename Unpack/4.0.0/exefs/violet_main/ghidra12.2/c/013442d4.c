/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 013442d4; name: FUN_013442d4
 */


void FUN_013442d4(long *param_1,long param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  long *plVar16;
  long local_70;
  undefined1 auStack_68 [8];
  
  lVar12 = *(long *)(param_2 + 0x30);
  local_70 = lVar12;
  lVar5 = FUN_01271150(auStack_68,*(undefined8 *)(lVar12 + 8),&local_70,param_3);
  *param_1 = lVar5;
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 0x28);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == -1) goto LAB_013446c4;
  }
  FUN_01271b0c(*(undefined8 *)(lVar12 + 0x50),param_1);
  plVar8 = *(long **)(param_2 + 0x118);
  if (plVar8 == *(long **)(param_2 + 0x120)) {
    uVar11 = *(ulong *)(param_2 + 0x130);
    lVar5 = (long)plVar8 - *(long *)(param_2 + 0x110) >> 3;
    uVar7 = lVar5 + 1;
    if (0x7ffffffffffffffe < uVar11) {
      uVar11 = 0x7fffffffffffffff;
    }
    if (uVar11 < uVar7) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar12 = (long)*(long **)(param_2 + 0x120) - *(long *)(param_2 + 0x110);
    uVar9 = lVar12 >> 2;
    if (uVar7 <= uVar9) {
      uVar7 = uVar9;
    }
    if (uVar11 >> 1 <= (ulong)(lVar12 >> 3)) {
      uVar7 = uVar11;
    }
    if (uVar7 == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = (**(code **)(**(long **)(param_2 + 0x128) + 0x10))
                         (*(long **)(param_2 + 0x128),uVar7 << 3,8);
      if (lVar12 == 0) {
        (**(code **)(**(long **)(param_2 + 0x128) + 0xe8))();
      }
    }
    uVar14 = *(undefined8 *)(param_2 + 0x128);
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar6 != 0) {
      if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_013447ac;
      *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar14;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    }
    lVar10 = *param_1;
    plVar8 = (long *)(lVar12 + lVar5 * 8);
    *plVar8 = lVar10;
    if (lVar10 != 0) {
      piVar1 = (int *)(lVar10 + 0x28);
      do {
        iVar4 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == -1) goto LAB_013446c4;
    }
    if (lVar6 != 0) {
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    }
    plVar13 = *(long **)(param_2 + 0x110);
    plVar16 = *(long **)(param_2 + 0x118);
    plVar15 = plVar8;
    if (plVar16 == plVar13) {
      plVar16 = plVar13;
    }
    else {
      do {
        uVar14 = *(undefined8 *)(param_2 + 0x128);
        if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar5 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar5 == 0) {
          lVar5 = plVar16[-1];
          plVar16[-1] = 0;
          plVar15[-1] = lVar5;
        }
        else {
          if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_013447ac;
          *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar14;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
          lVar6 = plVar16[-1];
          plVar16[-1] = 0;
          plVar15[-1] = lVar6;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
        }
        plVar16 = plVar16 + -1;
        plVar15 = plVar15 + -1;
      } while (plVar13 != plVar16);
      plVar13 = *(long **)(param_2 + 0x110);
      plVar16 = *(long **)(param_2 + 0x118);
    }
    lVar5 = *(long *)(param_2 + 0x120);
    *(long **)(param_2 + 0x110) = plVar15;
    *(long **)(param_2 + 0x118) = plVar8 + 1;
    *(ulong *)(param_2 + 0x120) = lVar12 + uVar7 * 8;
    while (plVar16 != plVar13) {
      plVar16 = plVar16 + -1;
      plVar8 = (long *)*plVar16;
      if (plVar8 != (long *)0x0) {
        plVar15 = plVar8 + 5;
        do {
          lVar12 = *plVar15;
          iVar4 = (int)lVar12 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar3) {
            *(int *)plVar15 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
        else if ((int)lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
    }
    if (plVar13 != (long *)0x0) {
      plVar8 = *(long **)(param_2 + 0x128);
      lVar5 = lVar5 - (long)plVar13;
      uVar7 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if (((uVar7 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
        (**(code **)(*plVar8 + 0x18))(plVar8,plVar13,lVar5,8);
      }
      else {
        FUN_00c48fe8(plVar8,plVar13,lVar5,8);
      }
    }
  }
  else {
    uVar14 = *(undefined8 *)(param_2 + 0x128);
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar5 != 0) {
      if (0xf < *(ulong *)(lVar5 + 0x80)) {
LAB_013447ac:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar14;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    }
    lVar12 = *param_1;
    *plVar8 = lVar12;
    if (lVar12 != 0) {
      piVar1 = (int *)(lVar12 + 0x28);
      do {
        iVar4 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == -1) {
LAB_013446c4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    if (lVar5 != 0) {
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    }
    *(long **)(param_2 + 0x118) = plVar8 + 1;
  }
  *(long *)(*param_1 + 0x148) = param_2;
  FUN_013447c0(*param_1,*(undefined8 *)(param_2 + 0x208));
  return;
}


