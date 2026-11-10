/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c97190; name: FUN_00c97190
 */


uint FUN_00c97190(long param_1,long *param_2,uint param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long *local_48;
  
  if ((param_3 >> 4 & 1) != 0) {
    lVar6 = *(long *)(*(long *)(param_1 + 0x38) + 0x100);
    if (lVar6 == 0) {
      local_48 = (long *)0x0;
    }
    else {
      (**(code **)(*(long *)(lVar6 + 0x30) + 0x20))(&local_48);
      if (local_48 != (long *)0x0) {
        uVar8 = *(undefined8 *)(*param_2 + 200);
        lVar6 = *(long *)(*(long *)(param_1 + 0x38) + 0x100);
        if (lVar6 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = (**(code **)(*(long *)(lVar6 + 0x30) + 0x28))();
        }
        FUN_00c4b998(uVar8,3,uVar5,&local_48);
        if (local_48 != (long *)0x0) {
          plVar1 = local_48 + 5;
          do {
            lVar6 = *plVar1;
            iVar4 = (int)lVar6 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *(int *)plVar1 = iVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar4 == 0) {
            (**(code **)(*local_48 + 0x10))();
          }
          else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
        param_3 = param_3 ^ 0x10;
      }
    }
  }
  if ((param_3 >> 3 & 1) != 0) {
    FUN_00c973e4(*(undefined8 *)(*param_2 + 200),*(undefined4 *)(*(long *)(param_1 + 0x38) + 0x154))
    ;
    param_3 = param_3 ^ 8;
  }
  if ((param_3 & 1) != 0) {
    lVar6 = *(long *)(*(long *)(param_1 + 0x38) + 0x108);
    uVar9 = (*(long *)(*(long *)(param_1 + 0x38) + 0x110) - lVar6 >> 3) * 0x38e38e39;
    lVar7 = *param_2;
    if ((int)uVar9 != 0) {
      uVar12 = uVar9 & 0xffffffff;
      FUN_00c75684(*(undefined8 *)(lVar7 + 200),0,lVar6 + 0x38);
      if ((((uVar12 != 1) &&
           (FUN_00c75684(*(undefined8 *)(lVar7 + 200),1,lVar6 + 0x80), uVar12 != 2)) &&
          (FUN_00c75684(*(undefined8 *)(lVar7 + 200),2,lVar6 + 200), uVar12 != 3)) &&
         ((FUN_00c75684(*(undefined8 *)(lVar7 + 200),3,lVar6 + 0x110), uVar12 != 4 &&
          (FUN_00c75684(*(undefined8 *)(lVar7 + 200),4,lVar6 + 0x158), uVar12 != 5)))) {
        lVar10 = lVar6 + 0x1a0;
        uVar11 = 5;
        do {
          FUN_00c75684(*(undefined8 *)(lVar7 + 200),uVar11 & 0xffffffff,lVar10);
          uVar11 = uVar11 + 1;
          lVar10 = lVar10 + 0x48;
        } while (uVar12 != uVar11);
      }
    }
    if ((param_3 >> 1 & 1) != 0) {
      FUN_00c752dc(lVar7,lVar6,uVar9 & 0xffffffff);
    }
    param_3 = param_3 & 0xfffffffd ^ 1;
  }
  if (((param_3 >> 2 & 1) != 0) &&
     (lVar6 = *(long *)(param_1 + 0x38), *(long *)(lVar6 + 0x148) != 0)) {
    FUN_00c97970(*(undefined8 *)(*param_2 + 200),lVar6 + 0x148,*(undefined4 *)(lVar6 + 0x150));
    param_3 = param_3 ^ 4;
  }
  return param_3;
}


