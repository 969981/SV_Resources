/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014004b0; name: FUN_014004b0
 */


undefined8 FUN_014004b0(long *param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  short sVar11;
  undefined8 uVar12;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 *local_40 [2];
  undefined8 local_18;
  
  lVar9 = *param_1;
  if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar9 + 0x1a);
    sVar11 = *(short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar11) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_0140051c;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0140051c:
        bVar5 = false;
      }
      if (bVar5) {
        lVar9 = *(long *)(lVar9 + 0x10);
        if (lVar9 == 0) {
          return 0;
        }
        plVar8 = (long *)FUN_013d70b4(lVar9 + 0xe0,local_40);
        param_1[2] = (long)plVar8;
        if (plVar8 == (long *)0x0) {
          uVar12 = 0;
        }
        else {
          (**(code **)(*plVar8 + 0x18))(local_40);
          local_50 = (undefined8 *)0x0;
          uStack_48 = 0;
          if ((long *)local_40[0][2] == plVar8 + 5) {
            FUN_01fb8cb4(&local_50,local_40);
          }
          puVar6 = local_40[0];
          if (local_40[0] != (undefined8 *)0x0) {
            psVar1 = (short *)(local_40[0] + 3);
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
              piVar2 = (int *)((long)local_40[0] + 0x1c);
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
                lVar10 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar10;
                local_18 = *puVar6;
                FUN_00c44438(lVar10 + 0x8040,&local_18);
              }
            }
            else if (sVar11 == 0) goto LAB_01400608;
          }
          FUN_013dcadc(param_1 + 3,&local_50);
          puVar6 = local_50;
          if (local_50 != (undefined8 *)0x0) {
            psVar1 = (short *)(local_50 + 3);
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
                lVar10 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar10;
                local_40[0] = (undefined8 *)*puVar6;
                FUN_00c44438(lVar10 + 0x8040,local_40);
              }
            }
            else if (sVar11 == 0) {
LAB_01400608:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x33,"Reference counter underflows.");
            }
          }
          uVar12 = 1;
        }
        (**(code **)(*(long *)(lVar9 + -0x28) + 0x60))();
        return uVar12;
      }
      sVar11 = sVar3;
    } while (sVar3 != 0);
  }
  return 0;
}


