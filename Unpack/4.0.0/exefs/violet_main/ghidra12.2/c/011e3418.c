/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011e3418; name: FUN_011e3418
 */


void FUN_011e3418(long *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  int iVar12;
  long *plVar13;
  long *local_88;
  long *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  uStack_70 = *(undefined8 *)(param_2 + 8);
  local_58 = 0;
  local_88 = (long *)0x0;
  local_80 = (long *)0x0;
  local_78 = 0;
  local_68 = 0x1fffffffffffffff;
  uStack_60 = 0;
  plVar11 = *(long **)(param_2 + 0x30);
  plVar3 = *(long **)(param_2 + 0x38);
  if (plVar11 != plVar3) {
    iVar12 = -0x80000000;
    do {
      plVar7 = local_88;
      if ((*(int *)(*plVar11 + 0x2c) != 1) && (iVar4 = *(int *)(*plVar11 + 0x30), iVar12 <= iVar4))
      {
        if (iVar12 < iVar4) {
          plVar13 = local_80;
          while (plVar13 != plVar7) {
            plVar13 = plVar13 + -1;
            plVar8 = (long *)*plVar13;
            if (plVar8 != (long *)0x0) {
              plVar1 = plVar8 + 5;
              do {
                lVar10 = *plVar1;
                iVar12 = (int)lVar10 + -1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar6) {
                  *(int *)plVar1 = iVar12;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar12 == 0) {
                (**(code **)(*plVar8 + 0x10))();
              }
              else if ((int)lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint32_t>::max()",
                           "DecrementReferenceInternal",
                           "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                           ,0x58,"Reference counter underflows.");
              }
            }
          }
          local_80 = plVar7;
          iVar12 = iVar4;
        }
        FUN_011e2fb8(&local_88,plVar11);
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar3);
  }
  lVar10 = (long)local_80 - (long)local_88 >> 3;
  if (lVar10 == 1) {
    lVar10 = *local_88;
    *param_1 = lVar10;
    if (lVar10 == 0) goto LAB_011e3520;
    piVar2 = (int *)(lVar10 + 0x28);
    do {
      iVar12 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar12 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  else {
    if (lVar10 == 0) {
      *param_1 = 0;
      goto LAB_011e3520;
    }
    uVar9 = FUN_012440f0(param_3);
    if ((ulong)((long)local_80 - (long)local_88 >> 3) <= uVar9) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    lVar10 = local_88[uVar9];
    *param_1 = lVar10;
    if (lVar10 == 0) goto LAB_011e3520;
    piVar2 = (int *)(lVar10 + 0x28);
    do {
      iVar12 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar12 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (iVar12 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","IncrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
               ,0x53,"Reference counter overflows.");
  }
LAB_011e3520:
  FUN_011e35f4(&local_88);
  return;
}


