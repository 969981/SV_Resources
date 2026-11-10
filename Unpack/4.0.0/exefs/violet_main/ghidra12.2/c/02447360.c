/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02447360; name: FUN_02447360
 */


undefined8
FUN_02447360(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  short *psVar1;
  long *plVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  long *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  long *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  long *local_b0;
  long *local_a8;
  undefined8 local_a0 [3];
  long *local_88;
  long *local_70;
  long *local_68;
  undefined8 *local_60 [2];
  undefined8 local_48;
  
  if (((*PTR_DAT_047d6c20 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c20);
  }
  lVar15 = *(long *)PTR_DAT_047d6c28;
  *(long *)PTR_DAT_047d6c30 = lVar15;
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  if ((lVar9 == 0) || (*(int *)(lVar9 + 0x90) == -1)) {
    uVar16 = 0xffffffffffffffff;
  }
  else {
    FUN_0142cac4(local_60,*(undefined8 *)(lVar15 + (long)*(int *)(lVar9 + 0x90) * 8 + 0x6a0));
    if (local_60[0] == (undefined8 *)0x0) {
      return 0xffffffffffffffff;
    }
    if (*(short *)((long)local_60[0] + 0x1a) == 0) {
      uVar16 = 0xffffffffffffffff;
    }
    else {
      if (((*PTR_DAT_047dab40 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_047dab40), iVar8 != 0)) {
        FUN_00100190(PTR_LAB_047dd780,PTR_DAT_047dab48,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047dab40);
      }
      uVar16 = *(undefined8 *)PTR_DAT_047dab48;
      *(undefined8 *)PTR_DAT_047dab50 = uVar16;
      local_c8 = *param_2;
      uStack_c0 = param_2[1];
      local_b8 = param_2[2];
      local_b0 = (long *)param_2[3];
      if (local_b0 != (long *)0x0) {
        (**(code **)(*local_b0 + 0x18))();
      }
      FUN_010e2c30(&local_a8,uVar16,&local_c8);
      plVar14 = (long *)local_a8[8];
      if (plVar14 != (long *)0x0) {
        lVar15 = plVar14[6];
        if (*(long *)(lVar15 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar1 = (short *)(lVar15 + 0x1a);
        do {
          sVar4 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar4 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar4 == 0) {
          uVar16 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
          *(undefined8 *)(lVar15 + 8) = uVar16;
          *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
        }
        else if (sVar4 == -1) {
          pcVar10 = "count != 0";
          pcVar11 = "AddReference";
          pcVar12 = 
          "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
          ;
          pcVar13 = "Reference counter overflows.";
          goto LAB_02447988;
        }
      }
      local_e8 = *param_3;
      uStack_e0 = param_3[1];
      local_d8 = param_3[2];
      local_d0 = (long *)param_3[3];
      if (local_d0 != (long *)0x0) {
        (**(code **)(*local_d0 + 0x18))();
      }
      FUN_024479b4(local_a0,plVar14,&local_e8);
      plVar2 = local_70;
      local_118 = (undefined8 *)0x0;
      uStack_110 = 0;
      FUN_00c43ef0(&local_118,local_60);
      local_108 = *param_4;
      uStack_100 = param_4[1];
      local_f8 = param_4[2];
      local_f0 = (long *)param_4[3];
      if (local_f0 != (long *)0x0) {
        (**(code **)(*local_f0 + 0x18))();
      }
      uVar16 = FUN_02447af0(param_1,plVar2,&local_118);
      if (local_f0 != (long *)0x0) {
        (**(code **)(*local_f0 + 0x20))();
      }
      puVar7 = local_118;
      if (local_118 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_118 + 3);
        do {
          sVar4 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar4 == 1) {
          piVar3 = (int *)((long)local_118 + 0x1c);
          do {
            iVar8 = *piVar3;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar6) {
              *piVar3 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar15 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar15;
            local_48 = *puVar7;
            FUN_00c44438(lVar15 + 0x8040,&local_48);
          }
        }
        else if (sVar4 == 0) goto LAB_02447628;
      }
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      if (local_70 != (long *)0x0) {
        plVar2 = local_70 + 5;
        do {
          lVar15 = *plVar2;
          iVar8 = (int)lVar15 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *(int *)plVar2 = iVar8;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 == 0) {
          (**(code **)(*local_70 + 0x10))();
        }
        else if ((int)lVar15 == 0) {
          pcVar10 = "count != std::numeric_limits<uint32_t>::max()";
          pcVar11 = "DecrementReferenceInternal";
          pcVar12 = 
          "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
          ;
          pcVar13 = "Reference counter underflows.";
LAB_02447988:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl(pcVar10,pcVar11,pcVar12,0x58,pcVar13);
        }
      }
      if (local_88 != (long *)0x0) {
        (**(code **)(*local_88 + 0x20))();
      }
      if (local_d0 != (long *)0x0) {
        (**(code **)(*local_d0 + 0x20))();
      }
      if (plVar14 != (long *)0x0) {
        lVar15 = plVar14[6];
        psVar1 = (short *)(lVar15 + 0x1a);
        do {
          sVar4 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar4 == 1) {
          *(undefined8 *)(lVar15 + 0x10) = 0;
          (**(code **)(*plVar14 + 0x50))(plVar14);
        }
        else if (sVar4 == 0) goto LAB_02447920;
      }
      if (local_a8 != (long *)0x0) {
        lVar15 = local_a8[6];
        psVar1 = (short *)(lVar15 + 0x1a);
        do {
          sVar4 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar4 == 1) {
          *(undefined8 *)(lVar15 + 0x10) = 0;
          (**(code **)(*local_a8 + 0x50))();
        }
        else if (sVar4 == 0) {
LAB_02447920:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      if (local_b0 != (long *)0x0) {
        (**(code **)(*local_b0 + 0x20))();
      }
    }
    if (local_60[0] != (undefined8 *)0x0) {
      psVar1 = (short *)(local_60[0] + 3);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)local_60[0] + 0x1c);
        do {
          iVar8 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar15 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar15;
          local_a0[0] = *local_60[0];
          FUN_00c44438(lVar15 + 0x8040,local_a0);
        }
      }
      else if (sVar4 == 0) {
LAB_02447628:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  return uVar16;
}


