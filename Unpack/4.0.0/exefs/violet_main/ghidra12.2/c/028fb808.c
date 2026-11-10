/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028fb808; name: FUN_028fb808
 */


void FUN_028fb808(long param_1)

{
  short *psVar1;
  uint *puVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  ulong uVar8;
  uint *puVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  int *piVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 *local_f8;
  undefined8 uStack_f0;
  long local_e8;
  long *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  long *local_c0;
  undefined4 local_b8;
  long *local_b0;
  long *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long *local_88;
  undefined4 local_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  if (((*(long *)(param_1 + 0xb8) != 0) && ((*(byte *)(*(long *)(param_1 + 0xb8) + 0x1e8) & 1) != 0)
      ) && (uVar8 = FUN_028fbda4(), (uVar8 & 1) == 0)) {
    piVar13 = (int *)0x0;
    if (*(long *)(param_1 + 0xb8) != 0) {
      if ((*(byte *)(*(long *)(param_1 + 0xb8) + 0x1e8) & 1) == 0) {
        piVar13 = (int *)0x0;
      }
      else {
        puVar9 = (uint *)(**(code **)(**(long **)(param_1 + 0xb8) + 0x70))();
        piVar13 = (int *)((long)puVar9 + (ulong)*puVar9);
      }
    }
    if ((*(ushort *)((long)piVar13 - (long)*piVar13) < 5) ||
       (uVar8 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[2], uVar8 == 0)) {
      puVar9 = (uint *)0x0;
    }
    else {
      puVar9 = (uint *)((long)piVar13 + uVar8);
      puVar9 = (uint *)((long)puVar9 + (ulong)*puVar9);
    }
    FUN_028fbe04(param_1 + 0x200,*puVar9);
    if (*puVar9 != 0) {
      uVar8 = 0;
      do {
        local_f8 = *(undefined8 **)(param_1 + 8);
        lVar10 = FUN_028fbeb8(param_1 + 0x200,&local_f8);
        piVar13 = (int *)((long)(puVar9 + uVar8 + 1) + (ulong)puVar9[uVar8 + 1]);
        if ((*(ushort *)((long)piVar13 - (long)*piVar13) < 7) ||
           (uVar14 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[3], uVar14 == 0)) {
          local_f8 = (undefined8 *)0x0;
        }
        else {
          puVar2 = (uint *)((long)piVar13 + uVar14);
          local_f8 = (undefined8 *)((long)puVar2 + (ulong)*puVar2);
        }
        FUN_00e83e2c(&local_a8,param_1 + 0x40,&local_f8,&DAT_03c886bc);
        uVar14 = FUN_00dc5c18(lVar10,1,&local_a8,0,0);
        if ((uVar14 & 1) == 0) {
          plVar15 = (long *)0x0;
        }
        else {
          plVar15 = *(long **)(lVar10 + 0x20);
          if (plVar15 != (long *)0x0) {
            lVar12 = plVar15[6];
            if (*(long *)(lVar12 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("m_object != nullptr","AddReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x3d);
            }
            psVar1 = (short *)(lVar12 + 0x1a);
            do {
              sVar3 = *psVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar5) {
                *psVar1 = sVar3 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar3 == 0) {
              uVar11 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
              *(undefined8 *)(lVar12 + 8) = uVar11;
              *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
            }
            else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != 0","AddReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x58,"Reference counter overflows.");
            }
          }
        }
        local_78 = (undefined8 *)0x0;
        uStack_70 = 0;
        FUN_00c43ef0(&local_78,param_1 + 0x30);
        local_f8 = (undefined8 *)0x0;
        uStack_f0 = 0;
        if (local_78[2] == param_1 + 0x28) {
          FUN_01187348(&local_f8,&local_78);
        }
        puVar6 = local_78;
        if (local_78 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_78 + 3);
          do {
            sVar3 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar3 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar3 == 1) {
            piVar13 = (int *)((long)local_78 + 0x1c);
            do {
              iVar7 = *piVar13;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar13,0x10);
              if (bVar5) {
                *piVar13 = -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar12 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar12;
              local_68 = *puVar6;
              FUN_00c44438(lVar12 + 0x8040,&local_68);
            }
          }
          else if (sVar3 == 0) goto LAB_028fbd34;
        }
        local_e0 = local_a8;
        local_e8 = lVar10;
        if (local_a8 != (long *)0x0) {
          (**(code **)(*local_a8 + 0x18))();
        }
        local_d8 = local_a0;
        uStack_d0 = uStack_98;
        local_c8 = local_90;
        local_c0 = local_88;
        if (local_88 != (long *)0x0) {
          (**(code **)(*local_88 + 0x18))();
        }
        local_b8 = local_80;
        FUN_028fbf10(&local_b0,&local_f8,plVar15);
        if (local_b0 != (long *)0x0) {
          lVar10 = local_b0[6];
          psVar1 = (short *)(lVar10 + 0x1a);
          do {
            sVar3 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar3 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar3 == 1) {
            *(undefined8 *)(lVar10 + 0x10) = 0;
            (**(code **)(*local_b0 + 0x50))();
          }
          else if (sVar3 == 0) goto LAB_028fbd0c;
        }
        if (local_c0 != (long *)0x0) {
          (**(code **)(*local_c0 + 0x20))();
        }
        if (local_e0 != (long *)0x0) {
          (**(code **)(*local_e0 + 0x20))();
        }
        puVar6 = local_f8;
        if (local_f8 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_f8 + 3);
          do {
            sVar3 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar3 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar3 == 1) {
            piVar13 = (int *)((long)local_f8 + 0x1c);
            do {
              iVar7 = *piVar13;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar13,0x10);
              if (bVar5) {
                *piVar13 = -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar10 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar10;
              local_78 = (undefined8 *)*puVar6;
              FUN_00c44438(lVar10 + 0x8040,&local_78);
            }
          }
          else if (sVar3 == 0) {
LAB_028fbd34:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x33,"Reference counter underflows.");
          }
        }
        if (plVar15 != (long *)0x0) {
          lVar10 = plVar15[6];
          psVar1 = (short *)(lVar10 + 0x1a);
          do {
            sVar3 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar3 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar3 == 1) {
            *(undefined8 *)(lVar10 + 0x10) = 0;
            (**(code **)(*plVar15 + 0x50))(plVar15);
          }
          else if (sVar3 == 0) {
LAB_028fbd0c:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        if (local_88 != (long *)0x0) {
          (**(code **)(*local_88 + 0x20))();
        }
        if (local_a8 != (long *)0x0) {
          (**(code **)(*local_a8 + 0x20))();
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < *puVar9);
    }
  }
  return;
}


