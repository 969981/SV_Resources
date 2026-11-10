/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01099e30; name: FUN_01099e30
 */


ulong FUN_01099e30(long *param_1,undefined8 *param_2)

{
  int *piVar1;
  long lVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  
  do {
    lVar18 = param_1[0xf] - param_1[0xe];
    if (lVar18 == 0) {
      uVar14 = param_1[1];
      lVar18 = (long)(uVar14 - *param_1) >> 3;
      uVar17 = lVar18 * -0x71c71c71c71c71c7;
      plVar7 = param_1 + 3;
      if (uVar14 < (ulong)param_1[2]) {
        FUN_0109a308(plVar7,uVar14,param_2);
        param_1[1] = uVar14 + 0x48;
      }
      else {
        uVar16 = param_1[4];
        uVar14 = uVar17 + 1;
        if (0x7ffffffffffffffe < uVar16) {
          uVar16 = 0x7fffffffffffffff;
        }
        if (uVar16 < uVar14) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar11 = param_1[2] - *param_1 >> 3;
        uVar13 = lVar11 * 0x1c71c71c71c71c72;
        if (uVar14 <= uVar13) {
          uVar14 = uVar13;
        }
        if (uVar16 >> 1 <= (ulong)(lVar11 * -0x71c71c71c71c71c7)) {
          uVar14 = uVar16;
        }
        if (uVar14 == 0) {
          lVar11 = 0;
        }
        else {
          lVar11 = (**(code **)(*(long *)*plVar7 + 0x10))((long *)*plVar7,uVar14 * 0x48,8);
          if (lVar11 == 0) {
            (**(code **)(*(long *)*plVar7 + 0xe8))();
          }
        }
        lVar20 = lVar11 + lVar18 * 8;
        FUN_0109a308(plVar7,lVar20,param_2);
        lVar18 = *param_1;
        lVar22 = param_1[1];
        if (lVar22 == lVar18) {
          lVar19 = lVar20;
          lVar22 = lVar18;
        }
        else {
          lVar19 = 0;
          do {
            lVar21 = *plVar7;
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar8 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar8 != 0) {
              if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar21;
              *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
            }
            lVar21 = lVar22 + lVar19;
            uVar10 = *(undefined8 *)(lVar21 + -0x40);
            uVar15 = *(undefined8 *)(lVar21 + -0x38);
            lVar2 = lVar20 + lVar19;
            *(undefined8 *)(lVar2 + -0x48) = *(undefined8 *)(lVar21 + -0x48);
            *(undefined8 *)(lVar2 + -0x40) = uVar10;
            *(undefined8 *)(lVar2 + -0x38) = uVar15;
            uVar10 = *(undefined8 *)(lVar21 + -0x30);
            *(undefined8 *)(lVar21 + -0x30) = 0;
            *(undefined8 *)(lVar2 + -0x30) = uVar10;
            uVar10 = *(undefined8 *)(lVar21 + -0x28);
            *(undefined8 *)(lVar21 + -0x28) = 0;
            *(undefined8 *)(lVar2 + -0x28) = uVar10;
            uVar3 = *(undefined1 *)(lVar21 + -0x20);
            *(undefined8 *)(lVar2 + -0x18) = 0;
            *(undefined8 *)(lVar2 + -0x10) = 0;
            *(undefined1 *)(lVar2 + -0x20) = uVar3;
            FUN_00c96b7c((undefined8 *)(lVar2 + -0x18),lVar21 + -0x18);
            *(undefined8 *)(lVar2 + -8) = *(undefined8 *)(lVar21 + -8);
            if (lVar8 != 0) {
              *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
            }
            lVar19 = lVar19 + -0x48;
          } while (lVar18 - lVar22 != lVar19);
          lVar18 = *param_1;
          lVar19 = lVar20 + lVar19;
          lVar22 = param_1[1];
        }
        lVar21 = param_1[2];
        param_1[2] = lVar11 + uVar14 * 0x48;
        *param_1 = lVar19;
        param_1[1] = lVar20 + 0x48;
        while (lVar22 != lVar18) {
          lVar22 = lVar22 + -0x48;
          FUN_01096f44(lVar22);
        }
        if (lVar18 != 0) {
          plVar7 = (long *)*plVar7;
          uVar14 = (**(code **)(*plVar7 + 0xf8))(plVar7);
          if (((uVar14 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
            (**(code **)(*plVar7 + 0x18))(plVar7,lVar18,lVar21 - lVar18,8);
          }
          else {
            FUN_00c48fe8(plVar7,lVar18,lVar21 - lVar18,8);
          }
        }
      }
      param_1[0x15] = uVar17 + 1;
      return uVar17;
    }
    uVar17 = *(ulong *)(param_1[0xf] + -8);
    param_1[0xf] = lVar18 + param_1[0xe] + -8;
    uVar14 = uVar17 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(param_1[7] + uVar14) =
         *(ulong *)(param_1[7] + uVar14) & (1L << (uVar17 & 0x3f) ^ 0xffffffffffffffffU);
    lVar18 = *param_1;
  } while ((ulong)((param_1[1] - lVar18 >> 3) * -0x71c71c71c71c71c7) <= uVar17);
  puVar9 = (undefined8 *)(lVar18 + uVar17 * 0x48);
  uVar15 = param_2[2];
  uVar10 = param_2[1];
  *puVar9 = *param_2;
  puVar9[1] = uVar10;
  puVar9[2] = uVar15;
  lVar11 = param_2[3];
  if (lVar11 != 0) {
    piVar1 = (int *)(lVar11 + 0x28);
    do {
      iVar6 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar6 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == -1) goto LAB_01099fe0;
  }
  plVar7 = (long *)puVar9[3];
  puVar9[3] = lVar11;
  if (plVar7 != (long *)0x0) {
    plVar12 = plVar7 + 5;
    do {
      lVar11 = *plVar12;
      iVar6 = (int)lVar11 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *(int *)plVar12 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar11 == 0) goto LAB_0109a044;
  }
  lVar11 = param_2[4];
  if (lVar11 != 0) {
    piVar1 = (int *)(lVar11 + 0x28);
    do {
      iVar6 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar6 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == -1) {
LAB_01099fe0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar12 = (long *)(lVar18 + uVar17 * 0x48 + 0x20);
  plVar7 = (long *)*plVar12;
  *plVar12 = lVar11;
  if (plVar7 != (long *)0x0) {
    plVar12 = plVar7 + 5;
    do {
      lVar11 = *plVar12;
      iVar6 = (int)lVar11 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *(int *)plVar12 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar11 == 0) {
LAB_0109a044:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  lVar18 = lVar18 + uVar17 * 0x48;
  *(undefined1 *)(lVar18 + 0x28) = *(undefined1 *)(param_2 + 5);
  FUN_00c43ef0(lVar18 + 0x30,param_2 + 6);
  *(undefined8 *)(lVar18 + 0x40) = param_2[8];
  if ((ulong)param_1[0x15] <= uVar17) {
    param_1[0x15] = uVar17 + 1;
  }
  return uVar17;
}


