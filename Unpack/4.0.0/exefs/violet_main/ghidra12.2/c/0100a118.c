/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0100a118; name: FUN_0100a118
 */


void FUN_0100a118(long *param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  long local_90;
  long lStack_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined1 auStack_68 [8];
  
  param_1[2] = 0;
  puVar8 = PTR_DAT_047d66f8;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar8 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar10 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar10 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = 0;
    if (*(long *)(lVar10 + 0x80) != 0) {
      lVar15 = *(long *)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&PTR_FUN_0459d220;
  param_1[1] = lVar15;
  param_1[4] = (long)&PTR_LAB_0459d258;
  plVar19 = param_1 + 6;
  *plVar19 = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar15 = nn::os::GetTlsValue(DAT_04865a30);
  lVar10 = tpidr_el0;
  if ((((lVar15 == 0) || (*(long *)(lVar15 + 0x80) == 0)) ||
      (lVar15 = *(long *)(lVar15 + *(long *)(lVar15 + 0x80) * 8 + -8), lVar15 == 0)) &&
     (lVar15 = *(long *)(lVar10 + 0x30), lVar15 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar15 = DAT_04859430;
    *(long *)(lVar10 + 0x30) = DAT_04859430;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[9] = lVar15;
  param_1[0xe] = 0;
  param_1[0x18] = 0;
  param_1[10] = 0x1fffffffffffffff;
  param_1[0xb] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar15 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar15 == 0) || (*(long *)(lVar15 + 0x80) == 0)) ||
      (lVar15 = *(long *)(lVar15 + *(long *)(lVar15 + 0x80) * 8 + -8), lVar15 == 0)) &&
     (lVar15 = *(long *)(lVar10 + 0x30), lVar15 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar15 = DAT_04859430;
    *(long *)(lVar10 + 0x30) = DAT_04859430;
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x19] = lVar15;
  param_1[0x1a] = 0x1fffffffffffffff;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  FUN_0100a84c(param_1 + 0x1f);
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined1 *)((long)param_1 + 0x124) = 0;
  lVar10 = param_1[6];
  plVar12 = (long *)param_1[7];
  if ((long)plVar12 - lVar10 == 0) {
    if (param_1[8] - (long)plVar12 >> 3 != 0) {
      FUN_0100b494(plVar19,1);
LAB_0100a35c:
      plVar18 = (long *)param_1[7];
LAB_0100a360:
      plVar19 = (long *)*plVar19;
      do {
        if (plVar19 == plVar18) {
          *(undefined4 *)(param_1 + 0xd) = 0;
          return;
        }
        local_90 = *param_2;
        lStack_88 = 0;
        local_6c = 2;
        local_78 = 0x1000;
        local_7c = 0x100;
        local_80 = 0;
        lVar10 = FUN_011680e8(auStack_68,*(undefined8 *)(local_90 + 8),&local_90,&local_6c,&local_78
                              ,&local_7c,&local_80,&lStack_88);
        if (lVar10 != 0) {
          piVar1 = (int *)(lVar10 + 0x28);
          do {
            iVar9 = *piVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar7) {
              *piVar1 = iVar9 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar9 == -1) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","IncrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x53,"Reference counter overflows.");
          }
        }
        plVar12 = (long *)*plVar19;
        *plVar19 = 0;
        if (plVar12 != (long *)0x0) {
          plVar14 = plVar12 + 5;
          do {
            lVar15 = *plVar14;
            iVar9 = (int)lVar15 + -1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar7) {
              *(int *)plVar14 = iVar9;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar9 == 0) {
            (**(code **)(*plVar12 + 0x10))();
          }
          else if ((int)lVar15 == 0) goto LAB_0100a438;
        }
        *plVar19 = lVar10;
        plVar19 = plVar19 + 1;
      } while( true );
    }
    uVar17 = param_1[10];
    if (0x7ffffffffffffffe < uVar17) {
      uVar17 = 0x7fffffffffffffff;
    }
    if (uVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar10 = param_1[8] - lVar10;
    uVar16 = lVar10 >> 2;
    uVar5 = 1;
    if (uVar16 != 0) {
      uVar5 = uVar16;
    }
    plVar12 = param_1 + 9;
    if (uVar17 >> 1 <= (ulong)(lVar10 >> 3)) {
      uVar5 = uVar17;
    }
    if (uVar5 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = (**(code **)(*(long *)*plVar12 + 0x10))((long *)*plVar12,uVar5 << 3,8);
      if (lVar10 == 0) {
        (**(code **)(*(long *)*plVar12 + 0xe8))();
      }
    }
    lVar3 = lVar10 + uVar5 * 8;
    lVar15 = 0;
    lVar4 = lVar10 + 8;
    do {
      lVar20 = *plVar12;
      if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar11 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar11 == 0) {
        *(undefined8 *)(lVar10 + lVar15) = 0;
      }
      else {
        if (0xf < *(ulong *)(lVar11 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = lVar20;
        *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
        *(undefined8 *)(lVar10 + lVar15) = 0;
        *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
      }
      lVar15 = lVar15 + 8;
    } while (lVar15 != 8);
    plVar18 = (long *)param_1[6];
    plVar14 = (long *)param_1[7];
    if (plVar14 == plVar18) {
      plVar14 = plVar18;
    }
    else {
      do {
        lVar10 = lVar10 + -8;
        plVar14 = plVar14 + -1;
        FUN_0100aed8(plVar12,lVar10,plVar14);
      } while (plVar18 != plVar14);
      plVar14 = (long *)param_1[6];
      plVar18 = (long *)param_1[7];
    }
    param_1[6] = lVar10;
    param_1[7] = lVar4;
    lVar10 = param_1[8];
    param_1[8] = lVar3;
    do {
      while( true ) {
        do {
          if (plVar18 == plVar14) {
            if (plVar14 != (long *)0x0) {
              plVar12 = (long *)*plVar12;
              uVar17 = (**(code **)(*plVar12 + 0xf8))(plVar12);
              if (((uVar17 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
                (**(code **)(*plVar12 + 0x18))(plVar12,plVar14,lVar10 - (long)plVar14,8);
              }
              else {
                FUN_00c48fe8(plVar12,plVar14,lVar10 - (long)plVar14,8);
              }
            }
            goto LAB_0100a35c;
          }
          plVar18 = plVar18 + -1;
          plVar13 = (long *)*plVar18;
        } while (plVar13 == (long *)0x0);
        plVar2 = plVar13 + 5;
        do {
          lVar15 = *plVar2;
          iVar9 = (int)lVar15 + -1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar7) {
            *(int *)plVar2 = iVar9;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar9 != 0) break;
        (**(code **)(*plVar13 + 0x10))();
      }
    } while ((int)lVar15 != 0);
  }
  else {
    plVar18 = plVar12;
    if ((ulong)((long)plVar12 - lVar10 >> 3) < 2) goto LAB_0100a360;
    plVar18 = (long *)(lVar10 + 8);
    do {
      while( true ) {
        do {
          if (plVar18 == plVar12) {
            param_1[7] = (long)plVar18;
            goto LAB_0100a360;
          }
          plVar12 = plVar12 + -1;
          plVar14 = (long *)*plVar12;
        } while (plVar14 == (long *)0x0);
        plVar13 = plVar14 + 5;
        do {
          lVar10 = *plVar13;
          iVar9 = (int)lVar10 + -1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar7) {
            *(int *)plVar13 = iVar9;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar9 != 0) break;
        (**(code **)(*plVar14 + 0x10))();
      }
    } while ((int)lVar10 != 0);
  }
LAB_0100a438:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
             ,0x58,"Reference counter underflows.");
}


