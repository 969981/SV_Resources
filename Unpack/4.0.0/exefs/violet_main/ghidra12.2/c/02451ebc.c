/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02451ebc; name: FUN_02451ebc
 */


undefined8 FUN_02451ebc(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_58;
  long *local_50;
  undefined8 *local_48 [2];
  undefined8 local_38;
  
  if (((*PTR_DAT_047d6c20 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c20);
  }
  lVar11 = *(long *)PTR_DAT_047d6c28;
  *(long *)PTR_DAT_047d6c30 = lVar11;
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  if ((lVar9 == 0) || (*(int *)(lVar9 + 0x90) == -1)) {
    uVar10 = 0xffffffffffffffff;
  }
  else {
    FUN_0142cac4(local_48,*(undefined8 *)(lVar11 + (long)*(int *)(lVar9 + 0x90) * 8 + 0x6a0));
    if (local_48[0] == (undefined8 *)0x0) {
      return 0xffffffffffffffff;
    }
    if (*(short *)((long)local_48[0] + 0x1a) == 0) {
      uVar10 = 0xffffffffffffffff;
    }
    else {
      if (((*PTR_DAT_047dab40 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_047dab40), iVar8 != 0)) {
        FUN_00100190(PTR_LAB_047dd780,PTR_DAT_047dab48,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047dab40);
      }
      *(undefined8 *)PTR_DAT_047dab50 = *(undefined8 *)PTR_DAT_047dab48;
      FUN_017ad788(&local_50);
      plVar1 = local_50;
      local_80 = (undefined8 *)0x0;
      uStack_78 = 0;
      FUN_00c43ef0(&local_80,local_48);
      local_70 = *param_2;
      uStack_68 = param_2[1];
      local_60 = param_2[2];
      local_58 = (long *)param_2[3];
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x18))();
      }
      uVar10 = FUN_024522f8(param_1,plVar1,&local_80);
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
      puVar7 = local_80;
      if (local_80 != (undefined8 *)0x0) {
        psVar2 = (short *)(local_80 + 3);
        do {
          sVar4 = *psVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar6) {
            *psVar2 = sVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar4 == 1) {
          piVar3 = (int *)((long)local_80 + 0x1c);
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
            lVar11 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar11;
            local_38 = *puVar7;
            FUN_00c44438(lVar11 + 0x8040,&local_38);
          }
        }
        else if (sVar4 == 0) goto LAB_02452030;
      }
      if (local_50 != (long *)0x0) {
        plVar1 = local_50 + 5;
        do {
          lVar11 = *plVar1;
          iVar8 = (int)lVar11 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *(int *)plVar1 = iVar8;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 == 0) {
          (**(code **)(*local_50 + 0x10))();
        }
        else if ((int)lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
    }
    if (local_48[0] != (undefined8 *)0x0) {
      psVar2 = (short *)(local_48[0] + 3);
      do {
        sVar4 = *psVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar6) {
          *psVar2 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)local_48[0] + 0x1c);
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
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_80 = (undefined8 *)*local_48[0];
          FUN_00c44438(lVar11 + 0x8040,&local_80);
        }
      }
      else if (sVar4 == 0) {
LAB_02452030:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  return uVar10;
}


