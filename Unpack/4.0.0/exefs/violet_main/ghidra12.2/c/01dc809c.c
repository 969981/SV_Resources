/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dc809c; name: FUN_01dc809c
 */


void FUN_01dc809c(long param_1,int param_2,int param_3,undefined4 param_4)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  long *local_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  ushort local_3c [2];
  undefined8 local_38;
  
  lVar9 = FUN_010f26f8();
  if (lVar9 != 0) {
    local_3c[0] = FUN_00e974d8();
    if (local_3c[0] != 0) {
      local_50 = (undefined8 *)0x0;
      uStack_48 = 0;
      FUN_01084328(&local_50,param_1 + 0x1b0);
      FUN_01dc837c(&local_50,local_3c);
      puVar7 = local_50;
      if (local_50 != (undefined8 *)0x0) {
        psVar2 = (short *)(local_50 + 3);
        do {
          sVar4 = *psVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar6) {
            *psVar2 = sVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar4 == 1) {
          piVar3 = (int *)((long)local_50 + 0x1c);
          do {
            iVar8 = *piVar3;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar6) {
              *piVar3 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 != -1) {
            if ((*PTR_DAT_047d3908 & 1) == 0) {
              iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908);
              if (iVar8 != 0) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
            }
            lVar9 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar9;
            local_38 = *puVar7;
            FUN_00c44438(lVar9 + 0x8040,&local_38);
          }
        }
        else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
    }
    if (param_2 == 0) {
      uVar10 = *(undefined8 *)(param_1 + 0x38);
      plVar12 = *(long **)(param_1 + 0x48);
      local_58 = plVar12;
      if (plVar12 == (long *)0x0) {
        FUN_0152ed18(uVar10,param_3,param_4,&local_58);
      }
      else {
        plVar1 = plVar12 + 5;
        do {
          lVar9 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *(int *)plVar1 = (int)lVar9 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((int)lVar9 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
        FUN_0152ed18(uVar10,param_3,param_4,&local_58);
        if (plVar12 != (long *)0x0) {
          plVar1 = plVar12 + 5;
          do {
            lVar9 = *plVar1;
            iVar8 = (int)lVar9 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *(int *)plVar1 = iVar8;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
          else if ((int)lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
      }
      uVar10 = *(undefined8 *)(param_1 + 0x40);
      uVar11 = FUN_01dc00f4(uVar10,param_3,param_4);
      if ((uVar11 & 1) != 0) {
        FUN_01dc6af4(uVar10,param_3,param_4);
        FUN_01dc6c18(*(undefined8 *)(param_1 + 0x40),0);
        FUN_01dc6c18(*(undefined8 *)(param_1 + 0x40),1);
        FUN_01dc6c18(*(undefined8 *)(param_1 + 0x40),2);
        FUN_01dc6c18(*(undefined8 *)(param_1 + 0x40),3);
        FUN_01dc6c18(*(undefined8 *)(param_1 + 0x40),4);
        FUN_01dc6c18(*(undefined8 *)(param_1 + 0x40),5);
      }
    }
    else if (param_3 == 0) {
      (**(code **)(**(long **)(param_1 + 0x30) + 0x48))(*(long **)(param_1 + 0x30),param_4);
    }
    else {
      FUN_01dc8488(*(undefined8 *)(param_1 + 0x40),param_3 + -1,param_4);
    }
  }
  return;
}


