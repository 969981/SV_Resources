/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a35c0c; name: FUN_00a35c0c
 */


undefined8 FUN_00a35c0c(undefined1 param_1,undefined8 param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  short sVar10;
  long *plVar11;
  undefined8 *local_78 [2];
  undefined8 local_68;
  char *pcStack_60;
  undefined8 local_58;
  long *local_50;
  undefined8 local_48;
  char *pcStack_40;
  undefined8 local_38;
  long *local_30;
  undefined8 local_28;
  
  uVar7 = 1;
  switch(param_1) {
  case 0:
    goto switchD_00a35c4c_caseD_0;
  case 1:
    local_48 = 0xbc071098b7443d50;
    pcStack_40 = "poke_state_int";
    local_38 = 0xe;
    local_30 = (long *)0x0;
    iVar6 = FUN_01f9f2a8(param_2,&local_48);
    if (local_30 != (long *)0x0) {
      (**(code **)(*local_30 + 0x20))();
    }
    if (iVar6 == 1) {
      return 1;
    }
    break;
  case 2:
    local_68 = 0xbc071098b7443d50;
    pcStack_60 = "poke_state_int";
    local_58 = 0xe;
    local_50 = (long *)0x0;
    iVar6 = FUN_01f9f2a8(param_2,&local_68);
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x20))();
    }
    if (iVar6 == 2) {
      return 1;
    }
    break;
  case 3:
    FUN_00e3353c(local_78,param_2);
    if (local_78[0] != (undefined8 *)0x0) {
      if (*(short *)((long)local_78[0] + 0x1a) != 0) {
        psVar1 = (short *)((long)local_78[0] + 0x1a);
        sVar10 = *(short *)((long)local_78[0] + 0x1a);
        do {
          sVar3 = *psVar1;
          if (sVar3 == sVar10) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar10 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 != '\0') goto LAB_00a35d64;
            bVar5 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00a35d64:
            bVar5 = false;
          }
          if (bVar5) {
            plVar11 = (long *)0x0;
            if (local_78[0][2] != 0) {
              plVar11 = (long *)(local_78[0][2] + -0x28);
            }
            goto LAB_00a35d8c;
          }
          sVar10 = sVar3;
        } while (sVar3 != 0);
      }
      plVar11 = (long *)0x0;
LAB_00a35d8c:
      psVar1 = (short *)(local_78[0] + 3);
      do {
        sVar10 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar10 == 1) {
        piVar2 = (int *)((long)local_78[0] + 0x1c);
        do {
          iVar6 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_28 = *local_78[0];
          FUN_00c44438(lVar9 + 0x8040,&local_28);
        }
      }
      else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
      if (plVar11 != (long *)0x0) {
        uVar8 = FUN_01e0fda4(plVar11);
        lVar9 = plVar11[6];
        psVar1 = (short *)(lVar9 + 0x1a);
        do {
          sVar10 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar8 & 1) != 0) {
          if (sVar10 == 1) {
            *(undefined8 *)(lVar9 + 0x10) = 0;
            (**(code **)(*plVar11 + 0x50))(plVar11);
            return 1;
          }
          if (sVar10 != 0) {
            return 1;
          }
LAB_00a35dec:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        if (sVar10 == 1) {
          *(undefined8 *)(lVar9 + 0x10) = 0;
          (**(code **)(*plVar11 + 0x50))(plVar11);
        }
        else if (sVar10 == 0) goto LAB_00a35dec;
      }
    }
  }
  uVar7 = 0;
switchD_00a35c4c_caseD_0:
  return uVar7;
}


