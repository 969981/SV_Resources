/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ca74b0; name: FUN_00ca74b0
 */


void FUN_00ca74b0(long *param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long local_78;
  long lStack_70;
  long local_68;
  long local_60;
  long *plStack_58;
  
  lVar8 = param_1[1] - *param_1 >> 3;
  uVar9 = lVar8 * -0x71c71c71c71c71c7;
  if (param_2 <= uVar9) {
    if (uVar9 != param_2) {
      plVar12 = (long *)(*param_1 + param_2 * 0x48);
      plVar7 = (long *)param_1[1];
      while (plVar6 = plVar7, plVar12 != plVar6) {
        plVar7 = (long *)plVar6[-2];
        if (plVar7 != (long *)0x0) {
          plVar2 = plVar7 + 5;
          do {
            lVar8 = *plVar2;
            iVar5 = (int)lVar8 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *(int *)plVar2 = iVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 == 0) {
            (**(code **)(*plVar7 + 0x10))();
          }
          else if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
        plVar7 = plVar6 + -9;
        lVar8 = *plVar7;
        if (lVar8 != 0) {
          lVar13 = plVar6[-7];
          plVar2 = (long *)plVar6[-6];
          plVar6[-8] = lVar8;
          uVar9 = (**(code **)(*plVar2 + 0xf8))(plVar2);
          if (((uVar9 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
            (**(code **)(*plVar2 + 0x18))(plVar2,lVar8,lVar13 - lVar8,4);
          }
          else {
            FUN_00c48fe8(plVar2,lVar8,lVar13 - lVar8,4);
          }
        }
      }
      param_1[1] = (long)plVar12;
    }
    return;
  }
  param_2 = param_2 + lVar8 * 0x71c71c71c71c71c7;
  lVar8 = param_1[1];
  if ((ulong)((param_1[2] - lVar8 >> 3) * -0x71c71c71c71c71c7) < param_2) {
    lVar8 = lVar8 - *param_1 >> 3;
    uVar9 = param_1[4];
    if (0x7ffffffffffffffe < uVar9) {
      uVar9 = 0x7fffffffffffffff;
    }
    uVar1 = lVar8 * -0x71c71c71c71c71c7 + param_2;
    if (uVar9 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar13 = param_1[2] - *param_1 >> 3;
    uVar10 = lVar13 * 0x1c71c71c71c71c72;
    if (uVar1 <= uVar10) {
      uVar1 = uVar10;
    }
    plVar7 = param_1 + 3;
    if (uVar9 >> 1 <= (ulong)(lVar13 * -0x71c71c71c71c71c7)) {
      uVar1 = uVar9;
    }
    local_60 = 0;
    plStack_58 = plVar7;
    if (uVar1 == 0) {
      local_78 = 0;
    }
    else {
      local_78 = (**(code **)(*(long *)*plVar7 + 0x10))((long *)*plVar7,uVar1 * 0x48,8);
      if (local_78 == 0) {
        (**(code **)(*(long *)*plVar7 + 0xe8))();
      }
    }
    lVar8 = local_78 + lVar8 * 8;
    local_60 = local_78 + uVar1 * 0x48;
    lStack_70 = lVar8;
    local_68 = lVar8;
    FUN_00ca7834(plVar7,lVar8,param_3);
    if ((param_2 != 1) && (FUN_00ca7834(plVar7,lVar8 + 0x48,param_3), param_2 != 2)) {
      lVar13 = lVar8 + 0x90;
      lVar11 = param_2 * 0x48 + -0x90;
      do {
        FUN_00ca7834(plVar7,lVar13,param_3);
        lVar13 = lVar13 + 0x48;
        lVar11 = lVar11 + -0x48;
      } while (lVar11 != 0);
    }
    local_68 = lVar8 + param_2 * 0x48;
    FUN_00ca93ac(param_1,&local_78);
    FUN_00ca9210(&local_78);
  }
  else {
    lVar13 = lVar8;
    if (param_2 != 0) {
      plVar7 = param_1 + 3;
      lVar13 = lVar8 + param_2 * 0x48;
      FUN_00ca7834(plVar7,lVar8,param_3);
      if ((param_2 != 1) && (FUN_00ca7834(plVar7,lVar8 + 0x48,param_3), param_2 != 2)) {
        lVar8 = lVar8 + 0x90;
        lVar11 = param_2 * 0x48 + -0x90;
        do {
          FUN_00ca7834(plVar7,lVar8,param_3);
          lVar8 = lVar8 + 0x48;
          lVar11 = lVar11 + -0x48;
        } while (lVar11 != 0);
      }
    }
    param_1[1] = lVar13;
  }
  return;
}


