/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02123898; name: FUN_02123898
 */


void FUN_02123898(undefined8 param_1,undefined4 param_2,long param_3)

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
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined *puStack_b8;
  undefined8 local_b0;
  long *local_a8;
  long local_a0;
  long lStack_98;
  long local_90;
  long *local_88;
  
  puVar6 = PTR_s_ObjectBlendColor_047dce20;
  if (0 < *(int *)(param_3 + 0x1b0)) {
    uVar14 = (undefined4)((ulong)param_1 >> 0x20);
    iVar11 = 0;
    do {
      plVar7 = (long *)FUN_00d4fa5c(param_3,iVar11);
      local_a0 = *plVar7;
      lStack_98 = plVar7[1];
      local_90 = plVar7[2];
      local_88 = (long *)plVar7[3];
      if (local_88 != (long *)0x0) {
        (**(code **)(*local_88 + 0x18))();
      }
      if (local_a0 != 0) {
        puVar8 = (undefined8 *)FUN_00cb7028(param_3,&local_a0);
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
          local_c0 = 0xcd754b86c93b29e4;
          puStack_b8 = puVar6;
          local_d0 = (undefined4)param_1;
          local_b0 = 0x1f;
          local_a8 = (long *)0x0;
          plVar13 = (long *)plVar7[0x1a];
          plVar2 = (long *)plVar7[0x1b];
          uStack_cc = uVar14;
          uStack_c4 = param_2;
          if (plVar13 != plVar2) {
            do {
              lVar10 = *plVar13;
              for (lVar12 = *(long *)(lVar10 + 0x70); lVar12 != lVar10 + 0x68;
                  lVar12 = *(long *)(lVar12 + 8)) {
                plVar9 = (long *)(*(long *)(*(long *)(lVar12 + 0x10) + 0x100) + 0x30);
                (**(code **)(*plVar9 + 0x48))(plVar9,&local_c0,&local_d0);
              }
              plVar13 = plVar13 + 1;
            } while (plVar13 != plVar2);
            if (local_a8 != (long *)0x0) {
              (**(code **)(*local_a8 + 0x20))();
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
      if (local_88 != (long *)0x0) {
        (**(code **)(*local_88 + 0x20))();
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < *(int *)(param_3 + 0x1b0));
  }
  return;
}


