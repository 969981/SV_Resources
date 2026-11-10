/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014acf0c; name: FUN_014acf0c
 */


void FUN_014acf0c(long param_1,int param_2)

{
  short *psVar1;
  short sVar2;
  undefined2 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  int iVar17;
  long *plVar18;
  
  if ((*(char *)(param_1 + 0x58) != '\0') || (*(char *)(param_1 + 0x59) != '\0')) {
    uVar3 = *(undefined2 *)(param_1 + 0x58);
    plVar14 = (long *)(param_1 + 0x38);
    *(undefined2 *)(param_1 + 0x58) = 0;
    if (*(long *)(param_1 + 0x48) != 0) {
      FUN_00c6a584(*(long *)(param_1 + 0x48),plVar14);
    }
    (**(code **)(*plVar14 + 0x20))(plVar14,uVar3);
  }
  plVar14 = *(long **)(param_1 + 0x2a0);
  plVar15 = *(long **)(param_1 + 0x2a8);
  while (plVar15 != plVar14) {
    plVar15 = plVar15 + -1;
    plVar7 = (long *)*plVar15;
    if (plVar7 != (long *)0x0) {
      lVar10 = plVar7[6];
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*plVar7 + 0x50))();
      }
      else if (sVar2 == 0) {
LAB_014acfa8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  *(long **)(param_1 + 0x2a8) = plVar14;
  if (0 < param_2) {
    iVar17 = 0;
    do {
      plVar14 = *(long **)(param_1 + 8);
      if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar10 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar10 + 0x80)) {
LAB_014ad4b8:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar14;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
      lVar8 = (**(code **)(*plVar14 + 0x10))(plVar14,0x1f0,0x10);
      if (lVar8 == 0) {
        (**(code **)(*plVar14 + 0xe8))(plVar14);
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("ptr","Create",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
                   ,0x40);
      }
      FUN_014ad55c(lVar8,0);
      *(undefined4 *)(lVar8 + 0x18) = 0x1001f0;
      *(long **)(lVar8 + 8) = plVar14;
      *(long *)(lVar8 + 0x10) = lVar8;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
      lVar10 = *(long *)(lVar8 + 0x30);
      if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar2 == 0) {
        uVar16 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
        *(undefined8 *)(lVar10 + 8) = uVar16;
        *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
      plVar14 = *(long **)(param_1 + 0x2a8);
      if (plVar14 < *(long **)(param_1 + 0x2b0)) {
        uVar16 = *(undefined8 *)(param_1 + 0x2b8);
        if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar10 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar10 == 0) {
          *plVar14 = lVar8;
        }
        else {
          if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_014ad4b8;
          *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar16;
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
          *plVar14 = lVar8;
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
        }
        *(long **)(param_1 + 0x2a8) = plVar14 + 1;
      }
      else {
        uVar13 = *(ulong *)(param_1 + 0x2c0);
        lVar10 = (long)plVar14 - *(long *)(param_1 + 0x2a0) >> 3;
        uVar9 = lVar10 + 1;
        if (0x7ffffffffffffffe < uVar13) {
          uVar13 = 0x7fffffffffffffff;
        }
        if (uVar13 < uVar9) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar11 = (long)*(long **)(param_1 + 0x2b0) - *(long *)(param_1 + 0x2a0);
        uVar12 = lVar11 >> 2;
        if (uVar9 <= uVar12) {
          uVar9 = uVar12;
        }
        if (uVar13 >> 1 <= (ulong)(lVar11 >> 3)) {
          uVar9 = uVar13;
        }
        if (uVar9 == 0) {
          lVar11 = 0;
        }
        else {
          lVar11 = (**(code **)(**(long **)(param_1 + 0x2b8) + 0x10))
                             (*(long **)(param_1 + 0x2b8),uVar9 << 3,8);
          if (lVar11 == 0) {
            (**(code **)(**(long **)(param_1 + 0x2b8) + 0xe8))();
          }
        }
        uVar16 = *(undefined8 *)(param_1 + 0x2b8);
        plVar14 = (long *)(lVar11 + lVar10 * 8);
        if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar10 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar10 == 0) {
          *plVar14 = lVar8;
        }
        else {
          if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_014ad4b8;
          *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar16;
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
          *plVar14 = lVar8;
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
        }
        plVar18 = *(long **)(param_1 + 0x2a0);
        plVar7 = *(long **)(param_1 + 0x2a8);
        plVar15 = plVar14;
        if (plVar7 == plVar18) {
          plVar7 = plVar18;
        }
        else {
          do {
            uVar16 = *(undefined8 *)(param_1 + 0x2b8);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar10 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar10 == 0) {
              lVar10 = plVar7[-1];
              plVar7[-1] = 0;
              plVar15[-1] = lVar10;
            }
            else {
              if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_014ad4b8;
              *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar16;
              *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
              lVar8 = plVar7[-1];
              plVar7[-1] = 0;
              plVar15[-1] = lVar8;
              *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
            }
            plVar7 = plVar7 + -1;
            plVar15 = plVar15 + -1;
          } while (plVar18 != plVar7);
          plVar18 = *(long **)(param_1 + 0x2a0);
          plVar7 = *(long **)(param_1 + 0x2a8);
        }
        lVar10 = *(long *)(param_1 + 0x2b0);
        *(long **)(param_1 + 0x2a0) = plVar15;
        *(long **)(param_1 + 0x2a8) = plVar14 + 1;
        *(ulong *)(param_1 + 0x2b0) = lVar11 + uVar9 * 8;
        while (plVar7 != plVar18) {
          plVar7 = plVar7 + -1;
          plVar14 = (long *)*plVar7;
          if (plVar14 != (long *)0x0) {
            lVar8 = plVar14[6];
            psVar1 = (short *)(lVar8 + 0x1a);
            do {
              sVar2 = *psVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar5) {
                *psVar1 = sVar2 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar2 == 1) {
              *(undefined8 *)(lVar8 + 0x10) = 0;
              (**(code **)(*plVar14 + 0x50))();
            }
            else if (sVar2 == 0) goto LAB_014acfa8;
          }
        }
        if (plVar18 != (long *)0x0) {
          plVar14 = *(long **)(param_1 + 0x2b8);
          lVar10 = lVar10 - (long)plVar18;
          uVar9 = (**(code **)(*plVar14 + 0xf8))(plVar14);
          if (((uVar9 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
            (**(code **)(*plVar14 + 0x18))(plVar14,plVar18,lVar10,8);
          }
          else {
            FUN_00c48fe8(plVar14,plVar18,lVar10,8);
          }
        }
      }
      iVar17 = iVar17 + 1;
    } while (iVar17 != param_2);
  }
  return;
}


