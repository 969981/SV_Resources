/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01df9b54; name: FUN_01df9b54
 */


void FUN_01df9b54(long param_1,long *param_2)

{
  int *piVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  code *pcVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  short sVar13;
  undefined8 local_e0;
  undefined *puStack_d8;
  undefined8 local_d0;
  long *local_c8;
  undefined8 *local_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [96];
  undefined8 local_28;
  
  plVar9 = (long *)FUN_01df9e98();
  lVar11 = *plVar9;
  if ((lVar11 != 0) && (*(short *)(lVar11 + 0x1a) != 0)) {
    psVar2 = (short *)(lVar11 + 0x1a);
    sVar13 = *(short *)(lVar11 + 0x1a);
    do {
      sVar3 = *psVar2;
      if (sVar3 == sVar13) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar5) {
          *psVar2 = sVar13 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01df9d94;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01df9d94:
        bVar5 = false;
      }
      if (bVar5) {
        lVar11 = *(long *)(lVar11 + 0x10);
        if (lVar11 != 0) {
          plVar9 = (long *)(lVar11 + -0x28);
          memset(&local_c0,0,0x80);
          FUN_0131fc3c(plVar9,param_2,&local_c0,100);
          pcVar7 = local_b8;
          if (local_b8 != (code *)0x0) {
            local_b0 = 0;
            uStack_a8 = 0;
            local_c0 = (undefined8 *)0x0;
            local_b8 = (code *)0x0;
            (*pcVar7)(auStack_a0);
          }
          lVar11 = *(long *)(lVar11 + 0x70);
          psVar2 = (short *)(lVar11 + 0x1a);
          do {
            sVar13 = *psVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar5) {
              *psVar2 = sVar13 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar13 == 1) {
            *(undefined8 *)(lVar11 + 0x10) = 0;
            (**(code **)(*plVar9 + 0x50))(plVar9);
          }
          else if (sVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        break;
      }
      sVar13 = sVar3;
    } while (sVar3 != 0);
  }
  local_e0 = 0x12315307bd693745;
  puStack_d8 = &DAT_03c429ae;
  local_d0 = 2;
  local_c8 = (long *)0x0;
  FUN_01751920(&local_c0,param_1 + 0x48,&local_e0,1,0);
  puVar6 = local_c0;
  lVar11 = 0;
  if (local_c0 != (undefined8 *)0x0) {
    lVar11 = 0;
    if (local_c0[2] != 0) {
      lVar11 = local_c0[2] + -0x28;
    }
    psVar2 = (short *)(local_c0 + 3);
    do {
      sVar13 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar13 == 1) {
      piVar1 = (int *)((long)local_c0 + 0x1c);
      do {
        iVar8 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_28 = *puVar6;
        FUN_00c44438(lVar12 + 0x8040,&local_28);
      }
    }
    else if (sVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  if (lVar11 != 0) {
    lVar12 = *param_2;
    if (lVar12 < 0x3e09e854ea9f0a0f) {
      if (lVar12 == 0x9fb414aac559353) {
        uVar10 = 3;
      }
      else {
        if (lVar12 != 0x38b9983ca4230d8b) {
          return;
        }
        uVar10 = 0;
      }
    }
    else if (lVar12 == 0x3e09e854ea9f0a0f) {
      uVar10 = 2;
    }
    else {
      if (lVar12 != 0x64b0a9c78aff4055) {
        return;
      }
      uVar10 = 1;
    }
    FUN_01dfa1ac(lVar11,uVar10);
  }
  return;
}


