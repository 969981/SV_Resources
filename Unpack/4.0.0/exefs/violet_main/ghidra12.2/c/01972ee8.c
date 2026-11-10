/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01972ee8; name: FUN_01972ee8
 */


void FUN_01972ee8(undefined8 *param_1,long *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  short sVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined1 auVar14 [16];
  undefined1 local_70 [16];
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 local_38;
  
  lVar9 = *param_2;
  if (lVar9 != 0) {
    uVar12 = *param_1;
    if (*(short *)(lVar9 + 0x1a) != 0) {
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
          if (cVar4 != '\0') goto LAB_01972f68;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01972f68:
          bVar5 = false;
        }
        if (bVar5) {
          lVar9 = *(long *)(lVar9 + 0x10);
          if (lVar9 == 0) {
            return;
          }
          plVar13 = (long *)(lVar9 + -0x28);
          auVar14 = FUN_00cbc2e4(plVar13,lVar9 + 0x68);
          uVar8 = FUN_01440498(uVar12,param_2,param_1[1]);
          if ((uVar8 & 1) == 0) {
            *(undefined1 *)param_1[3] = 1;
          }
          else {
            local_60 = (undefined8 *)0x0;
            uStack_58 = 0;
            local_70 = auVar14;
            FUN_00fa4838(&local_60,param_2);
            FUN_01891ab4(param_1[2],local_70);
            puVar6 = local_60;
            if (local_60 != (undefined8 *)0x0) {
              psVar1 = (short *)(local_60 + 3);
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
                piVar2 = (int *)((long)local_60 + 0x1c);
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
                  if ((*PTR_DAT_047d3908 & 1) == 0) {
                    iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908);
                    if (iVar7 != 0) {
                      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                      __cxa_guard_release(PTR_DAT_047d3908);
                    }
                  }
                  lVar10 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar10;
                  local_38 = *puVar6;
                  FUN_00c44438(lVar10 + 0x8040,&local_38);
                }
              }
              else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                           "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                           ,0x33,"Reference counter underflows.");
              }
            }
          }
          lVar9 = *(long *)(lVar9 + 8);
          psVar1 = (short *)(lVar9 + 0x1a);
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
            *(undefined8 *)(lVar9 + 0x10) = 0;
            (**(code **)(*plVar13 + 0x50))(plVar13);
            return;
          }
          if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          return;
        }
        sVar11 = sVar3;
      } while (sVar3 != 0);
    }
  }
  return;
}


