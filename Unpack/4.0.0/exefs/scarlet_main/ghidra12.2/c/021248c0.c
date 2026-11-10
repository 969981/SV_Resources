/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021248c0; name: FUN_021248c0
 */


void FUN_021248c0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,long param_6)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  undefined4 uVar14;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  long *local_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long *local_90;
  undefined4 local_84;
  undefined4 local_78;
  undefined4 uStack_74;
  
  puVar6 = PTR_s_OverrideRimWeight_047dce28;
  if (0 < *(int *)(param_6 + 0x1b0)) {
    uVar14 = (undefined4)((ulong)param_1 >> 0x20);
    iVar11 = 0;
    local_84 = param_5;
    local_78 = param_4;
    uStack_74 = param_3;
    do {
      plVar7 = (long *)FUN_00d4fa5c(param_6,iVar11);
      local_a8 = *plVar7;
      lStack_a0 = plVar7[1];
      local_98 = plVar7[2];
      local_90 = (long *)plVar7[3];
      if (local_90 != (long *)0x0) {
        (**(code **)(*local_90 + 0x18))();
      }
      if (local_a8 != 0) {
        puVar8 = (undefined8 *)FUN_00cb7028(param_6,&local_a8);
        plVar7 = (long *)*puVar8;
        if (plVar7 != (long *)0x0) {
          plVar1 = plVar7 + 5;
          do {
            lVar10 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *(int *)plVar1 = (int)lVar10 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((int)lVar10 == -1) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","IncrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                       ,0x53,"Reference counter overflows.");
          }
          local_c8 = 0x1eb774d1eef8fbe2;
          local_b0 = (long *)0x0;
          local_c0 = PTR_s_OverrideRimColor_047dce30;
          local_b8 = 0x1f;
          local_d8 = (undefined4)param_1;
          plVar13 = (long *)plVar7[0x1a];
          plVar2 = (long *)plVar7[0x1b];
          uStack_d4 = uVar14;
          uStack_cc = param_2;
          if (plVar13 != plVar2) {
            do {
              lVar10 = *plVar13;
              for (lVar12 = *(long *)(lVar10 + 0x70); lVar12 != lVar10 + 0x68;
                  lVar12 = *(long *)(lVar12 + 8)) {
                plVar9 = (long *)(*(long *)(*(long *)(lVar12 + 0x10) + 0x100) + 0x30);
                (**(code **)(*plVar9 + 0x48))(plVar9,&local_c8,&local_d8);
              }
              plVar13 = plVar13 + 1;
            } while (plVar13 != plVar2);
            if (local_b0 != (long *)0x0) {
              (**(code **)(*local_b0 + 0x20))();
            }
          }
          local_c8 = 0xc48fa98e41e54f54;
          local_c0 = PTR_s_OverrideRimPower_047dce38;
          local_b8 = 0x1f;
          local_b0 = (long *)0x0;
          plVar13 = (long *)plVar7[0x1a];
          plVar2 = (long *)plVar7[0x1b];
          if (plVar13 != plVar2) {
            do {
              lVar10 = *plVar13;
              for (lVar12 = *(long *)(lVar10 + 0x70); lVar12 != lVar10 + 0x68;
                  lVar12 = *(long *)(lVar12 + 8)) {
                plVar9 = (long *)(*(long *)(*(long *)(lVar12 + 0x10) + 0x100) + 0x30);
                (**(code **)(*plVar9 + 0x38))(plVar9,&local_c8,&uStack_74);
              }
              plVar13 = plVar13 + 1;
            } while (plVar13 != plVar2);
            if (local_b0 != (long *)0x0) {
              (**(code **)(*local_b0 + 0x20))();
            }
          }
          local_c8 = 0xe808e7d9bfa5f320;
          local_c0 = PTR_s_OverrideRimIntensity_047dce40;
          local_b8 = 0x1f;
          local_b0 = (long *)0x0;
          plVar13 = (long *)plVar7[0x1a];
          plVar2 = (long *)plVar7[0x1b];
          if (plVar13 != plVar2) {
            do {
              lVar10 = *plVar13;
              for (lVar12 = *(long *)(lVar10 + 0x70); lVar12 != lVar10 + 0x68;
                  lVar12 = *(long *)(lVar12 + 8)) {
                plVar9 = (long *)(*(long *)(*(long *)(lVar12 + 0x10) + 0x100) + 0x30);
                (**(code **)(*plVar9 + 0x38))(plVar9,&local_c8,&local_78);
              }
              plVar13 = plVar13 + 1;
            } while (plVar13 != plVar2);
            if (local_b0 != (long *)0x0) {
              (**(code **)(*local_b0 + 0x20))();
            }
          }
          local_c8 = 0x13186c8477804a3f;
          local_c0 = puVar6;
          local_b8 = 0x1f;
          local_b0 = (long *)0x0;
          plVar13 = (long *)plVar7[0x1a];
          plVar2 = (long *)plVar7[0x1b];
          if (plVar13 != plVar2) {
            do {
              lVar10 = *plVar13;
              for (lVar12 = *(long *)(lVar10 + 0x70); lVar12 != lVar10 + 0x68;
                  lVar12 = *(long *)(lVar12 + 8)) {
                plVar9 = (long *)(*(long *)(*(long *)(lVar12 + 0x10) + 0x100) + 0x30);
                (**(code **)(*plVar9 + 0x38))(plVar9,&local_c8,&local_84);
              }
              plVar13 = plVar13 + 1;
            } while (plVar13 != plVar2);
            if (local_b0 != (long *)0x0) {
              (**(code **)(*local_b0 + 0x20))();
            }
          }
          do {
            lVar10 = *plVar1;
            iVar5 = (int)lVar10 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *(int *)plVar1 = iVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
          else if ((int)lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
      }
      if (local_90 != (long *)0x0) {
        (**(code **)(*local_90 + 0x20))();
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < *(int *)(param_6 + 0x1b0));
  }
  return;
}


