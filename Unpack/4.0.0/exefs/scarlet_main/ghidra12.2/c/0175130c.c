/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0175130c; name: FUN_0175130c
 */


void FUN_0175130c(undefined1 param_1 [16],long param_2)

{
  int *piVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  short sVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 local_88;
  char *pcStack_80;
  undefined8 local_78;
  long *local_70;
  undefined8 *local_68 [2];
  undefined8 *local_58 [2];
  undefined8 local_48;
  undefined8 local_40 [3];
  undefined8 local_28;
  
  local_40[0] = param_1._0_8_;
  lVar7 = *(long *)(param_2 + 0x40);
  if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
    psVar2 = (short *)(lVar7 + 0x1a);
    sVar8 = *(short *)(lVar7 + 0x1a);
    do {
      sVar3 = *psVar2;
      if (sVar3 == sVar8) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar5) {
          *psVar2 = sVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_0175152c;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0175152c:
        bVar5 = false;
      }
      if (bVar5) {
        lVar7 = *(long *)(lVar7 + 0x10);
        if (lVar7 != 0) {
          plVar10 = (long *)(lVar7 + -0x28);
          *(long *)(lVar7 + 0xc0) = param_1._8_8_;
          *(undefined8 *)(lVar7 + 0xb8) = local_40[0];
          if (*(char *)(lVar7 + 0xcc) == '\0') {
            *(undefined1 *)(lVar7 + 0xcc) = 1;
            (**(code **)(*plVar10 + 0x78))(plVar10);
          }
          lVar7 = *(long *)(lVar7 + 8);
          psVar2 = (short *)(lVar7 + 0x1a);
          do {
            sVar8 = *psVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar5) {
              *psVar2 = sVar8 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar8 == 1) {
            *(undefined8 *)(lVar7 + 0x10) = 0;
            (**(code **)(*plVar10 + 0x50))(plVar10);
          }
          else if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        break;
      }
      sVar8 = sVar3;
    } while (sVar3 != 0);
  }
  local_48 = FUN_017516e8();
  FUN_0175164c(local_58,&local_48);
  local_88 = 0x1dc876cc3157ccde;
  pcStack_80 = "PB_Translate";
  local_78 = 0xc;
  local_70 = (long *)0x0;
  FUN_01751920(local_68,local_58,&local_88,0,0);
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if ((local_68[0] != (undefined8 *)0x0) &&
     ((puVar9 = local_68[0], local_68[0][2] == 0 ||
      (FUN_01751de4(local_68[0][2] + -0x28,local_40), puVar9 = local_68[0],
      local_68[0] != (undefined8 *)0x0)))) {
    psVar2 = (short *)(puVar9 + 3);
    do {
      sVar8 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar8 == 1) {
      piVar1 = (int *)((long)puVar9 + 0x1c);
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
        local_28 = *puVar9;
        FUN_00c44438(lVar7 + 0x8040,&local_28);
      }
    }
    else if (sVar8 == 0) goto LAB_017513c0;
  }
  if (local_58[0] != (undefined8 *)0x0) {
    psVar2 = (short *)(local_58[0] + 3);
    do {
      sVar8 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar8 == 1) {
      piVar1 = (int *)((long)local_58[0] + 0x1c);
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
        local_68[0] = (undefined8 *)*local_58[0];
        FUN_00c44438(lVar7 + 0x8040,local_68);
      }
    }
    else if (sVar8 == 0) {
LAB_017513c0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


