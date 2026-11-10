/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a5fe5c; name: FUN_00a5fe5c
 */


undefined8 FUN_00a5fe5c(long *param_1,long *param_2)

{
  short *psVar1;
  long *plVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  short sVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long *local_50;
  undefined8 uStack_48;
  long *local_40;
  undefined8 uStack_38;
  long local_18;
  
  lVar14 = *param_2;
  local_40 = (long *)0x0;
  uStack_38 = 0;
  FUN_00c43ef0(&local_40,lVar14 + 0x30);
  local_50 = (long *)0x0;
  uStack_48 = 0;
  lVar10 = 0;
  if (lVar14 != 0) {
    lVar10 = lVar14 + 0x28;
  }
  if (local_40[2] == lVar10) {
    FUN_00e29918(&local_50,&local_40);
  }
  plVar7 = local_40;
  if (local_40 != (long *)0x0) {
    plVar13 = local_40 + 3;
    do {
      sVar11 = (short)*plVar13;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *(short *)plVar13 = sVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar11 == 1) {
      piVar3 = (int *)((long)local_40 + 0x1c);
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
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_18 = *plVar7;
        FUN_00c44438(lVar10 + 0x8040,&local_18);
      }
    }
    else if (sVar11 == 0) goto LAB_00a60218;
  }
  plVar7 = local_50;
  if (local_50 != (long *)0x0) {
    if (*(short *)((long)local_50 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_50 + 0x1a);
      sVar11 = *(short *)((long)local_50 + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar11) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar11 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            plVar13 = (long *)0x0;
            if (local_50[2] != 0) {
              plVar13 = (long *)(local_50[2] + -0x28);
            }
            goto LAB_00a5ff44;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        sVar11 = sVar4;
      } while (sVar4 != 0);
    }
    plVar13 = (long *)0x0;
LAB_00a5ff44:
    plVar2 = local_50 + 3;
    do {
      sVar11 = (short)*plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(short *)plVar2 = sVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar11 == 1) {
      piVar3 = (int *)((long)local_50 + 0x1c);
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
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_40 = (long *)*plVar7;
        FUN_00c44438(lVar10 + 0x8040,&local_40);
      }
    }
    else if (sVar11 == 0) {
LAB_00a60218:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
    if (plVar13 != (long *)0x0) {
      (**(code **)(*param_1 + 0x28))(&local_40,param_1);
      plVar7 = local_40;
      if (local_40 != (long *)0x0) {
        (**(code **)(*local_40 + 0x18))(local_40);
        cVar5 = *(char *)plVar7[7];
        (**(code **)(*plVar7 + 0x20))(plVar7);
        if (cVar5 != '\0') {
          FUN_01dbf5e4(&local_50,plVar13 + 8,&local_40);
          if ((local_50 == (long *)0x0) ||
             (uVar9 = (**(code **)(*local_50 + 0xd8))(), (uVar9 & 1) != 0)) {
            uVar12 = 1;
          }
          else {
            uVar12 = 0;
          }
          if (local_50 != (long *)0x0) {
            lVar10 = local_50[6];
            psVar1 = (short *)(lVar10 + 0x1a);
            do {
              sVar11 = *psVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar6) {
                *psVar1 = sVar11 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar11 == 1) {
              *(undefined8 *)(lVar10 + 0x10) = 0;
              (**(code **)(*local_50 + 0x50))();
            }
            else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
          }
          if (local_40 != (long *)0x0) {
            (**(code **)(*local_40 + 0x20))();
          }
          (**(code **)(*plVar13 + 0x60))(plVar13);
          return uVar12;
        }
      }
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("false","Initialize",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/src/ui/pokedex/data/pokedex_fbs_data_base.cpp"
                 ,0x32);
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("false","Initialize",
             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/src/ui/pokedex/data/pokedex_fbs_data_base.cpp"
             ,0x3e,"fbs data scene object is null");
}


