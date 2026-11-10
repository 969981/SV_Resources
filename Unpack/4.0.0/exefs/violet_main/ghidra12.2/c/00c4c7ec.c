/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c4c7ec; name: FUN_00c4c7ec
 */


void FUN_00c4c7ec(long *param_1,undefined4 *param_2,undefined4 *param_3,long *param_4)

{
  int *piVar1;
  long *plVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  undefined4 *puVar18;
  long lVar19;
  
  puVar3 = (undefined4 *)param_1[1];
  if (puVar3 < (undefined4 *)param_1[2]) {
    lVar19 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar12 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar12 != 0) {
      if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00c4cc20;
      *(long *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = lVar19;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    }
    uVar4 = *param_3;
    *puVar3 = *param_2;
    puVar3[1] = uVar4;
    lVar19 = *param_4;
    *(long *)(puVar3 + 2) = lVar19;
    if (lVar19 != 0) {
      piVar1 = (int *)(lVar19 + 0x28);
      do {
        iVar7 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar7 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == -1) goto LAB_00c4cc2c;
    }
    if (lVar12 != 0) {
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    }
    param_1[1] = (long)(puVar3 + 4);
  }
  else {
    uVar16 = param_1[4];
    lVar19 = (long)puVar3 - *param_1 >> 4;
    uVar11 = lVar19 + 1;
    if (0x7ffffffffffffffe < uVar16) {
      uVar16 = 0x7fffffffffffffff;
    }
    if (uVar16 < uVar11) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar12 = param_1[2] - *param_1;
    uVar13 = lVar12 >> 3;
    if (uVar11 <= uVar13) {
      uVar11 = uVar13;
    }
    if (uVar16 >> 1 <= (ulong)(lVar12 >> 4)) {
      uVar11 = uVar16;
    }
    if (uVar11 == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar11 << 4,8);
      if (lVar12 == 0) {
        (**(code **)(*(long *)param_1[3] + 0xe8))();
      }
    }
    lVar17 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar8 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar8 != 0) {
      if (0xf < *(ulong *)(lVar8 + 0x80)) {
LAB_00c4cc20:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar17;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    }
    puVar3 = (undefined4 *)(lVar12 + lVar19 * 0x10);
    uVar4 = *param_3;
    *puVar3 = *param_2;
    puVar3[1] = uVar4;
    lVar19 = *param_4;
    *(long *)(puVar3 + 2) = lVar19;
    if (lVar19 != 0) {
      piVar1 = (int *)(lVar19 + 0x28);
      do {
        iVar7 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar7 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == -1) {
LAB_00c4cc2c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    if (lVar8 != 0) {
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    }
    lVar19 = *param_1;
    lVar17 = param_1[1];
    if (lVar17 == lVar19) {
      puVar14 = puVar3;
      lVar17 = lVar19;
    }
    else {
      puVar18 = puVar3;
      do {
        lVar8 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar9 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar9 != 0) {
          if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_00c4cc20;
          *(long *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = lVar8;
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
        }
        *(undefined8 *)(puVar18 + -4) = *(undefined8 *)(lVar17 + -0x10);
        uVar15 = *(undefined8 *)(lVar17 + -8);
        *(undefined8 *)(lVar17 + -8) = 0;
        puVar14 = puVar18 + -4;
        lVar17 = lVar17 + -0x10;
        *(undefined8 *)(puVar18 + -2) = uVar15;
        if (lVar9 != 0) {
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
        }
        puVar18 = puVar14;
      } while (lVar19 != lVar17);
      lVar19 = *param_1;
      lVar17 = param_1[1];
    }
    lVar8 = param_1[2];
    *param_1 = (long)puVar14;
    param_1[1] = (long)(puVar3 + 4);
    param_1[2] = lVar12 + uVar11 * 0x10;
    for (; lVar17 != lVar19; lVar17 = lVar17 + -0x10) {
      plVar10 = *(long **)(lVar17 + -8);
      if (plVar10 != (long *)0x0) {
        plVar2 = plVar10 + 5;
        do {
          lVar12 = *plVar2;
          iVar7 = (int)lVar12 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *(int *)plVar2 = iVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar10 + 0x10))();
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
    if (lVar19 != 0) {
      plVar10 = (long *)param_1[3];
      uVar11 = (**(code **)(*plVar10 + 0xf8))(plVar10);
      if (((uVar11 & 1) != 0) && (lVar12 = FUN_00c4e600(), 0 < *(int *)(lVar12 + 0x12c8))) {
        FUN_00c48fe8(plVar10,lVar19,lVar8 - lVar19,8);
        return;
      }
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar19,lVar8 - lVar19,8);
    }
  }
  return;
}


