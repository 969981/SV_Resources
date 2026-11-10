/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b32a68; name: FUN_01b32a68
 */


void FUN_01b32a68(byte *param_1,code *param_2,ulong param_3,undefined4 *param_4,undefined8 *param_5,
                 undefined4 *param_6)

{
  short *psVar1;
  undefined4 uVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  short sVar10;
  long *plVar11;
  undefined8 local_28;
  
  if (3 < *param_1) {
    return;
  }
  lVar7 = (long)param_3 >> 1;
  switch(*param_1) {
  case 0:
    if (*(long *)(param_1 + 8) != 0) {
      plVar11 = (long *)(*(long *)(param_1 + 8) + lVar7);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar11);
      }
      plVar9 = (long *)*param_5;
      uVar2 = *param_4;
      *param_5 = 0;
      (*param_2)(plVar11,uVar2,(long)register0x00000008 + -0x18,*param_6);
      if (plVar9 != (long *)0x0) {
        plVar11 = plVar9 + 5;
        do {
          lVar7 = *plVar11;
          iVar6 = (int)lVar7 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar5) {
            *(int *)plVar11 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar9 + 0x10))();
        }
        else if ((int)lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
    }
    return;
  case 1:
    if (*(long *)(param_1 + 8) != 0) {
      plVar11 = (long *)(*(long *)(param_1 + 8) + lVar7);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar11);
      }
      plVar9 = (long *)*param_5;
      uVar2 = *param_4;
      *param_5 = 0;
      (*param_2)(plVar11,uVar2,(long)register0x00000008 + -0x18,*param_6);
      if (plVar9 != (long *)0x0) {
        plVar11 = plVar9 + 5;
        do {
          lVar7 = *plVar11;
          iVar6 = (int)lVar7 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar5) {
            *(int *)plVar11 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar9 + 0x10))();
        }
        else if ((int)lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
    }
    return;
  case 2:
    if ((*(long *)(param_1 + 8) != 0) &&
       (lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar8 != 0)) {
      plVar11 = (long *)(lVar8 + lVar7 + -0x28);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar11);
      }
      plVar9 = (long *)*param_5;
      uVar2 = *param_4;
      *param_5 = 0;
      (*param_2)(plVar11,uVar2,(long)register0x00000008 + -0x18,*param_6);
      if (plVar9 != (long *)0x0) {
        plVar11 = plVar9 + 5;
        do {
          lVar7 = *plVar11;
          iVar6 = (int)lVar7 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar5) {
            *(int *)plVar11 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar9 + 0x10))();
        }
        else if ((int)lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
    }
    return;
  }
  lVar7 = *(long *)(param_1 + 8);
  if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar7 + 0x1a);
    sVar10 = *(short *)(lVar7 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar10) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01b32d14;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01b32d14:
        bVar5 = false;
      }
      if (bVar5) {
        if (*(long *)(lVar7 + 0x10) != 0) {
          plVar11 = (long *)*param_5;
          uVar2 = *param_4;
          *param_5 = 0;
          local_28 = plVar11;
          FUN_01b32dc4((long)register0x00000008 + -8,param_2,param_3,uVar2,&local_28,*param_6);
          if (plVar11 != (long *)0x0) {
            plVar9 = plVar11 + 5;
            do {
              lVar7 = *plVar9;
              iVar6 = (int)lVar7 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *(int *)plVar9 = iVar6;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar6 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
            }
            else if ((int)lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint32_t>::max()",
                         "DecrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                         ,0x58,"Reference counter underflows.");
            }
          }
        }
        break;
      }
      sVar10 = sVar3;
    } while (sVar3 != 0);
  }
  FUN_01b326bc((long)register0x00000008 + -8);
  return;
}


