/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a01e00; name: FUN_01a01e00
 */


void FUN_01a01e00(long param_1)

{
  short *psVar1;
  int *piVar2;
  char **ppcVar3;
  ulong *puVar4;
  long **pplVar5;
  short sVar6;
  char cVar7;
  ulong *puVar8;
  bool bVar9;
  int iVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  short sVar16;
  long *plVar17;
  ulong uVar18;
  undefined8 local_d8;
  undefined *puStack_d0;
  undefined8 local_c8;
  long *local_c0;
  ulong local_b8;
  char *local_b0;
  ulong local_a8;
  long *local_a0;
  long *local_98;
  char *local_90;
  ulong local_88;
  long *local_80;
  long *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_58;
  ulong *local_50;
  undefined8 uStack_48;
  
  uVar11 = FUN_017350a8();
  if ((uVar11 & 1) == 0) {
    local_70 = *(undefined8 *)(param_1 + 0x110);
    uStack_68 = *(undefined8 *)(param_1 + 0x118);
    local_60 = *(undefined8 *)(param_1 + 0x120);
    plVar17 = *(long **)(param_1 + 0x128);
    local_58 = plVar17;
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 0x18))(plVar17);
    }
    if (*(code **)(param_1 + 0x10) == (code *)0x0) {
      local_50 = (ulong *)0x0;
      uStack_48 = 0;
    }
    else {
      (**(code **)(param_1 + 0x10))(&local_50,param_1 + 0x30,&local_70);
      plVar17 = local_58;
    }
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 0x20))(plVar17);
    }
    if (local_50 != (ulong *)0x0) {
      if (*(short *)((long)local_50 + 0x1a) != 0) {
        psVar1 = (short *)((long)local_50 + 0x1a);
        sVar16 = *(short *)((long)local_50 + 0x1a);
LAB_01a01e9c:
        sVar6 = *psVar1;
        if (sVar6 == sVar16) {
          cVar7 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar9) {
            *psVar1 = sVar16 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 != '\0') goto LAB_01a01ec0;
          bVar9 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01a01ec0:
          bVar9 = false;
        }
        if (!bVar9) goto code_r0x01a01ec8;
        uVar11 = local_50[2];
        if (uVar11 == 0) goto LAB_01a020dc;
        lVar15 = FUN_0222a92c(uVar11 + 0xe0,&local_b8);
        if (lVar15 != 0) {
          puVar12 = (undefined8 *)FUN_01a6a8cc();
          plVar17 = (long *)*puVar12;
          if (plVar17 != (long *)0x0) {
            lVar15 = plVar17[6];
            if (*(long *)(lVar15 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("m_object != nullptr","AddReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x3d);
            }
            psVar1 = (short *)(lVar15 + 0x1a);
            do {
              sVar16 = *psVar1;
              cVar7 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar9) {
                *psVar1 = sVar16 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (sVar16 == 0) {
              uVar14 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
              *(undefined8 *)(lVar15 + 8) = uVar14;
              *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
            }
            else if (sVar16 == -1) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != 0","AddReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x58,"Reference counter overflows.");
            }
            local_d8 = 0x91fc4aa14b691c6;
            puStack_d0 = &DAT_03c41801;
            local_c8 = 4;
            local_c0 = (long *)0x0;
            FUN_01315eac(&local_b8,param_1,&local_d8);
            if (((*PTR_DAT_047d3e28 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3e28);
            }
            bVar9 = (char)local_b8 != '\0';
            ppcVar3 = (char **)PTR_DAT_047d3e30;
            if (bVar9) {
              ppcVar3 = &local_b0;
            }
            local_90 = *ppcVar3;
            puVar4 = (ulong *)(PTR_DAT_047d3e30 + 8);
            if (bVar9) {
              puVar4 = &local_a8;
            }
            local_88 = *puVar4;
            pplVar5 = (long **)(PTR_DAT_047d3e30 + 0x10);
            if (bVar9) {
              pplVar5 = &local_a0;
            }
            local_80 = *pplVar5;
            pplVar5 = (long **)(PTR_DAT_047d3e30 + 0x18);
            if (bVar9) {
              pplVar5 = &local_98;
            }
            local_78 = *pplVar5;
            if (local_78 != (long *)0x0) {
              (**(code **)(*local_78 + 0x18))();
            }
            if ((char)local_b8 != '\0') {
              if (local_98 != (long *)0x0) {
                (**(code **)(*local_98 + 0x20))();
              }
              local_b8 = local_b8 & 0xffffffffffffff00;
            }
            if (local_c0 != (long *)0x0) {
              (**(code **)(*local_c0 + 0x20))();
            }
            local_b8 = 0x3d624cadc9932412;
            local_b0 = "Param";
            local_a8 = 5;
            local_a0 = (long *)0x0;
            uVar13 = FUN_01180d38(param_1,&local_b8);
            uVar18 = 0;
            if ((uVar13 & 0xff) != 0) {
              uVar18 = uVar13 >> 0x20;
            }
            if (local_a0 != (long *)0x0) {
              (**(code **)(*local_a0 + 0x20))();
            }
            local_b8 = FUN_01ea60f0(plVar17,plVar17 + 0x17,&local_90);
            if ((local_b8 & 0xff) != 0) {
              FUN_01ea6434(uVar18,plVar17,&local_b8);
            }
            if (local_78 != (long *)0x0) {
              (**(code **)(*local_78 + 0x20))();
            }
            lVar15 = plVar17[6];
            psVar1 = (short *)(lVar15 + 0x1a);
            do {
              sVar16 = *psVar1;
              cVar7 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar9) {
                *psVar1 = sVar16 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (sVar16 == 1) {
              *(undefined8 *)(lVar15 + 0x10) = 0;
              (**(code **)(*plVar17 + 0x50))(plVar17);
            }
            else if (sVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
          }
        }
        (**(code **)(*(long *)(uVar11 - 0x28) + 0x60))((long *)(uVar11 - 0x28));
LAB_01a020d8:
        if (local_50 == (ulong *)0x0) {
          return;
        }
      }
LAB_01a020dc:
      puVar8 = local_50;
      puVar4 = local_50 + 3;
      do {
        sVar16 = (short)*puVar4;
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar9) {
          *(short *)puVar4 = sVar16 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar16 == 1) {
        piVar2 = (int *)((long)local_50 + 0x1c);
        do {
          iVar10 = *piVar2;
          cVar7 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar9) {
            *piVar2 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar15 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar15;
          local_b8 = *puVar8;
          FUN_00c44438(lVar15 + 0x8040,&local_b8);
        }
      }
      else if (sVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  return;
code_r0x01a01ec8:
  sVar16 = sVar6;
  if (sVar6 == 0) goto LAB_01a020d8;
  goto LAB_01a01e9c;
}


