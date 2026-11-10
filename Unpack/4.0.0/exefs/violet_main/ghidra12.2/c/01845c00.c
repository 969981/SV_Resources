/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01845c00; name: FUN_01845c00
 */


void FUN_01845c00(long param_1,int param_2)

{
  short *psVar1;
  short sVar2;
  undefined2 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  int param3;
  undefined8 uVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long *local_98;
  long *local_90;
  char acStack_88 [8];
  long *local_80;
  long lStack_78;
  long local_70;
  long *local_68;
  
  if ((*(char *)(param_1 + 0x58) != '\0') || (*(char *)(param_1 + 0x59) != '\0')) {
    uVar3 = *(undefined2 *)(param_1 + 0x58);
    plVar16 = (long *)(param_1 + 0x38);
    *(undefined2 *)(param_1 + 0x58) = 0;
    if (*(long *)(param_1 + 0x48) != 0) {
      FUN_00c6a584(*(long *)(param_1 + 0x48),plVar16);
    }
    (**(code **)(*plVar16 + 0x20))(plVar16,uVar3);
  }
  if (0 < param_2) {
    param3 = 0;
    do {
      snprintf(acStack_88,8,"pass%2d",param3);
      local_b0 = *(undefined8 *)(param_1 + 0x180);
      uStack_a8 = *(undefined8 *)(param_1 + 0x188);
      plVar16 = *(long **)(param_1 + 8);
      local_a0 = *(undefined8 *)(param_1 + 400);
      local_98 = *(long **)(param_1 + 0x198);
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0x18))();
      }
      FUN_018462ec(&local_90,&local_b0,acStack_88);
      if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar7 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar7 + 0x80)) {
LAB_01846230:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar16;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      plVar8 = (long *)(**(code **)(*plVar16 + 0x10))(plVar16,400,8);
      plVar15 = local_90;
      if (plVar8 == (long *)0x0) {
        (**(code **)(*plVar16 + 0xe8))(plVar16);
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("ptr","Create",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
                   ,0x40);
      }
      local_80 = (long *)PTR_DAT_047d8b70;
      if (local_90 != (long *)0x0) {
        local_80 = local_90 + 6;
      }
      local_80 = (long *)*local_80;
      plVar17 = (long *)PTR_PTR_047d4508;
      if (local_90 != (long *)0x0) {
        plVar17 = local_90 + 7;
      }
      lStack_78 = *plVar17;
      if (local_90 == (long *)0x0) {
        local_70 = 0;
      }
      else {
        local_70 = local_90[8];
        local_68 = (long *)0x0;
        (**(code **)(*local_90 + 0x18))(local_90);
      }
      local_68 = plVar15;
      FUN_01846368(plVar8,&local_80);
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      *(undefined4 *)(plVar8 + 3) = 0x80190;
      plVar8[1] = (long)plVar16;
      plVar8[2] = (long)plVar8;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      lVar7 = plVar8[6];
      local_80 = plVar8;
      if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar7 + 0x1a);
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
        uVar14 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
        *(undefined8 *)(lVar7 + 8) = uVar14;
        *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
      if (*(ulong *)(param_1 + 0x2e0) < *(ulong *)(param_1 + 0x2e8)) {
        FUN_01846a44(param_1 + 0x2d8,&local_80);
      }
      else {
        uVar13 = *(ulong *)(param_1 + 0x2f8);
        lVar7 = (long)(*(ulong *)(param_1 + 0x2e0) - *(long *)(param_1 + 0x2d8)) >> 3;
        uVar9 = lVar7 + 1;
        if (0x7ffffffffffffffe < uVar13) {
          uVar13 = 0x7fffffffffffffff;
        }
        if (uVar13 < uVar9) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar10 = *(ulong *)(param_1 + 0x2e8) - *(long *)(param_1 + 0x2d8);
        uVar11 = lVar10 >> 2;
        if (uVar9 <= uVar11) {
          uVar9 = uVar11;
        }
        if (uVar13 >> 1 <= (ulong)(lVar10 >> 3)) {
          uVar9 = uVar13;
        }
        if (uVar9 == 0) {
          lVar10 = 0;
        }
        else {
          lVar10 = (**(code **)(**(long **)(param_1 + 0x2f0) + 0x10))
                             (*(long **)(param_1 + 0x2f0),uVar9 << 3,8);
          if (lVar10 == 0) {
            (**(code **)(**(long **)(param_1 + 0x2f0) + 0xe8))();
          }
        }
        uVar14 = *(undefined8 *)(param_1 + 0x2f0);
        plVar16 = (long *)(lVar10 + lVar7 * 8);
        if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar7 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar7 == 0) {
          *plVar16 = (long)local_80;
        }
        else {
          if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_01846230;
          *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar14;
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
          *plVar16 = (long)local_80;
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
        }
        local_80 = (long *)0x0;
        plVar8 = *(long **)(param_1 + 0x2d8);
        plVar17 = *(long **)(param_1 + 0x2e0);
        plVar15 = plVar16;
        if (plVar17 == plVar8) {
          plVar17 = plVar8;
        }
        else {
          do {
            uVar14 = *(undefined8 *)(param_1 + 0x2f0);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar7 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar7 == 0) {
              lVar7 = plVar17[-1];
              plVar17[-1] = 0;
              plVar15[-1] = lVar7;
            }
            else {
              if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_01846230;
              *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar14;
              *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
              lVar12 = plVar17[-1];
              plVar17[-1] = 0;
              plVar15[-1] = lVar12;
              *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
            }
            plVar17 = plVar17 + -1;
            plVar15 = plVar15 + -1;
          } while (plVar8 != plVar17);
          plVar8 = *(long **)(param_1 + 0x2d8);
          plVar17 = *(long **)(param_1 + 0x2e0);
        }
        lVar7 = *(long *)(param_1 + 0x2e8);
        *(long **)(param_1 + 0x2d8) = plVar15;
        *(long **)(param_1 + 0x2e0) = plVar16 + 1;
        *(ulong *)(param_1 + 0x2e8) = lVar10 + uVar9 * 8;
        while (plVar17 != plVar8) {
          plVar17 = plVar17 + -1;
          plVar16 = (long *)*plVar17;
          if (plVar16 != (long *)0x0) {
            lVar10 = plVar16[6];
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
              (**(code **)(*plVar16 + 0x50))();
            }
            else if (sVar2 == 0) goto LAB_01846234;
          }
        }
        if (plVar8 != (long *)0x0) {
          plVar16 = *(long **)(param_1 + 0x2f0);
          lVar7 = lVar7 - (long)plVar8;
          uVar9 = (**(code **)(*plVar16 + 0xf8))(plVar16);
          if (((uVar9 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
            (**(code **)(*plVar16 + 0x18))(plVar16,plVar8,lVar7,8);
          }
          else {
            FUN_00c48fe8(plVar16,plVar8,lVar7,8);
          }
        }
      }
      if (local_80 != (long *)0x0) {
        lVar7 = local_80[6];
        psVar1 = (short *)(lVar7 + 0x1a);
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
          *(undefined8 *)(lVar7 + 0x10) = 0;
          (**(code **)(*local_80 + 0x50))();
        }
        else if (sVar2 == 0) {
LAB_01846234:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      if (local_90 != (long *)0x0) {
        (**(code **)(*local_90 + 0x20))();
      }
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0x20))();
      }
      param3 = param3 + 1;
    } while (param3 != param_2);
  }
  return;
}


