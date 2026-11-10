/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01951fc0; name: FUN_01951fc0
 */


uint FUN_01951fc0(long param_1,undefined8 *param_2,uint param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  uint uVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  short sVar11;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_48 [2];
  undefined8 local_38;
  
  plVar9 = *(long **)(param_1 + 0xd90);
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x18))(local_48);
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    if ((long *)local_48[0][2] == plVar9 + 5) {
      FUN_01ab09f0(&local_58,local_48);
    }
    puVar6 = local_48[0];
    if (local_48[0] != (undefined8 *)0x0) {
      psVar1 = (short *)(local_48[0] + 3);
      do {
        sVar11 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar11 == 1) {
        piVar2 = (int *)((long)local_48[0] + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_38 = *puVar6;
          FUN_00c44438(lVar10 + 0x8040,&local_38);
        }
      }
      else if (sVar11 == 0) goto LAB_019522a8;
    }
    puVar6 = local_58;
    if (local_58 != (undefined8 *)0x0) {
      if (*(short *)((long)local_58 + 0x1a) != 0) {
        psVar1 = (short *)((long)local_58 + 0x1a);
        sVar11 = *(short *)((long)local_58 + 0x1a);
        do {
          sVar3 = *psVar1;
          if (sVar3 == sVar11) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar11 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 != '\0') goto LAB_019520a0;
            bVar5 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_019520a0:
            bVar5 = false;
          }
          if (bVar5) {
            plVar9 = (long *)0x0;
            if (local_58[2] != 0) {
              plVar9 = (long *)(local_58[2] + -0x28);
            }
            goto LAB_01952128;
          }
          sVar11 = sVar3;
        } while (sVar3 != 0);
      }
      plVar9 = (long *)0x0;
LAB_01952128:
      psVar1 = (short *)(local_58 + 3);
      do {
        sVar11 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar11 == 1) {
        piVar2 = (int *)((long)local_58 + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_48[0] = (undefined8 *)*puVar6;
          FUN_00c44438(lVar10 + 0x8040,local_48);
        }
      }
      else if (sVar11 == 0) {
LAB_019522a8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
      if (plVar9 != (long *)0x0) {
        if (*(char *)(param_1 + 0xde0) == '\0') {
          uVar7 = FUN_018dc6e0(plVar9,param_2,param_3 & 1);
        }
        else if (*(int *)(param_1 + 0xde4) < 9) {
          *(undefined8 *)(param_1 + (long)*(int *)(param_1 + 0xde4) * 8 + 0xde8) = *param_2;
          *(int *)(param_1 + 0xde4) = *(int *)(param_1 + 0xde4) + 1;
          uVar7 = 0;
          *(undefined4 *)(param_1 + 0xe38) = 1;
        }
        else {
          uVar7 = 0;
        }
        lVar10 = plVar9[6];
        psVar1 = (short *)(lVar10 + 0x1a);
        do {
          sVar11 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar11 == 1) {
          *(undefined8 *)(lVar10 + 0x10) = 0;
          (**(code **)(*plVar9 + 0x50))(plVar9);
        }
        else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        goto LAB_01951fe8;
      }
    }
  }
  uVar7 = 0;
LAB_01951fe8:
  return uVar7 & 1;
}


