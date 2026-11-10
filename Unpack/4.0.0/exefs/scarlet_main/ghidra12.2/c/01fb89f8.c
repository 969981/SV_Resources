/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01fb89f8; name: FUN_01fb89f8
 */


undefined8 FUN_01fb89f8(long *param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  short sVar10;
  undefined8 uVar11;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined8 local_18;
  
  lVar9 = *param_1;
  if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar9 + 0x1a);
    sVar10 = *(short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar10) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01fb8a64;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01fb8a64:
        bVar5 = false;
      }
      if (bVar5) {
        lVar9 = *(long *)(lVar9 + 0x10);
        if (lVar9 == 0) {
          return 0;
        }
        lVar8 = FUN_01104bd8(lVar9 + 0xe0,&local_40);
        param_1[2] = lVar8;
        uVar11 = 0;
        if (lVar8 != 0) {
          local_40 = (undefined8 *)0x0;
          uStack_38 = 0;
          FUN_00c43ef0(&local_40,lVar8 + 0x98);
          local_50 = (undefined8 *)0x0;
          uStack_48 = 0;
          if (local_40[2] == lVar8 + 0x28) {
            FUN_00d6ca28(&local_50,&local_40);
          }
          puVar6 = local_40;
          if (local_40 != (undefined8 *)0x0) {
            psVar1 = (short *)(local_40 + 3);
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
              piVar2 = (int *)((long)local_40 + 0x1c);
              do {
                iVar7 = *piVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                  *piVar2 = -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar7 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar8 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar8;
                local_18 = *puVar6;
                FUN_00c44438(lVar8 + 0x8040,&local_18);
              }
            }
            else if (sVar10 == 0) goto LAB_01fb8b54;
          }
          FUN_00d6c658(param_1 + 3,&local_50);
          puVar6 = local_50;
          if (local_50 != (undefined8 *)0x0) {
            psVar1 = (short *)(local_50 + 3);
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
              piVar2 = (int *)((long)local_50 + 0x1c);
              do {
                iVar7 = *piVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                  *piVar2 = -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar7 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar8 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar8;
                local_40 = (undefined8 *)*puVar6;
                FUN_00c44438(lVar8 + 0x8040,&local_40);
              }
            }
            else if (sVar10 == 0) {
LAB_01fb8b54:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x33,"Reference counter underflows.");
            }
          }
          uVar11 = 1;
        }
        (**(code **)(*(long *)(lVar9 + -0x28) + 0x60))();
        return uVar11;
      }
      sVar10 = sVar3;
    } while (sVar3 != 0);
  }
  return 0;
}


