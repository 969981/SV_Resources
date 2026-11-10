/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01deb23c; name: FUN_01deb23c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01deb23c(uint param_1,undefined1 param_2,undefined8 param_3)

{
  int *piVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  short sVar9;
  long *plVar10;
  long *plVar11;
  undefined1 local_60 [4];
  uint local_5c;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined7 uStack_40;
  undefined4 local_39;
  
  if (((*PTR_DAT_047d8550 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d8550), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d8568,PTR_DAT_047d8558,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8550);
  }
  lVar7 = *(long *)PTR_DAT_047d8558;
  *(long *)PTR_DAT_047d8560 = lVar7;
  plVar10 = *(long **)(lVar7 + 0x140);
  if (plVar10 != (long *)0x0) {
    plVar11 = plVar10 + 5;
    do {
      lVar7 = *plVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *(int *)plVar11 = (int)lVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar7 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  FUN_01084328(&local_58,plVar10 + 0x26);
  local_5c = param_1 & 0xff;
  puVar8 = (undefined8 *)0x0;
  local_60[0] = param_2;
  if (local_58 != (undefined8 *)0x0) {
    if (*(short *)((long)local_58 + 0x1a) != 0) {
      psVar2 = (short *)((long)local_58 + 0x1a);
      sVar9 = *(short *)((long)local_58 + 0x1a);
      do {
        sVar3 = *psVar2;
        if (sVar3 == sVar9) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_01deb420;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01deb420:
          bVar5 = false;
        }
        if (bVar5) {
          lVar7 = local_58[2];
          if (lVar7 != 0) {
            plVar11 = (long *)(lVar7 + -0x28);
            local_48 = DAT_03d30185;
            uStack_40 = (undefined7)DAT_03d3018d;
            local_39 = ram0x03d30194;
            FUN_01827d6c(plVar11,0,&local_48,&local_5c,local_60,param_3);
            lVar7 = *(long *)(lVar7 + 0x70);
            psVar2 = (short *)(lVar7 + 0x1a);
            do {
              sVar9 = *psVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar5) {
                *psVar2 = sVar9 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar9 == 1) {
              *(undefined8 *)(lVar7 + 0x10) = 0;
              (**(code **)(*plVar11 + 0x50))(plVar11);
            }
            else if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
          }
          break;
        }
        sVar9 = sVar3;
      } while (sVar3 != 0);
    }
    puVar8 = local_58;
  }
  if (puVar8 != (undefined8 *)0x0) {
    psVar2 = (short *)(puVar8 + 3);
    do {
      sVar9 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar9 == 1) {
      piVar1 = (int *)((long)puVar8 + 0x1c);
      do {
        iVar6 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar7 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar7;
        local_48 = *puVar8;
        FUN_00c44438(lVar7 + 0x8040,&local_48);
      }
    }
    else if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (plVar10 != (long *)0x0) {
    plVar11 = plVar10 + 5;
    do {
      lVar7 = *plVar11;
      iVar6 = (int)lVar7 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *(int *)plVar11 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


